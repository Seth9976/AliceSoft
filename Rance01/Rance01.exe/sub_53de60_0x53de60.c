// 函数: sub_53de60
// 地址: 0x53de60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t esi = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t ebx = **(arg1 + 0x2b0)
int32_t var_8
int32_t var_4

if (sub_5542b0(ebx, arg1 + 0x1dc, esi, &var_8, &var_4) == 0)
    return sub_53d0e0(arg1, 0x74d214, ebx, esi, esi + 1, arg3, arg2)

**(arg1 + 0x2b0) = var_8
int32_t ecx_3 = var_4
*(arg1 + 0x2b0) += 4
**(arg1 + 0x2b0) = ecx_3
*(arg1 + 0x2b0) += 4
int32_t eax_6
eax_6.b = 1
return 1
