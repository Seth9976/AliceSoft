// 函数: sub_60db30
// 地址: 0x60db30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 s< 0 || arg2 s>= (*(*arg1 + 0x8c))())
    return 

int32_t ecx = arg1[0x30]
int32_t eax_2 = arg2 * 9
COLORREF color

if (*(ecx + (eax_2 << 2)) == 1)
    color = arg1[0x39]
label_60db6b:
    HBRUSH eax_4 = CreateSolidBrush(color)
    FillRect(arg3, arg4, eax_4)
    DeleteObject(eax_4)
    return 

int32_t eax_7 = *(ecx + (eax_2 << 2) + 0x20)

if (arg1[0x3b] == eax_7)
    color = arg1[0x37]
    goto label_60db6b

if (data_797dac == eax_7)
    color = arg1[0x35]
    goto label_60db6b

HBRUSH eax_8 = CreateSolidBrush(0xffffff)
FillRect(arg3, arg4, eax_8)
DeleteObject(eax_8)
