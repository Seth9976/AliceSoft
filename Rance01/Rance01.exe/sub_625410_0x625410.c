// 函数: sub_625410
// 地址: 0x625410
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_712448
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = 0
struct _EXCEPTION_REGISTRATION_RECORD** eax_3

if (arg2 s>= 0)
    eax_3 = *arg3
    
    if (arg2 s< (arg3[1] - eax_3) s>> 2)
        eax_3[arg2] = &eax_3[arg2]->Next + 1
        
        if ((*arg3)[arg2] s> 1)
            goto label_6256f7
        
        int32_t var_44_1
        struct _EXCEPTION_REGISTRATION_RECORD*** var_40_4
        int32_t var_28
        
        switch ((*(**(arg1 + 4) + 0x14))(arg2))
            case nullptr
                int32_t eax_6 = (*(**(arg1 + 8) + 0x14))(eax_2)
                sub_413170(&var_28, eax_6)
                int32_t var_c_1 = 0
                
                if (eax_6 s> 0)
                    do
                        *(var_28 + (edi << 2)) = (*(**(arg1 + 8) + 0x18))(edi)
                        edi += 1
                    while (edi s< eax_6)
                
                var_40_4 = arg3
                var_44_1 = arg2
                goto label_62552d
            case 1
                int32_t eax_11 = (*(**(arg1 + 4) + 0x18))(arg2)
                int32_t eax_13 = (*(**(arg1 + 8) + 8))(eax_11)
                sub_413170(&var_28, eax_13)
                int32_t edi_1 = 0
                int32_t var_c_2 = 1
                
                if (eax_13 s> 0)
                    do
                        *(var_28 + (edi_1 << 2)) = (*(**(arg1 + 8) + 0xc))(eax_11, edi_1)
                        edi_1 += 1
                    while (edi_1 s< eax_13)
                
            label_625526:
                var_40_4 = arg3
                var_44_1 = arg2
            label_62552d:
                int32_t* esi_1 = &var_28
                
                if (sub_625770(&var_28, arg1, var_44_1, var_40_4) != 0)
                    sub_65ab60(esi_1)
                label_6256f7:
                    eax_3.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_3
                
                sub_65ab60(esi_1)
            case 2, 5
                goto label_6256f7
            case 3
                struct _EXCEPTION_REGISTRATION_RECORD** edi_3 = (*(**(arg1 + 4) + 4))(arg2)
                
                if (edi_3 == 0)
                    goto label_6256f7
                
                if ((*edi_3)->__offset(0x14).d(eax_2) s<= 0)
                    goto label_6256f7
                
                eax_3 = (*edi_3)->__offset(0x18).d()
                struct _EXCEPTION_REGISTRATION_RECORD** var_2c_3 = eax_3
                
                if (eax_3 != 0)
                    int32_t eax_23 = (*(**(arg1 + 4) + 0x24))(arg2)
                    
                    if (eax_23 != 0xffffffff)
                        eax_23 += 1
                    
                    if (eax_23 s<= 1)
                        switch ((*(**(arg1 + 4) + 0x28))(arg2) - 0xe)
                            case nullptr, 1, 0x10, 0x24, 0x34
                                goto label_6256f7
                            case 2, 3
                                int32_t ebx_3 = 0
                                int32_t eax_38
                                int32_t edx_26
                                edx_26:eax_38 = sx.q((*edi_3)->__offset(0x14).d())
                                
                                if ((eax_38 + (edx_26 & 3)) s>> 2 s<= 0)
                                    goto label_6256f7
                                
                                while (sub_625410(var_2c_3[ebx_3], arg3).b != 0)
                                    ebx_3 += 1
                                    int32_t eax_43
                                    int32_t edx_30
                                    edx_30:eax_43 = sx.q((*edi_3)->__offset(0x14).d())
                                    
                                    if (ebx_3 s>= (eax_43 + (edx_30 & 3)) s>> 2)
                                        int32_t eax_45
                                        eax_45.b = 1
                                        fsbase->NtTib.ExceptionList = ExceptionList
                                        return eax_45
                    else
                        int32_t ebx_2 = 0
                        int32_t eax_26
                        int32_t edx_18
                        edx_18:eax_26 = sx.q((*edi_3)->__offset(0x14).d())
                        
                        if ((eax_26 + (edx_18 & 3)) s>> 2 s<= 0)
                            goto label_6256f7
                        
                        while (sub_625410(var_2c_3[ebx_2], arg3).b != 0)
                            ebx_2 += 1
                            int32_t eax_31
                            int32_t edx_22
                            edx_22:eax_31 = sx.q((*edi_3)->__offset(0x14).d())
                            
                            if (ebx_2 s>= (eax_31 + (edx_22 & 3)) s>> 2)
                                int32_t eax_33
                                eax_33.b = 1
                                fsbase->NtTib.ExceptionList = ExceptionList
                                return eax_33
            case 4
                int32_t eax_47 = (*(**(arg1 + 4) + 0x1c))(arg2)
                int32_t eax_49 = (*(**(arg1 + 8) + 0x20))(eax_47)
                sub_413170(&var_28, eax_49)
                int32_t edi_4 = 0
                int32_t var_c_3 = 2
                
                if (eax_49 s> 0)
                    do
                        *(var_28 + (edi_4 << 2)) = (*(**(arg1 + 8) + 0x24))(eax_47, edi_4)
                        edi_4 += 1
                    while (edi_4 s< eax_49)
                
                goto label_625526

eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
