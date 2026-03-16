#pragma once
#include <Windows.h>

#pragma comment(linker, "/EXPORT:CloseDriver=_FakeCloseDriver,@1")
#pragma comment(linker, "/EXPORT:DefDriverProc=_FakeDefDriverProc,@2")
#pragma comment(linker, "/EXPORT:DriverCallback=_FakeDriverCallback,@3")
#pragma comment(linker, "/EXPORT:DrvGetModuleHandle=_FakeDrvGetModuleHandle,@4")
#pragma comment(linker, "/EXPORT:GetDriverModuleHandle=_FakeGetDriverModuleHandle,@5")
#pragma comment(linker, "/EXPORT:OpenDriver=_FakeOpenDriver,@6")
#pragma comment(linker, "/EXPORT:PlaySoundA=_FakePlaySoundA,@8")
#pragma comment(linker, "/EXPORT:PlaySoundW=_FakePlaySoundW,@9")
#pragma comment(linker, "/EXPORT:PlaySound=_FakePlaySound,@7")
#pragma comment(linker, "/EXPORT:SendDriverMessage=_FakeSendDriverMessage,@10")
#pragma comment(linker, "/EXPORT:WOWAppExit=_FakeWOWAppExit,@11")
#pragma comment(linker, "/EXPORT:auxGetDevCapsA=_FakeauxGetDevCapsA,@12")
#pragma comment(linker, "/EXPORT:auxGetDevCapsW=_FakeauxGetDevCapsW,@13")
#pragma comment(linker, "/EXPORT:auxGetNumDevs=_FakeauxGetNumDevs,@14")
#pragma comment(linker, "/EXPORT:auxGetVolume=_FakeauxGetVolume,@15")
#pragma comment(linker, "/EXPORT:auxOutMessage=_FakeauxOutMessage,@16")
#pragma comment(linker, "/EXPORT:auxSetVolume=_FakeauxSetVolume,@17")
#pragma comment(linker, "/EXPORT:joyConfigChanged=_FakejoyConfigChanged,@18")
#pragma comment(linker, "/EXPORT:joyGetDevCapsA=_FakejoyGetDevCapsA,@19")
#pragma comment(linker, "/EXPORT:joyGetDevCapsW=_FakejoyGetDevCapsW,@20")
#pragma comment(linker, "/EXPORT:joyGetNumDevs=_FakejoyGetNumDevs,@21")
#pragma comment(linker, "/EXPORT:joyGetPos=_FakejoyGetPos,@22")
#pragma comment(linker, "/EXPORT:joyGetPosEx=_FakejoyGetPosEx,@23")
#pragma comment(linker, "/EXPORT:joyGetThreshold=_FakejoyGetThreshold,@24")
#pragma comment(linker, "/EXPORT:joyReleaseCapture=_FakejoyReleaseCapture,@25")
#pragma comment(linker, "/EXPORT:joySetCapture=_FakejoySetCapture,@26")
#pragma comment(linker, "/EXPORT:joySetThreshold=_FakejoySetThreshold,@27")
#pragma comment(linker, "/EXPORT:mciDriverNotify=_FakemciDriverNotify,@28")
#pragma comment(linker, "/EXPORT:mciDriverYield=_FakemciDriverYield,@29")
#pragma comment(linker, "/EXPORT:mciExecute=_FakemciExecute,@30")
#pragma comment(linker, "/EXPORT:mciFreeCommandResource=_FakemciFreeCommandResource,@31")
#pragma comment(linker, "/EXPORT:mciGetCreatorTask=_FakemciGetCreatorTask,@32")
#pragma comment(linker, "/EXPORT:mciGetDeviceIDA=_FakemciGetDeviceIDA,@33")
#pragma comment(linker, "/EXPORT:mciGetDeviceIDFromElementIDA=_FakemciGetDeviceIDFromElementIDA,@34")
#pragma comment(linker, "/EXPORT:mciGetDeviceIDFromElementIDW=_FakemciGetDeviceIDFromElementIDW,@35")
#pragma comment(linker, "/EXPORT:mciGetDeviceIDW=_FakemciGetDeviceIDW,@36")
#pragma comment(linker, "/EXPORT:mciGetDriverData=_FakemciGetDriverData,@37")
#pragma comment(linker, "/EXPORT:mciGetErrorStringA=_FakemciGetErrorStringA,@38")
#pragma comment(linker, "/EXPORT:mciGetErrorStringW=_FakemciGetErrorStringW,@39")
#pragma comment(linker, "/EXPORT:mciGetYieldProc=_FakemciGetYieldProc,@40")
#pragma comment(linker, "/EXPORT:mciLoadCommandResource=_FakemciLoadCommandResource,@41")
#pragma comment(linker, "/EXPORT:mciSendCommandA=_FakemciSendCommandA,@42")
#pragma comment(linker, "/EXPORT:mciSendCommandW=_FakemciSendCommandW,@43")
#pragma comment(linker, "/EXPORT:mciSendStringA=_FakemciSendStringA,@44")
#pragma comment(linker, "/EXPORT:mciSendStringW=_FakemciSendStringW,@45")
#pragma comment(linker, "/EXPORT:mciSetDriverData=_FakemciSetDriverData,@46")
#pragma comment(linker, "/EXPORT:mciSetYieldProc=_FakemciSetYieldProc,@47")
#pragma comment(linker, "/EXPORT:midiConnect=_FakemidiConnect,@48")
#pragma comment(linker, "/EXPORT:midiDisconnect=_FakemidiDisconnect,@49")
#pragma comment(linker, "/EXPORT:midiInAddBuffer=_FakemidiInAddBuffer,@50")
#pragma comment(linker, "/EXPORT:midiInClose=_FakemidiInClose,@51")
#pragma comment(linker, "/EXPORT:midiInGetDevCapsA=_FakemidiInGetDevCapsA,@52")
#pragma comment(linker, "/EXPORT:midiInGetDevCapsW=_FakemidiInGetDevCapsW,@53")
#pragma comment(linker, "/EXPORT:midiInGetErrorTextA=_FakemidiInGetErrorTextA,@54")
#pragma comment(linker, "/EXPORT:midiInGetErrorTextW=_FakemidiInGetErrorTextW,@55")
#pragma comment(linker, "/EXPORT:midiInGetID=_FakemidiInGetID,@56")
#pragma comment(linker, "/EXPORT:midiInGetNumDevs=_FakemidiInGetNumDevs,@57")
#pragma comment(linker, "/EXPORT:midiInMessage=_FakemidiInMessage,@58")
#pragma comment(linker, "/EXPORT:midiInOpen=_FakemidiInOpen,@59")
#pragma comment(linker, "/EXPORT:midiInPrepareHeader=_FakemidiInPrepareHeader,@60")
#pragma comment(linker, "/EXPORT:midiInReset=_FakemidiInReset,@61")
#pragma comment(linker, "/EXPORT:midiInStart=_FakemidiInStart,@62")
#pragma comment(linker, "/EXPORT:midiInStop=_FakemidiInStop,@63")
#pragma comment(linker, "/EXPORT:midiInUnprepareHeader=_FakemidiInUnprepareHeader,@64")
#pragma comment(linker, "/EXPORT:midiOutCacheDrumPatches=_FakemidiOutCacheDrumPatches,@65")
#pragma comment(linker, "/EXPORT:midiOutCachePatches=_FakemidiOutCachePatches,@66")
#pragma comment(linker, "/EXPORT:midiOutClose=_FakemidiOutClose,@67")
#pragma comment(linker, "/EXPORT:midiOutGetDevCapsA=_FakemidiOutGetDevCapsA,@68")
#pragma comment(linker, "/EXPORT:midiOutGetDevCapsW=_FakemidiOutGetDevCapsW,@69")
#pragma comment(linker, "/EXPORT:midiOutGetErrorTextA=_FakemidiOutGetErrorTextA,@70")
#pragma comment(linker, "/EXPORT:midiOutGetErrorTextW=_FakemidiOutGetErrorTextW,@71")
#pragma comment(linker, "/EXPORT:midiOutGetID=_FakemidiOutGetID,@72")
#pragma comment(linker, "/EXPORT:midiOutGetNumDevs=_FakemidiOutGetNumDevs,@73")
#pragma comment(linker, "/EXPORT:midiOutGetVolume=_FakemidiOutGetVolume,@74")
#pragma comment(linker, "/EXPORT:midiOutLongMsg=_FakemidiOutLongMsg,@75")
#pragma comment(linker, "/EXPORT:midiOutMessage=_FakemidiOutMessage,@76")
#pragma comment(linker, "/EXPORT:midiOutOpen=_FakemidiOutOpen,@77")
#pragma comment(linker, "/EXPORT:midiOutPrepareHeader=_FakemidiOutPrepareHeader,@78")
#pragma comment(linker, "/EXPORT:midiOutReset=_FakemidiOutReset,@79")
#pragma comment(linker, "/EXPORT:midiOutSetVolume=_FakemidiOutSetVolume,@80")
#pragma comment(linker, "/EXPORT:midiOutShortMsg=_FakemidiOutShortMsg,@81")
#pragma comment(linker, "/EXPORT:midiOutUnprepareHeader=_FakemidiOutUnprepareHeader,@82")
#pragma comment(linker, "/EXPORT:midiStreamClose=_FakemidiStreamClose,@83")
#pragma comment(linker, "/EXPORT:midiStreamOpen=_FakemidiStreamOpen,@84")
#pragma comment(linker, "/EXPORT:midiStreamOut=_FakemidiStreamOut,@85")
#pragma comment(linker, "/EXPORT:midiStreamPause=_FakemidiStreamPause,@86")
#pragma comment(linker, "/EXPORT:midiStreamPosition=_FakemidiStreamPosition,@87")
#pragma comment(linker, "/EXPORT:midiStreamProperty=_FakemidiStreamProperty,@88")
#pragma comment(linker, "/EXPORT:midiStreamRestart=_FakemidiStreamRestart,@89")
#pragma comment(linker, "/EXPORT:midiStreamStop=_FakemidiStreamStop,@90")
#pragma comment(linker, "/EXPORT:mixerClose=_FakemixerClose,@91")
#pragma comment(linker, "/EXPORT:mixerGetControlDetailsA=_FakemixerGetControlDetailsA,@92")
#pragma comment(linker, "/EXPORT:mixerGetControlDetailsW=_FakemixerGetControlDetailsW,@93")
#pragma comment(linker, "/EXPORT:mixerGetDevCapsA=_FakemixerGetDevCapsA,@94")
#pragma comment(linker, "/EXPORT:mixerGetDevCapsW=_FakemixerGetDevCapsW,@95")
#pragma comment(linker, "/EXPORT:mixerGetID=_FakemixerGetID,@96")
#pragma comment(linker, "/EXPORT:mixerGetLineControlsA=_FakemixerGetLineControlsA,@97")
#pragma comment(linker, "/EXPORT:mixerGetLineControlsW=_FakemixerGetLineControlsW,@98")
#pragma comment(linker, "/EXPORT:mixerGetLineInfoA=_FakemixerGetLineInfoA,@99")
#pragma comment(linker, "/EXPORT:mixerGetLineInfoW=_FakemixerGetLineInfoW,@100")
#pragma comment(linker, "/EXPORT:mixerGetNumDevs=_FakemixerGetNumDevs,@101")
#pragma comment(linker, "/EXPORT:mixerMessage=_FakemixerMessage,@102")
#pragma comment(linker, "/EXPORT:mixerOpen=_FakemixerOpen,@103")
#pragma comment(linker, "/EXPORT:mixerSetControlDetails=_FakemixerSetControlDetails,@104")
#pragma comment(linker, "/EXPORT:mmDrvInstall=_FakemmDrvInstall,@105")
#pragma comment(linker, "/EXPORT:mmGetCurrentTask=_FakemmGetCurrentTask,@106")
#pragma comment(linker, "/EXPORT:mmTaskBlock=_FakemmTaskBlock,@107")
#pragma comment(linker, "/EXPORT:mmTaskCreate=_FakemmTaskCreate,@108")
#pragma comment(linker, "/EXPORT:mmTaskSignal=_FakemmTaskSignal,@109")
#pragma comment(linker, "/EXPORT:mmTaskYield=_FakemmTaskYield,@110")
#pragma comment(linker, "/EXPORT:mmioAdvance=_FakemmioAdvance,@111")
#pragma comment(linker, "/EXPORT:mmioAscend=_FakemmioAscend,@112")
#pragma comment(linker, "/EXPORT:mmioClose=_FakemmioClose,@113")
#pragma comment(linker, "/EXPORT:mmioCreateChunk=_FakemmioCreateChunk,@114")
#pragma comment(linker, "/EXPORT:mmioDescend=_FakemmioDescend,@115")
#pragma comment(linker, "/EXPORT:mmioFlush=_FakemmioFlush,@116")
#pragma comment(linker, "/EXPORT:mmioGetInfo=_FakemmioGetInfo,@117")
#pragma comment(linker, "/EXPORT:mmioInstallIOProcA=_FakemmioInstallIOProcA,@118")
#pragma comment(linker, "/EXPORT:mmioInstallIOProcW=_FakemmioInstallIOProcW,@119")
#pragma comment(linker, "/EXPORT:mmioOpenA=_FakemmioOpenA,@120")
#pragma comment(linker, "/EXPORT:mmioOpenW=_FakemmioOpenW,@121")
#pragma comment(linker, "/EXPORT:mmioRead=_FakemmioRead,@122")
#pragma comment(linker, "/EXPORT:mmioRenameA=_FakemmioRenameA,@123")
#pragma comment(linker, "/EXPORT:mmioRenameW=_FakemmioRenameW,@124")
#pragma comment(linker, "/EXPORT:mmioSeek=_FakemmioSeek,@125")
#pragma comment(linker, "/EXPORT:mmioSendMessage=_FakemmioSendMessage,@126")
#pragma comment(linker, "/EXPORT:mmioSetBuffer=_FakemmioSetBuffer,@127")
#pragma comment(linker, "/EXPORT:mmioSetInfo=_FakemmioSetInfo,@128")
#pragma comment(linker, "/EXPORT:mmioStringToFOURCCA=_FakemmioStringToFOURCCA,@129")
#pragma comment(linker, "/EXPORT:mmioStringToFOURCCW=_FakemmioStringToFOURCCW,@130")
#pragma comment(linker, "/EXPORT:mmioWrite=_FakemmioWrite,@131")
#pragma comment(linker, "/EXPORT:mmsystemGetVersion=_FakemmsystemGetVersion,@132")
#pragma comment(linker, "/EXPORT:sndPlaySoundA=_FakesndPlaySoundA,@133")
#pragma comment(linker, "/EXPORT:sndPlaySoundW=_FakesndPlaySoundW,@134")
#pragma comment(linker, "/EXPORT:timeBeginPeriod=_FaketimeBeginPeriod,@135")
#pragma comment(linker, "/EXPORT:timeEndPeriod=_FaketimeEndPeriod,@136")
#pragma comment(linker, "/EXPORT:timeGetDevCaps=_FaketimeGetDevCaps,@137")
#pragma comment(linker, "/EXPORT:timeGetSystemTime=_FaketimeGetSystemTime,@138")
#pragma comment(linker, "/EXPORT:timeGetTime=_FaketimeGetTime,@139")
#pragma comment(linker, "/EXPORT:timeKillEvent=_FaketimeKillEvent,@140")
#pragma comment(linker, "/EXPORT:timeSetEvent=_FaketimeSetEvent,@141")
#pragma comment(linker, "/EXPORT:waveInAddBuffer=_FakewaveInAddBuffer,@142")
#pragma comment(linker, "/EXPORT:waveInClose=_FakewaveInClose,@143")
#pragma comment(linker, "/EXPORT:waveInGetDevCapsA=_FakewaveInGetDevCapsA,@144")
#pragma comment(linker, "/EXPORT:waveInGetDevCapsW=_FakewaveInGetDevCapsW,@145")
#pragma comment(linker, "/EXPORT:waveInGetErrorTextA=_FakewaveInGetErrorTextA,@146")
#pragma comment(linker, "/EXPORT:waveInGetErrorTextW=_FakewaveInGetErrorTextW,@147")
#pragma comment(linker, "/EXPORT:waveInGetID=_FakewaveInGetID,@148")
#pragma comment(linker, "/EXPORT:waveInGetNumDevs=_FakewaveInGetNumDevs,@149")
#pragma comment(linker, "/EXPORT:waveInGetPosition=_FakewaveInGetPosition,@150")
#pragma comment(linker, "/EXPORT:waveInMessage=_FakewaveInMessage,@151")
#pragma comment(linker, "/EXPORT:waveInOpen=_FakewaveInOpen,@152")
#pragma comment(linker, "/EXPORT:waveInPrepareHeader=_FakewaveInPrepareHeader,@153")
#pragma comment(linker, "/EXPORT:waveInReset=_FakewaveInReset,@154")
#pragma comment(linker, "/EXPORT:waveInStart=_FakewaveInStart,@155")
#pragma comment(linker, "/EXPORT:waveInStop=_FakewaveInStop,@156")
#pragma comment(linker, "/EXPORT:waveInUnprepareHeader=_FakewaveInUnprepareHeader,@157")
#pragma comment(linker, "/EXPORT:waveOutBreakLoop=_FakewaveOutBreakLoop,@158")
#pragma comment(linker, "/EXPORT:waveOutClose=_FakewaveOutClose,@159")
#pragma comment(linker, "/EXPORT:waveOutGetDevCapsA=_FakewaveOutGetDevCapsA,@160")
#pragma comment(linker, "/EXPORT:waveOutGetDevCapsW=_FakewaveOutGetDevCapsW,@161")
#pragma comment(linker, "/EXPORT:waveOutGetErrorTextA=_FakewaveOutGetErrorTextA,@162")
#pragma comment(linker, "/EXPORT:waveOutGetErrorTextW=_FakewaveOutGetErrorTextW,@163")
#pragma comment(linker, "/EXPORT:waveOutGetID=_FakewaveOutGetID,@164")
#pragma comment(linker, "/EXPORT:waveOutGetNumDevs=_FakewaveOutGetNumDevs,@165")
#pragma comment(linker, "/EXPORT:waveOutGetPitch=_FakewaveOutGetPitch,@166")
#pragma comment(linker, "/EXPORT:waveOutGetPlaybackRate=_FakewaveOutGetPlaybackRate,@167")
#pragma comment(linker, "/EXPORT:waveOutGetPosition=_FakewaveOutGetPosition,@168")
#pragma comment(linker, "/EXPORT:waveOutGetVolume=_FakewaveOutGetVolume,@169")
#pragma comment(linker, "/EXPORT:waveOutMessage=_FakewaveOutMessage,@170")
#pragma comment(linker, "/EXPORT:waveOutOpen=_FakewaveOutOpen,@171")
#pragma comment(linker, "/EXPORT:waveOutPause=_FakewaveOutPause,@172")
#pragma comment(linker, "/EXPORT:waveOutPrepareHeader=_FakewaveOutPrepareHeader,@173")
#pragma comment(linker, "/EXPORT:waveOutReset=_FakewaveOutReset,@174")
#pragma comment(linker, "/EXPORT:waveOutRestart=_FakewaveOutRestart,@175")
#pragma comment(linker, "/EXPORT:waveOutSetPitch=_FakewaveOutSetPitch,@176")
#pragma comment(linker, "/EXPORT:waveOutSetPlaybackRate=_FakewaveOutSetPlaybackRate,@177")
#pragma comment(linker, "/EXPORT:waveOutSetVolume=_FakewaveOutSetVolume,@178")
#pragma comment(linker, "/EXPORT:waveOutUnprepareHeader=_FakewaveOutUnprepareHeader,@179")
#pragma comment(linker, "/EXPORT:waveOutWrite=_FakewaveOutWrite,@180")

