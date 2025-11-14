// 函数: sub_44bb70
// 地址: 0x44bb70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *(arg1 + 0x20)
char* esi = (*(*arg2 + 8))(arg3, arg4)
char* eax_5 = (*(*arg5 + 8))(arg6, arg7)
int32_t eax_8 = (*(*arg2 + 0x1c))() - arg8 * 4
int32_t result = (*(*arg5 + 0x1c))() - arg8 * 4
int32_t result_1 = result

if (arg9 s> 0)
    arg5 = arg9
    char* edi_1 = eax_5
    int32_t* i
    
    do
        if (arg8 s> 0)
            arg2 = arg8
            int32_t* j
            
            do
                int32_t* ecx_11
                ecx_11.b = *esi
                uint32_t eax_14
                eax_14.b = esi[1]
                *esi = (((zx.d(*(zx.d(*edi_1) + (zx.d(ecx_11.b) << 8) + ebx)) - zx.d(ecx_11.b))
                    * arg10) s>> 8).b + ecx_11.b
                char edx_16 = (((zx.d(*((zx.d(eax_14.b) << 8) + zx.d(edi_1[1]) + ebx))
                    - zx.d(eax_14.b)) * arg10) s>> 8).b + eax_14.b
                eax_14.b = esi[2]
                esi[1] = edx_16
                esi[2] = (((zx.d(*((zx.d(eax_14.b) << 8) + zx.d(edi_1[2]) + ebx)) - zx.d(eax_14.b))
                    * arg10) s>> 8).b + eax_14.b
                esi = &esi[4]
                edi_1 = &edi_1[4]
                j = arg2
                arg2 -= 1
            while (j != 1)
            result = result_1
        
        esi = &esi[eax_8]
        edi_1 = &edi_1[result]
        i = arg5
        arg5 -= 1
    while (i != 1)

return result
