// 函数: sub_4264d0
// 地址: 0x4264d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (sub_402680("Mouse_GetPos", arg1) != 0)
    return sub_426670

if (sub_402680("Mouse_MovePosImmediately", arg1) != 0)
    return sub_4266a0

if (sub_402680("Mouse_HideCursorByGame", arg1) != 0)
    return sub_4266d0

if (sub_402680("Mouse_IsHideCursorByGame", arg1) != 0)
    return sub_426700

if (sub_402680("Mouse_HideByStepMessage", arg1) != 0)
    return 0x426730

if (sub_402680("MouseWheel_ClearCount", arg1) != 0)
    return sub_426740

if (sub_402680("MouseWheel_GetCount", arg1) != 0)
    return sub_426770

if (sub_402680("Key_IsDown", arg1) != 0)
    return sub_4267c0

if (sub_402680("Joystick_ClearCaptureFlag", arg1) != 0)
    return sub_4267d0

if (sub_402680("Joystick_GetNumofDevice", arg1) != 0)
    return sub_4267e0

if (sub_402680("Joystick_IsKeyDown", arg1) != 0)
    return sub_426810

uint32_t eax_23 = zx.d(sub_402680("Joystick_GetAxis", arg1))
int32_t eax_24 = neg.d(eax_23)
return sbb.d(eax_24, eax_24, eax_23 != 0) & sub_426860
