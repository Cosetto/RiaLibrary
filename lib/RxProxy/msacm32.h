#pragma once
#include <Windows.h>

#pragma comment(linker, "/EXPORT:XRegThunkEntry=_FakeXRegThunkEntry,@1")
#pragma comment(linker, "/EXPORT:acmDriverAddA=_FakeacmDriverAddA,@2")
#pragma comment(linker, "/EXPORT:acmDriverAddW=_FakeacmDriverAddW,@3")
#pragma comment(linker, "/EXPORT:acmDriverClose=_FakeacmDriverClose,@4")
#pragma comment(linker, "/EXPORT:acmDriverDetailsA=_FakeacmDriverDetailsA,@5")
#pragma comment(linker, "/EXPORT:acmDriverDetailsW=_FakeacmDriverDetailsW,@6")
#pragma comment(linker, "/EXPORT:acmDriverEnum=_FakeacmDriverEnum,@7")
#pragma comment(linker, "/EXPORT:acmDriverID=_FakeacmDriverID,@8")
#pragma comment(linker, "/EXPORT:acmDriverMessage=_FakeacmDriverMessage,@9")
#pragma comment(linker, "/EXPORT:acmDriverOpen=_FakeacmDriverOpen,@10")
#pragma comment(linker, "/EXPORT:acmDriverPriority=_FakeacmDriverPriority,@11")
#pragma comment(linker, "/EXPORT:acmDriverRemove=_FakeacmDriverRemove,@12")
#pragma comment(linker, "/EXPORT:acmFilterChooseA=_FakeacmFilterChooseA,@13")
#pragma comment(linker, "/EXPORT:acmFilterChooseW=_FakeacmFilterChooseW,@14")
#pragma comment(linker, "/EXPORT:acmFilterDetailsA=_FakeacmFilterDetailsA,@15")
#pragma comment(linker, "/EXPORT:acmFilterDetailsW=_FakeacmFilterDetailsW,@16")
#pragma comment(linker, "/EXPORT:acmFilterEnumA=_FakeacmFilterEnumA,@17")
#pragma comment(linker, "/EXPORT:acmFilterEnumW=_FakeacmFilterEnumW,@18")
#pragma comment(linker, "/EXPORT:acmFilterTagDetailsA=_FakeacmFilterTagDetailsA,@19")
#pragma comment(linker, "/EXPORT:acmFilterTagDetailsW=_FakeacmFilterTagDetailsW,@20")
#pragma comment(linker, "/EXPORT:acmFilterTagEnumA=_FakeacmFilterTagEnumA,@21")
#pragma comment(linker, "/EXPORT:acmFilterTagEnumW=_FakeacmFilterTagEnumW,@22")
#pragma comment(linker, "/EXPORT:acmFormatChooseA=_FakeacmFormatChooseA,@23")
#pragma comment(linker, "/EXPORT:acmFormatChooseW=_FakeacmFormatChooseW,@24")
#pragma comment(linker, "/EXPORT:acmFormatDetailsA=_FakeacmFormatDetailsA,@25")
#pragma comment(linker, "/EXPORT:acmFormatDetailsW=_FakeacmFormatDetailsW,@26")
#pragma comment(linker, "/EXPORT:acmFormatEnumA=_FakeacmFormatEnumA,@27")
#pragma comment(linker, "/EXPORT:acmFormatEnumW=_FakeacmFormatEnumW,@28")
#pragma comment(linker, "/EXPORT:acmFormatSuggest=_FakeacmFormatSuggest,@29")
#pragma comment(linker, "/EXPORT:acmFormatTagDetailsA=_FakeacmFormatTagDetailsA,@30")
#pragma comment(linker, "/EXPORT:acmFormatTagDetailsW=_FakeacmFormatTagDetailsW,@31")
#pragma comment(linker, "/EXPORT:acmFormatTagEnumA=_FakeacmFormatTagEnumA,@32")
#pragma comment(linker, "/EXPORT:acmFormatTagEnumW=_FakeacmFormatTagEnumW,@33")
#pragma comment(linker, "/EXPORT:acmGetVersion=_FakeacmGetVersion,@34")
#pragma comment(linker, "/EXPORT:acmMessage32=_FakeacmMessage32,@35")
#pragma comment(linker, "/EXPORT:acmMetrics=_FakeacmMetrics,@36")
#pragma comment(linker, "/EXPORT:acmStreamClose=_FakeacmStreamClose,@37")
#pragma comment(linker, "/EXPORT:acmStreamConvert=_FakeacmStreamConvert,@38")
#pragma comment(linker, "/EXPORT:acmStreamMessage=_FakeacmStreamMessage,@39")
#pragma comment(linker, "/EXPORT:acmStreamOpen=_FakeacmStreamOpen,@40")
#pragma comment(linker, "/EXPORT:acmStreamPrepareHeader=_FakeacmStreamPrepareHeader,@41")
#pragma comment(linker, "/EXPORT:acmStreamReset=_FakeacmStreamReset,@42")
#pragma comment(linker, "/EXPORT:acmStreamSize=_FakeacmStreamSize,@43")
#pragma comment(linker, "/EXPORT:acmStreamUnprepareHeader=_FakeacmStreamUnprepareHeader,@44")