PVOID pfnFakeCloseDriver;
PVOID pfnFakeDefDriverProc;
PVOID pfnFakeDriverCallback;
PVOID pfnFakeDrvGetModuleHandle;
PVOID pfnFakeGetDriverModuleHandle;
PVOID pfnFakeOpenDriver;
PVOID pfnFakePlaySound;
PVOID pfnFakePlaySoundA;
PVOID pfnFakePlaySoundW;
PVOID pfnFakeSendDriverMessage;
PVOID pfnFakeWOWAppExit;
PVOID pfnFakeauxGetDevCapsA;
PVOID pfnFakeauxGetDevCapsW;
PVOID pfnFakeauxGetNumDevs;
PVOID pfnFakeauxGetVolume;
PVOID pfnFakeauxOutMessage;
PVOID pfnFakeauxSetVolume;
PVOID pfnFakejoyConfigChanged;
PVOID pfnFakejoyGetDevCapsA;
PVOID pfnFakejoyGetDevCapsW;
PVOID pfnFakejoyGetNumDevs;
PVOID pfnFakejoyGetPos;
PVOID pfnFakejoyGetPosEx;
PVOID pfnFakejoyGetThreshold;
PVOID pfnFakejoyReleaseCapture;
PVOID pfnFakejoySetCapture;
PVOID pfnFakejoySetThreshold;
PVOID pfnFakemciDriverNotify;
PVOID pfnFakemciDriverYield;
PVOID pfnFakemciExecute;
PVOID pfnFakemciFreeCommandResource;
PVOID pfnFakemciGetCreatorTask;
PVOID pfnFakemciGetDeviceIDA;
PVOID pfnFakemciGetDeviceIDFromElementIDA;
PVOID pfnFakemciGetDeviceIDFromElementIDW;
PVOID pfnFakemciGetDeviceIDW;
PVOID pfnFakemciGetDriverData;
PVOID pfnFakemciGetErrorStringA;
PVOID pfnFakemciGetErrorStringW;
PVOID pfnFakemciGetYieldProc;
PVOID pfnFakemciLoadCommandResource;
PVOID pfnFakemciSendCommandA;
PVOID pfnFakemciSendCommandW;
PVOID pfnFakemciSendStringA;
PVOID pfnFakemciSendStringW;
PVOID pfnFakemciSetDriverData;
PVOID pfnFakemciSetYieldProc;
PVOID pfnFakemidiConnect;
PVOID pfnFakemidiDisconnect;
PVOID pfnFakemidiInAddBuffer;
PVOID pfnFakemidiInClose;
PVOID pfnFakemidiInGetDevCapsA;
PVOID pfnFakemidiInGetDevCapsW;
PVOID pfnFakemidiInGetErrorTextA;
PVOID pfnFakemidiInGetErrorTextW;
PVOID pfnFakemidiInGetID;
PVOID pfnFakemidiInGetNumDevs;
PVOID pfnFakemidiInMessage;
PVOID pfnFakemidiInOpen;
PVOID pfnFakemidiInPrepareHeader;
PVOID pfnFakemidiInReset;
PVOID pfnFakemidiInStart;
PVOID pfnFakemidiInStop;
PVOID pfnFakemidiInUnprepareHeader;
PVOID pfnFakemidiOutCacheDrumPatches;
PVOID pfnFakemidiOutCachePatches;
PVOID pfnFakemidiOutClose;
PVOID pfnFakemidiOutGetDevCapsA;
PVOID pfnFakemidiOutGetDevCapsW;
PVOID pfnFakemidiOutGetErrorTextA;
PVOID pfnFakemidiOutGetErrorTextW;
PVOID pfnFakemidiOutGetID;
PVOID pfnFakemidiOutGetNumDevs;
PVOID pfnFakemidiOutGetVolume;
PVOID pfnFakemidiOutLongMsg;
PVOID pfnFakemidiOutMessage;
PVOID pfnFakemidiOutOpen;
PVOID pfnFakemidiOutPrepareHeader;
PVOID pfnFakemidiOutReset;
PVOID pfnFakemidiOutSetVolume;
PVOID pfnFakemidiOutShortMsg;
PVOID pfnFakemidiOutUnprepareHeader;
PVOID pfnFakemidiStreamClose;
PVOID pfnFakemidiStreamOpen;
PVOID pfnFakemidiStreamOut;
PVOID pfnFakemidiStreamPause;
PVOID pfnFakemidiStreamPosition;
PVOID pfnFakemidiStreamProperty;
PVOID pfnFakemidiStreamRestart;
PVOID pfnFakemidiStreamStop;
PVOID pfnFakemixerClose;
PVOID pfnFakemixerGetControlDetailsA;
PVOID pfnFakemixerGetControlDetailsW;
PVOID pfnFakemixerGetDevCapsA;
PVOID pfnFakemixerGetDevCapsW;
PVOID pfnFakemixerGetID;
PVOID pfnFakemixerGetLineControlsA;
PVOID pfnFakemixerGetLineControlsW;
PVOID pfnFakemixerGetLineInfoA;
PVOID pfnFakemixerGetLineInfoW;
PVOID pfnFakemixerGetNumDevs;
PVOID pfnFakemixerMessage;
PVOID pfnFakemixerOpen;
PVOID pfnFakemixerSetControlDetails;
PVOID pfnFakemmDrvInstall;
PVOID pfnFakemmGetCurrentTask;
PVOID pfnFakemmTaskBlock;
PVOID pfnFakemmTaskCreate;
PVOID pfnFakemmTaskSignal;
PVOID pfnFakemmTaskYield;
PVOID pfnFakemmioAdvance;
PVOID pfnFakemmioAscend;
PVOID pfnFakemmioClose;
PVOID pfnFakemmioCreateChunk;
PVOID pfnFakemmioDescend;
PVOID pfnFakemmioFlush;
PVOID pfnFakemmioGetInfo;
PVOID pfnFakemmioInstallIOProcA;
PVOID pfnFakemmioInstallIOProcW;
PVOID pfnFakemmioOpenA;
PVOID pfnFakemmioOpenW;
PVOID pfnFakemmioRead;
PVOID pfnFakemmioRenameA;
PVOID pfnFakemmioRenameW;
PVOID pfnFakemmioSeek;
PVOID pfnFakemmioSendMessage;
PVOID pfnFakemmioSetBuffer;
PVOID pfnFakemmioSetInfo;
PVOID pfnFakemmioStringToFOURCCA;
PVOID pfnFakemmioStringToFOURCCW;
PVOID pfnFakemmioWrite;
PVOID pfnFakemmsystemGetVersion;
PVOID pfnFakesndPlaySoundA;
PVOID pfnFakesndPlaySoundW;
PVOID pfnFaketimeBeginPeriod;
PVOID pfnFaketimeEndPeriod;
PVOID pfnFaketimeGetDevCaps;
PVOID pfnFaketimeGetSystemTime;
PVOID pfnFaketimeGetTime;
PVOID pfnFaketimeKillEvent;
PVOID pfnFaketimeSetEvent;
PVOID pfnFakewaveInAddBuffer;
PVOID pfnFakewaveInClose;
PVOID pfnFakewaveInGetDevCapsA;
PVOID pfnFakewaveInGetDevCapsW;
PVOID pfnFakewaveInGetErrorTextA;
PVOID pfnFakewaveInGetErrorTextW;
PVOID pfnFakewaveInGetID;
PVOID pfnFakewaveInGetNumDevs;
PVOID pfnFakewaveInGetPosition;
PVOID pfnFakewaveInMessage;
PVOID pfnFakewaveInOpen;
PVOID pfnFakewaveInPrepareHeader;
PVOID pfnFakewaveInReset;
PVOID pfnFakewaveInStart;
PVOID pfnFakewaveInStop;
PVOID pfnFakewaveInUnprepareHeader;
PVOID pfnFakewaveOutBreakLoop;
PVOID pfnFakewaveOutClose;
PVOID pfnFakewaveOutGetDevCapsA;
PVOID pfnFakewaveOutGetDevCapsW;
PVOID pfnFakewaveOutGetErrorTextA;
PVOID pfnFakewaveOutGetErrorTextW;
PVOID pfnFakewaveOutGetID;
PVOID pfnFakewaveOutGetNumDevs;
PVOID pfnFakewaveOutGetPitch;
PVOID pfnFakewaveOutGetPlaybackRate;
PVOID pfnFakewaveOutGetPosition;
PVOID pfnFakewaveOutGetVolume;
PVOID pfnFakewaveOutMessage;
PVOID pfnFakewaveOutOpen;
PVOID pfnFakewaveOutPause;
PVOID pfnFakewaveOutPrepareHeader;
PVOID pfnFakewaveOutReset;
PVOID pfnFakewaveOutRestart;
PVOID pfnFakewaveOutSetPitch;
PVOID pfnFakewaveOutSetPlaybackRate;
PVOID pfnFakewaveOutSetVolume;
PVOID pfnFakewaveOutUnprepareHeader;
PVOID pfnFakewaveOutWrite;

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
	lstrcatW(folder, L"\\winmm.dll");
	g_hmRealDll = LoadLibraryW(folder);
	if (g_hmRealDll == NULL)
	{
		MessageBoxW(NULL, L"Load Real Dll Failed!", L"Proxy Dll", MB_OK);
		ExitProcess(0);
		return;
	}

    pfnFakeCloseDriver = GetAddress("CloseDriver");
    pfnFakeDefDriverProc = GetAddress("DefDriverProc");
    pfnFakeDriverCallback = GetAddress("DriverCallback");
    pfnFakeDrvGetModuleHandle = GetAddress("DrvGetModuleHandle");
    pfnFakeGetDriverModuleHandle = GetAddress("GetDriverModuleHandle");
    pfnFakeOpenDriver = GetAddress("OpenDriver");
    pfnFakePlaySound = GetAddress("PlaySound");
    pfnFakePlaySoundA = GetAddress("PlaySoundA");
    pfnFakePlaySoundW = GetAddress("PlaySoundW");
    pfnFakeSendDriverMessage = GetAddress("SendDriverMessage");
    pfnFakeWOWAppExit = GetAddress("WOWAppExit");
    pfnFakeauxGetDevCapsA = GetAddress("auxGetDevCapsA");
    pfnFakeauxGetDevCapsW = GetAddress("auxGetDevCapsW");
    pfnFakeauxGetNumDevs = GetAddress("auxGetNumDevs");
    pfnFakeauxGetVolume = GetAddress("auxGetVolume");
    pfnFakeauxOutMessage = GetAddress("auxOutMessage");
    pfnFakeauxSetVolume = GetAddress("auxSetVolume");
    pfnFakejoyConfigChanged = GetAddress("joyConfigChanged");
    pfnFakejoyGetDevCapsA = GetAddress("joyGetDevCapsA");
    pfnFakejoyGetDevCapsW = GetAddress("joyGetDevCapsW");
    pfnFakejoyGetNumDevs = GetAddress("joyGetNumDevs");
    pfnFakejoyGetPos = GetAddress("joyGetPos");
    pfnFakejoyGetPosEx = GetAddress("joyGetPosEx");
    pfnFakejoyGetThreshold = GetAddress("joyGetThreshold");
    pfnFakejoyReleaseCapture = GetAddress("joyReleaseCapture");
    pfnFakejoySetCapture = GetAddress("joySetCapture");
    pfnFakejoySetThreshold = GetAddress("joySetThreshold");
    pfnFakemciDriverNotify = GetAddress("mciDriverNotify");
    pfnFakemciDriverYield = GetAddress("mciDriverYield");
    pfnFakemciExecute = GetAddress("mciExecute");
    pfnFakemciFreeCommandResource = GetAddress("mciFreeCommandResource");
    pfnFakemciGetCreatorTask = GetAddress("mciGetCreatorTask");
    pfnFakemciGetDeviceIDA = GetAddress("mciGetDeviceIDA");
    pfnFakemciGetDeviceIDFromElementIDA = GetAddress("mciGetDeviceIDFromElementIDA");
    pfnFakemciGetDeviceIDFromElementIDW = GetAddress("mciGetDeviceIDFromElementIDW");
    pfnFakemciGetDeviceIDW = GetAddress("mciGetDeviceIDW");
    pfnFakemciGetDriverData = GetAddress("mciGetDriverData");
    pfnFakemciGetErrorStringA = GetAddress("mciGetErrorStringA");
    pfnFakemciGetErrorStringW = GetAddress("mciGetErrorStringW");
    pfnFakemciGetYieldProc = GetAddress("mciGetYieldProc");
    pfnFakemciLoadCommandResource = GetAddress("mciLoadCommandResource");
    pfnFakemciSendCommandA = GetAddress("mciSendCommandA");
    pfnFakemciSendCommandW = GetAddress("mciSendCommandW");
    pfnFakemciSendStringA = GetAddress("mciSendStringA");
    pfnFakemciSendStringW = GetAddress("mciSendStringW");
    pfnFakemciSetDriverData = GetAddress("mciSetDriverData");
    pfnFakemciSetYieldProc = GetAddress("mciSetYieldProc");
    pfnFakemidiConnect = GetAddress("midiConnect");
    pfnFakemidiDisconnect = GetAddress("midiDisconnect");
    pfnFakemidiInAddBuffer = GetAddress("midiInAddBuffer");
    pfnFakemidiInClose = GetAddress("midiInClose");
    pfnFakemidiInGetDevCapsA = GetAddress("midiInGetDevCapsA");
    pfnFakemidiInGetDevCapsW = GetAddress("midiInGetDevCapsW");
    pfnFakemidiInGetErrorTextA = GetAddress("midiInGetErrorTextA");
    pfnFakemidiInGetErrorTextW = GetAddress("midiInGetErrorTextW");
    pfnFakemidiInGetID = GetAddress("midiInGetID");
    pfnFakemidiInGetNumDevs = GetAddress("midiInGetNumDevs");
    pfnFakemidiInMessage = GetAddress("midiInMessage");
    pfnFakemidiInOpen = GetAddress("midiInOpen");
    pfnFakemidiInPrepareHeader = GetAddress("midiInPrepareHeader");
    pfnFakemidiInReset = GetAddress("midiInReset");
    pfnFakemidiInStart = GetAddress("midiInStart");
    pfnFakemidiInStop = GetAddress("midiInStop");
    pfnFakemidiInUnprepareHeader = GetAddress("midiInUnprepareHeader");
    pfnFakemidiOutCacheDrumPatches = GetAddress("midiOutCacheDrumPatches");
    pfnFakemidiOutCachePatches = GetAddress("midiOutCachePatches");
    pfnFakemidiOutClose = GetAddress("midiOutClose");
    pfnFakemidiOutGetDevCapsA = GetAddress("midiOutGetDevCapsA");
    pfnFakemidiOutGetDevCapsW = GetAddress("midiOutGetDevCapsW");
    pfnFakemidiOutGetErrorTextA = GetAddress("midiOutGetErrorTextA");
    pfnFakemidiOutGetErrorTextW = GetAddress("midiOutGetErrorTextW");
    pfnFakemidiOutGetID = GetAddress("midiOutGetID");
    pfnFakemidiOutGetNumDevs = GetAddress("midiOutGetNumDevs");
    pfnFakemidiOutGetVolume = GetAddress("midiOutGetVolume");
    pfnFakemidiOutLongMsg = GetAddress("midiOutLongMsg");
    pfnFakemidiOutMessage = GetAddress("midiOutMessage");
    pfnFakemidiOutOpen = GetAddress("midiOutOpen");
    pfnFakemidiOutPrepareHeader = GetAddress("midiOutPrepareHeader");
    pfnFakemidiOutReset = GetAddress("midiOutReset");
    pfnFakemidiOutSetVolume = GetAddress("midiOutSetVolume");
    pfnFakemidiOutShortMsg = GetAddress("midiOutShortMsg");
    pfnFakemidiOutUnprepareHeader = GetAddress("midiOutUnprepareHeader");
    pfnFakemidiStreamClose = GetAddress("midiStreamClose");
    pfnFakemidiStreamOpen = GetAddress("midiStreamOpen");
    pfnFakemidiStreamOut = GetAddress("midiStreamOut");
    pfnFakemidiStreamPause = GetAddress("midiStreamPause");
    pfnFakemidiStreamPosition = GetAddress("midiStreamPosition");
    pfnFakemidiStreamProperty = GetAddress("midiStreamProperty");
    pfnFakemidiStreamRestart = GetAddress("midiStreamRestart");
    pfnFakemidiStreamStop = GetAddress("midiStreamStop");
    pfnFakemixerClose = GetAddress("mixerClose");
    pfnFakemixerGetControlDetailsA = GetAddress("mixerGetControlDetailsA");
    pfnFakemixerGetControlDetailsW = GetAddress("mixerGetControlDetailsW");
    pfnFakemixerGetDevCapsA = GetAddress("mixerGetDevCapsA");
    pfnFakemixerGetDevCapsW = GetAddress("mixerGetDevCapsW");
    pfnFakemixerGetID = GetAddress("mixerGetID");
    pfnFakemixerGetLineControlsA = GetAddress("mixerGetLineControlsA");
    pfnFakemixerGetLineControlsW = GetAddress("mixerGetLineControlsW");
    pfnFakemixerGetLineInfoA = GetAddress("mixerGetLineInfoA");
    pfnFakemixerGetLineInfoW = GetAddress("mixerGetLineInfoW");
    pfnFakemixerGetNumDevs = GetAddress("mixerGetNumDevs");
    pfnFakemixerMessage = GetAddress("mixerMessage");
    pfnFakemixerOpen = GetAddress("mixerOpen");
    pfnFakemixerSetControlDetails = GetAddress("mixerSetControlDetails");
    pfnFakemmDrvInstall = GetAddress("mmDrvInstall");
    pfnFakemmGetCurrentTask = GetAddress("mmGetCurrentTask");
    pfnFakemmTaskBlock = GetAddress("mmTaskBlock");
    pfnFakemmTaskCreate = GetAddress("mmTaskCreate");
    pfnFakemmTaskSignal = GetAddress("mmTaskSignal");
    pfnFakemmTaskYield = GetAddress("mmTaskYield");
    pfnFakemmioAdvance = GetAddress("mmioAdvance");
    pfnFakemmioAscend = GetAddress("mmioAscend");
    pfnFakemmioClose = GetAddress("mmioClose");
    pfnFakemmioCreateChunk = GetAddress("mmioCreateChunk");
    pfnFakemmioDescend = GetAddress("mmioDescend");
    pfnFakemmioFlush = GetAddress("mmioFlush");
    pfnFakemmioGetInfo = GetAddress("mmioGetInfo");
    pfnFakemmioInstallIOProcA = GetAddress("mmioInstallIOProcA");
    pfnFakemmioInstallIOProcW = GetAddress("mmioInstallIOProcW");
    pfnFakemmioOpenA = GetAddress("mmioOpenA");
    pfnFakemmioOpenW = GetAddress("mmioOpenW");
    pfnFakemmioRead = GetAddress("mmioRead");
    pfnFakemmioRenameA = GetAddress("mmioRenameA");
    pfnFakemmioRenameW = GetAddress("mmioRenameW");
    pfnFakemmioSeek = GetAddress("mmioSeek");
    pfnFakemmioSendMessage = GetAddress("mmioSendMessage");
    pfnFakemmioSetBuffer = GetAddress("mmioSetBuffer");
    pfnFakemmioSetInfo = GetAddress("mmioSetInfo");
    pfnFakemmioStringToFOURCCA = GetAddress("mmioStringToFOURCCA");
    pfnFakemmioStringToFOURCCW = GetAddress("mmioStringToFOURCCW");
    pfnFakemmioWrite = GetAddress("mmioWrite");
    pfnFakemmsystemGetVersion = GetAddress("mmsystemGetVersion");
    pfnFakesndPlaySoundA = GetAddress("sndPlaySoundA");
    pfnFakesndPlaySoundW = GetAddress("sndPlaySoundW");
    pfnFaketimeBeginPeriod = GetAddress("timeBeginPeriod");
    pfnFaketimeEndPeriod = GetAddress("timeEndPeriod");
    pfnFaketimeGetDevCaps = GetAddress("timeGetDevCaps");
    pfnFaketimeGetSystemTime = GetAddress("timeGetSystemTime");
    pfnFaketimeGetTime = GetAddress("timeGetTime");
    pfnFaketimeKillEvent = GetAddress("timeKillEvent");
    pfnFaketimeSetEvent = GetAddress("timeSetEvent");
    pfnFakewaveInAddBuffer = GetAddress("waveInAddBuffer");
    pfnFakewaveInClose = GetAddress("waveInClose");
    pfnFakewaveInGetDevCapsA = GetAddress("waveInGetDevCapsA");
    pfnFakewaveInGetDevCapsW = GetAddress("waveInGetDevCapsW");
    pfnFakewaveInGetErrorTextA = GetAddress("waveInGetErrorTextA");
    pfnFakewaveInGetErrorTextW = GetAddress("waveInGetErrorTextW");
    pfnFakewaveInGetID = GetAddress("waveInGetID");
    pfnFakewaveInGetNumDevs = GetAddress("waveInGetNumDevs");
    pfnFakewaveInGetPosition = GetAddress("waveInGetPosition");
    pfnFakewaveInMessage = GetAddress("waveInMessage");
    pfnFakewaveInOpen = GetAddress("waveInOpen");
    pfnFakewaveInPrepareHeader = GetAddress("waveInPrepareHeader");
    pfnFakewaveInReset = GetAddress("waveInReset");
    pfnFakewaveInStart = GetAddress("waveInStart");
    pfnFakewaveInStop = GetAddress("waveInStop");
    pfnFakewaveInUnprepareHeader = GetAddress("waveInUnprepareHeader");
    pfnFakewaveOutBreakLoop = GetAddress("waveOutBreakLoop");
    pfnFakewaveOutClose = GetAddress("waveOutClose");
    pfnFakewaveOutGetDevCapsA = GetAddress("waveOutGetDevCapsA");
    pfnFakewaveOutGetDevCapsW = GetAddress("waveOutGetDevCapsW");
    pfnFakewaveOutGetErrorTextA = GetAddress("waveOutGetErrorTextA");
    pfnFakewaveOutGetErrorTextW = GetAddress("waveOutGetErrorTextW");
    pfnFakewaveOutGetID = GetAddress("waveOutGetID");
    pfnFakewaveOutGetNumDevs = GetAddress("waveOutGetNumDevs");
    pfnFakewaveOutGetPitch = GetAddress("waveOutGetPitch");
    pfnFakewaveOutGetPlaybackRate = GetAddress("waveOutGetPlaybackRate");
    pfnFakewaveOutGetPosition = GetAddress("waveOutGetPosition");
    pfnFakewaveOutGetVolume = GetAddress("waveOutGetVolume");
    pfnFakewaveOutMessage = GetAddress("waveOutMessage");
    pfnFakewaveOutOpen = GetAddress("waveOutOpen");
    pfnFakewaveOutPause = GetAddress("waveOutPause");
    pfnFakewaveOutPrepareHeader = GetAddress("waveOutPrepareHeader");
    pfnFakewaveOutReset = GetAddress("waveOutReset");
    pfnFakewaveOutRestart = GetAddress("waveOutRestart");
    pfnFakewaveOutSetPitch = GetAddress("waveOutSetPitch");
    pfnFakewaveOutSetPlaybackRate = GetAddress("waveOutSetPlaybackRate");
    pfnFakewaveOutSetVolume = GetAddress("waveOutSetVolume");
    pfnFakewaveOutUnprepareHeader = GetAddress("waveOutUnprepareHeader");
    pfnFakewaveOutWrite = GetAddress("waveOutWrite");
}

