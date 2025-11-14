// 函数: sub_5f2900
// 地址: 0x5f2900
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_c = ecx

if (*(*(arg1 + 0xc) + 0xc) == 0)
    while (*(arg1 + 0x10) == 0)
        int32_t edi_1 = *(*(arg1 + 0xc) + 0x50)
        
        if (edi_1 != 0)
            arg1 = sub_5f7370(*(arg1 + 0x48), edi_1)
        
        if (edi_1 == 0 || arg1 == 0)
            arg1.b = 0
            return arg1
        
        if (*(*(arg1 + 0xc) + 0xc) != 0)
            break

arg1.b = 1
return arg1