PVOID pfnFakeXRegThunkEntry;
PVOID pfnFakeacmDriverAddA;
PVOID pfnFakeacmDriverAddW;
PVOID pfnFakeacmDriverClose;
PVOID pfnFakeacmDriverDetailsA;
PVOID pfnFakeacmDriverDetailsW;
PVOID pfnFakeacmDriverEnum;
PVOID pfnFakeacmDriverID;
PVOID pfnFakeacmDriverMessage;
PVOID pfnFakeacmDriverOpen;
PVOID pfnFakeacmDriverPriority;
PVOID pfnFakeacmDriverRemove;
PVOID pfnFakeacmFilterChooseA;
PVOID pfnFakeacmFilterChooseW;
PVOID pfnFakeacmFilterDetailsA;
PVOID pfnFakeacmFilterDetailsW;
PVOID pfnFakeacmFilterEnumA;
PVOID pfnFakeacmFilterEnumW;
PVOID pfnFakeacmFilterTagDetailsA;
PVOID pfnFakeacmFilterTagDetailsW;
PVOID pfnFakeacmFilterTagEnumA;
PVOID pfnFakeacmFilterTagEnumW;
PVOID pfnFakeacmFormatChooseA;
PVOID pfnFakeacmFormatChooseW;
PVOID pfnFakeacmFormatDetailsA;
PVOID pfnFakeacmFormatDetailsW;
PVOID pfnFakeacmFormatEnumA;
PVOID pfnFakeacmFormatEnumW;
PVOID pfnFakeacmFormatSuggest;
PVOID pfnFakeacmFormatTagDetailsA;
PVOID pfnFakeacmFormatTagDetailsW;
PVOID pfnFakeacmFormatTagEnumA;
PVOID pfnFakeacmFormatTagEnumW;
PVOID pfnFakeacmGetVersion;
PVOID pfnFakeacmMessage32;
PVOID pfnFakeacmMetrics;
PVOID pfnFakeacmStreamClose;
PVOID pfnFakeacmStreamConvert;
PVOID pfnFakeacmStreamMessage;
PVOID pfnFakeacmStreamOpen;
PVOID pfnFakeacmStreamPrepareHeader;
PVOID pfnFakeacmStreamReset;
PVOID pfnFakeacmStreamSize;
PVOID pfnFakeacmStreamUnprepareHeader;

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
	lstrcatW(folder, L"\\msacm32.dll");

	g_hmRealDll = LoadLibraryW(folder);

	if (g_hmRealDll == NULL)
	{
		MessageBoxW(NULL, L"Load Real Dll Failed!", L"Proxy Dll", MB_OK);
		ExitProcess(0);
		return;
	}

	pfnFakeXRegThunkEntry = GetAddress("XRegThunkEntry");
	pfnFakeacmDriverAddA = GetAddress("acmDriverAddA");
	pfnFakeacmDriverAddW = GetAddress("acmDriverAddW");
	pfnFakeacmDriverClose = GetAddress("acmDriverClose");
	pfnFakeacmDriverDetailsA = GetAddress("acmDriverDetailsA");
	pfnFakeacmDriverDetailsW = GetAddress("acmDriverDetailsW");
	pfnFakeacmDriverEnum = GetAddress("acmDriverEnum");
	pfnFakeacmDriverID = GetAddress("acmDriverID");
	pfnFakeacmDriverMessage = GetAddress("acmDriverMessage");
	pfnFakeacmDriverOpen = GetAddress("acmDriverOpen");
	pfnFakeacmDriverPriority = GetAddress("acmDriverPriority");
	pfnFakeacmDriverRemove = GetAddress("acmDriverRemove");
	pfnFakeacmFilterChooseA = GetAddress("acmFilterChooseA");
	pfnFakeacmFilterChooseW = GetAddress("acmFilterChooseW");
	pfnFakeacmFilterDetailsA = GetAddress("acmFilterDetailsA");
	pfnFakeacmFilterDetailsW = GetAddress("acmFilterDetailsW");
	pfnFakeacmFilterEnumA = GetAddress("acmFilterEnumA");
	pfnFakeacmFilterEnumW = GetAddress("acmFilterEnumW");
	pfnFakeacmFilterTagDetailsA = GetAddress("acmFilterTagDetailsA");
	pfnFakeacmFilterTagDetailsW = GetAddress("acmFilterTagDetailsW");
	pfnFakeacmFilterTagEnumA = GetAddress("acmFilterTagEnumA");
	pfnFakeacmFilterTagEnumW = GetAddress("acmFilterTagEnumW");
	pfnFakeacmFormatChooseA = GetAddress("acmFormatChooseA");
	pfnFakeacmFormatChooseW = GetAddress("acmFormatChooseW");
	pfnFakeacmFormatDetailsA = GetAddress("acmFormatDetailsA");
	pfnFakeacmFormatDetailsW = GetAddress("acmFormatDetailsW");
	pfnFakeacmFormatEnumA = GetAddress("acmFormatEnumA");
	pfnFakeacmFormatEnumW = GetAddress("acmFormatEnumW");
	pfnFakeacmFormatSuggest = GetAddress("acmFormatSuggest");
	pfnFakeacmFormatTagDetailsA = GetAddress("acmFormatTagDetailsA");
	pfnFakeacmFormatTagDetailsW = GetAddress("acmFormatTagDetailsW");
	pfnFakeacmFormatTagEnumA = GetAddress("acmFormatTagEnumA");
	pfnFakeacmFormatTagEnumW = GetAddress("acmFormatTagEnumW");
	pfnFakeacmGetVersion = GetAddress("acmGetVersion");
	pfnFakeacmMessage32 = GetAddress("acmMessage32");
	pfnFakeacmMetrics = GetAddress("acmMetrics");
	pfnFakeacmStreamClose = GetAddress("acmStreamClose");
	pfnFakeacmStreamConvert = GetAddress("acmStreamConvert");
	pfnFakeacmStreamMessage = GetAddress("acmStreamMessage");
	pfnFakeacmStreamOpen = GetAddress("acmStreamOpen");
	pfnFakeacmStreamPrepareHeader = GetAddress("acmStreamPrepareHeader");
	pfnFakeacmStreamReset = GetAddress("acmStreamReset");
	pfnFakeacmStreamSize = GetAddress("acmStreamSize");
	pfnFakeacmStreamUnprepareHeader = GetAddress("acmStreamUnprepareHeader");
}

