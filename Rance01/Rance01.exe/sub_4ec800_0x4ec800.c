// 函数: sub_4ec800
// 地址: 0x4ec800
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714e98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = 0
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1 != 0)
    int32_t* var_30 = nullptr
    int32_t var_2c_1 = 0
    int32_t var_28_1 = 0
    int32_t var_4 = 0
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = muls.dp.d(0x7e07e07f, *(arg1 + 0x10) - *(arg1 + 0xc))
    int32_t edx_2 = edx_1 s>> 8
    int32_t edi_3 = (edx_2 u>> 0x1f) + edx_2
    int32_t ebp_1 = 0
    
    if (edi_3 s<= 0)
    label_4ec8ca:
        result = arg2
        int32_t* ebp_2 = result[0xc]
        
        if (ebp_2 == result[0xd])
        label_4ec954:
            int32_t* edi_5 = var_30
            
            if (edi_5 != ebx)
                if (result[0x19] == 0)
                    struct sealengine::CDrawInstance::sealengine::CLineListView::VTable** eax_17 =
                        operator new(0x10)
                    
                    if (eax_17 == 0)
                        eax_17 = nullptr
                    else
                        *eax_17 =
                            &sealengine::CLineListView::`vftable'{for `sealengine::CDrawInstance'}
                        eax_17[1] = 0
                        eax_17[2] = 0
                        eax_17[3].w = 0x101
                    
                    arg2[0x19] = eax_17
                    result = arg2
                
                long double x87_r7_2 = float.t(1)
                void* eax_18 = result[0x19]
                int32_t var_4c_7 = 1
                float var_20 = fconvert.s(x87_r7_2)
                float var_1c_1 = fconvert.s(x87_r7_2)
                float var_18_1 = fconvert.s(x87_r7_2)
                float var_14_1 = fconvert.s(x87_r7_2)
                int32_t var_4_4 = 0xffffffff
                
                if (sub_4cc120(arg3, eax_18, &var_30, &var_20, 1).b != 0)
                    if (edi_5 != 0)
                        int32_t* esi_5 = edi_5
                        
                        do
                            (**esi_5)(0)
                            esi_5 = &esi_5[0xb]
                        while (esi_5 != ebx)
                        
                        goto label_4ecac5
                    
                    result.b = 1
                else if (edi_5 == 0)
                    result.b = 0
                else
                    int32_t* esi_4 = edi_5
                    
                    do
                        (**esi_4)(0)
                        esi_4 = &esi_4[0xb]
                    while (esi_4 != ebx)
                    
                    int32_t* var_4c_8 = edi_5
                    sub_6b4d5b()
                    result.b = 0
            else
                struct sealengine::CDrawInstance::sealengine::CLineListView::VTable** esi_2 =
                    result[0x19]
                
                if (esi_2 != 0)
                    int32_t* ecx_8 = esi_2[1]
                    *esi_2 = &sealengine::CLineListView::`vftable'{for `sealengine::CDrawInstance'}
                    
                    if (ecx_8 != 0)
                        (*(*ecx_8 + 4))(eax_2)
                        esi_2[1] = 0
                    
                    struct sealengine::CDrawInstance::sealengine::CLineListView::VTable** 
                        var_4c_3 = esi_2
                    esi_2[2] = 0
                    sub_6b4d5b()
                    arg2[0x19] = 0
                
                if (edi_5 == 0)
                    result.b = 1
                else
                label_4ecac5:
                    int32_t* var_4c_9 = edi_5
                    sub_6b4d5b()
                    result.b = 1
        else
            while (true)
                int32_t* edi_4 = *ebp_2
                
                if (edi_4 != 0)
                    int32_t ecx_4 = *edi_4
                    
                    if (ecx_4 s< 0)
                    label_4ec9c3:
                        int32_t var_4_2 = 0xffffffff
                        int32_t* ebx_2 = var_30
                        
                        if (ebx_2 != 0)
                            int32_t* esi_3 = ebx_2
                            
                            if (ebx_2 != var_2c_1)
                                do
                                    (**esi_3)(0)
                                    esi_3 = &esi_3[0xb]
                                while (esi_3 != var_2c_1)
                            
                            int32_t* var_4c_5 = ebx_2
                            sub_6b4d5b()
                        
                        break
                    
                    int32_t eax_11
                    int32_t edx_7
                    edx_7:eax_11 = muls.dp.d(0x7e07e07f, *(arg1 + 0x10) - *(arg1 + 0xc))
                    int32_t edx_8 = edx_7 s>> 8
                    
                    if (ecx_4 s>= (edx_8 u>> 0x1f) + edx_8)
                        goto label_4ec9c3
                    
                    int32_t ecx_5 = ecx_4 * 0x208
                    
                    if (ecx_5 == neg.d(*(arg1 + 0xc)))
                        goto label_4ec9c3
                    
                    if (*(ecx_5 + *(arg1 + 0xc) + 0x12d) != 0 && edi_4[0x83].b != 0 && edi_4[2] == 0
                            && sub_4dc300(&edi_4[0x91], &var_30) == 0)
                        int32_t var_4_3 = 0xffffffff
                        sub_4f5da0(&var_30)
                        result.b = 0
                        goto label_4ecad4
                    
                    result = arg2
                
                ebp_2 = &ebp_2[1]
                
                if (ebp_2 == result[0xd])
                    ebx = var_2c_1
                    goto label_4ec954
            
            result.b = 0
    else
        int32_t ebx_1 = 0
        
        while (true)
            if (ebp_1 s>= 0)
                int32_t ecx_3 = *(arg1 + 0x10) - *(arg1 + 0xc)
                
                if (ebp_1 s< ecx_3 s/ 0x208)
                    void* eax_8 = *(arg1 + 0xc)
                    
                    if (eax_8 != neg.d(ebx_1))
                        int32_t var_4c_1 = ecx_3
                        float var_4c_2 = fconvert.s(fconvert.t(arg4))
                        
                        if (sub_4baa90(eax_8 + ebx_1, &var_30) == 0)
                            int32_t var_4_1 = 0xffffffff
                            sub_4f5da0(&var_30)
                            result.b = 0
                            break
            
            ebp_1 += 1
            ebx_1 += 0x208
            
            if (ebp_1 s>= edi_3)
                ebx = var_2c_1
                goto label_4ec8ca
else
    struct sealengine::CDrawInstance::sealengine::CLineListView::VTable** esi_1 = arg2[0x19]
    
    if (esi_1 != 0)
        sub_4c9360(esi_1)
        arg2[0x19] = 0
    
    result.b = 1

label_4ecad4:
fsbase->NtTib.ExceptionList = ExceptionList
return result
