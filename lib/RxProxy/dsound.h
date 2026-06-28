#pragma once
#include <Windows.h>

#pragma comment(linker, "/EXPORT:DirectSoundCreate=_AheadLib_DirectSoundCreate,@1")
#pragma comment(linker, "/EXPORT:DirectSoundEnumerateA=_AheadLib_DirectSoundEnumerateA,@2")
#pragma comment(linker, "/EXPORT:DirectSoundEnumerateW=_AheadLib_DirectSoundEnumerateW,@3")
#pragma comment(linker, "/EXPORT:DllCanUnloadNow=_AheadLib_DllCanUnloadNow,@4")
#pragma comment(linker, "/EXPORT:DllGetClassObject=_AheadLib_DllGetClassObject,@5")
#pragma comment(linker, "/EXPORT:DirectSoundCaptureCreate=_AheadLib_DirectSoundCaptureCreate,@6")
#pragma comment(linker, "/EXPORT:DirectSoundCaptureEnumerateA=_AheadLib_DirectSoundCaptureEnumerateA,@7")
#pragma comment(linker, "/EXPORT:DirectSoundCaptureEnumerateW=_AheadLib_DirectSoundCaptureEnumerateW,@8")
#pragma comment(linker, "/EXPORT:GetDeviceID=_AheadLib_GetDeviceID,@9")
#pragma comment(linker, "/EXPORT:DirectSoundFullDuplexCreate=_AheadLib_DirectSoundFullDuplexCreate,@10")
#pragma comment(linker, "/EXPORT:DirectSoundCreate8=_AheadLib_DirectSoundCreate8,@11")
#pragma comment(linker, "/EXPORT:DirectSoundCaptureCreate8=_AheadLib_DirectSoundCaptureCreate8,@12")

PVOID pfnAheadLib_DirectSoundCreate;
PVOID pfnAheadLib_DirectSoundEnumerateA;
PVOID pfnAheadLib_DirectSoundEnumerateW;
PVOID pfnAheadLib_DllCanUnloadNow;
PVOID pfnAheadLib_DllGetClassObject;
PVOID pfnAheadLib_DirectSoundCaptureCreate;
PVOID pfnAheadLib_DirectSoundCaptureEnumerateA;
PVOID pfnAheadLib_DirectSoundCaptureEnumerateW;
PVOID pfnAheadLib_GetDeviceID;
PVOID pfnAheadLib_DirectSoundFullDuplexCreate;
PVOID pfnAheadLib_DirectSoundCreate8;
PVOID pfnAheadLib_DirectSoundCaptureCreate8;


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
	lstrcatW(folder, L"\\dsound.dll");

	g_hmRealDll = LoadLibraryW(folder);
	if (g_hmRealDll == NULL)
	{
		MessageBoxW(NULL, L"Load Real Dll Failed!", L"Proxy Dll", MB_OK);
		ExitProcess(0);
		return;
	}

	pfnAheadLib_DirectSoundCreate = GetAddress("DirectSoundCreate");
	pfnAheadLib_DirectSoundEnumerateA = GetAddress("DirectSoundEnumerateA");
	pfnAheadLib_DirectSoundEnumerateW = GetAddress("DirectSoundEnumerateW");
	pfnAheadLib_DllCanUnloadNow = GetAddress("DllCanUnloadNow");
	pfnAheadLib_DllGetClassObject = GetAddress("DllGetClassObject");
	pfnAheadLib_DirectSoundCaptureCreate = GetAddress("DirectSoundCaptureCreate");
	pfnAheadLib_DirectSoundCaptureEnumerateA = GetAddress("DirectSoundCaptureEnumerateA");
	pfnAheadLib_DirectSoundCaptureEnumerateW = GetAddress("DirectSoundCaptureEnumerateW");
	pfnAheadLib_GetDeviceID = GetAddress("GetDeviceID");
	pfnAheadLib_DirectSoundFullDuplexCreate = GetAddress("DirectSoundFullDuplexCreate");
	pfnAheadLib_DirectSoundCreate8 = GetAddress("DirectSoundCreate8");
	pfnAheadLib_DirectSoundCaptureCreate8 = GetAddress("DirectSoundCaptureCreate8");

}

extern "C" __declspec(naked) void __cdecl AheadLib_DirectSoundCreate(void)
{
	__asm jmp pfnAheadLib_DirectSoundCreate;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DirectSoundEnumerateA(void)
{
	__asm jmp pfnAheadLib_DirectSoundEnumerateA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DirectSoundEnumerateW(void)
{
	__asm jmp pfnAheadLib_DirectSoundEnumerateW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DllCanUnloadNow(void)
{
	__asm jmp pfnAheadLib_DllCanUnloadNow;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DllGetClassObject(void)
{
	__asm jmp pfnAheadLib_DllGetClassObject;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DirectSoundCaptureCreate(void)
{
	__asm jmp pfnAheadLib_DirectSoundCaptureCreate;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DirectSoundCaptureEnumerateA(void)
{
	__asm jmp pfnAheadLib_DirectSoundCaptureEnumerateA;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DirectSoundCaptureEnumerateW(void)
{
	__asm jmp pfnAheadLib_DirectSoundCaptureEnumerateW;
}

extern "C" __declspec(naked) void __cdecl AheadLib_GetDeviceID(void)
{
	__asm jmp pfnAheadLib_GetDeviceID;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DirectSoundFullDuplexCreate(void)
{
	__asm jmp pfnAheadLib_DirectSoundFullDuplexCreate;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DirectSoundCreate8(void)
{
	__asm jmp pfnAheadLib_DirectSoundCreate8;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DirectSoundCaptureCreate8(void)
{
	__asm jmp pfnAheadLib_DirectSoundCaptureCreate8;
}

