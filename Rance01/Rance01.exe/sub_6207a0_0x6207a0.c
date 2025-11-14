// 函数: sub_6207a0
// 地址: 0x6207a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = arg1[0x51]
int32_t eax_3 = sub_620840(sx.d((arg2 u>> 0x10).w), arg1, sx.d(arg2.w))
arg1[0x51] = eax_3

if (eax_3 != edi)
    sub_620900(arg1)
    sub_620a40(arg1)
    sub_620da0(arg1)
    sub_621250(arg1)
    InvalidateRect(arg1[0x22], nullptr, 1)
    UpdateWindow(arg1[0x22])

return 0
