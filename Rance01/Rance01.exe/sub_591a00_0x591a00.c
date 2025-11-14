// 函数: sub_591a00
// 地址: 0x591a00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4 = arg1

if (*(arg1 + 0xc) == 0)
    return 0

int32_t* eax_1 = *(arg1 + 0xc)
uint32_t ecx_1 = zx.d(*(arg1 + 0x3c))
int32_t ecx_2 = neg.d(ecx_1)
int32_t ecx_5
ecx_5.b = (*(*eax_1 + 0x2c))(eax_1, 0, 0, &var_4, sbb.d(ecx_2, ecx_2, ecx_1 != 0) & 0x2000) s< 0
return (ecx_5 - 1) & var_4
