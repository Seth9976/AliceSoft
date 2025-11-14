// 函数: sub_5734e0
// 地址: 0x5734e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71f8e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_48 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL result

if (*(arg1 + 0x114) != 0xffffffff)
label_573533:
    result = sub_574090(arg3)
    
    if (result == 0)
    labelid_5:
        result.b = 0
    else
        int32_t var_30 = 0
        int32_t var_2c_1 = 0
        int32_t var_28_1 = 0
        int32_t var_4 = 0
        int32_t ebx_2 = *(arg1 + 0x40) * arg2[1]
        int32_t edx_3 = *arg2 - 0x100
        
        if (edx_3 s< 0 || edx_3 s>= (*(arg1 + 0x124) - *(arg1 + 0x120)) s>> 4)
        label_573690:
            result.b = 0
        else
            int32_t* edx_5 = (edx_3 << 4) + *(arg1 + 0x120)
            int32_t* esi_2 = *edx_5
            int32_t edx_6 = edx_5[1]
            
            if (esi_2 == edx_6)
            label_573690_1:
                result.b = 0
            else
                do
                    if (*esi_2 == ebx_2)
                        BOOL ebx_3 = sub_571780(result, esi_2)
                        
                        if (ebx_3 == 0)
                            goto label_573690_2
                        
                        int32_t esi_3 = *(ebx_3 + 4)
                        result = *(arg1 + 0x11c)
                        int32_t* ecx_5 = *(ebx_3 + 8)
                        
                        if (esi_3 u>= result)
                            goto label_573690_2
                        
                        if (ecx_5 s<= 0)
                            goto label_573690_2
                        
                        if (ecx_5 + esi_3 u> result)
                            goto label_573690_2
                        
                        if (sub_6026c0(esi_3, arg1 + 0x114).b == 0)
                            goto label_573690_2
                        
                        uint32_t var_20
                        sub_413150(&var_20, ecx_5)
                        var_4.b = 1
                        uint32_t eax_6 = var_20
                        int32_t var_1c
                        uint32_t edi_3 = var_1c - eax_6
                        
                        if (sub_6021f0(arg1 + 0x114, edi_3, eax_6) == 0)
                            sub_65ab60(&var_20)
                            result.b = 0
                            goto label_573717
                        
                        int32_t eax_11
                        int32_t edx_8
                        edx_8:eax_11 = sx.q((*ebx_3 + 7) & 0xfffffff8)
                        sub_404f60(((((eax_11 + (edx_8 & 7)) s>> 3) + 3) & 0xfffffffc) * ebx_2, 
                            &var_30)
                        int32_t edi_4 = var_30
                        int32_t* ecx_7 = *(arg1 + 0x130)
                        
                        if (ecx_7 != 0
                                && (*(*ecx_7 + 8))(edi_4, var_2c_1 - edi_4, var_20, edi_3) != 0)
                            int32_t ebx_4 = *ebx_3
                            var_4.b = 0
                            sub_65ab60(&var_20)
                            int32_t ecx_8 = *(arg1 + 0x40)
                            int32_t temp0_1 =
                                divs.dp.d(sx.q((ecx_8 + ebx_4 - 1) & not.d(ecx_8 - 1)), ecx_8)
                            *arg4 = temp0_1
                            int32_t edx_16 = arg2[1]
                            *arg5 = edx_16
                            
                            if (sub_573730(arg1, temp0_1 * ecx_8, ecx_8 * edx_16) != 0)
                                int32_t* esi_12 = &var_30
                                
                                if (sub_573b10(arg1, ebx_4, *arg4, *arg5, &var_30) == 0)
                                    sub_65ab60(esi_12)
                                    result.b = 0
                                else
                                    sub_65ab60(esi_12)
                                    result.b = 1
                            else
                                sub_65ab60(&var_30)
                                result.b = 0
                            
                            goto label_573717
                        
                        sub_65ab60(&var_20)
                        
                        if (edi_4 != 0)
                            int32_t var_4c_5 = edi_4
                            sub_6b4d5b()
                        
                        goto label_573690_2
                    
                    esi_2 = &esi_2[5]
                while (esi_2 != edx_6)
                
                result.b = 0
else
    if (sub_571ef0(arg1 + 0x114, arg1 + 0x134).b != 0)
        goto label_573533
    
label_573690_2:
    result.b = 0

label_573717:
fsbase->NtTib.ExceptionList = ExceptionList
return result
