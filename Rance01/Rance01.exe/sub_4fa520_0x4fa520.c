// 函数: sub_4fa520
// 地址: 0x4fa520
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx_2

if (arg3 s>= 0)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x30c30c31, *(arg2 + 0x1c) - *(arg2 + 0x18))
    edx_2 = edx_1 s>> 4

int32_t ebx_2

if (arg3 s< 0 || arg3 s>= (edx_2 u>> 0x1f) + edx_2)
    ebx_2 = 0
else
    int32_t* eax_5 = arg3 * 0x54 + *(arg2 + 0x18) + 0x20
    ebx_2 = (eax_5[1] - *eax_5) s/ 0x1c

int32_t ecx_7 = *(arg1 + 0x64) - *(arg1 + 0x60)
int32_t eax_7
int32_t edx_6
edx_6:eax_7 = muls.dp.d(0x2e8ba2e9, ecx_7)
int32_t esi_4 = ecx_7 s/ 0x2c
sub_4fc6a0(esi_4 + ebx_2, edx_6 s>> 3, ecx_7, arg1 + 0x60)
int32_t ebp = 0

if (ebx_2 s> 0)
    int32_t esi_5 = esi_4 * 0x2c
    
    do
        float* eax_11 = *(arg1 + 0x60) + esi_5
        
        if (sub_4f4e70(arg3, ebp, arg2, eax_11, &eax_11[1], &eax_11[2], &eax_11[3], &eax_11[7])
                == 0)
            return 0
        
        ebp += 1
        esi_5 += 0x2c
    while (ebp s< ebx_2)

return 1