extern "C" __declspec(naked) void __cdecl FakeCloseDriver(void)
{
	__asm jmp pfnFakeCloseDriver;
}

extern "C" __declspec(naked) void __cdecl FakeDefDriverProc(void)
{
	__asm jmp pfnFakeDefDriverProc;
}

extern "C" __declspec(naked) void __cdecl FakeDriverCallback(void)
{
	__asm jmp pfnFakeDriverCallback;
}

extern "C" __declspec(naked) void __cdecl FakeDrvGetModuleHandle(void)
{
	__asm jmp pfnFakeDrvGetModuleHandle;
}

extern "C" __declspec(naked) void __cdecl FakeGetDriverModuleHandle(void)
{
	__asm jmp pfnFakeGetDriverModuleHandle;
}

extern "C" __declspec(naked) void __cdecl FakeOpenDriver(void)
{
	__asm jmp pfnFakeOpenDriver;
}

extern "C" __declspec(naked) void __cdecl FakePlaySound(void)
{
	__asm jmp pfnFakePlaySound;
}

extern "C" __declspec(naked) void __cdecl FakePlaySoundA(void)
{
	__asm jmp pfnFakePlaySoundA;
}

extern "C" __declspec(naked) void __cdecl FakePlaySoundW(void)
{
	__asm jmp pfnFakePlaySoundW;
}

