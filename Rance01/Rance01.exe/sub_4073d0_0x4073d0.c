// 函数: sub_4073d0
// 地址: 0x4073d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (sub_402680("Init", arg1) != 0)
    return sub_407790

if (sub_402680("Update", arg1) != 0)
    return sub_4077b0

if (sub_402680("SP_GetUnuseNum", arg1) != 0)
    return sub_4077c0

if (sub_402680("SP_SaveCG", arg1) != 0)
    return sub_407a50

if (sub_402680("SP_CreatePixelOnly", arg1) != 0)
    return sub_407b40

if (sub_402680("SP_Delete", arg1) != 0)
    return sub_407b60

if (sub_402680("SP_DeleteAll", arg1) != 0)
    return sub_407b70

if (sub_402680("SP_SetZ", arg1) != 0)
    return sub_407b90

if (sub_402680("SP_SetShow", arg1) != 0)
    return sub_407d00

if (sub_402680("SP_RenderView", arg1) != 0)
    return sub_407d20

if (sub_402680("SP_SetTextSpriteType", arg1) != 0)
    return sub_407e30

if (sub_402680("SP_SetTextSpriteSize", arg1) != 0)
    return sub_407e50

if (sub_402680("SP_SetTextSpriteColor", arg1) != 0)
    return sub_407e70

if (sub_402680("SP_SetTextSpriteBoldWeight", arg1) != 0)
    return sub_407ea0

if (sub_402680("SP_SetTextSpriteEdgeWeight", arg1) != 0)
    return sub_407ec0

if (sub_402680("SP_SetTextSpriteEdgeColor", arg1) != 0)
    return sub_407ee0

if (sub_402680("SP_GetFontWidth", arg1) != 0)
    return sub_407f10

if (sub_402680("FPS_Get", arg1) != 0)
    return sub_408640

if (sub_402680("CG_IsExist", arg1) != 0)
    return sub_407fe0

if (sub_402680("CG_GetMetrics", arg1) != 0)
    return sub_4080c0

if (sub_402680("TRANS_Begin", arg1) != 0)
    return sub_4084e0

if (sub_402680("TRANS_Update", arg1) != 0)
    return sub_408500

if (sub_402680("TRANS_End", arg1) != 0)
    return sub_408540

if (sub_402680("VIEW_SetMode", arg1) != 0)
    return sub_408560

if (sub_402680("VIEW_GetMode", arg1) != 0)
    return sub_408580

if (sub_402680("VIEW_SetOffsetPos", arg1) != 0)
    return sub_408590

if (sub_402680("KeepPreviousView_SetMode", arg1) != 0)
    return sub_4085b0

if (sub_402680("KeepPreviousView_GetMode", arg1) != 0)
    return sub_4085f0

if (sub_402680("KeepPreviousView", arg1) != 0)
    return sub_408600

if (sub_402680("Sleep", arg1) != 0)
    return sub_408650

if (sub_402680("SYSTEM_SetConfigOverFrameRateSleep", arg1) != 0)
    return sub_408690

if (sub_402680("SYSTEM_GetConfigOverFrameRateSleep", arg1) != 0)
    return sub_4086c0

if (sub_402680("SYSTEM_SetConfigSleepByInactiveWindow", arg1) != 0)
    return sub_4086d0

if (sub_402680("SYSTEM_GetConfigSleepByInactiveWindow", arg1) != 0)
    return sub_4086e0

if (sub_402680("SYSTEM_SetReadMessageSkipping", arg1) != 0)
    return sub_4086f0

if (sub_402680("SYSTEM_GetReadMessageSkipping", arg1) != 0)
    return sub_408700

if (sub_402680("SYSTEM_SetConfigFrameSkipWhileMessageSkip", arg1) != 0)
    return sub_408710

if (sub_402680("SYSTEM_GetConfigFrameSkipWhileMessageSkip", arg1) != 0)
    return sub_408720

if (sub_402680("SYSTEM_SetInvalidateFrameSkipWhileMessageSkip", arg1) != 0)
    return sub_408730

if (sub_402680("SYSTEM_GetInvalidateFrameSkipWhileMessageSkip", arg1) != 0)
    return sub_408740

if (sub_402680("Debug_GetCurrentAllocatedMemorySize", arg1) != 0)
    return sub_408750

if (sub_402680("Debug_GetMaxAllocatedMemorySize", arg1) != 0)
    return sub_408760

if (sub_402680("Debug_GetFillRate", arg1) != 0)
    return sub_408770

if (sub_402680("CombineTexture", arg1) != 0)
    return sub_5dfbc0

uint32_t eax_89 = zx.d(sub_402680("ReleaseCombinedTexture", arg1))
int32_t eax_90 = neg.d(eax_89)
return sbb.d(eax_90, eax_90, eax_89 != 0) & sub_5dfbc0