extern "C" __declspec(naked) void __cdecl FakeXRegThunkEntry(void)
{
	__asm jmp pfnFakeXRegThunkEntry;
}

extern "C" __declspec(naked) void __cdecl FakeacmDriverAddA(void)
{
	__asm jmp pfnFakeacmDriverAddA;
}

extern "C" __declspec(naked) void __cdecl FakeacmDriverAddW(void)
{
	__asm jmp pfnFakeacmDriverAddW;
}

extern "C" __declspec(naked) void __cdecl FakeacmDriverClose(void)
{
	__asm jmp pfnFakeacmDriverClose;
}

extern "C" __declspec(naked) void __cdecl FakeacmDriverDetailsA(void)
{
	__asm jmp pfnFakeacmDriverDetailsA;
}

extern "C" __declspec(naked) void __cdecl FakeacmDriverDetailsW(void)
{
	__asm jmp pfnFakeacmDriverDetailsW;
}

extern "C" __declspec(naked) void __cdecl FakeacmDriverEnum(void)
{
	__asm jmp pfnFakeacmDriverEnum;
}

extern "C" __declspec(naked) void __cdecl FakeacmDriverID(void)
{
	__asm jmp pfnFakeacmDriverID;
}

extern "C" __declspec(naked) void __cdecl FakeacmDriverMessage(void)
{
	__asm jmp pfnFakeacmDriverMessage;
}

extern "C" __declspec(naked) void __cdecl FakeacmDriverOpen(void)
{
	__asm jmp pfnFakeacmDriverOpen;
}

extern "C" __declspec(naked) void __cdecl FakeacmDriverPriority(void)
{
	__asm jmp pfnFakeacmDriverPriority;
}

extern "C" __declspec(naked) void __cdecl FakeacmDriverRemove(void)
{
	__asm jmp pfnFakeacmDriverRemove;
}

extern "C" __declspec(naked) void __cdecl FakeacmFilterChooseA(void)
{
	__asm jmp pfnFakeacmFilterChooseA;
}

extern "C" __declspec(naked) void __cdecl FakeacmFilterChooseW(void)
{
	__asm jmp pfnFakeacmFilterChooseW;
}

extern "C" __declspec(naked) void __cdecl FakeacmFilterDetailsA(void)
{
	__asm jmp pfnFakeacmFilterDetailsA;
}

