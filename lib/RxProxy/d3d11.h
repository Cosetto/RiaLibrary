#pragma once
#include <Windows.h>

#pragma comment(linker, "/EXPORT:CreateDirect3D11DeviceFromDXGIDevice=_AheadLib_CreateDirect3D11DeviceFromDXGIDevice,@1")
#pragma comment(linker, "/EXPORT:CreateDirect3D11SurfaceFromDXGISurface=_AheadLib_CreateDirect3D11SurfaceFromDXGISurface,@2")
#pragma comment(linker, "/EXPORT:D3D11CoreCreateDevice=_AheadLib_D3D11CoreCreateDevice,@3")
#pragma comment(linker, "/EXPORT:D3D11CoreCreateLayeredDevice=_AheadLib_D3D11CoreCreateLayeredDevice,@4")
#pragma comment(linker, "/EXPORT:D3D11CoreGetLayeredDeviceSize=_AheadLib_D3D11CoreGetLayeredDeviceSize,@5")
#pragma comment(linker, "/EXPORT:D3D11CoreRegisterLayers=_AheadLib_D3D11CoreRegisterLayers,@6")
#pragma comment(linker, "/EXPORT:D3D11CreateDevice=_AheadLib_D3D11CreateDevice,@7")
#pragma comment(linker, "/EXPORT:D3D11CreateDeviceAndSwapChain=_AheadLib_D3D11CreateDeviceAndSwapChain,@8")
#pragma comment(linker, "/EXPORT:D3D11CreateDeviceForD3D12=_AheadLib_D3D11CreateDeviceForD3D12,@9")
#pragma comment(linker, "/EXPORT:D3D11On12CreateDevice=_AheadLib_D3D11On12CreateDevice,@10")
#pragma comment(linker, "/EXPORT:D3DKMTCloseAdapter=_AheadLib_D3DKMTCloseAdapter,@11")
#pragma comment(linker, "/EXPORT:D3DKMTCreateAllocation=_AheadLib_D3DKMTCreateAllocation,@12")
#pragma comment(linker, "/EXPORT:D3DKMTCreateContext=_AheadLib_D3DKMTCreateContext,@13")
#pragma comment(linker, "/EXPORT:D3DKMTCreateDevice=_AheadLib_D3DKMTCreateDevice,@14")
#pragma comment(linker, "/EXPORT:D3DKMTCreateSynchronizationObject=_AheadLib_D3DKMTCreateSynchronizationObject,@15")
#pragma comment(linker, "/EXPORT:D3DKMTDestroyAllocation=_AheadLib_D3DKMTDestroyAllocation,@16")
#pragma comment(linker, "/EXPORT:D3DKMTDestroyContext=_AheadLib_D3DKMTDestroyContext,@17")
#pragma comment(linker, "/EXPORT:D3DKMTDestroyDevice=_AheadLib_D3DKMTDestroyDevice,@18")
#pragma comment(linker, "/EXPORT:D3DKMTDestroySynchronizationObject=_AheadLib_D3DKMTDestroySynchronizationObject,@19")
#pragma comment(linker, "/EXPORT:D3DKMTEscape=_AheadLib_D3DKMTEscape,@20")
#pragma comment(linker, "/EXPORT:D3DKMTGetContextSchedulingPriority=_AheadLib_D3DKMTGetContextSchedulingPriority,@21")
#pragma comment(linker, "/EXPORT:D3DKMTGetDeviceState=_AheadLib_D3DKMTGetDeviceState,@22")
#pragma comment(linker, "/EXPORT:D3DKMTGetDisplayModeList=_AheadLib_D3DKMTGetDisplayModeList,@23")
#pragma comment(linker, "/EXPORT:D3DKMTGetMultisampleMethodList=_AheadLib_D3DKMTGetMultisampleMethodList,@24")
#pragma comment(linker, "/EXPORT:D3DKMTGetRuntimeData=_AheadLib_D3DKMTGetRuntimeData,@25")
#pragma comment(linker, "/EXPORT:D3DKMTGetSharedPrimaryHandle=_AheadLib_D3DKMTGetSharedPrimaryHandle,@26")
#pragma comment(linker, "/EXPORT:D3DKMTLock=_AheadLib_D3DKMTLock,@27")
#pragma comment(linker, "/EXPORT:D3DKMTOpenAdapterFromHdc=_AheadLib_D3DKMTOpenAdapterFromHdc,@28")
#pragma comment(linker, "/EXPORT:D3DKMTOpenResource=_AheadLib_D3DKMTOpenResource,@29")
#pragma comment(linker, "/EXPORT:D3DKMTPresent=_AheadLib_D3DKMTPresent,@30")
#pragma comment(linker, "/EXPORT:D3DKMTQueryAdapterInfo=_AheadLib_D3DKMTQueryAdapterInfo,@31")
#pragma comment(linker, "/EXPORT:D3DKMTQueryAllocationResidency=_AheadLib_D3DKMTQueryAllocationResidency,@32")
#pragma comment(linker, "/EXPORT:D3DKMTQueryResourceInfo=_AheadLib_D3DKMTQueryResourceInfo,@33")
#pragma comment(linker, "/EXPORT:D3DKMTRender=_AheadLib_D3DKMTRender,@34")
#pragma comment(linker, "/EXPORT:D3DKMTSetAllocationPriority=_AheadLib_D3DKMTSetAllocationPriority,@35")
#pragma comment(linker, "/EXPORT:D3DKMTSetContextSchedulingPriority=_AheadLib_D3DKMTSetContextSchedulingPriority,@36")
#pragma comment(linker, "/EXPORT:D3DKMTSetDisplayMode=_AheadLib_D3DKMTSetDisplayMode,@37")
#pragma comment(linker, "/EXPORT:D3DKMTSetDisplayPrivateDriverFormat=_AheadLib_D3DKMTSetDisplayPrivateDriverFormat,@38")
#pragma comment(linker, "/EXPORT:D3DKMTSetGammaRamp=_AheadLib_D3DKMTSetGammaRamp,@39")
#pragma comment(linker, "/EXPORT:D3DKMTSetVidPnSourceOwner=_AheadLib_D3DKMTSetVidPnSourceOwner,@40")
#pragma comment(linker, "/EXPORT:D3DKMTSignalSynchronizationObject=_AheadLib_D3DKMTSignalSynchronizationObject,@41")
#pragma comment(linker, "/EXPORT:D3DKMTUnlock=_AheadLib_D3DKMTUnlock,@42")
#pragma comment(linker, "/EXPORT:D3DKMTWaitForSynchronizationObject=_AheadLib_D3DKMTWaitForSynchronizationObject,@43")
#pragma comment(linker, "/EXPORT:D3DKMTWaitForVerticalBlankEvent=_AheadLib_D3DKMTWaitForVerticalBlankEvent,@44")
#pragma comment(linker, "/EXPORT:D3DPerformance_BeginEvent=_AheadLib_D3DPerformance_BeginEvent,@45")
#pragma comment(linker, "/EXPORT:D3DPerformance_EndEvent=_AheadLib_D3DPerformance_EndEvent,@46")
#pragma comment(linker, "/EXPORT:D3DPerformance_GetStatus=_AheadLib_D3DPerformance_GetStatus,@47")
#pragma comment(linker, "/EXPORT:D3DPerformance_SetMarker=_AheadLib_D3DPerformance_SetMarker,@48")
#pragma comment(linker, "/EXPORT:EnableFeatureLevelUpgrade=_AheadLib_EnableFeatureLevelUpgrade,@49")
#pragma comment(linker, "/EXPORT:OpenAdapter10=_AheadLib_OpenAdapter10,@50")
#pragma comment(linker, "/EXPORT:OpenAdapter10_2=_AheadLib_OpenAdapter10_2,@51")


