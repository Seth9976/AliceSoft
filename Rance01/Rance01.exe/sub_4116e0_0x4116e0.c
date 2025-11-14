// 函数: sub_4116e0
// 地址: 0x4116e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4_1 = arg1
char* esi = (*(*arg2 + 8))(arg3, arg4)
int32_t ecx_4 = (*(*arg2 + 0x1c))() - (arg5 << 2)
int32_t result = *(arg1 + 4)
int32_t ebx_1 = *(result + (arg14 << 2))
int32_t edi_2 = *(result + ((0xff - arg14) << 2))
int32_t var_4 = ecx_4
arg4 = 0

if (arg6 s> 0)
    do
        int32_t temp1_2 = mods.dp.d(sx.q(arg4 + arg13), arg11)
        int32_t edx_9 = temp1_2 + arg9
        arg3 = edx_9
        
        if (temp1_2 + arg9 s< 0)
            arg3 = edx_9 + arg11
        
        void* eax_13 = mods.dp.d(sx.q(arg12), arg10) + arg8
        
        if (eax_13 s< 0)
            eax_13 += arg10
        
        int32_t* edx_11 = arg5
        int32_t* ebp_3 = arg10 - eax_13
        arg2 = edx_11
        
        if (edx_11 s> 0)
            while (true)
                if (ebp_3 s> edx_11)
                    ebp_3 = edx_11
                
                void* eax_15 = (*(*arg7 + 8))(eax_13, arg3)
                
                if (ebp_3 s> 0)
                    void* eax_16 = eax_15 + 2
                    arg14 = ebp_3
                    int32_t* i
                    
                    do
                        char ecx_7 = *(zx.d(*(eax_16 - 2)) + ebx_1) + *(zx.d(*esi) + edi_2)
                        esi = &esi[4]
                        esi[0xfffffffc] = ecx_7
                        uint32_t edx_14
                        edx_14.b = *(zx.d(*(eax_16 - 1)) + ebx_1)
                        edx_14.b += *(zx.d(esi[0xfffffffd]) + edi_2)
                        eax_16 += 4
                        esi[0xfffffffd] = edx_14.b
                        i = arg14
                        arg14 -= 1
                        esi[0xfffffffe] =
                            *(zx.d(*(eax_16 - 4)) + ebx_1) + *(zx.d(esi[0xfffffffe]) + edi_2)
                    while (i != 1)
                
                eax_13 = arg8
                void* ecx_12 = arg2 - ebp_3
                ebp_3 = arg10
                arg2 = ecx_12
                
                if (ecx_12 s<= 0)
                    break
                
                edx_11 = arg2
            
            ecx_4 = var_4
        
        result = arg4 + 1
        esi = &esi[ecx_4]
        arg4 = result
    while (result s< arg6)

return result
