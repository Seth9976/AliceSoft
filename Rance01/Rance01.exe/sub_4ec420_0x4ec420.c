// 函数: sub_4ec420
// 地址: 0x4ec420
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714ec8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_78 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float* result

if (arg1[3].b == 0)
    result.b = 1
else
    void* ebp_1 = arg2[0x9b]
    
    if (ebp_1 == 0)
        result.b = 0
    else
        float var_5c_1 = fconvert.s(fconvert.t(arg2[0x4c]))
        int16_t top_1 = 0
        int32_t eax_3
        int32_t edx_1
        edx_1:eax_3 = muls.dp.d(0x7e07e07f, *(ebp_1 + 0x10) - *(ebp_1 + 0xc))
        int32_t edx_2 = edx_1 s>> 8
        float* result_5 = nullptr
        int32_t var_54_1 = 0
        int32_t var_50_1 = 0
        sub_4addb0((edx_2 u>> 0x1f) + edx_2, &result_5)
        int32_t var_4 = 0
        int32_t eax_7
        int32_t edx_3
        edx_3:eax_7 = muls.dp.d(0x7e07e07f, *(ebp_1 + 0x10) - *(ebp_1 + 0xc))
        int32_t edx_4 = edx_3 s>> 8
        float* result_6 = nullptr
        int32_t var_44_1 = 0
        int32_t var_40_1 = 0
        sub_4ecd20((edx_4 u>> 0x1f) + edx_4, &result_6)
        int32_t eax_11
        int32_t edx_5
        edx_5:eax_11 = muls.dp.d(0x7e07e07f, *(ebp_1 + 0x10) - *(ebp_1 + 0xc))
        int32_t edx_6 = edx_5 s>> 8
        int32_t eax_14 = (edx_6 u>> 0x1f) + edx_6
        int32_t var_64_1 = 0
        
        if (eax_14 s<= 0)
        label_4ec5e8:
            float* ecx_14 = arg1
            int32_t* eax_21 = ecx_14[0xc]
            int32_t* var_5c_2 = eax_21
            float* result_10
            
            if (eax_21 == ecx_14[0xd])
                result_10 = result_5
            label_4ec6d0:
                result = result_6
                
                if (result != 0)
                    float* result_4 = result
                    sub_6b4d5b()
                
                if (result_10 != 0)
                    float* result_15 = result_10
                    sub_6b4d5b()
                
                result.b = 1
            else
                while (true)
                    int32_t* edi_2 = *eax_21
                    
                    if (edi_2 == 0)
                        result_10 = result_5
                    else
                        int32_t esi_2 = *edi_2
                        
                        if (esi_2 s< 0)
                        label_4ec67c:
                            float* result_8 = result_6
                            
                            if (result_8 != 0)
                                float* result_13 = result_8
                                sub_6b4d5b()
                            
                            result = result_5
                            
                            if (result == 0)
                                break
                            
                            float* result_2 = result
                            sub_6b4d5b()
                            result.b = 0
                            goto label_4ec6f4
                        
                        int32_t eax_22
                        int32_t edx_12
                        edx_12:eax_22 = muls.dp.d(0x7e07e07f, *(ebp_1 + 0x10) - *(ebp_1 + 0xc))
                        int32_t edx_13 = edx_12 s>> 8
                        
                        if (esi_2 s>= (edx_13 u>> 0x1f) + edx_13)
                            goto label_4ec67c
                        
                        *(ebp_1 + 0xc)
                        
                        if (esi_2 * 0x208 == neg.d(*(ebp_1 + 0xc)))
                            goto label_4ec67c
                        
                        result_10 = result_5
                        char eax_27 = sub_4eea40(&result_6[esi_2 * 4], arg2, arg3, edi_2, 
                            &result_10[esi_2 * 3])
                        unimplemented  {call 0x4eea40}
                        
                        if (eax_27 == 0)
                            result = result_6
                            
                            if (result != 0)
                                float* result_3 = result
                                sub_6b4d5b()
                            
                            if (result_10 == 0)
                                break
                            
                            float* result_14 = result_10
                            sub_6b4d5b()
                            result.b = 0
                            goto label_4ec6f4
                        
                        eax_21 = var_5c_2
                        ecx_14 = arg1
                    
                    eax_21 = &eax_21[1]
                    var_5c_2 = eax_21
                    
                    if (eax_21 == ecx_14[0xd])
                        goto label_4ec6d0
                
                result.b = 0
        else
            float* result_9 = result_6
            int32_t* result_11 = result_5
            int32_t var_60_1 = 0
            
            while (true)
                if (var_64_1 s>= 0 && var_64_1 s< eax_14)
                    void* ebx_1 = *(ebp_1 + 0xc)
                    void* ebx_2 = ebx_1 + var_60_1
                    
                    if (ebx_1 != neg.d(var_60_1))
                        unimplemented  {fld st0, dword [esp+0x1c]}
                        int32_t var_7c_1 = var_64_1
                        float var_7c_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        struct sealengine::CEmitterPos::VTable* var_28
                        struct sealengine::CEmitterPos::VTable** eax_16 =
                            sub_4bc890(*(ebx_2 + 0x24), ebx_2 + 0xcc, &var_28, var_7c_2)
                        unimplemented  {fld st0, dword [esp+0x1c]}
                        *result_11 = eax_16[1]
                        int32_t ecx_9 = eax_16[2]
                        result_11[1] = ecx_9
                        int32_t var_7c_3 = ecx_9
                        float var_7c_4 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        result_11[2] = eax_16[3]
                        float var_38
                        sub_4bcdb0(ebx_2 + 0x10c, &var_38, var_7c_4)
                        top_1 -= 1
                        unimplemented  {call 0x4bcdb0}
                        *result_9 = var_38
                        int32_t var_34
                        result_9[1] = var_34
                        int32_t var_30
                        result_9[2] = var_30
                        var_60_1 += 0x208
                        int32_t var_2c
                        result_9[3] = var_2c
                        int32_t eax_18
                        int32_t edx_10
                        edx_10:eax_18 = muls.dp.d(0x7e07e07f, *(ebp_1 + 0x10) - *(ebp_1 + 0xc))
                        int32_t edx_11 = edx_10 s>> 8
                        int32_t ebx_5 = var_64_1 + 1
                        eax_14 = (edx_11 u>> 0x1f) + edx_11
                        result_11 = &result_11[3]
                        result_9 = &result_9[4]
                        var_64_1 = ebx_5
                        
                        if (ebx_5 s>= eax_14)
                            goto label_4ec5e8
                        
                        continue
                
                float* result_7 = result_6
                
                if (result_7 != 0)
                    float* result_12 = result_7
                    sub_6b4d5b()
                
                result = result_5
                
                if (result != 0)
                    float* result_1 = result
                    sub_6b4d5b()
                
                break
            
            result.b = 0

label_4ec6f4:
fsbase->NtTib.ExceptionList = ExceptionList
return result
