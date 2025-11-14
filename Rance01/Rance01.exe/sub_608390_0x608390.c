// 函数: sub_608390
// 地址: 0x608390
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg1
int32_t edi = arg2
int32_t ebx = *(edi + 0x7b8)

if (*(edi + 0x7b4) == 0xffffffff || ebx == 0xffffffff)
    return 

int32_t esi_1 = data_797dac

if (sub_6082b0(ebx, esi_1, edi, &var_4).b == 0)
    return 

if (sub_60c770(edi + 0x7e8, ebx, esi_1) == 0)
    sub_60c490(esi_1, edi + 0x7e8, ebx)

sub_6091e0(edi, arg3, 1)

if (data_797db4 != 0)
    (*(**(edi + 0xa78) + 8))()
    data_797db4 = 0

HMENU hMenu = *(edi + 0x88)
*(edi + 0xacc) = 0

if (hMenu != 0)
    EnableMenuItem(hMenu, 0x9c64, MF_BYCOMMAND)

SendMessageA(*(edi + 0x8cc), 0x401, 0x9c64, 1)
HMENU hMenu_1 = *(edi + 0x88)

if (hMenu_1 != 0)
    EnableMenuItem(hMenu_1, 0x9c65, 0x3)

SendMessageA(*(edi + 0x8cc), 0x401, 0x9c65, 0)
HMENU hMenu_2 = *(edi + 0x88)

if (hMenu_2 != 0)
    EnableMenuItem(hMenu_2, 0x9c66, 0x3)

SendMessageA(*(edi + 0x8cc), 0x401, 0x9c66, 0)
HMENU hMenu_3 = *(edi + 0x88)

if (hMenu_3 != 0)
    EnableMenuItem(hMenu_3, 0x9c67, 0x3)

SendMessageA(*(edi + 0x8cc), 0x401, 0x9c67, 0)
HMENU hMenu_4 = *(edi + 0x88)

if (hMenu_4 != 0)
    EnableMenuItem(hMenu_4, 0x9c69, 0x3)

SendMessageA(*(edi + 0x8cc), 0x401, 0x9c69, 0)
HMENU hMenu_5 = *(edi + 0x88)

if (hMenu_5 != 0)
    EnableMenuItem(hMenu_5, 0x9c6b, 0x3)

SendMessageA(*(edi + 0x8cc), 0x401, 0x9c6b, 0)
HMENU hMenu_6 = *(edi + 0x88)

if (hMenu_6 != 0)
    EnableMenuItem(hMenu_6, 0x9c6d, 0x3)

SendMessageA(*(edi + 0x8cc), 0x401, 0x9c6d, 0)
HMENU hMenu_7 = *(edi + 0x88)

if (hMenu_7 != 0)
    EnableMenuItem(hMenu_7, 0x9c6f, 0x3)

SendMessageA(*(edi + 0x8cc), 0x401, 0x9c6f, 0)
HMENU hMenu_8 = *(edi + 0x88)

if (hMenu_8 != 0)
    EnableMenuItem(hMenu_8, 0x9c71, 0x3)

SendMessageA(*(edi + 0x8cc), 0x401, 0x9c71, 0)
HMENU hMenu_9 = *(edi + 0x88)

if (hMenu_9 != 0)
    EnableMenuItem(hMenu_9, 0x9c73, 0x3)

SendMessageA(*(edi + 0x8cc), 0x401, 0x9c73, 0)
