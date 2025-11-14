// 函数: sub_611320
// 地址: 0x611320
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_28
int32_t eax_1 = data_78c474 ^ &var_28
SetFocus(arg2)

if (data_797db4 != 0)
    int32_t var_24
    sub_611850(arg1, zx.d(arg3.w), arg3 u>> 0x10, &var_24, &var_28)
    int32_t ebx_1 = var_28
    *(arg1 + 0x18c) = var_24
    *(arg1 + 0x190) = ebx_1
    InvalidateRect(arg2, nullptr, 0)
    UpdateWindow(arg2)
    
    if (*(arg1 + 0xcc) != 0)
        int32_t var_38_3 = ebx_1 + 1
        char* lParam = sub_4104a0(0x734ce8)
        
        if (*(lParam + 0x14) u>= 0x10)
            lParam = *lParam
        
        SendMessageA(**(arg1 + 0xcc), 0x401, 0x101, lParam)
        int32_t var_c
        
        if (var_c u>= 0x10)
            int32_t var_20
            int32_t var_38_5 = var_20
            sub_6b4d5b()

sub_6b4885(eax_1 ^ &var_28)
return 0
