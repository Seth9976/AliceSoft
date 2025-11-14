// 函数: sub_608320
// 地址: 0x608320
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg3
int32_t edi = arg1
int32_t ebx = *(edi + 0x7b8)

if (*(edi + 0x7b4) == 0xffffffff || ebx == 0xffffffff)
    return 

int32_t ebp_1 = data_797dac

if (sub_6082b0(ebx, ebp_1, edi, &var_4).b == 0)
    return 

sub_60c490(ebp_1, edi + 0x7e8, ebx)
InvalidateRect(*(edi + 0x6b0), nullptr, 0)
UpdateWindow(*(edi + 0x6b0))
