// 函数: sub_584230
// 地址: 0x584230
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1 = (*(*arg2 + 8))(0, 0)
int32_t eax_3
int32_t ecx_2
eax_3, ecx_2 = (*(*arg2 + 0x1c))()
int32_t var_2c = ecx_2
int80_t result = sub_584570(arg1, fconvert.s(fconvert.t(arg5)))
int32_t eax_4 = sub_70c710(fconvert.t(arg5) * fconvert.t(255.0))
int32_t ecx_3 = *(arg1 i+ 0x38)
float edx_2 = *(ecx_3 + (eax_4 << 2))
int32_t eax_5 = *(ecx_3 + ((0xff - eax_4) << 2))
char* eax_7 = (*(*arg4 + 8))(0, 0)
int32_t* ecx_5 = *(arg1 i+ 0x44)
char* edi = eax_7
int32_t eax_10 = (*(*arg4 + 0x1c))() - (ecx_5 << 2)
int32_t* eax_11 = *(arg1 i+ 0x48)
int32_t* eax_12 = *(arg1 i+ 4)
(*(**eax_12 + 0x10))(arg2, 0, 0, arg4, 0, 0, ecx_5, eax_11)
(*(**eax_12 + 0x18))(arg2, 0, 0, arg3, 0, 0, ecx_5, eax_11, eax_4)
int32_t* i = nullptr
int32_t* ebx_1 = *(arg1 i+ 0xc) + (*(arg1 i+ 0x1c) << 2)
int32_t* var_14_1 = ebx_1
arg4 = nullptr
void* eax_19

if (*(arg1 i+ 0x48) s> 0)
    do
        arg2 = nullptr
        
        if (*(arg1 i+ 0x44) s> 0)
            int32_t* ecx_12 = *(*(arg1 i+ 0x20) + (i << 2)) - ebx_1
            int32_t* eax_21 = *(*(arg1 i+ 0x2c) + (i << 2)) - ebx_1
            int32_t* edx_11 = ebx_1
            int32_t* var_10_1 = ecx_12
            arg3 = eax_21
            
            while (true)
                void* ecx_17 = ((ebx_1[*(ecx_12 + edx_11)] - *edx_11) s>> 0x10) + arg2
                void* eax_26 = ((ebx_1[*(eax_21 + edx_11)] - ebx_1[i]) s>> 0x10) + i
                
                if (ecx_17 u< *(arg1 i+ 0x44) && eax_26 u< *(arg1 i+ 0x48))
                    char* eax_29 = eax_26 * eax_3 + eax_1 + (ecx_17 << 2)
                    uint32_t ebx_3 = zx.d(eax_29[1])
                    *eax_29 = zx.d(*eax_29)[edx_2] + *(zx.d(*edi) + eax_5)
                    uint32_t ebx_4 = zx.d(eax_29[2])
                    eax_29[1] = *(zx.d(edi[1]) + eax_5) + *(ebx_3 i+ edx_2)
                    i = arg4
                    ebx_1 = var_14_1
                    eax_29[2] = *(zx.d(edi[2]) + eax_5) + *(ebx_4 i+ edx_2)
                
                eax_19 = arg2 + 1
                edi = &edi[4]
                edx_11 = &edx_11[1]
                arg2 = eax_19
                
                if (eax_19 s>= *(arg1 i+ 0x44))
                    break
                
                eax_21 = arg3
                ecx_12 = var_10_1
        
        edi = &edi[eax_10]
        i += 1
        arg4 = i
    while (i s< *(arg1 i+ 0x48))

eax_19.b = 1
return result