PVOID pfnAheadLib_CreateDirect3D11DeviceFromDXGIDevice;
PVOID pfnAheadLib_CreateDirect3D11SurfaceFromDXGISurface;
PVOID pfnAheadLib_D3D11CoreCreateDevice;
PVOID pfnAheadLib_D3D11CoreCreateLayeredDevice;
PVOID pfnAheadLib_D3D11CoreGetLayeredDeviceSize;
PVOID pfnAheadLib_D3D11CoreRegisterLayers;
PVOID pfnAheadLib_D3D11CreateDevice;
PVOID pfnAheadLib_D3D11CreateDeviceAndSwapChain;
PVOID pfnAheadLib_D3D11CreateDeviceForD3D12;
PVOID pfnAheadLib_D3D11On12CreateDevice;
PVOID pfnAheadLib_D3DKMTCloseAdapter;
PVOID pfnAheadLib_D3DKMTCreateAllocation;
PVOID pfnAheadLib_D3DKMTCreateContext;
PVOID pfnAheadLib_D3DKMTCreateDevice;
PVOID pfnAheadLib_D3DKMTCreateSynchronizationObject;
PVOID pfnAheadLib_D3DKMTDestroyAllocation;
PVOID pfnAheadLib_D3DKMTDestroyContext;
PVOID pfnAheadLib_D3DKMTDestroyDevice;
PVOID pfnAheadLib_D3DKMTDestroySynchronizationObject;
PVOID pfnAheadLib_D3DKMTEscape;
PVOID pfnAheadLib_D3DKMTGetContextSchedulingPriority;
PVOID pfnAheadLib_D3DKMTGetDeviceState;
PVOID pfnAheadLib_D3DKMTGetDisplayModeList;
PVOID pfnAheadLib_D3DKMTGetMultisampleMethodList;
PVOID pfnAheadLib_D3DKMTGetRuntimeData;
PVOID pfnAheadLib_D3DKMTGetSharedPrimaryHandle;
PVOID pfnAheadLib_D3DKMTLock;
PVOID pfnAheadLib_D3DKMTOpenAdapterFromHdc;
PVOID pfnAheadLib_D3DKMTOpenResource;
PVOID pfnAheadLib_D3DKMTPresent;
PVOID pfnAheadLib_D3DKMTQueryAdapterInfo;
PVOID pfnAheadLib_D3DKMTQueryAllocationResidency;
PVOID pfnAheadLib_D3DKMTQueryResourceInfo;
PVOID pfnAheadLib_D3DKMTRender;
PVOID pfnAheadLib_D3DKMTSetAllocationPriority;
PVOID pfnAheadLib_D3DKMTSetContextSchedulingPriority;
PVOID pfnAheadLib_D3DKMTSetDisplayMode;
PVOID pfnAheadLib_D3DKMTSetDisplayPrivateDriverFormat;
PVOID pfnAheadLib_D3DKMTSetGammaRamp;
PVOID pfnAheadLib_D3DKMTSetVidPnSourceOwner;
PVOID pfnAheadLib_D3DKMTSignalSynchronizationObject;
PVOID pfnAheadLib_D3DKMTUnlock;
PVOID pfnAheadLib_D3DKMTWaitForSynchronizationObject;
PVOID pfnAheadLib_D3DKMTWaitForVerticalBlankEvent;
PVOID pfnAheadLib_D3DPerformance_BeginEvent;
PVOID pfnAheadLib_D3DPerformance_EndEvent;
PVOID pfnAheadLib_D3DPerformance_GetStatus;
PVOID pfnAheadLib_D3DPerformance_SetMarker;
PVOID pfnAheadLib_EnableFeatureLevelUpgrade;
PVOID pfnAheadLib_OpenAdapter10;
PVOID pfnAheadLib_OpenAdapter10_2;

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
	lstrcatW(folder, L"\\d3d11.dll");

	g_hmRealDll = LoadLibraryW(folder);

	if (g_hmRealDll == NULL)
	{
		MessageBoxW(NULL, L"Load Real Dll Failed!", L"Proxy Dll", MB_OK);
		ExitProcess(0);
		return;
	}

	pfnAheadLib_CreateDirect3D11DeviceFromDXGIDevice = GetAddress("CreateDirect3D11DeviceFromDXGIDevice");
	pfnAheadLib_CreateDirect3D11SurfaceFromDXGISurface = GetAddress("CreateDirect3D11SurfaceFromDXGISurface");
	pfnAheadLib_D3D11CoreCreateDevice = GetAddress("D3D11CoreCreateDevice");
	pfnAheadLib_D3D11CoreCreateLayeredDevice = GetAddress("D3D11CoreCreateLayeredDevice");
	pfnAheadLib_D3D11CoreGetLayeredDeviceSize = GetAddress("D3D11CoreGetLayeredDeviceSize");
	pfnAheadLib_D3D11CoreRegisterLayers = GetAddress("D3D11CoreRegisterLayers");
	pfnAheadLib_D3D11CreateDevice = GetAddress("D3D11CreateDevice");
	pfnAheadLib_D3D11CreateDeviceAndSwapChain = GetAddress("D3D11CreateDeviceAndSwapChain");
	pfnAheadLib_D3D11CreateDeviceForD3D12 = GetAddress("D3D11CreateDeviceForD3D12");
	pfnAheadLib_D3D11On12CreateDevice = GetAddress("D3D11On12CreateDevice");
	pfnAheadLib_D3DKMTCloseAdapter = GetAddress("D3DKMTCloseAdapter");
	pfnAheadLib_D3DKMTCreateAllocation = GetAddress("D3DKMTCreateAllocation");
	pfnAheadLib_D3DKMTCreateContext = GetAddress("D3DKMTCreateContext");
	pfnAheadLib_D3DKMTCreateDevice = GetAddress("D3DKMTCreateDevice");
	pfnAheadLib_D3DKMTCreateSynchronizationObject = GetAddress("D3DKMTCreateSynchronizationObject");
	pfnAheadLib_D3DKMTDestroyAllocation = GetAddress("D3DKMTDestroyAllocation");
	pfnAheadLib_D3DKMTDestroyContext = GetAddress("D3DKMTDestroyContext");
	pfnAheadLib_D3DKMTDestroyDevice = GetAddress("D3DKMTDestroyDevice");
	pfnAheadLib_D3DKMTDestroySynchronizationObject = GetAddress("D3DKMTDestroySynchronizationObject");
	pfnAheadLib_D3DKMTEscape = GetAddress("D3DKMTEscape");
	pfnAheadLib_D3DKMTGetContextSchedulingPriority = GetAddress("D3DKMTGetContextSchedulingPriority");
	pfnAheadLib_D3DKMTGetDeviceState = GetAddress("D3DKMTGetDeviceState");
	pfnAheadLib_D3DKMTGetDisplayModeList = GetAddress("D3DKMTGetDisplayModeList");
	pfnAheadLib_D3DKMTGetMultisampleMethodList = GetAddress("D3DKMTGetMultisampleMethodList");
	pfnAheadLib_D3DKMTGetRuntimeData = GetAddress("D3DKMTGetRuntimeData");
	pfnAheadLib_D3DKMTGetSharedPrimaryHandle = GetAddress("D3DKMTGetSharedPrimaryHandle");
	pfnAheadLib_D3DKMTLock = GetAddress("D3DKMTLock");
	pfnAheadLib_D3DKMTOpenAdapterFromHdc = GetAddress("D3DKMTOpenAdapterFromHdc");
	pfnAheadLib_D3DKMTOpenResource = GetAddress("D3DKMTOpenResource");
	pfnAheadLib_D3DKMTPresent = GetAddress("D3DKMTPresent");
	pfnAheadLib_D3DKMTQueryAdapterInfo = GetAddress("D3DKMTQueryAdapterInfo");
	pfnAheadLib_D3DKMTQueryAllocationResidency = GetAddress("D3DKMTQueryAllocationResidency");
	pfnAheadLib_D3DKMTQueryResourceInfo = GetAddress("D3DKMTQueryResourceInfo");
	pfnAheadLib_D3DKMTRender = GetAddress("D3DKMTRender");
	pfnAheadLib_D3DKMTSetAllocationPriority = GetAddress("D3DKMTSetAllocationPriority");
	pfnAheadLib_D3DKMTSetContextSchedulingPriority = GetAddress("D3DKMTSetContextSchedulingPriority");
	pfnAheadLib_D3DKMTSetDisplayMode = GetAddress("D3DKMTSetDisplayMode");
	pfnAheadLib_D3DKMTSetDisplayPrivateDriverFormat = GetAddress("D3DKMTSetDisplayPrivateDriverFormat");
	pfnAheadLib_D3DKMTSetGammaRamp = GetAddress("D3DKMTSetGammaRamp");
	pfnAheadLib_D3DKMTSetVidPnSourceOwner = GetAddress("D3DKMTSetVidPnSourceOwner");
	pfnAheadLib_D3DKMTSignalSynchronizationObject = GetAddress("D3DKMTSignalSynchronizationObject");
	pfnAheadLib_D3DKMTUnlock = GetAddress("D3DKMTUnlock");
	pfnAheadLib_D3DKMTWaitForSynchronizationObject = GetAddress("D3DKMTWaitForSynchronizationObject");
	pfnAheadLib_D3DKMTWaitForVerticalBlankEvent = GetAddress("D3DKMTWaitForVerticalBlankEvent");
	pfnAheadLib_D3DPerformance_BeginEvent = GetAddress("D3DPerformance_BeginEvent");
	pfnAheadLib_D3DPerformance_EndEvent = GetAddress("D3DPerformance_EndEvent");
	pfnAheadLib_D3DPerformance_GetStatus = GetAddress("D3DPerformance_GetStatus");
	pfnAheadLib_D3DPerformance_SetMarker = GetAddress("D3DPerformance_SetMarker");
	pfnAheadLib_EnableFeatureLevelUpgrade = GetAddress("EnableFeatureLevelUpgrade");
	pfnAheadLib_OpenAdapter10 = GetAddress("OpenAdapter10");
	pfnAheadLib_OpenAdapter10_2 = GetAddress("OpenAdapter10_2");
}

