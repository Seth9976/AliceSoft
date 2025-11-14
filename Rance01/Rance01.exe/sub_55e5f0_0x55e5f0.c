// 函数: sub_55e5f0
// 地址: 0x55e5f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4
sub_405410(arg1 + 4, &var_4, *(arg1 + 4), *(arg1 + 8))
sub_429ad0(*(*(arg1 + 0x18) + 4))
void* eax_1 = *(arg1 + 0x18)
*(eax_1 + 4) = eax_1
int32_t* eax_2 = *(arg1 + 0x18)
*eax_2 = eax_2
void* eax_3 = *(arg1 + 0x18)
*(eax_3 + 8) = eax_3
*(arg1 + 0x1c) = 0
int32_t ecx_4 = arg2[1] - *arg2
int32_t eax_5
int32_t edx_1
edx_1:eax_5 = muls.dp.d(0x6bca1af3, ecx_4)
int32_t ebx_2 = ecx_4 s/ 0x4c
void* result = sub_4bc7e0(ebx_2, edx_1 s>> 5, ecx_4, arg1 + 4)
int32_t esi_1 = 0

if (ebx_2 s> 0)
    int32_t var_8_1 = 0
    int32_t var_c_1 = 0
    
    do
        int32_t* eax_8 = var_c_1 + *arg2 + 4
        int32_t* ecx_7 = *(arg1 + 4) + var_8_1
        var_4 = eax_8
        sub_401180(ecx_7, 0xffffffff, eax_8, 0)
        result = sub_513fa0(arg1 + 0x14, var_4)
        var_c_1 += 0x4c
        var_8_1 += 0x1c
        *result = esi_1
        esi_1 += 1
    while (esi_1 s< ebx_2)

return result