extern "C" __declspec(naked) void __cdecl FakeSendDriverMessage(void)
{
	__asm jmp pfnFakeSendDriverMessage;
}

extern "C" __declspec(naked) void __cdecl FakeWOWAppExit(void)
{
	__asm jmp pfnFakeWOWAppExit;
}

extern "C" __declspec(naked) void __cdecl FakeauxGetDevCapsA(void)
{
	__asm jmp pfnFakeauxGetDevCapsA;
}

extern "C" __declspec(naked) void __cdecl FakeauxGetDevCapsW(void)
{
	__asm jmp pfnFakeauxGetDevCapsW;
}

extern "C" __declspec(naked) void __cdecl FakeauxGetNumDevs(void)
{
	__asm jmp pfnFakeauxGetNumDevs;
}

extern "C" __declspec(naked) void __cdecl FakeauxGetVolume(void)
{
	__asm jmp pfnFakeauxGetVolume;
}

extern "C" __declspec(naked) void __cdecl FakeauxOutMessage(void)
{
	__asm jmp pfnFakeauxOutMessage;
}

extern "C" __declspec(naked) void __cdecl FakeauxSetVolume(void)
{
	__asm jmp pfnFakeauxSetVolume;
}

extern "C" __declspec(naked) void __cdecl FakejoyConfigChanged(void)
{
	__asm jmp pfnFakejoyConfigChanged;
}

