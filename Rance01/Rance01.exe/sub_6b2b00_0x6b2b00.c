// 函数: sub_6b2b00
// 地址: 0x6b2b00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx = *(arg1 + 8)
int32_t ebp = *(arg1 + 0xc)
int32_t* result = *(arg1 + 0x54)
int32_t* result_1 = result

if (*(arg3 + 0x15) != 0 && (ebp s< 0x280 || edx s< 0x1e0))
    return result

int32_t* ebx_1 = *(arg3 + 4)
int32_t eax
int32_t edx_1
edx_1:eax = muls.dp.d(0x2aaaaaab, *(arg3 + 8) - ebx_1)
int32_t edx_2 = edx_1 s>> 1
result = (edx_2 u>> 0x1f) + edx_2
int32_t esi_1 = 0

if (result s> 0)
    int32_t* ecx_2 = ebx_1
    
    do
        if (*ecx_2 == ebp && ecx_2[1] == edx && ecx_2[2] == result_1)
            return result
        
        esi_1 += 1
        ecx_2 = &ecx_2[3]
    while (esi_1 s< result)

int32_t var_8_1 = edx
int32_t var_c = ebp
int32_t* result_2 = result_1
return sub_64db40(&var_c, arg3 + 4)
