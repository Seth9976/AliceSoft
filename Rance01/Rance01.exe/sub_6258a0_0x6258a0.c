// 函数: sub_6258a0
// 地址: 0x6258a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_713c98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result =
    (*(**(arg1 + 4) + 0x2c))(data_78c474 ^ &__saved_edi)
int32_t edx_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result
int32_t var_54 = 0

if (result s> 0)
    do
        struct _EXCEPTION_REGISTRATION_RECORD** esi_1 = (*(**(arg1 + 4) + 0x30))(edx_1)
        
        if (esi_1 != 0xffffffff)
            int32_t edi_1 = 0
            
            if (esi_1 s< 0)
                goto label_625bdf
            
            result = *arg2
            
            if (esi_1 s>= (arg2[1] - result) s>> 2)
                goto label_625bdf
            
            result[esi_1] = &result[esi_1]->Next + 1
            
            if ((*arg2)[esi_1] s<= 1)
                result = (*(**(arg1 + 4) + 0x14))(esi_1)
                
                if (result u> 5)
                    goto label_625bdf
                
                char eax_11
                int32_t* esi_2
                
                switch (result)
                    case nullptr
                        int32_t eax_7 = (*(**(arg1 + 8) + 0x14))()
                        int32_t var_48
                        sub_413170(&var_48, eax_7)
                        int32_t var_c_1 = 0
                        
                        if (eax_7 s> 0)
                            do
                                *(var_48 + (edi_1 << 2)) = (*(**(arg1 + 8) + 0x18))(edi_1)
                                edi_1 += 1
                            while (edi_1 s< eax_7)
                        
                        eax_11 = sub_625770(&var_48, arg1, esi_1, arg2)
                        esi_2 = &var_48
                    label_625b9f:
                        
                        if (eax_11 == 0)
                            sub_65ab60(esi_2)
                        label_625bdf:
                            result.b = 0
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return result
                        
                        int32_t var_c_4 = 0xffffffff
                        sub_65ab60(esi_2)
                    case 1
                        int32_t eax_13 = (*(**(arg1 + 4) + 0x18))(esi_1)
                        int32_t eax_15 = (*(**(arg1 + 8) + 8))(eax_13)
                        int32_t var_38
                        sub_413170(&var_38, eax_15)
                        int32_t var_c_2 = 1
                        
                        if (eax_15 s> 0)
                            do
                                *(var_38 + (edi_1 << 2)) = (*(**(arg1 + 8) + 0xc))(eax_13, edi_1)
                                edi_1 += 1
                            while (edi_1 s< eax_15)
                        
                        eax_11 = sub_625770(&var_38, arg1, esi_1, arg2)
                        esi_2 = &var_38
                        goto label_625b9f
                    case 3
                        struct _EXCEPTION_REGISTRATION_RECORD** edi_4 = (*(**(arg1 + 4) + 4))(esi_1)
                        
                        if (edi_4 != 0 && (*edi_4)->__offset(0x14).d() s> 0)
                            result = (*edi_4)->__offset(0x18).d()
                            struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
                            
                            if (result == 0)
                                goto label_625bdf
                            
                            int32_t eax_23 = (*(**(arg1 + 4) + 0x24))(esi_1)
                            
                            if (eax_23 != 0xffffffff)
                                eax_23 += 1
                            
                            if (eax_23 s<= 1)
                                result = (*(**(arg1 + 4) + 0x28))(esi_1) - 0xe
                                
                                if (result u> 0x34)
                                    goto label_625bdf
                                
                                switch (result)
                                    case 2, 3
                                        int32_t i = 0
                                        int32_t eax_37
                                        int32_t edx_28
                                        edx_28:eax_37 = sx.q((*edi_4)->__offset(0x14).d())
                                        
                                        if ((eax_37 + (edx_28 & 3)) s>> 2 s> 0)
                                            int32_t eax_42
                                            int32_t edx_32
                                            
                                            do
                                                if (sub_625410(arg1, result_1[i], arg2).b == 0)
                                                    goto label_625bdf
                                                
                                                i += 1
                                                edx_32:eax_42 = sx.q((*edi_4)->__offset(0x14).d())
                                            while (i s< (eax_42 + (edx_32 & 3)) s>> 2)
                                    case 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x11, 
                                            0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 
                                            0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 
                                            0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 
                                            0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33
                                        goto label_625bdf
                            else
                                int32_t i_1 = 0
                                int32_t eax_26
                                int32_t edx_20
                                edx_20:eax_26 = sx.q((*edi_4)->__offset(0x14).d())
                                
                                if ((eax_26 + (edx_20 & 3)) s>> 2 s> 0)
                                    int32_t eax_31
                                    int32_t edx_24
                                    
                                    do
                                        if (sub_625410(arg1, result_1[i_1], arg2).b == 0)
                                            goto label_625bdf
                                        
                                        i_1 += 1
                                        edx_24:eax_31 = sx.q((*edi_4)->__offset(0x14).d())
                                    while (i_1 s< (eax_31 + (edx_24 & 3)) s>> 2)
                    case 4
                        int32_t eax_45 = (*(**(arg1 + 4) + 0x1c))(esi_1)
                        int32_t eax_47 = (*(**(arg1 + 8) + 0x20))(eax_45)
                        int32_t var_28
                        sub_413170(&var_28, eax_47)
                        int32_t var_c_3 = 2
                        
                        if (eax_47 s> 0)
                            do
                                *(var_28 + (edi_1 << 2)) = (*(**(arg1 + 8) + 0x24))(eax_45, edi_1)
                                edi_1 += 1
                            while (edi_1 s< eax_47)
                        
                        eax_11 = sub_625770(&var_28, arg1, esi_1, arg2)
                        esi_2 = &var_28
                        goto label_625b9f
        
        edx_1 = var_54 + 1
        var_54 = edx_1
    while (edx_1 s< result_2)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
