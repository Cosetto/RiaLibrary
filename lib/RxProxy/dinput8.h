#pragma once
#include <Windows.h>

#pragma comment(linker, "/EXPORT:DirectInput8Create=_AheadLib_DirectInput8Create,@1")
#pragma comment(linker, "/EXPORT:DllCanUnloadNow=_AheadLib_DllCanUnloadNow,@2")
#pragma comment(linker, "/EXPORT:DllGetClassObject=_AheadLib_DllGetClassObject,@3")
#pragma comment(linker, "/EXPORT:DllRegisterServer=_AheadLib_DllRegisterServer,@4")
#pragma comment(linker, "/EXPORT:DllUnregisterServer=_AheadLib_DllUnregisterServer,@5")
#pragma comment(linker, "/EXPORT:GetdfDIJoystick=_AheadLib_GetdfDIJoystick,@6")


PVOID pfnAheadLib_DirectInput8Create;
PVOID pfnAheadLib_DllCanUnloadNow;
PVOID pfnAheadLib_DllGetClassObject;
PVOID pfnAheadLib_DllRegisterServer;
PVOID pfnAheadLib_DllUnregisterServer;
PVOID pfnAheadLib_GetdfDIJoystick;


HMODULE g_hmRealDll = NULL;

FARPROC GetAddress(PCSTR pszProcName)
{
	FARPROC pFunc = GetProcAddress(g_hmRealDll, pszProcName);
	if (pFunc != NULL) return pFunc;

	MessageBoxW(NULL, L"GetProcAddress Failed!", L"Proxy Dll", MB_OK);
	ExitProcess(0);

	return NULL;
}

VOID ProxyDll()
{
	WCHAR folder[MAX_PATH];
	GetSystemDirectoryW(folder, MAX_PATH);
	lstrcatW(folder, L"\\dinput8.dll");

	g_hmRealDll = LoadLibraryW(folder);

	if (g_hmRealDll == NULL)
	{
		MessageBoxW(NULL, L"Load Real Dll Failed!", L"Proxy Dll", MB_OK);
		ExitProcess(0);
		return;
	}

	pfnAheadLib_DirectInput8Create = GetAddress("DirectInput8Create");
	pfnAheadLib_DllCanUnloadNow = GetAddress("DllCanUnloadNow");
	pfnAheadLib_DllGetClassObject = GetAddress("DllGetClassObject");
	pfnAheadLib_DllRegisterServer = GetAddress("DllRegisterServer");
	pfnAheadLib_DllUnregisterServer = GetAddress("DllUnregisterServer");
	pfnAheadLib_GetdfDIJoystick = GetAddress("GetdfDIJoystick");

}

extern "C" __declspec(naked) void __cdecl AheadLib_DirectInput8Create(void)
{
	__asm jmp pfnAheadLib_DirectInput8Create;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DllCanUnloadNow(void)
{
	__asm jmp pfnAheadLib_DllCanUnloadNow;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DllGetClassObject(void)
{
	__asm jmp pfnAheadLib_DllGetClassObject;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DllRegisterServer(void)
{
	__asm jmp pfnAheadLib_DllRegisterServer;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DllUnregisterServer(void)
{
	__asm jmp pfnAheadLib_DllUnregisterServer;
}

extern "C" __declspec(naked) void __cdecl AheadLib_GetdfDIJoystick(void)
{
	__asm jmp pfnAheadLib_GetdfDIJoystick;
}