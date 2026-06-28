#pragma once
#include <Windows.h>

#pragma comment(linker, "/EXPORT:AcquireDDThreadLock=_AheadLib_AcquireDDThreadLock,@1")
#pragma comment(linker, "/EXPORT:CompleteCreateSysmemSurface=_AheadLib_CompleteCreateSysmemSurface,@2")
#pragma comment(linker, "/EXPORT:D3DParseUnknownCommand=_AheadLib_D3DParseUnknownCommand,@3")
#pragma comment(linker, "/EXPORT:DDGetAttachedSurfaceLcl=_AheadLib_DDGetAttachedSurfaceLcl,@4")
#pragma comment(linker, "/EXPORT:DDInternalLock=_AheadLib_DDInternalLock,@5")
#pragma comment(linker, "/EXPORT:DDInternalUnlock=_AheadLib_DDInternalUnlock,@6")
#pragma comment(linker, "/EXPORT:DSoundHelp=_AheadLib_DSoundHelp,@7")
#pragma comment(linker, "/EXPORT:DirectDrawCreate=_AheadLib_DirectDrawCreate,@8")
#pragma comment(linker, "/EXPORT:DirectDrawCreateClipper=_AheadLib_DirectDrawCreateClipper,@9")
#pragma comment(linker, "/EXPORT:DirectDrawCreateEx=_AheadLib_DirectDrawCreateEx,@10")
#pragma comment(linker, "/EXPORT:DirectDrawEnumerateA=_AheadLib_DirectDrawEnumerateA,@11")
#pragma comment(linker, "/EXPORT:DirectDrawEnumerateExA=_AheadLib_DirectDrawEnumerateExA,@12")
#pragma comment(linker, "/EXPORT:DirectDrawEnumerateExW=_AheadLib_DirectDrawEnumerateExW,@13")
#pragma comment(linker, "/EXPORT:DirectDrawEnumerateW=_AheadLib_DirectDrawEnumerateW,@14")
#pragma comment(linker, "/EXPORT:DllCanUnloadNow=_AheadLib_DllCanUnloadNow,@15")
#pragma comment(linker, "/EXPORT:DllGetClassObject=_AheadLib_DllGetClassObject,@16")
#pragma comment(linker, "/EXPORT:GetDDSurfaceLocal=_AheadLib_GetDDSurfaceLocal,@17")
#pragma comment(linker, "/EXPORT:GetOLEThunkData=_AheadLib_GetOLEThunkData,@18")
#pragma comment(linker, "/EXPORT:GetSurfaceFromDC=_AheadLib_GetSurfaceFromDC,@19")
#pragma comment(linker, "/EXPORT:RegisterSpecialCase=_AheadLib_RegisterSpecialCase,@20")
#pragma comment(linker, "/EXPORT:ReleaseDDThreadLock=_AheadLib_ReleaseDDThreadLock,@21")
#pragma comment(linker, "/EXPORT:SetAppCompatData=_AheadLib_SetAppCompatData,@22")

PVOID pfnAheadLib_AcquireDDThreadLock;
PVOID pfnAheadLib_CompleteCreateSysmemSurface;
PVOID pfnAheadLib_D3DParseUnknownCommand;
PVOID pfnAheadLib_DDGetAttachedSurfaceLcl;
PVOID pfnAheadLib_DDInternalLock;
PVOID pfnAheadLib_DDInternalUnlock;
PVOID pfnAheadLib_DSoundHelp;
PVOID pfnAheadLib_DirectDrawCreate;
PVOID pfnAheadLib_DirectDrawCreateClipper;
PVOID pfnAheadLib_DirectDrawCreateEx;
PVOID pfnAheadLib_DirectDrawEnumerateA;
PVOID pfnAheadLib_DirectDrawEnumerateExA;
PVOID pfnAheadLib_DirectDrawEnumerateExW;
PVOID pfnAheadLib_DirectDrawEnumerateW;
PVOID pfnAheadLib_DllCanUnloadNow;
PVOID pfnAheadLib_DllGetClassObject;
PVOID pfnAheadLib_GetDDSurfaceLocal;
PVOID pfnAheadLib_GetOLEThunkData;
PVOID pfnAheadLib_GetSurfaceFromDC;
PVOID pfnAheadLib_RegisterSpecialCase;
PVOID pfnAheadLib_ReleaseDDThreadLock;
PVOID pfnAheadLib_SetAppCompatData;

HMODULE g_hmRealDll = NULL;

