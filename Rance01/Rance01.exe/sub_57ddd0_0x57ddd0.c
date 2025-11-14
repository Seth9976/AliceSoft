// 函数: sub_57ddd0
// 地址: 0x57ddd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_40 = ebx
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg6)
int32_t eax_5
int32_t edx_1
edx_1:eax_5 = sx.q(arg7)
float var_30 = fconvert.s(fconvert.t(arg8) * fconvert.t(3.1415927410125732) / fconvert.t(180.0))
int32_t mxcsr
int16_t x87control
int16_t x87control_1
long double st0
st0, x87control_1 = sub_70ca80(mxcsr, x87control, fconvert.t(var_30))
float var_34 = fconvert.s(fconvert.t(fconvert.s(st0)))
float var_38 =
    fconvert.s(fconvert.t(fconvert.s(sub_70c950(mxcsr, x87control_1, fconvert.t(var_30)))))
long double x87_r6 = float.t(1)
long double x87_r7_11 = fconvert.t(fconvert.s(x87_r6 / x87_r6))
long double x87_r5 = fconvert.t(4096.0)
int32_t var_18 = sub_70c710(x87_r7_11 * fconvert.t(var_34) * x87_r5)
int32_t var_14 = sub_70c710(x87_r7_11 * fconvert.t(var_38) * x87_r5)
char* esi = (*(*arg4 + 8))(0, 0, arg3, arg2)
int32_t eax_13 = (*(*arg5 + 8))(0, 0)
void* var_4c = (*(*arg1 + 8))(0, 0)
int32_t eax_18 = (*(*arg4 + 0x1c))() - arg6 * 4
int32_t eax_21 = (*(*arg1 + 0x1c))() - arg6 * 4
int32_t eax_23 = (*(*arg5 + 0x1c))()

if (arg7 s<= 0)
    return 

int32_t var_40_2 = neg.d(var_38)
int32_t var_3c
long double x87_r6_6 = fconvert.t(fconvert.s(float.t(var_3c)))
int32_t i_1 = arg7
long double x87_r4_2 = fconvert.t(var_34)
long double x87_r3_1 = fconvert.t(4096.0)
int32_t i

do
    long double x87_r2_2 = fconvert.t(fconvert.s(float.t(var_40_2)))
    int32_t ebx_2 = sub_70c710((fconvert.t(fconvert.s(float.t(neg.d(var_3c)) * fconvert.t(arg2)
        - x87_r2_2 * fconvert.t(arg3))) * x87_r4_2 + x87_r6_6) * x87_r3_1)
    int32_t edi_1 = sub_70c710((
        fconvert.t(fconvert.s(x87_r2_2 * fconvert.t(arg2) - x87_r6_6 * fconvert.t(arg3))) * x87_r4_2
        + fconvert.t(fconvert.s(float.t(var_38)))) * x87_r3_1)
    int32_t eax_27 = arg6
    
    if (eax_27 s> 0)
        int32_t var_34_4 = eax_27
        
        while (true)
            int32_t edx_9 = ebx_2 s>> 0xc
            int32_t ecx_17 = edi_1 s>> 0xc
            char* ecx_21
            
            if (edx_9 u>= eax_27 || ecx_17 u>= arg7)
                ecx_21 = var_4c
                *esi = *ecx_21
                eax_27.b = ecx_21[1]
                esi[1] = eax_27.b
                esi[2] = ecx_21[2]
            else
                int32_t ecx_19 = ecx_17 * eax_23 + ((eax_1 - edx) s>> 1)
                void* ecx_20 = ecx_19 + (edx_9 << 2)
                *esi = *(ecx_19 + (edx_9 << 2))
                edx_9.b = *(ecx_20 + 1)
                esi[1] = edx_9.b
                ecx_21 = var_4c
                esi[2] = *(ecx_20 + 2)
            
            ebx_2 += (eax_5 - edx_1) s>> 1
            edi_1 += eax_13
            esi = &esi[4]
            int32_t temp2_1 = var_34_4
            var_34_4 -= 1
            var_4c = &ecx_21[4]
            
            if (temp2_1 == 1)
                break
            
            eax_27 = arg6
    
    var_4c += eax_21
    esi = &esi[eax_18]
    var_40_2 += 1
    i = i_1
    i_1 -= 1
while (i != 1)
