// 函数: sub_5d9c80
// 地址: 0x5d9c80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (sub_402680("SetGlobalFocus", arg1) != 0)
    return sub_5d9fb0

if (sub_402680("Music_IsExist", arg1) != 0)
    return sub_5da000

if (sub_402680("Music_Prepare", arg1) != 0)
    return sub_5da040

if (sub_402680("Music_Unprepare", arg1) != 0)
    return sub_5da070

if (sub_402680("Music_Play", arg1) != 0)
    return sub_5da0a0

if (sub_402680("Music_Stop", arg1) != 0)
    return sub_5da0b0

if (sub_402680("Music_IsPlay", arg1) != 0)
    return sub_5da0c0

if (sub_402680("Music_SetLoopCount", arg1) != 0)
    return sub_5da0d0

if (sub_402680("Music_GetLoopCount", arg1) != 0)
    return sub_5da120

if (sub_402680("Music_Pause", arg1) != 0)
    return sub_5da130

if (sub_402680("Music_Restart", arg1) != 0)
    return sub_5da140

if (sub_402680("Music_IsPause", arg1) != 0)
    return sub_5da150

if (sub_402680("Music_Fade", arg1) != 0)
    return sub_5da160

if (sub_402680("Music_StopFade", arg1) != 0)
    return sub_5da1a0

if (sub_402680("Music_IsFade", arg1) != 0)
    return sub_5da1b0

if (sub_402680("Music_GetPos", arg1) != 0)
    return sub_5da1c0

if (sub_402680("Music_GetLength", arg1) != 0)
    return sub_5da1d0

if (sub_402680("Music_Seek", arg1) != 0)
    return sub_5da1e0

if (sub_402680("Music_MillisecondsToSamples", arg1) != 0)
    return sub_5da200

if (sub_402680("Sound_IsExist", arg1) != 0)
    return sub_5da220

if (sub_402680("Sound_Prepare", arg1) != 0)
    return sub_5da260

if (sub_402680("Sound_Unprepare", arg1) != 0)
    return sub_5da290

if (sub_402680("Sound_Play", arg1) != 0)
    return sub_5da2c0

if (sub_402680("Sound_Stop", arg1) != 0)
    return sub_5da2f0

if (sub_402680("Sound_IsPlay", arg1) != 0)
    return sub_5da300

if (sub_402680("Sound_Fade", arg1) != 0)
    return sub_5da310

if (sub_402680("Sound_StopFade", arg1) != 0)
    return sub_5da350

if (sub_402680("Sound_IsFade", arg1) != 0)
    return sub_5da360

if (sub_402680("Sound_GetTimeLength", arg1) != 0)
    return sub_5da370

if (sub_402680("Sound_GetGroupNum", arg1) != 0)
    return sub_5da380

if (sub_402680("Sound_GetGroupNumFromDataNum", arg1) != 0)
    return sub_5da390

if (sub_402680("Sound_GetDataLength", arg1) != 0)
    return sub_5da3a0

if (sub_402680("GetMasterGroup", arg1) != 0)
    return sub_41adc0

if (sub_402680("GetBGMGroup", arg1) != 0)
    return sub_678ab0

if (sub_402680("GetSEGroup", arg1) != 0)
    return sub_5da3d0

if (sub_402680("GetVoiceGroup", arg1) != 0)
    return sub_687640

if (sub_402680("GetGimicSEGroup", arg1) != 0)
    return sub_5e6e10

uint32_t eax_75 = zx.d(sub_402680("GetBackVoiceGroup", arg1))
int32_t eax_76 = neg.d(eax_75)
return sbb.d(eax_76, eax_76, eax_75 != 0) & sub_6869b0