VOID WINAPI FreeProxyDll()
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
	lstrcatW(folder, L"\\ddraw.dll");

	g_hmRealDll = LoadLibraryW(folder);

	if (g_hmRealDll == NULL)
	{
		MessageBoxW(NULL, L"Load Real Dll Failed!", L"Proxy Dll", MB_OK);
		ExitProcess(0);
		return;
	}

	pfnAheadLib_AcquireDDThreadLock = GetAddress("AcquireDDThreadLock");
	pfnAheadLib_CompleteCreateSysmemSurface = GetAddress("CompleteCreateSysmemSurface");
	pfnAheadLib_D3DParseUnknownCommand = GetAddress("D3DParseUnknownCommand");
	pfnAheadLib_DDGetAttachedSurfaceLcl = GetAddress("DDGetAttachedSurfaceLcl");
	pfnAheadLib_DDInternalLock = GetAddress("DDInternalLock");
	pfnAheadLib_DDInternalUnlock = GetAddress("DDInternalUnlock");
	pfnAheadLib_DSoundHelp = GetAddress("DSoundHelp");
	pfnAheadLib_DirectDrawCreate = GetAddress("DirectDrawCreate");
	pfnAheadLib_DirectDrawCreateClipper = GetAddress("DirectDrawCreateClipper");
	pfnAheadLib_DirectDrawCreateEx = GetAddress("DirectDrawCreateEx");
	pfnAheadLib_DirectDrawEnumerateA = GetAddress("DirectDrawEnumerateA");
	pfnAheadLib_DirectDrawEnumerateExA = GetAddress("DirectDrawEnumerateExA");
	pfnAheadLib_DirectDrawEnumerateExW = GetAddress("DirectDrawEnumerateExW");
	pfnAheadLib_DirectDrawEnumerateW = GetAddress("DirectDrawEnumerateW");
	pfnAheadLib_DllCanUnloadNow = GetAddress("DllCanUnloadNow");
	pfnAheadLib_DllGetClassObject = GetAddress("DllGetClassObject");
	pfnAheadLib_GetDDSurfaceLocal = GetAddress("GetDDSurfaceLocal");
	pfnAheadLib_GetOLEThunkData = GetAddress("GetOLEThunkData");
	pfnAheadLib_GetSurfaceFromDC = GetAddress("GetSurfaceFromDC");
	pfnAheadLib_RegisterSpecialCase = GetAddress("RegisterSpecialCase");
	pfnAheadLib_ReleaseDDThreadLock = GetAddress("ReleaseDDThreadLock");
	pfnAheadLib_SetAppCompatData = GetAddress("SetAppCompatData");
}

extern "C" __declspec(naked) void __cdecl AheadLib_AcquireDDThreadLock(void)
{
	__asm jmp pfnAheadLib_AcquireDDThreadLock;
}

extern "C" __declspec(naked) void __cdecl AheadLib_CompleteCreateSysmemSurface(void)
{
	__asm jmp pfnAheadLib_CompleteCreateSysmemSurface;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DParseUnknownCommand(void)
{
	__asm jmp pfnAheadLib_D3DParseUnknownCommand;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DDGetAttachedSurfaceLcl(void)
{
	__asm jmp pfnAheadLib_DDGetAttachedSurfaceLcl;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DDInternalLock(void)
{
	__asm jmp pfnAheadLib_DDInternalLock;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DDInternalUnlock(void)
{
	__asm jmp pfnAheadLib_DDInternalUnlock;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DSoundHelp(void)
{
	__asm jmp pfnAheadLib_DSoundHelp;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DirectDrawCreate(void)
{
	__asm jmp pfnAheadLib_DirectDrawCreate;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DirectDrawCreateClipper(void)
{
	__asm jmp pfnAheadLib_DirectDrawCreateClipper;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DirectDrawCreateEx(void)
{
	__asm jmp pfnAheadLib_DirectDrawCreateEx;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DirectDrawEnumerateA(void)
{
	__asm jmp pfnAheadLib_DirectDrawEnumerateA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DirectDrawEnumerateExA(void)
{
	__asm jmp pfnAheadLib_DirectDrawEnumerateExA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DirectDrawEnumerateExW(void)
{
	__asm jmp pfnAheadLib_DirectDrawEnumerateExW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DirectDrawEnumerateW(void)
{
	__asm jmp pfnAheadLib_DirectDrawEnumerateW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DllCanUnloadNow(void)
{
	__asm jmp pfnAheadLib_DllCanUnloadNow;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DllGetClassObject(void)
{
	__asm jmp pfnAheadLib_DllGetClassObject;
}

extern "C" __declspec(naked) void __cdecl AheadLib_GetDDSurfaceLocal(void)
{
	__asm jmp pfnAheadLib_GetDDSurfaceLocal;
}

extern "C" __declspec(naked) void __cdecl AheadLib_GetOLEThunkData(void)
{
	__asm jmp pfnAheadLib_GetOLEThunkData;
}

extern "C" __declspec(naked) void __cdecl AheadLib_GetSurfaceFromDC(void)
{
	__asm jmp pfnAheadLib_GetSurfaceFromDC;
}

extern "C" __declspec(naked) void __cdecl AheadLib_RegisterSpecialCase(void)
{
	__asm jmp pfnAheadLib_RegisterSpecialCase;
}

extern "C" __declspec(naked) void __cdecl AheadLib_ReleaseDDThreadLock(void)
{
	__asm jmp pfnAheadLib_ReleaseDDThreadLock;
}

extern "C" __declspec(naked) void __cdecl AheadLib_SetAppCompatData(void)
{
	__asm jmp pfnAheadLib_SetAppCompatData;
}
