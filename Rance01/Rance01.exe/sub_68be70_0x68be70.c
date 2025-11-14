// 函数: sub_68be70
// 地址: 0x68be70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &guiengine::CGUIMessageList::`vftable'{for `IEventObserver'}
sub_68bec0(arg1)

if (arg1[0xa] u>= 0x10)
    int32_t __saved_ebx = arg1[5]
    sub_6b4d5b()

arg1[0xa] = 0xf
arg1[9] = 0
arg1[5].b = 0
int32_t result = arg1[1]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
return result