extern "C" __declspec(naked) void __cdecl FakejoyGetDevCapsA(void)
{
	__asm jmp pfnFakejoyGetDevCapsA;
}

extern "C" __declspec(naked) void __cdecl FakejoyGetDevCapsW(void)
{
	__asm jmp pfnFakejoyGetDevCapsW;
}

extern "C" __declspec(naked) void __cdecl FakejoyGetNumDevs(void)
{
	__asm jmp pfnFakejoyGetNumDevs;
}

extern "C" __declspec(naked) void __cdecl FakejoyGetPos(void)
{
	__asm jmp pfnFakejoyGetPos;
}

extern "C" __declspec(naked) void __cdecl FakejoyGetPosEx(void)
{
	__asm jmp pfnFakejoyGetPosEx;
}

extern "C" __declspec(naked) void __cdecl FakejoyGetThreshold(void)
{
	__asm jmp pfnFakejoyGetThreshold;
}

extern "C" __declspec(naked) void __cdecl FakejoyReleaseCapture(void)
{
	__asm jmp pfnFakejoyReleaseCapture;
}

extern "C" __declspec(naked) void __cdecl FakejoySetCapture(void)
{
	__asm jmp pfnFakejoySetCapture;
}

extern "C" __declspec(naked) void __cdecl FakejoySetThreshold(void)
{
	__asm jmp pfnFakejoySetThreshold;
}

