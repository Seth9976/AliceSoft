// 函数: sub_6206e0
// 地址: 0x6206e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

POINT point
GetCursorPos(&point)
ScreenToClient(arg2, &point)
int32_t edi = arg1[0x51]
int32_t eax_2 = sub_620840(point.y, arg1, point.x)
arg1[0x51] = eax_2

if (eax_2 != edi)
    sub_620900(arg1)
    sub_620a40(arg1)
    sub_620da0(arg1)
    sub_621250(arg1)
    InvalidateRect(arg1[0x22], nullptr, 1)
    UpdateWindow(arg1[0x22])

arg1[0x76] += 1

if (arg1[0x76] s>= 5)
    for (int32_t* i = arg1[0x4c]; i != arg1[0x4d]; i = &i[0xa])
        sub_629b60(*i)
    
    arg1[0x76] = 0

return 0
