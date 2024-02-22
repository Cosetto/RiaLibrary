#pragma once
#include <Windows.h>

#pragma comment(linker, "/EXPORT:D3DPERF_BeginEvent=_AheadLib_D3DPERF_BeginEvent,@1")
#pragma comment(linker, "/EXPORT:D3DPERF_EndEvent=_AheadLib_D3DPERF_EndEvent,@2")
#pragma comment(linker, "/EXPORT:D3DPERF_GetStatus=_AheadLib_D3DPERF_GetStatus,@3")
#pragma comment(linker, "/EXPORT:D3DPERF_QueryRepeatFrame=_AheadLib_D3DPERF_QueryRepeatFrame,@4")
#pragma comment(linker, "/EXPORT:D3DPERF_SetMarker=_AheadLib_D3DPERF_SetMarker,@5")
#pragma comment(linker, "/EXPORT:D3DPERF_SetOptions=_AheadLib_D3DPERF_SetOptions,@6")
#pragma comment(linker, "/EXPORT:D3DPERF_SetRegion=_AheadLib_D3DPERF_SetRegion,@7")
#pragma comment(linker, "/EXPORT:DebugSetLevel=_AheadLib_DebugSetLevel,@8")
#pragma comment(linker, "/EXPORT:DebugSetMute=_AheadLib_DebugSetMute,@9")
#pragma comment(linker, "/EXPORT:Direct3D9EnableMaximizedWindowedModeShim=_AheadLib_Direct3D9EnableMaximizedWindowedModeShim,@10")
#pragma comment(linker, "/EXPORT:Direct3DCreate9=_AheadLib_Direct3DCreate9,@11")
#pragma comment(linker, "/EXPORT:Direct3DCreate9Ex=_AheadLib_Direct3DCreate9Ex,@12")
#pragma comment(linker, "/EXPORT:Direct3DCreate9On12=_AheadLib_Direct3DCreate9On12,@13")
#pragma comment(linker, "/EXPORT:Direct3DCreate9On12Ex=_AheadLib_Direct3DCreate9On12Ex,@14")
#pragma comment(linker, "/EXPORT:Direct3DShaderValidatorCreate9=_AheadLib_Direct3DShaderValidatorCreate9,@15")
#pragma comment(linker, "/EXPORT:PSGPError=_AheadLib_PSGPError,@16")
#pragma comment(linker, "/EXPORT:PSGPSampleTexture=_AheadLib_PSGPSampleTexture,@17")


