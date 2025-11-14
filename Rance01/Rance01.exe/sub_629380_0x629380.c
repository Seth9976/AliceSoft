// 函数: sub_629380
// 地址: 0x629380
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_8 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7243e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = *(arg1 + 0xec)
int32_t result = *(arg1 + 0xf0)

if (ecx != result)
    int32_t esi_1 = *(*(arg1 + 0xec) + (result - ecx) s/ 0x28 * 0x28 - 0x28)
    int32_t eax_13 = (*(**(*(arg1 + 0xdc) + 4) + 0x14))(esi_1)
    char var_2c
    
    if (eax_13 == 1)
        void* edi_3 = *(arg1 + 0xdc)
        int32_t ebx_3 = 0
        int32_t var_38_3 = 0
        
        if ((*(**(edi_3 + 8) + 8))((*(**(edi_3 + 4) + 0x18))(esi_1)) s> 0)
            int32_t eax_81
            
            do
                int32_t var_18_3 = 0xf
                int32_t var_1c_2 = 0
                var_2c = 0
                int32_t var_4_4 = 0
                void* eax_66 = (*(**(edi_3 + 8) + 0xc))((*(**(edi_3 + 4) + 0x18))(esi_1), ebx_3)
                int32_t* eax_68 = (*(**(edi_3 + 4) + 4))(esi_1)
                
                if (eax_68 != 0 && ebx_3 s>= 0)
                    int32_t eax_71
                    int32_t edx_35
                    edx_35:eax_71 = sx.q((*(*eax_68 + 0x14))(eax_4))
                    
                    if (ebx_3 s< (eax_71 + (edx_35 & 3)) s>> 2)
                        sub_623f50(&var_2c, edi_3, eax_66, *((*(*eax_68 + 0x18))() + (ebx_3 << 2)))
                
                if (var_38_3 s< var_1c_2)
                    var_38_3 = var_1c_2
                
                int32_t var_4_5 = 0xffffffff
                
                if (var_18_3 u>= 0x10)
                    int32_t var_54_26 = var_2c.d
                    sub_6b4d5b()
                
                ebx_3 += 1
                eax_81 = (*(**(edi_3 + 8) + 8))((*(**(edi_3 + 4) + 0x18))(esi_1))
            while (ebx_3 s< eax_81)
        
        void* edx_41 = *(arg1 + 0xdc)
        *(arg1 + 0x118) = var_38_3
        int32_t eax_82 = sub_623ae0(edx_41, esi_1)
        void* edi_4 = *(arg1 + 0xdc)
        *(arg1 + 0x11c) = eax_82
        int32_t edx_42 = *(**(edi_4 + 4) + 0x18)
        int32_t var_38_4 = 0
        result_1 = 0
        result = (*(**(edi_4 + 8) + 8))(edx_42(esi_1))
        
        if (result s> 0)
            do
                int32_t var_18_4 = 0xf
                int32_t var_1c_3 = 0
                var_2c = 0
                int32_t var_4_6 = 1
                int32_t* eax_87 = (*(**(edi_4 + 4) + 4))(esi_1)
                
                if (eax_87 != 0 && result_1 s>= 0)
                    int32_t eax_90
                    int32_t edx_46
                    edx_46:eax_90 = sx.q((*(*eax_87 + 0x14))(eax_4))
                    
                    if (result_1 s< (eax_90 + (edx_46 & 3)) s>> 2)
                        int32_t eax_94 = (*(*eax_87 + 0x18))()
                        int32_t result_5 = result_1
                        sub_622f00(
                            (*(**(edi_4 + 8) + 0xc))((*(**(edi_4 + 4) + 0x18))(esi_1), result_5), 
                            edi_4, *(eax_94 + (result_5 << 2)), &var_2c)
                
                if (var_38_4 s< var_1c_3)
                    var_38_4 = var_1c_3
                
                int32_t var_4_7 = 0xffffffff
                
                if (var_18_4 u>= 0x10)
                    int32_t var_54_36 = var_2c.d
                    sub_6b4d5b()
                
                int32_t eax_101 = *(**(edi_4 + 4) + 0x18)
                result_1 += 1
                result = (*(**(edi_4 + 8) + 8))(eax_101(esi_1))
            while (result_1 s< result)
        
        *(arg1 + 0x120) = var_38_4
    else if (eax_13 == 3)
        result = sub_624b10(esi_1, *(arg1 + 0xdc))
        *(arg1 + 0x130) = result
    else
        result = eax_13 - 4
        
        if (eax_13 == 4)
            void* edi_1 = *(arg1 + 0xdc)
            int32_t eax_16 = *(**(edi_1 + 4) + 0x1c)
            int32_t ebx_1 = 0
            result_1 = 0
            
            if ((*(**(edi_1 + 8) + 0x20))(eax_16(esi_1)) s> 0)
                int32_t eax_38
                
                do
                    int32_t var_18_1 = 0xf
                    int32_t result_3 = 0
                    var_2c = 0
                    int32_t var_4 = 2
                    void* eax_23 =
                        (*(**(edi_1 + 8) + 0x24))((*(**(edi_1 + 4) + 0x1c))(esi_1), ebx_1)
                    int32_t* eax_25 = (*(**(edi_1 + 4) + 4))(esi_1)
                    
                    if (eax_25 != 0 && ebx_1 s>= 0)
                        int32_t eax_28
                        int32_t edx_10
                        edx_10:eax_28 = sx.q((*(*eax_25 + 0x14))(eax_4))
                        
                        if (ebx_1 s< (eax_28 + (edx_10 & 3)) s>> 2)
                            sub_623f50(&var_2c, edi_1, eax_23, 
                                *((*(*eax_25 + 0x18))() + (ebx_1 << 2)))
                    
                    if (result_1 s< result_3)
                        result_1 = result_3
                    
                    int32_t var_4_1 = 0xffffffff
                    
                    if (var_18_1 u>= 0x10)
                        int32_t var_54_8 = var_2c.d
                        sub_6b4d5b()
                    
                    ebx_1 += 1
                    eax_38 = (*(**(edi_1 + 8) + 0x20))((*(**(edi_1 + 4) + 0x1c))(esi_1))
                while (ebx_1 s< eax_38)
            
            void* edx_16 = *(arg1 + 0xdc)
            *(arg1 + 0x124) = result_1
            int32_t* eax_39 = sub_624810(edx_16, esi_1)
            void* edi_2 = *(arg1 + 0xdc)
            *(arg1 + 0x128) = eax_39
            int32_t var_38_2 = 0
            result = (*(**(edi_2 + 8) + 0x20))((*(**(edi_2 + 4) + 0x1c))(esi_1))
            int32_t result_2 = result
            result_1 = 0
            
            if (result s> 0)
                do
                    int32_t var_18_2 = 0xf
                    int32_t var_1c_1 = 0
                    var_2c = 0
                    int32_t var_4_2 = 3
                    int32_t* eax_44 = (*(**(edi_2 + 4) + 4))(esi_1)
                    
                    if (eax_44 != 0 && result_1 s>= 0)
                        int32_t eax_47
                        int32_t edx_21
                        edx_21:eax_47 = sx.q((*(*eax_44 + 0x14))(eax_4))
                        
                        if (result_1 s< (eax_47 + (edx_21 & 3)) s>> 2)
                            int32_t eax_51 = (*(*eax_44 + 0x18))()
                            int32_t result_4 = result_1
                            sub_622f00(
                                (*(**(edi_2 + 8) + 0x24))((*(**(edi_2 + 4) + 0x1c))(esi_1), 
                                    result_4), 
                                edi_2, *(eax_51 + (result_4 << 2)), &var_2c)
                    
                    if (var_38_2 s< var_1c_1)
                        var_38_2 = var_1c_1
                    
                    int32_t var_4_3 = 0xffffffff
                    
                    if (var_18_2 u>= 0x10)
                        int32_t var_54_18 = var_2c.d
                        sub_6b4d5b()
                    
                    result = result_1 + 1
                    result_1 = result
                while (result s< result_2)
            
            *(arg1 + 0x12c) = var_38_2

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
