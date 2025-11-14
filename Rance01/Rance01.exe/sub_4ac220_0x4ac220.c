// 函数: sub_4ac220
// 地址: 0x4ac220
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = *(arg2 + 0x18)
int32_t* eax = *(arg2 + 0x14)

if (eax != ecx)
    int32_t var_c_1 = arg1
    int32_t* eax_1 = sub_4f2850(eax, arg1, ecx, ecx)
    sub_663180(eax_1, *(arg2 + 0x18))
    *(arg2 + 0x18) = eax_1

void* eax_4 = *(arg2 + 8)
void* ecx_1 = *(arg2 + 4)

if (ecx_1 != eax_4)
    int32_t var_c_3 = arg1
    void* eax_5
    int32_t edx_3
    eax_5, edx_3 = sub_4ae0a0(eax_4, arg1, ecx_1, eax_4)
    int32_t var_14_1 = arg1
    int32_t var_18_1 = *(arg2 + 8)
    sub_4ae120(eax_5, edx_3)
    *(arg2 + 8) = eax_5

__builtin_memset(&arg2[0x24], 0, 0x18)
*arg2 = 0
return 0
