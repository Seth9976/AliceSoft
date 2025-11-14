// 函数: sub_4110d0
// 地址: 0x4110d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4_1 = arg1

if (arg8 s<= 0 || arg9 s<= 0)
    return 

char* esi_1 = (*(*arg2 + 8))(arg3, arg4)
void* edi_1 = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_7 = *(arg1 + 4)
int32_t edx_4 = *(eax_7 + (arg12 << 2))
int32_t edx_5 = *(eax_7 + (arg11 << 2))
int32_t* edx_6 = *(eax_7 + (arg10 << 2))
int32_t ebp_4 = arg8 * 4
int32_t eax_10 = (*(*arg2 + 0x1c))() - ebp_4
int32_t eax_12 = (*(*arg5 + 0x1c))()
int32_t edx_10 = **(arg1 + 4)

if (arg9 s<= 0)
    return 

arg2 = arg9
int32_t* i

do
    if (arg8 s> 0)
        arg9 = arg8
        int32_t* j
        
        do
            int32_t* ecx_11
            ecx_11.b = *(edi_1 + 3)
            
            if (ecx_11.b != 0)
                if (ecx_11.b != 0xff)
                    uint32_t ecx_12 = zx.d(*(edi_1 + 3))
                    uint32_t ebp_7 = zx.d(esi_1[1])
                    *esi_1 = (((0xff - ecx_12) << 8) + edx_10)[zx.d(*esi_1)] + *(ecx_12 + edx_4)
                    uint32_t ecx_13 = zx.d(*(edi_1 + 3))
                    uint32_t ebp_9 = zx.d(esi_1[2])
                    esi_1[1] = *(((0xff - ecx_13) << 8) + edx_10 + ebp_7) + *(ecx_13 + edx_5)
                    ecx_11 = zx.d(*(edi_1 + 3))
                    esi_1[2] = *(((0xff - ecx_11) << 8) + edx_10 + ebp_9) + *(ecx_11 + edx_6)
                else
                    ecx_11.b = arg12.b
                    *esi_1 = ecx_11.b
                    ecx_11.b = arg11.b
                    esi_1[1] = ecx_11.b
                    ecx_11.b = arg10.b
                    esi_1[2] = ecx_11.b
            
            esi_1 = &esi_1[4]
            edi_1 += 4
            j = arg9
            arg9 -= 1
        while (j != 1)
    
    esi_1 = &esi_1[eax_10]
    edi_1 += eax_12 - ebp_4
    i = arg2
    arg2 -= 1
while (i != 1)