extern "C" __declspec(naked) void __cdecl FakemciDriverNotify(void)
{
	__asm jmp pfnFakemciDriverNotify;
}

extern "C" __declspec(naked) void __cdecl FakemciDriverYield(void)
{
	__asm jmp pfnFakemciDriverYield;
}

extern "C" __declspec(naked) void __cdecl FakemciExecute(void)
{
	__asm jmp pfnFakemciExecute;
}

extern "C" __declspec(naked) void __cdecl FakemciFreeCommandResource(void)
{
	__asm jmp pfnFakemciFreeCommandResource;
}

extern "C" __declspec(naked) void __cdecl FakemciGetCreatorTask(void)
{
	__asm jmp pfnFakemciGetCreatorTask;
}

extern "C" __declspec(naked) void __cdecl FakemciGetDeviceIDA(void)
{
	__asm jmp pfnFakemciGetDeviceIDA;
}

extern "C" __declspec(naked) void __cdecl FakemciGetDeviceIDFromElementIDA(void)
{
	__asm jmp pfnFakemciGetDeviceIDFromElementIDA;
}

extern "C" __declspec(naked) void __cdecl FakemciGetDeviceIDFromElementIDW(void)
{
	__asm jmp pfnFakemciGetDeviceIDFromElementIDW;
}

extern "C" __declspec(naked) void __cdecl FakemciGetDeviceIDW(void)
{
	__asm jmp pfnFakemciGetDeviceIDW;
}

extern "C" __declspec(naked) void __cdecl FakemciGetDriverData(void)
{
	__asm jmp pfnFakemciGetDriverData;
}

extern "C" __declspec(naked) void __cdecl FakemciGetErrorStringA(void)
{
	__asm jmp pfnFakemciGetErrorStringA;
}

extern "C" __declspec(naked) void __cdecl FakemciGetErrorStringW(void)
{
	__asm jmp pfnFakemciGetErrorStringW;
}

extern "C" __declspec(naked) void __cdecl FakemciGetYieldProc(void)
{
	__asm jmp pfnFakemciGetYieldProc;
}

extern "C" __declspec(naked) void __cdecl FakemciLoadCommandResource(void)
{
	__asm jmp pfnFakemciLoadCommandResource;
}

extern "C" __declspec(naked) void __cdecl FakemciSendCommandA(void)
{
	__asm jmp pfnFakemciSendCommandA;
}

extern "C" __declspec(naked) void __cdecl FakemciSendCommandW(void)
{
	__asm jmp pfnFakemciSendCommandW;
}

extern "C" __declspec(naked) void __cdecl FakemciSendStringA(void)
{
	__asm jmp pfnFakemciSendStringA;
}

extern "C" __declspec(naked) void __cdecl FakemciSendStringW(void)
{
	__asm jmp pfnFakemciSendStringW;
}

extern "C" __declspec(naked) void __cdecl FakemciSetDriverData(void)
{
	__asm jmp pfnFakemciSetDriverData;
}

extern "C" __declspec(naked) void __cdecl FakemciSetYieldProc(void)
{
	__asm jmp pfnFakemciSetYieldProc;
}

extern "C" __declspec(naked) void __cdecl FakemidiConnect(void)
{
	__asm jmp pfnFakemidiConnect;
}

extern "C" __declspec(naked) void __cdecl FakemidiDisconnect(void)
{
	__asm jmp pfnFakemidiDisconnect;
}

extern "C" __declspec(naked) void __cdecl FakemidiInAddBuffer(void)
{
	__asm jmp pfnFakemidiInAddBuffer;
}

extern "C" __declspec(naked) void __cdecl FakemidiInClose(void)
{
	__asm jmp pfnFakemidiInClose;
}

extern "C" __declspec(naked) void __cdecl FakemidiInGetDevCapsA(void)
{
	__asm jmp pfnFakemidiInGetDevCapsA;
}

extern "C" __declspec(naked) void __cdecl FakemidiInGetDevCapsW(void)
{
	__asm jmp pfnFakemidiInGetDevCapsW;
}

extern "C" __declspec(naked) void __cdecl FakemidiInGetErrorTextA(void)
{
	__asm jmp pfnFakemidiInGetErrorTextA;
}

extern "C" __declspec(naked) void __cdecl FakemidiInGetErrorTextW(void)
{
	__asm jmp pfnFakemidiInGetErrorTextW;
}

extern "C" __declspec(naked) void __cdecl FakemidiInGetID(void)
{
	__asm jmp pfnFakemidiInGetID;
}

extern "C" __declspec(naked) void __cdecl FakemidiInGetNumDevs(void)
{
	__asm jmp pfnFakemidiInGetNumDevs;
}

extern "C" __declspec(naked) void __cdecl FakemidiInMessage(void)
{
	__asm jmp pfnFakemidiInMessage;
}

extern "C" __declspec(naked) void __cdecl FakemidiInOpen(void)
{
	__asm jmp pfnFakemidiInOpen;
}

extern "C" __declspec(naked) void __cdecl FakemidiInPrepareHeader(void)
{
	__asm jmp pfnFakemidiInPrepareHeader;
}

extern "C" __declspec(naked) void __cdecl FakemidiInReset(void)
{
	__asm jmp pfnFakemidiInReset;
}

extern "C" __declspec(naked) void __cdecl FakemidiInStart(void)
{
	__asm jmp pfnFakemidiInStart;
}

extern "C" __declspec(naked) void __cdecl FakemidiInStop(void)
{
	__asm jmp pfnFakemidiInStop;
}

