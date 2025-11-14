// 函数: sub_5cb5b0
// 地址: 0x5cb5b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (sub_402680("GetMixerNumof", arg1) != 0)
    return sub_5cb8e0

if (sub_402680("GetMixerName", arg1) != 0)
    return sub_5cb900

if (sub_402680("GetMixerVolume", arg1) != 0)
    return sub_5cb920

if (sub_402680("GetMixerDefaultVolume", arg1) != 0)
    return sub_5cb980

if (sub_402680("GetMixerMute", arg1) != 0)
    return sub_5cb9e0

if (sub_402680("SetMixerName", arg1) != 0)
    return sub_5cba00

if (sub_402680("SetMixerVolume", arg1) != 0)
    return sub_5cba10

if (sub_402680("SetMixerMute", arg1) != 0)
    return sub_5cba70

if (sub_402680("GetGameVersion", arg1) != 0)
    return sub_5cbad0

if (sub_402680("GetGameName", arg1) != 0)
    return sub_5cbbf0

if (sub_402680("IsFullScreen", arg1) != 0)
    return sub_5cbaf0

if (sub_402680("ChangeNormalScreen", arg1) != 0)
    return sub_5cbb10

if (sub_402680("ChangeFullScreen", arg1) != 0)
    return sub_5cbb30

if (sub_402680("InitMainWindowPosAndSize", arg1) != 0)
    return sub_5cbb50

if (sub_402680("UpdateView", arg1) != 0)
    return sub_5cbb70

if (sub_402680("GetViewWidth", arg1) != 0)
    return sub_5cbb90

if (sub_402680("GetViewHeight", arg1) != 0)
    return sub_5cbbb0

if (sub_402680("SetUsePower2Texture", arg1) != 0)
    return sub_5cbc40

if (sub_402680("GetUsePower2Texture", arg1) != 0)
    return sub_5cbc60

if (sub_402680("SetAntiAliasingMode", arg1) != 0)
    return sub_5cbc70

if (sub_402680("GetAntiAliasingMode", arg1) != 0)
    return sub_5cbca0

if (sub_402680("SetWaitVSyncMode", arg1) != 0)
    return sub_5cbce0

if (sub_402680("GetWaitVSyncMode", arg1) != 0)
    return sub_5cbd10

if (sub_402680("SetWindowSetting", arg1) != 0)
    return sub_5cbd60

if (sub_402680("GetWindowSetting", arg1) != 0)
    return sub_5cbda0

if (sub_402680("SetMouseCursorConfig", arg1) != 0)
    return sub_5cbde0

if (sub_402680("GetMouseCursorConfig", arg1) != 0)
    return sub_5cbe20

if (sub_402680("GetGameFolderPath", arg1) != 0)
    return sub_5cbe60

if (sub_402680("RestrainScreensaver", arg1) != 0)
    return sub_5cbbd0

if (sub_402680("GetDate", arg1) != 0)
    return sub_5cbef0

if (sub_402680("GetTime", arg1) != 0)
    return sub_5cbf60

if (sub_402680("IsResetOnce", arg1) != 0)
    return sub_5cc010

if (sub_402680("OpenPlayingManual", arg1) != 0)
    return j_sub_5cb0a0

if (sub_402680("IsExistPlayingManual", arg1) != 0)
    return sub_5cbfd0

if (sub_402680("IsExistSystemMessage", arg1) != 0)
    return sub_5cbfe0

if (sub_402680("PopSystemMessage", arg1) != 0)
    return sub_5cc000

if (sub_402680("Debug_GetUseVideoMemorySize", arg1) != 0)
    return 0x5cc040

uint32_t eax_75 = zx.d(sub_402680("Rance0123456789", arg1))
int32_t eax_76 = neg.d(eax_75)
return sbb.d(eax_76, eax_76, eax_75 != 0) & sub_5cc050
