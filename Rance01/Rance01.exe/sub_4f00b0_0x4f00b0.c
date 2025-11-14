// 函数: sub_4f00b0
// 地址: 0x4f00b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714e70
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_48 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edx = *(arg1 + 0x40)
int32_t* ecx = *(arg1 + 0x3c)

if (ecx != edx)
    int32_t* eax_3 = edx
    
    if (edx != edx)
        do
            *ecx = *eax_3
            ecx[1] = eax_3[1]
            ecx[2] = eax_3[2]
            eax_3 = &eax_3[3]
            ecx = &ecx[3]
        while (eax_3 != edx)
    
    *(arg1 + 0x40) = ecx

int32_t eax_6
int80_t st0
st0, eax_6 = sub_4f0640(arg1, fconvert.s(fconvert.t(*arg2)), fconvert.s(fconvert.t(arg2[2])))
int32_t result
int80_t st0_1
st0_1, result = sub_4f0640(arg1, fconvert.s(fconvert.t(*arg3)), fconvert.s(fconvert.t(arg3[2])))

if (eax_6 != 0xffffffff && result != 0xffffffff)
    float arg_14
    sub_4f0520(arg4, arg_14, arg1)
    int32_t var_20_1 = 0
    int32_t* eax_10 = sub_576880(1)
    *eax_10 = eax_10
    int32_t* var_24 = eax_10
    eax_10[1] = eax_10
    int32_t var_4 = 0
    int32_t var_14_1 = 0
    int32_t* eax_11 = sub_576880(1)
    *eax_11 = eax_11
    int32_t* var_18 = eax_11
    eax_11[1] = eax_11
    int32_t edi_5 = eax_6 * 0x68
    int32_t ebx_1 = result * 0x68
    var_4.b = 1
    void* ecx_2 = *(arg1 + 4)
    *(ecx_2 + edi_5 + 0x5c) = fconvert.s(float.t(0))
    float eax_13 = ecx_2 + edi_5
    void* edi_6 = ecx_2 + ebx_1
    long double x87_r7_6 = fconvert.t(*(ecx_2 + ebx_1 + 0x50)) - fconvert.t(*(eax_13 i+ 0x50))
    long double x87_r6_1 = fconvert.t(*(edi_6 + 0x4c))
    *(eax_13 i+ 0x58) = 0
    long double x87_r6_2 = x87_r6_1 - fconvert.t(*(eax_13 i+ 0x4c))
    int32_t edx_1 = eax_10[1]
    long double x87_r5_2 = fconvert.t(*(edi_6 + 0x54)) - fconvert.t(*(eax_13 i+ 0x54))
    arg_14 = eax_13
    *(eax_13 i+ 0x60) = fconvert.s(x87_r7_6 * x87_r7_6 + x87_r6_2 * x87_r6_2 + x87_r5_2 * x87_r5_2)
    int32_t* eax_14 = sub_576850(eax_10, edx_1, &arg_14)
    eax_10[1] = eax_14
    int32_t var_20_2 = 1
    *eax_14[1] = eax_14
    
    while (true)
        int32_t* i_8
        int80_t st0_3
        st0_3, i_8 = sub_4f05e0(&var_24)
        int32_t* i = i_8
        int32_t* i_7 = i
        
        if (i == 0)
            int32_t* eax_26 = *eax_11
            *eax_11 = eax_11
            eax_11[1] = eax_11
            
            if (eax_26 != eax_11)
                int32_t* edi_9
                
                do
                    edi_9 = *eax_26
                    int32_t* var_4c_10 = eax_26
                    sub_6b4d5b()
                    eax_26 = edi_9
                while (edi_9 != eax_11)
            
            int32_t* var_4c_11 = eax_11
            sub_6b4d5b()
            int32_t* eax_27 = *eax_10
            *eax_10 = eax_10
            eax_10[1] = eax_10
            
            if (eax_27 != eax_10)
                int32_t* edi_10
                
                do
                    edi_10 = *eax_27
                    int32_t* var_4c_12 = eax_27
                    sub_6b4d5b()
                    eax_27 = edi_10
                while (edi_10 != eax_10)
            
            int32_t* var_4c_13 = eax_10
            sub_6b4d5b()
            break
        
        if (i == edi_6)
            sub_4da9d0(arg3, arg1 + 0x3c)
            
            for (; i != 0; i = i[0x16])
                sub_4da9d0(*i * 0x68 + *(arg1 + 4) + 0x4c, arg1 + 0x3c)
            
            int32_t edx_9 = sub_4da9d0(arg2, arg1 + 0x3c)
            void* var_4c_14 = arg1
            sub_4f2760(*(arg1 + 0x3c), edx_9, *(arg1 + 0x40))
            sub_4f2530(&var_18)
            sub_4f2530(&var_24)
            result.b = 1
            goto label_4f0495
        
        int32_t var_34_1 = 0
        arg4 = &i[8]
        
        while (true)
            float i_1 = *arg4
            float i_6 = i_1
            
            if (i_1 == 0)
                goto label_4f036e
            
            void** eax_17 = *eax_10
            long double x87_r7_11 = fconvert.t(*(i_1 i+ 0x50)) - fconvert.t(i[0x14])
            long double x87_r6_7 = fconvert.t(*(i_1 i+ 0x4c)) - fconvert.t(i[0x13])
            long double x87_r6_9 = fconvert.t(*(i_1 i+ 0x54)) - fconvert.t(i[0x15])
            arg_14 = fconvert.s(x87_r7_11 * x87_r7_11 + x87_r6_7 * x87_r6_7 + x87_r6_9 * x87_r6_9)
            bool cond:0_1 = eax_17 != eax_10
            
            if (eax_17 != eax_10)
                while (eax_17[2] != i_1)
                    eax_17 = *eax_17
                    
                    if (eax_17 == eax_10)
                        break
                
                cond:0_1 = eax_17 != eax_10
            
            void** eax_18 = *eax_11
            arg_14.b = cond:0_1
            bool cond:1_1 = eax_18 != eax_11
            
            if (eax_18 != eax_11)
                while (eax_18[2] != i_1)
                    eax_18 = *eax_18
                    
                    if (eax_18 == eax_11)
                        break
                
                cond:1_1 = eax_18 != eax_11
            
            long double x87_r7_17 = fconvert.t(fconvert.s(fconvert.t(arg_14) + fconvert.t(i[0x17])))
            float* edx_2
            edx_2.b = cond:1_1
            
            if (arg_14.b != 0 || edx_2.b != 0)
                long double x87_r6_11 = fconvert.t(*(i_1 i+ 0x5c))
                x87_r6_11 - x87_r7_17
                eax_18.w = (x87_r6_11 < x87_r7_17 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_11, x87_r7_17) ? 1 : 0) << 0xa
                    | (x87_r6_11 == x87_r7_17 ? 1 : 0) << 0xe | 0x3800
                bool p_1 = unimplemented  {test ah, 0x41}
                
                if (not(p_1))
                    goto label_4f036e
                
                goto label_4f02cf
            
        label_4f02cf:
            *(i_1 i+ 0x5c) = fconvert.s(x87_r7_17)
            *(i_1 i+ 0x58) = i
            long double x87_r7_19 = fconvert.t(*(edi_6 + 0x50)) - fconvert.t(*(i_1 i+ 0x50))
            long double x87_r6_13 = fconvert.t(*(edi_6 + 0x4c)) - fconvert.t(*(i_1 i+ 0x4c))
            long double x87_r6_15 = fconvert.t(*(edi_6 + 0x54)) - fconvert.t(*(i_1 i+ 0x54))
            *(i_1 i+ 0x60) =
                fconvert.s(x87_r7_19 * x87_r7_19 + x87_r6_13 * x87_r6_13 + x87_r6_15 * x87_r6_15)
            
            if (edx_2.b != 0)
                for (void** i_2 = *eax_11; i_2 != eax_11; i_2 = *i_2)
                    if (i_2[2] == i_1)
                        if (i_2 != eax_11)
                            *i_2[1] = *i_2
                            void** i_4 = i_2
                            *(*i_2 + 4) = i_2[1]
                            sub_6b4d5b()
                            var_14_1 -= 1
                        
                        break
            
            if (arg_14.b != 0)
                goto label_4f036e
            
            int32_t* eax_19 = sub_576850(eax_10, eax_10[1], &i_6)
            
            if (0x3ffffffe - var_20_2 u>= 1)
                var_20_2 += 1
                eax_10[1] = eax_19
                *eax_19[1] = eax_19
            label_4f036e:
                arg4 = &arg4[1]
                int32_t eax_21 = var_34_1 + 1
                var_34_1 = eax_21
                
                if (eax_21 s< 3)
                    continue
                else
                    for (int32_t* i_3 = *eax_10; i_3 != eax_10; i_3 = *i_3)
                        if (i_3[2] == i)
                            if (i_3 != eax_10)
                                *i_3[1] = *i_3
                                int32_t* i_5 = i_3
                                *(*i_3 + 4) = i_3[1]
                                sub_6b4d5b()
                                var_20_2 -= 1
                            
                            break
                    
                    int32_t* eax_23 = sub_576850(eax_11, eax_11[1], &i_7)
                    
                    if (0x3ffffffe - var_14_1 u>= 1)
                        var_14_1 += 1
                        eax_11[1] = eax_23
                        *eax_23[1] = eax_23
                        break
            
            sub_6b47bf("list<T> too long")
            noreturn
        
        if (var_20_2 == 0)
            int32_t* eax_24 = *eax_11
            *eax_11 = eax_11
            eax_11[1] = eax_11
            
            if (eax_24 != eax_11)
                int32_t* edi_7
                
                do
                    edi_7 = *eax_24
                    int32_t* var_4c_6 = eax_24
                    sub_6b4d5b()
                    eax_24 = edi_7
                while (edi_7 != eax_11)
            
            int32_t* var_4c_7 = eax_11
            sub_6b4d5b()
            int32_t* eax_25 = *eax_10
            *eax_10 = eax_10
            eax_10[1] = eax_10
            
            if (eax_25 != eax_10)
                int32_t* edi_8
                
                do
                    edi_8 = *eax_25
                    int32_t* var_4c_8 = eax_25
                    sub_6b4d5b()
                    eax_25 = edi_8
                while (edi_8 != eax_10)
            
            int32_t* var_4c_9 = eax_10
            sub_6b4d5b()
            result.b = 1
            goto label_4f0495

result.b = 0
label_4f0495:
fsbase->NtTib.ExceptionList = ExceptionList
return result