extern "C" __declspec(naked) void __cdecl FakeacmFilterDetailsW(void)
{
	__asm jmp pfnFakeacmFilterDetailsW;
}

extern "C" __declspec(naked) void __cdecl FakeacmFilterEnumA(void)
{
	__asm jmp pfnFakeacmFilterEnumA;
}

extern "C" __declspec(naked) void __cdecl FakeacmFilterEnumW(void)
{
	__asm jmp pfnFakeacmFilterEnumW;
}

extern "C" __declspec(naked) void __cdecl FakeacmFilterTagDetailsA(void)
{
	__asm jmp pfnFakeacmFilterTagDetailsA;
}

extern "C" __declspec(naked) void __cdecl FakeacmFilterTagDetailsW(void)
{
	__asm jmp pfnFakeacmFilterTagDetailsW;
}

extern "C" __declspec(naked) void __cdecl FakeacmFilterTagEnumA(void)
{
	__asm jmp pfnFakeacmFilterTagEnumA;
}

extern "C" __declspec(naked) void __cdecl FakeacmFilterTagEnumW(void)
{
	__asm jmp pfnFakeacmFilterTagEnumW;
}

extern "C" __declspec(naked) void __cdecl FakeacmFormatChooseA(void)
{
	__asm jmp pfnFakeacmFormatChooseA;
}

extern "C" __declspec(naked) void __cdecl FakeacmFormatChooseW(void)
{
	__asm jmp pfnFakeacmFormatChooseW;
}

extern "C" __declspec(naked) void __cdecl FakeacmFormatDetailsA(void)
{
	__asm jmp pfnFakeacmFormatDetailsA;
}

extern "C" __declspec(naked) void __cdecl FakeacmFormatDetailsW(void)
{
	__asm jmp pfnFakeacmFormatDetailsW;
}

extern "C" __declspec(naked) void __cdecl FakeacmFormatEnumA(void)
{
	__asm jmp pfnFakeacmFormatEnumA;
}

extern "C" __declspec(naked) void __cdecl FakeacmFormatEnumW(void)
{
	__asm jmp pfnFakeacmFormatEnumW;
}

extern "C" __declspec(naked) void __cdecl FakeacmFormatSuggest(void)
{
	__asm jmp pfnFakeacmFormatSuggest;
}

extern "C" __declspec(naked) void __cdecl FakeacmFormatTagDetailsA(void)
{
	__asm jmp pfnFakeacmFormatTagDetailsA;
}

extern "C" __declspec(naked) void __cdecl FakeacmFormatTagDetailsW(void)
{
	__asm jmp pfnFakeacmFormatTagDetailsW;
}

extern "C" __declspec(naked) void __cdecl FakeacmFormatTagEnumA(void)
{
	__asm jmp pfnFakeacmFormatTagEnumA;
}

extern "C" __declspec(naked) void __cdecl FakeacmFormatTagEnumW(void)
{
	__asm jmp pfnFakeacmFormatTagEnumW;
}

extern "C" __declspec(naked) void __cdecl FakeacmGetVersion(void)
{
	__asm jmp pfnFakeacmGetVersion;
}

extern "C" __declspec(naked) void __cdecl FakeacmMessage32(void)
{
	__asm jmp pfnFakeacmMessage32;
}

extern "C" __declspec(naked) void __cdecl FakeacmMetrics(void)
{
	__asm jmp pfnFakeacmMetrics;
}

extern "C" __declspec(naked) void __cdecl FakeacmStreamClose(void)
{
	__asm jmp pfnFakeacmStreamClose;
}

extern "C" __declspec(naked) void __cdecl FakeacmStreamConvert(void)
{
	__asm jmp pfnFakeacmStreamConvert;
}

extern "C" __declspec(naked) void __cdecl FakeacmStreamMessage(void)
{
	__asm jmp pfnFakeacmStreamMessage;
}

extern "C" __declspec(naked) void __cdecl FakeacmStreamOpen(void)
{
	__asm jmp pfnFakeacmStreamOpen;
}

extern "C" __declspec(naked) void __cdecl FakeacmStreamPrepareHeader(void)
{
	__asm jmp pfnFakeacmStreamPrepareHeader;
}

extern "C" __declspec(naked) void __cdecl FakeacmStreamReset(void)
{
	__asm jmp pfnFakeacmStreamReset;
}

extern "C" __declspec(naked) void __cdecl FakeacmStreamSize(void)
{
	__asm jmp pfnFakeacmStreamSize;
}

extern "C" __declspec(naked) void __cdecl FakeacmStreamUnprepareHeader(void)
{
	__asm jmp pfnFakeacmStreamUnprepareHeader;
}