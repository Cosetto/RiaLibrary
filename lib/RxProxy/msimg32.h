#pragma once
#include <Windows.h>

#pragma comment(linker, "/EXPORT:vSetDdrawflag=_AheadLib_vSetDdrawflag,@1")
#pragma comment(linker, "/EXPORT:AlphaBlend=_AheadLib_AlphaBlend,@2")
#pragma comment(linker, "/EXPORT:DllInitialize=_AheadLib_DllInitialize,@3")
#pragma comment(linker, "/EXPORT:GradientFill=_AheadLib_GradientFill,@4")
#pragma comment(linker, "/EXPORT:TransparentBlt=_AheadLib_TransparentBlt,@5")

PVOID pfnAheadLib_vSetDdrawflag;
PVOID pfnAheadLib_AlphaBlend;
PVOID pfnAheadLib_DllInitialize;
PVOID pfnAheadLib_GradientFill;
PVOID pfnAheadLib_TransparentBlt;


HMODULE g_hmRealDll = NULL;

VOID WINAPI FreeLibrary()
{
	if (g_hmRealDll)
	{
		FreeLibrary(g_hmRealDll);
	}
}

FARPROC GetAddress(PCSTR pszProcName)
{
	return GetProcAddress(g_hmRealDll, pszProcName);
}

VOID ProxyDll()
{
	WCHAR folder[MAX_PATH];
	GetSystemDirectoryW(folder, MAX_PATH);
	lstrcatW(folder, L"\\msimg32.dll");

	g_hmRealDll = LoadLibraryW(folder);
	if (g_hmRealDll == NULL)
	{
		MessageBoxW(NULL, L"Load Real Dll Failed!", L"Proxy Dll", MB_OK);
		ExitProcess(0);
		return;
	}

	pfnAheadLib_vSetDdrawflag = GetAddress("vSetDdrawflag");
	pfnAheadLib_AlphaBlend = GetAddress("AlphaBlend");
	pfnAheadLib_DllInitialize = GetAddress("DllInitialize");
	pfnAheadLib_GradientFill = GetAddress("GradientFill");
	pfnAheadLib_TransparentBlt = GetAddress("TransparentBlt");

}

extern "C" __declspec(naked) void __cdecl AheadLib_vSetDdrawflag(void)
{
	__asm jmp pfnAheadLib_vSetDdrawflag;
}

extern "C" __declspec(naked) void __cdecl AheadLib_AlphaBlend(void)
{
	__asm jmp pfnAheadLib_AlphaBlend;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DllInitialize(void)
{
	__asm jmp pfnAheadLib_DllInitialize;
}

extern "C" __declspec(naked) void __cdecl AheadLib_GradientFill(void)
{
	__asm jmp pfnAheadLib_GradientFill;
}

extern "C" __declspec(naked) void __cdecl AheadLib_TransparentBlt(void)
{
	__asm jmp pfnAheadLib_TransparentBlt;
}