extern "C" __declspec(naked) void __cdecl FakemidiInUnprepareHeader(void)
{
	__asm jmp pfnFakemidiInUnprepareHeader;
}

extern "C" __declspec(naked) void __cdecl FakemidiOutCacheDrumPatches(void)
{
	__asm jmp pfnFakemidiOutCacheDrumPatches;
}

extern "C" __declspec(naked) void __cdecl FakemidiOutCachePatches(void)
{
	__asm jmp pfnFakemidiOutCachePatches;
}

extern "C" __declspec(naked) void __cdecl FakemidiOutClose(void)
{
	__asm jmp pfnFakemidiOutClose;
}

extern "C" __declspec(naked) void __cdecl FakemidiOutGetDevCapsA(void)
{
	__asm jmp pfnFakemidiOutGetDevCapsA;
}

extern "C" __declspec(naked) void __cdecl FakemidiOutGetDevCapsW(void)
{
	__asm jmp pfnFakemidiOutGetDevCapsW;
}

extern "C" __declspec(naked) void __cdecl FakemidiOutGetErrorTextA(void)
{
	__asm jmp pfnFakemidiOutGetErrorTextA;
}

extern "C" __declspec(naked) void __cdecl FakemidiOutGetErrorTextW(void)
{
	__asm jmp pfnFakemidiOutGetErrorTextW;
}

extern "C" __declspec(naked) void __cdecl FakemidiOutGetID(void)
{
	__asm jmp pfnFakemidiOutGetID;
}

extern "C" __declspec(naked) void __cdecl FakemidiOutGetNumDevs(void)
{
	__asm jmp pfnFakemidiOutGetNumDevs;
}

extern "C" __declspec(naked) void __cdecl FakemidiOutGetVolume(void)
{
	__asm jmp pfnFakemidiOutGetVolume;
}

extern "C" __declspec(naked) void __cdecl FakemidiOutLongMsg(void)
{
	__asm jmp pfnFakemidiOutLongMsg;
}

extern "C" __declspec(naked) void __cdecl FakemidiOutMessage(void)
{
	__asm jmp pfnFakemidiOutMessage;
}

extern "C" __declspec(naked) void __cdecl FakemidiOutOpen(void)
{
	__asm jmp pfnFakemidiOutOpen;
}

extern "C" __declspec(naked) void __cdecl FakemidiOutPrepareHeader(void)
{
	__asm jmp pfnFakemidiOutPrepareHeader;
}

extern "C" __declspec(naked) void __cdecl FakemidiOutReset(void)
{
	__asm jmp pfnFakemidiOutReset;
}

extern "C" __declspec(naked) void __cdecl FakemidiOutSetVolume(void)
{
	__asm jmp pfnFakemidiOutSetVolume;
}

extern "C" __declspec(naked) void __cdecl FakemidiOutShortMsg(void)
{
	__asm jmp pfnFakemidiOutShortMsg;
}

extern "C" __declspec(naked) void __cdecl FakemidiOutUnprepareHeader(void)
{
	__asm jmp pfnFakemidiOutUnprepareHeader;
}

extern "C" __declspec(naked) void __cdecl FakemidiStreamClose(void)
{
	__asm jmp pfnFakemidiStreamClose;
}

extern "C" __declspec(naked) void __cdecl FakemidiStreamOpen(void)
{
	__asm jmp pfnFakemidiStreamOpen;
}

extern "C" __declspec(naked) void __cdecl FakemidiStreamOut(void)
{
	__asm jmp pfnFakemidiStreamOut;
}

extern "C" __declspec(naked) void __cdecl FakemidiStreamPause(void)
{
	__asm jmp pfnFakemidiStreamPause;
}

extern "C" __declspec(naked) void __cdecl FakemidiStreamPosition(void)
{
	__asm jmp pfnFakemidiStreamPosition;
}

extern "C" __declspec(naked) void __cdecl FakemidiStreamProperty(void)
{
	__asm jmp pfnFakemidiStreamProperty;
}

extern "C" __declspec(naked) void __cdecl FakemidiStreamRestart(void)
{
	__asm jmp pfnFakemidiStreamRestart;
}

extern "C" __declspec(naked) void __cdecl FakemidiStreamStop(void)
{
	__asm jmp pfnFakemidiStreamStop;
}

extern "C" __declspec(naked) void __cdecl FakemixerClose(void)
{
	__asm jmp pfnFakemixerClose;
}

extern "C" __declspec(naked) void __cdecl FakemixerGetControlDetailsA(void)
{
	__asm jmp pfnFakemixerGetControlDetailsA;
}

extern "C" __declspec(naked) void __cdecl FakemixerGetControlDetailsW(void)
{
	__asm jmp pfnFakemixerGetControlDetailsW;
}

extern "C" __declspec(naked) void __cdecl FakemixerGetDevCapsA(void)
{
	__asm jmp pfnFakemixerGetDevCapsA;
}

extern "C" __declspec(naked) void __cdecl FakemixerGetDevCapsW(void)
{
	__asm jmp pfnFakemixerGetDevCapsW;
}

extern "C" __declspec(naked) void __cdecl FakemixerGetID(void)
{
	__asm jmp pfnFakemixerGetID;
}

extern "C" __declspec(naked) void __cdecl FakemixerGetLineControlsA(void)
{
	__asm jmp pfnFakemixerGetLineControlsA;
}

extern "C" __declspec(naked) void __cdecl FakemixerGetLineControlsW(void)
{
	__asm jmp pfnFakemixerGetLineControlsW;
}

extern "C" __declspec(naked) void __cdecl FakemixerGetLineInfoA(void)
{
	__asm jmp pfnFakemixerGetLineInfoA;
}

extern "C" __declspec(naked) void __cdecl FakemixerGetLineInfoW(void)
{
	__asm jmp pfnFakemixerGetLineInfoW;
}

extern "C" __declspec(naked) void __cdecl FakemixerGetNumDevs(void)
{
	__asm jmp pfnFakemixerGetNumDevs;
}

extern "C" __declspec(naked) void __cdecl FakemixerMessage(void)
{
	__asm jmp pfnFakemixerMessage;
}

extern "C" __declspec(naked) void __cdecl FakemixerOpen(void)
{
	__asm jmp pfnFakemixerOpen;
}

extern "C" __declspec(naked) void __cdecl FakemixerSetControlDetails(void)
{
	__asm jmp pfnFakemixerSetControlDetails;
}

extern "C" __declspec(naked) void __cdecl FakemmDrvInstall(void)
{
	__asm jmp pfnFakemmDrvInstall;
}

extern "C" __declspec(naked) void __cdecl FakemmGetCurrentTask(void)
{
	__asm jmp pfnFakemmGetCurrentTask;
}

extern "C" __declspec(naked) void __cdecl FakemmTaskBlock(void)
{
	__asm jmp pfnFakemmTaskBlock;
}

extern "C" __declspec(naked) void __cdecl FakemmTaskCreate(void)
{
	__asm jmp pfnFakemmTaskCreate;
}

extern "C" __declspec(naked) void __cdecl FakemmTaskSignal(void)
{
	__asm jmp pfnFakemmTaskSignal;
}

extern "C" __declspec(naked) void __cdecl FakemmTaskYield(void)
{
	__asm jmp pfnFakemmTaskYield;
}

extern "C" __declspec(naked) void __cdecl FakemmioAdvance(void)
{
	__asm jmp pfnFakemmioAdvance;
}

extern "C" __declspec(naked) void __cdecl FakemmioAscend(void)
{
	__asm jmp pfnFakemmioAscend;
}

extern "C" __declspec(naked) void __cdecl FakemmioClose(void)
{
	__asm jmp pfnFakemmioClose;
}

extern "C" __declspec(naked) void __cdecl FakemmioCreateChunk(void)
{
	__asm jmp pfnFakemmioCreateChunk;
}

extern "C" __declspec(naked) void __cdecl FakemmioDescend(void)
{
	__asm jmp pfnFakemmioDescend;
}

extern "C" __declspec(naked) void __cdecl FakemmioFlush(void)
{
	__asm jmp pfnFakemmioFlush;
}

extern "C" __declspec(naked) void __cdecl FakemmioGetInfo(void)
{
	__asm jmp pfnFakemmioGetInfo;
}

extern "C" __declspec(naked) void __cdecl FakemmioInstallIOProcA(void)
{
	__asm jmp pfnFakemmioInstallIOProcA;
}

extern "C" __declspec(naked) void __cdecl FakemmioInstallIOProcW(void)
{
	__asm jmp pfnFakemmioInstallIOProcW;
}

extern "C" __declspec(naked) void __cdecl FakemmioOpenA(void)
{
	__asm jmp pfnFakemmioOpenA;
}

extern "C" __declspec(naked) void __cdecl FakemmioOpenW(void)
{
	__asm jmp pfnFakemmioOpenW;
}

extern "C" __declspec(naked) void __cdecl FakemmioRead(void)
{
	__asm jmp pfnFakemmioRead;
}

