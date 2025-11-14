// 函数: sub_4f9980
// 地址: 0x4f9980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x78787879, *(arg2 + 0x2c) - *(arg2 + 0x28))
int32_t edx_1 = edx s>> 5
int32_t esi_2 = (edx_1 u>> 0x1f) + edx_1
sub_4fc5c0(esi_2, arg1 + 0x40)
int32_t edi = 0

if (esi_2 s> 0)
    int32_t ebx_1 = 0
    
    do
        int32_t* eax_7 = *(arg1 + 0x40) + ebx_1
        
        if (sub_4f5180(edi, arg2, &eax_7[8], &eax_7[7], eax_7) == 0)
            return 0
        
        edi += 1
        ebx_1 += 0x40
    while (edi s< esi_2)

return 1