PVOID pfnAheadLib_D3DPERF_BeginEvent;
PVOID pfnAheadLib_D3DPERF_EndEvent;
PVOID pfnAheadLib_D3DPERF_GetStatus;
PVOID pfnAheadLib_D3DPERF_QueryRepeatFrame;
PVOID pfnAheadLib_D3DPERF_SetMarker;
PVOID pfnAheadLib_D3DPERF_SetOptions;
PVOID pfnAheadLib_D3DPERF_SetRegion;
PVOID pfnAheadLib_DebugSetLevel;
PVOID pfnAheadLib_DebugSetMute;
PVOID pfnAheadLib_Direct3D9EnableMaximizedWindowedModeShim;
PVOID pfnAheadLib_Direct3DCreate9;
PVOID pfnAheadLib_Direct3DCreate9Ex;
PVOID pfnAheadLib_Direct3DCreate9On12;
PVOID pfnAheadLib_Direct3DCreate9On12Ex;
PVOID pfnAheadLib_Direct3DShaderValidatorCreate9;
PVOID pfnAheadLib_PSGPError;
PVOID pfnAheadLib_PSGPSampleTexture;


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
	lstrcatW(folder, L"\\d3d9.dll");

	g_hmRealDll = LoadLibraryW(folder);

	if (g_hmRealDll == NULL)
	{
		MessageBoxW(NULL, L"Load Real Dll Failed!", L"Proxy Dll", MB_OK);
		ExitProcess(0);
		return;
	}

	pfnAheadLib_D3DPERF_BeginEvent = GetAddress("D3DPERF_BeginEvent");
	pfnAheadLib_D3DPERF_EndEvent = GetAddress("D3DPERF_EndEvent");
	pfnAheadLib_D3DPERF_GetStatus = GetAddress("D3DPERF_GetStatus");
	pfnAheadLib_D3DPERF_QueryRepeatFrame = GetAddress("D3DPERF_QueryRepeatFrame");
	pfnAheadLib_D3DPERF_SetMarker = GetAddress("D3DPERF_SetMarker");
	pfnAheadLib_D3DPERF_SetOptions = GetAddress("D3DPERF_SetOptions");
	pfnAheadLib_D3DPERF_SetRegion = GetAddress("D3DPERF_SetRegion");
	pfnAheadLib_DebugSetLevel = GetAddress("DebugSetLevel");
	pfnAheadLib_DebugSetMute = GetAddress("DebugSetMute");
	pfnAheadLib_Direct3D9EnableMaximizedWindowedModeShim = GetAddress("Direct3D9EnableMaximizedWindowedModeShim");
	pfnAheadLib_Direct3DCreate9 = GetAddress("Direct3DCreate9");
	pfnAheadLib_Direct3DCreate9Ex = GetAddress("Direct3DCreate9Ex");
	pfnAheadLib_Direct3DCreate9On12 = GetAddress("Direct3DCreate9On12");
	pfnAheadLib_Direct3DCreate9On12Ex = GetAddress("Direct3DCreate9On12Ex");
	pfnAheadLib_Direct3DShaderValidatorCreate9 = GetAddress("Direct3DShaderValidatorCreate9");
	pfnAheadLib_PSGPError = GetAddress("PSGPError");
	pfnAheadLib_PSGPSampleTexture = GetAddress("PSGPSampleTexture");

}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DPERF_BeginEvent(void)
{
	__asm jmp pfnAheadLib_D3DPERF_BeginEvent;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DPERF_EndEvent(void)
{
	__asm jmp pfnAheadLib_D3DPERF_EndEvent;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DPERF_GetStatus(void)
{
	__asm jmp pfnAheadLib_D3DPERF_GetStatus;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DPERF_QueryRepeatFrame(void)
{
	__asm jmp pfnAheadLib_D3DPERF_QueryRepeatFrame;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DPERF_SetMarker(void)
{
	__asm jmp pfnAheadLib_D3DPERF_SetMarker;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DPERF_SetOptions(void)
{
	__asm jmp pfnAheadLib_D3DPERF_SetOptions;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DPERF_SetRegion(void)
{
	__asm jmp pfnAheadLib_D3DPERF_SetRegion;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DebugSetLevel(void)
{
	__asm jmp pfnAheadLib_DebugSetLevel;
}

extern "C" __declspec(naked) void __cdecl AheadLib_DebugSetMute(void)
{
	__asm jmp pfnAheadLib_DebugSetMute;
}

extern "C" __declspec(naked) void __cdecl AheadLib_Direct3D9EnableMaximizedWindowedModeShim(void)
{
	__asm jmp pfnAheadLib_Direct3D9EnableMaximizedWindowedModeShim;
}

extern "C" __declspec(naked) void __cdecl AheadLib_Direct3DCreate9(void)
{
	__asm jmp pfnAheadLib_Direct3DCreate9;
}

extern "C" __declspec(naked) void __cdecl AheadLib_Direct3DCreate9Ex(void)
{
	__asm jmp pfnAheadLib_Direct3DCreate9Ex;
}

extern "C" __declspec(naked) void __cdecl AheadLib_Direct3DCreate9On12(void)
{
	__asm jmp pfnAheadLib_Direct3DCreate9On12;
}

extern "C" __declspec(naked) void __cdecl AheadLib_Direct3DCreate9On12Ex(void)
{
	__asm jmp pfnAheadLib_Direct3DCreate9On12Ex;
}

extern "C" __declspec(naked) void __cdecl AheadLib_Direct3DShaderValidatorCreate9(void)
{
	__asm jmp pfnAheadLib_Direct3DShaderValidatorCreate9;
}

extern "C" __declspec(naked) void __cdecl AheadLib_PSGPError(void)
{
	__asm jmp pfnAheadLib_PSGPError;
}

extern "C" __declspec(naked) void __cdecl AheadLib_PSGPSampleTexture(void)
{
	__asm jmp pfnAheadLib_PSGPSampleTexture;
}