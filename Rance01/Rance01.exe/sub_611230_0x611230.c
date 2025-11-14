// 函数: sub_611230
// 地址: 0x611230
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 s< 0)
    return 

int32_t eax
int32_t ecx
eax, ecx = (*(*arg1 + 0x8c))()

if (arg2 s>= eax)
    return 

int32_t esi_1 = data_797dac
COLORREF color

if (data_78f4f8 == esi_1 && data_78f4fc == arg2)
    color = arg1[0x5f]
label_61129b:
    HBRUSH eax_3 = CreateSolidBrush(color)
    FillRect(arg3, arg4, eax_3)
    DeleteObject(eax_3)
    return 

if (esi_1 == arg1[0x65] && arg2 == arg1[0x66])
    color = arg1[0x67]
    goto label_61129b

if (sub_61ad80(ecx, arg2, esi_1) != 0)
    color = arg1[0x61]
    goto label_61129b

FillRect(arg3, arg4, GetStockObject(WHITE_BRUSH))