extern "C" __declspec(naked) void __cdecl AheadLib_CreateDirect3D11DeviceFromDXGIDevice(void)
{
	__asm jmp pfnAheadLib_CreateDirect3D11DeviceFromDXGIDevice;
}

extern "C" __declspec(naked) void __cdecl AheadLib_CreateDirect3D11SurfaceFromDXGISurface(void)
{
	__asm jmp pfnAheadLib_CreateDirect3D11SurfaceFromDXGISurface;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3D11CoreCreateDevice(void)
{
	__asm jmp pfnAheadLib_D3D11CoreCreateDevice;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3D11CoreCreateLayeredDevice(void)
{
	__asm jmp pfnAheadLib_D3D11CoreCreateLayeredDevice;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3D11CoreGetLayeredDeviceSize(void)
{
	__asm jmp pfnAheadLib_D3D11CoreGetLayeredDeviceSize;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3D11CoreRegisterLayers(void)
{
	__asm jmp pfnAheadLib_D3D11CoreRegisterLayers;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3D11CreateDevice(void)
{
	__asm jmp pfnAheadLib_D3D11CreateDevice;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3D11CreateDeviceAndSwapChain(void)
{
	__asm jmp pfnAheadLib_D3D11CreateDeviceAndSwapChain;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3D11CreateDeviceForD3D12(void)
{
	__asm jmp pfnAheadLib_D3D11CreateDeviceForD3D12;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3D11On12CreateDevice(void)
{
	__asm jmp pfnAheadLib_D3D11On12CreateDevice;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTCloseAdapter(void)
{
	__asm jmp pfnAheadLib_D3DKMTCloseAdapter;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTCreateAllocation(void)
{
	__asm jmp pfnAheadLib_D3DKMTCreateAllocation;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTCreateContext(void)
{
	__asm jmp pfnAheadLib_D3DKMTCreateContext;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTCreateDevice(void)
{
	__asm jmp pfnAheadLib_D3DKMTCreateDevice;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTCreateSynchronizationObject(void)
{
	__asm jmp pfnAheadLib_D3DKMTCreateSynchronizationObject;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTDestroyAllocation(void)
{
	__asm jmp pfnAheadLib_D3DKMTDestroyAllocation;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTDestroyContext(void)
{
	__asm jmp pfnAheadLib_D3DKMTDestroyContext;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTDestroyDevice(void)
{
	__asm jmp pfnAheadLib_D3DKMTDestroyDevice;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTDestroySynchronizationObject(void)
{
	__asm jmp pfnAheadLib_D3DKMTDestroySynchronizationObject;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTEscape(void)
{
	__asm jmp pfnAheadLib_D3DKMTEscape;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTGetContextSchedulingPriority(void)
{
	__asm jmp pfnAheadLib_D3DKMTGetContextSchedulingPriority;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTGetDeviceState(void)
{
	__asm jmp pfnAheadLib_D3DKMTGetDeviceState;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTGetDisplayModeList(void)
{
	__asm jmp pfnAheadLib_D3DKMTGetDisplayModeList;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTGetMultisampleMethodList(void)
{
	__asm jmp pfnAheadLib_D3DKMTGetMultisampleMethodList;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTGetRuntimeData(void)
{
	__asm jmp pfnAheadLib_D3DKMTGetRuntimeData;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTGetSharedPrimaryHandle(void)
{
	__asm jmp pfnAheadLib_D3DKMTGetSharedPrimaryHandle;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTLock(void)
{
	__asm jmp pfnAheadLib_D3DKMTLock;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTOpenAdapterFromHdc(void)
{
	__asm jmp pfnAheadLib_D3DKMTOpenAdapterFromHdc;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTOpenResource(void)
{
	__asm jmp pfnAheadLib_D3DKMTOpenResource;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTPresent(void)
{
	__asm jmp pfnAheadLib_D3DKMTPresent;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTQueryAdapterInfo(void)
{
	__asm jmp pfnAheadLib_D3DKMTQueryAdapterInfo;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTQueryAllocationResidency(void)
{
	__asm jmp pfnAheadLib_D3DKMTQueryAllocationResidency;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTQueryResourceInfo(void)
{
	__asm jmp pfnAheadLib_D3DKMTQueryResourceInfo;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTRender(void)
{
	__asm jmp pfnAheadLib_D3DKMTRender;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTSetAllocationPriority(void)
{
	__asm jmp pfnAheadLib_D3DKMTSetAllocationPriority;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTSetContextSchedulingPriority(void)
{
	__asm jmp pfnAheadLib_D3DKMTSetContextSchedulingPriority;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTSetDisplayMode(void)
{
	__asm jmp pfnAheadLib_D3DKMTSetDisplayMode;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTSetDisplayPrivateDriverFormat(void)
{
	__asm jmp pfnAheadLib_D3DKMTSetDisplayPrivateDriverFormat;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTSetGammaRamp(void)
{
	__asm jmp pfnAheadLib_D3DKMTSetGammaRamp;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTSetVidPnSourceOwner(void)
{
	__asm jmp pfnAheadLib_D3DKMTSetVidPnSourceOwner;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTSignalSynchronizationObject(void)
{
	__asm jmp pfnAheadLib_D3DKMTSignalSynchronizationObject;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTUnlock(void)
{
	__asm jmp pfnAheadLib_D3DKMTUnlock;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTWaitForSynchronizationObject(void)
{
	__asm jmp pfnAheadLib_D3DKMTWaitForSynchronizationObject;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DKMTWaitForVerticalBlankEvent(void)
{
	__asm jmp pfnAheadLib_D3DKMTWaitForVerticalBlankEvent;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DPerformance_BeginEvent(void)
{
	__asm jmp pfnAheadLib_D3DPerformance_BeginEvent;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DPerformance_EndEvent(void)
{
	__asm jmp pfnAheadLib_D3DPerformance_EndEvent;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DPerformance_GetStatus(void)
{
	__asm jmp pfnAheadLib_D3DPerformance_GetStatus;
}

extern "C" __declspec(naked) void __cdecl AheadLib_D3DPerformance_SetMarker(void)
{
	__asm jmp pfnAheadLib_D3DPerformance_SetMarker;
}

extern "C" __declspec(naked) void __cdecl AheadLib_EnableFeatureLevelUpgrade(void)
{
	__asm jmp pfnAheadLib_EnableFeatureLevelUpgrade;
}

extern "C" __declspec(naked) void __cdecl AheadLib_OpenAdapter10(void)
{
	__asm jmp pfnAheadLib_OpenAdapter10;
}

extern "C" __declspec(naked) void __cdecl AheadLib_OpenAdapter10_2(void)
{
	__asm jmp pfnAheadLib_OpenAdapter10_2;
}