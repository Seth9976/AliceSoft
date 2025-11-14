// 函数: sub_42f2c0
// 地址: 0x42f2c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = float.t(0)
*arg2 = fconvert.s(x87_r7)
int32_t arg_c
int32_t* edi = arg_c
*arg1 = fconvert.s(float.t(*arg3))
arg2[1] = fconvert.s(x87_r7)
arg1[1] = fconvert.s(float.t(*arg4))
int32_t result = edi[2]

if (result s> 0 && edi[3] s> 0)
    result = *edi
    int32_t esi_1 = *arg3
    int32_t result_1 = result
    
    if (result s< esi_1)
        result = *arg4
        
        if (edi[1] s< result)
            int32_t esi_2 = esi_1 - result_1
            int32_t ebp_1 = edi[2]
            int32_t var_4 = esi_2
            arg_c = ebp_1
            int32_t* esi_3 = &arg_c
            
            if (ebp_1 s>= esi_2)
                esi_3 = &var_4
            
            int32_t eax_2 = result - edi[1]
            int32_t ebp_2 = edi[3]
            int32_t esi_4 = *esi_3
            var_4 = eax_2
            arg_c = ebp_2
            int32_t* eax_3 = &arg_c
            
            if (ebp_2 s>= eax_2)
                eax_3 = &var_4
            
            result = *eax_3
            *arg2 = fconvert.s(float.t(result_1))
            arg_c = *edi + esi_4
            *arg1 = fconvert.s(float.t(arg_c))
            arg2[1] = fconvert.s(float.t(edi[1]))
            arg_c = edi[1] + result
            arg1[1] = fconvert.s(float.t(arg_c))
            *arg3 = esi_4
            *arg4 = result

long double x87_r7_7

if (arg5 == 0)
    arg5.d = fconvert.s(fconvert.t(*arg2))
    x87_r7_7 = fconvert.t(*arg1)
else
    arg5.d = fconvert.s(fconvert.t(*arg1))
    x87_r7_7 = fconvert.t(*arg2)

long double x87_r7_10

if (arg6 == 0)
    arg6.d = fconvert.s(fconvert.t(arg2[1]))
    x87_r7_10 = fconvert.t(arg1[1])
else
    arg6.d = fconvert.s(fconvert.t(arg1[1]))
    x87_r7_10 = fconvert.t(arg2[1])

*arg2 = fconvert.s(fconvert.t(arg5.d))
arg2[1] = fconvert.s(fconvert.t(arg6.d))
*arg1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_7)))
arg1[1] = fconvert.s(fconvert.t(fconvert.s(x87_r7_10)))
return result