extern "C" __declspec(naked) void __cdecl FakemmioRenameA(void)
{
	__asm jmp pfnFakemmioRenameA;
}

extern "C" __declspec(naked) void __cdecl FakemmioRenameW(void)
{
	__asm jmp pfnFakemmioRenameW;
}

extern "C" __declspec(naked) void __cdecl FakemmioSeek(void)
{
	__asm jmp pfnFakemmioSeek;
}

extern "C" __declspec(naked) void __cdecl FakemmioSendMessage(void)
{
	__asm jmp pfnFakemmioSendMessage;
}

extern "C" __declspec(naked) void __cdecl FakemmioSetBuffer(void)
{
	__asm jmp pfnFakemmioSetBuffer;
}

extern "C" __declspec(naked) void __cdecl FakemmioSetInfo(void)
{
	__asm jmp pfnFakemmioSetInfo;
}

extern "C" __declspec(naked) void __cdecl FakemmioStringToFOURCCA(void)
{
	__asm jmp pfnFakemmioStringToFOURCCA;
}

extern "C" __declspec(naked) void __cdecl FakemmioStringToFOURCCW(void)
{
	__asm jmp pfnFakemmioStringToFOURCCW;
}

extern "C" __declspec(naked) void __cdecl FakemmioWrite(void)
{
	__asm jmp pfnFakemmioWrite;
}

extern "C" __declspec(naked) void __cdecl FakemmsystemGetVersion(void)
{
	__asm jmp pfnFakemmsystemGetVersion;
}

extern "C" __declspec(naked) void __cdecl FakesndPlaySoundA(void)
{
	__asm jmp pfnFakesndPlaySoundA;
}

extern "C" __declspec(naked) void __cdecl FakesndPlaySoundW(void)
{
	__asm jmp pfnFakesndPlaySoundW;
}

extern "C" __declspec(naked) void __cdecl FaketimeBeginPeriod(void)
{
	__asm jmp pfnFaketimeBeginPeriod;
}

extern "C" __declspec(naked) void __cdecl FaketimeEndPeriod(void)
{
	__asm jmp pfnFaketimeEndPeriod;
}

extern "C" __declspec(naked) void __cdecl FaketimeGetDevCaps(void)
{
	__asm jmp pfnFaketimeGetDevCaps;
}

extern "C" __declspec(naked) void __cdecl FaketimeGetSystemTime(void)
{
	__asm jmp pfnFaketimeGetSystemTime;
}

extern "C" __declspec(naked) void __cdecl FaketimeGetTime(void)
{
	__asm jmp pfnFaketimeGetTime;
}

extern "C" __declspec(naked) void __cdecl FaketimeKillEvent(void)
{
	__asm jmp pfnFaketimeKillEvent;
}

extern "C" __declspec(naked) void __cdecl FaketimeSetEvent(void)
{
	__asm jmp pfnFaketimeSetEvent;
}

extern "C" __declspec(naked) void __cdecl FakewaveInAddBuffer(void)
{
	__asm jmp pfnFakewaveInAddBuffer;
}

extern "C" __declspec(naked) void __cdecl FakewaveInClose(void)
{
	__asm jmp pfnFakewaveInClose;
}

extern "C" __declspec(naked) void __cdecl FakewaveInGetDevCapsA(void)
{
	__asm jmp pfnFakewaveInGetDevCapsA;
}

extern "C" __declspec(naked) void __cdecl FakewaveInGetDevCapsW(void)
{
	__asm jmp pfnFakewaveInGetDevCapsW;
}

extern "C" __declspec(naked) void __cdecl FakewaveInGetErrorTextA(void)
{
	__asm jmp pfnFakewaveInGetErrorTextA;
}

extern "C" __declspec(naked) void __cdecl FakewaveInGetErrorTextW(void)
{
	__asm jmp pfnFakewaveInGetErrorTextW;
}

extern "C" __declspec(naked) void __cdecl FakewaveInGetID(void)
{
	__asm jmp pfnFakewaveInGetID;
}

extern "C" __declspec(naked) void __cdecl FakewaveInGetNumDevs(void)
{
	__asm jmp pfnFakewaveInGetNumDevs;
}

extern "C" __declspec(naked) void __cdecl FakewaveInGetPosition(void)
{
	__asm jmp pfnFakewaveInGetPosition;
}

extern "C" __declspec(naked) void __cdecl FakewaveInMessage(void)
{
	__asm jmp pfnFakewaveInMessage;
}

extern "C" __declspec(naked) void __cdecl FakewaveInOpen(void)
{
	__asm jmp pfnFakewaveInOpen;
}

extern "C" __declspec(naked) void __cdecl FakewaveInPrepareHeader(void)
{
	__asm jmp pfnFakewaveInPrepareHeader;
}

extern "C" __declspec(naked) void __cdecl FakewaveInReset(void)
{
	__asm jmp pfnFakewaveInReset;
}

extern "C" __declspec(naked) void __cdecl FakewaveInStart(void)
{
	__asm jmp pfnFakewaveInStart;
}

extern "C" __declspec(naked) void __cdecl FakewaveInStop(void)
{
	__asm jmp pfnFakewaveInStop;
}

extern "C" __declspec(naked) void __cdecl FakewaveInUnprepareHeader(void)
{
	__asm jmp pfnFakewaveInUnprepareHeader;
}

extern "C" __declspec(naked) void __cdecl FakewaveOutBreakLoop(void)
{
	__asm jmp pfnFakewaveOutBreakLoop;
}

extern "C" __declspec(naked) void __cdecl FakewaveOutClose(void)
{
	__asm jmp pfnFakewaveOutClose;
}

extern "C" __declspec(naked) void __cdecl FakewaveOutGetDevCapsA(void)
{
	__asm jmp pfnFakewaveOutGetDevCapsA;
}

extern "C" __declspec(naked) void __cdecl FakewaveOutGetDevCapsW(void)
{
	__asm jmp pfnFakewaveOutGetDevCapsW;
}

extern "C" __declspec(naked) void __cdecl FakewaveOutGetErrorTextA(void)
{
	__asm jmp pfnFakewaveOutGetErrorTextA;
}

extern "C" __declspec(naked) void __cdecl FakewaveOutGetErrorTextW(void)
{
	__asm jmp pfnFakewaveOutGetErrorTextW;
}

extern "C" __declspec(naked) void __cdecl FakewaveOutGetID(void)
{
	__asm jmp pfnFakewaveOutGetID;
}

extern "C" __declspec(naked) void __cdecl FakewaveOutGetNumDevs(void)
{
	__asm jmp pfnFakewaveOutGetNumDevs;
}

extern "C" __declspec(naked) void __cdecl FakewaveOutGetPitch(void)
{
	__asm jmp pfnFakewaveOutGetPitch;
}

extern "C" __declspec(naked) void __cdecl FakewaveOutGetPlaybackRate(void)
{
	__asm jmp pfnFakewaveOutGetPlaybackRate;
}

extern "C" __declspec(naked) void __cdecl FakewaveOutGetPosition(void)
{
	__asm jmp pfnFakewaveOutGetPosition;
}

extern "C" __declspec(naked) void __cdecl FakewaveOutGetVolume(void)
{
	__asm jmp pfnFakewaveOutGetVolume;
}

extern "C" __declspec(naked) void __cdecl FakewaveOutMessage(void)
{
	__asm jmp pfnFakewaveOutMessage;
}

extern "C" __declspec(naked) void __cdecl FakewaveOutOpen(void)
{
	__asm jmp pfnFakewaveOutOpen;
}

extern "C" __declspec(naked) void __cdecl FakewaveOutPause(void)
{
	__asm jmp pfnFakewaveOutPause;
}

extern "C" __declspec(naked) void __cdecl FakewaveOutPrepareHeader(void)
{
	__asm jmp pfnFakewaveOutPrepareHeader;
}

extern "C" __declspec(naked) void __cdecl FakewaveOutReset(void)
{
	__asm jmp pfnFakewaveOutReset;
}

extern "C" __declspec(naked) void __cdecl FakewaveOutRestart(void)
{
	__asm jmp pfnFakewaveOutRestart;
}

extern "C" __declspec(naked) void __cdecl FakewaveOutSetPitch(void)
{
	__asm jmp pfnFakewaveOutSetPitch;
}

extern "C" __declspec(naked) void __cdecl FakewaveOutSetPlaybackRate(void)
{
	__asm jmp pfnFakewaveOutSetPlaybackRate;
}

extern "C" __declspec(naked) void __cdecl FakewaveOutSetVolume(void)
{
	__asm jmp pfnFakewaveOutSetVolume;
}

extern "C" __declspec(naked) void __cdecl FakewaveOutUnprepareHeader(void)
{
	__asm jmp pfnFakewaveOutUnprepareHeader;
}

extern "C" __declspec(naked) void __cdecl FakewaveOutWrite(void)
{
	__asm jmp pfnFakewaveOutWrite;
}