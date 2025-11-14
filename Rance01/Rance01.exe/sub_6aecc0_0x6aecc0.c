// 函数: sub_6aecc0
// 地址: 0x6aecc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722d25
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_58
int32_t eax_2 = data_78c474 ^ &var_58
int32_t __saved_edi
int32_t var_6c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = arg2 - 1
void* edi = arg1
void* var_38 = edi
int32_t result_1 = 0
int32_t result_2 = result

if (result u> 0)
    do
        int32_t var_50 = 0
        void* var_4c_1 = nullptr
        int32_t var_48_1 = 0
        int32_t var_4 = 0
        int32_t i_1 = 0
        struct dpsound::CWindow::VTable** var_54
        
        if (arg3 - 1 u> 0)
            int32_t i
            
            do
                void** eax_8 = edi + 0x38
                
                if (eax_8[5] u>= 0x10)
                    eax_8 = *eax_8
                
                int32_t i_2 = i_1
                int32_t result_3 = result_1
                void** var_78_1 = eax_8
                sub_4104a0("%s_c_%d_%d")
                var_4.b = 1
                struct dpsound::CWindow::VTable** eax_9 = operator new(0xa0)
                var_54 = eax_9
                var_4.b = 2
                int32_t* var_2c
                int32_t var_18
                struct dpsound::CWindow::VTable** ebp_2
                
                if (eax_9 == 0)
                    ebp_2 = nullptr
                else
                    int32_t* ebp_1 = var_2c
                    
                    if (var_18 u< 0x10)
                        ebp_1 = &var_2c
                    
                    HCURSOR eax_10 = LoadCursorA(nullptr, 0x7f00)
                    sub_6b1670(ebp_1, eax_9, *(edi + 0x24), 0, 0, 0, eax_10, 0, 0)
                    eax_9[0x17] = 5
                    __builtin_memset(&eax_9[0x18], 0, 0x29)
                    __builtin_memset(&eax_9[0x23], 0, 0x11)
                    *eax_9 = &dpsound::CSplitWindowBorderCrossTuning::`vftable'{for `dpsound::CSplitWindowBorder'}
                    ebp_2 = eax_9
                
                var_4.b = 1
                int32_t* eax_12 = var_2c
                var_54 = ebp_2
                
                if (var_18 u< 0x10)
                    eax_12 = &var_2c
                
                int32_t ecx_2 = *(edi + 0x28)
                sub_6b1840(ecx_2, ecx_2, eax_12, ebp_2, 0x54000000, ecx_2 * result_1, ecx_2 * i_1, 
                    *(edi + 0x20), nullptr, *(edi + 0x24))
                int32_t esi_2 = var_50
                ebp_2[0x24] = var_38 + 0x34
                ebp_2[0x23] = var_38 + 0x36
                ebp_2[0x25] = *(var_38 + 0x28)
                int32_t ecx_4
                ecx_4.b = *(var_38 + 0x56)
                char edx_9 = *(var_38 + 0x55)
                void* eax_15
                eax_15.b = *(var_38 + 0x54)
                ebp_2[0x26].b = eax_15.b
                struct dpsound::CWindow::VTable*** eax_16 = var_4c_1
                *(ebp_2 + 0x9a) = ecx_4.b
                *(ebp_2 + 0x99) = edx_9
                
                if (&var_54 u>= eax_16 || esi_2 u> &var_54)
                    if (eax_16 == var_48_1)
                        int32_t ecx_12 = (eax_16 - esi_2) s>> 2
                        
                        if (ecx_12 u> 0x3ffffffe)
                            goto label_6af0f3
                        
                        int32_t edx_16 = (var_48_1 - esi_2) s>> 2
                        
                        if (ecx_12 + 1 u> edx_16)
                            uint32_t eax_20 = edx_16 u>> 1
                            int32_t edx_17
                            
                            if (0x3fffffff - eax_20 u>= edx_16)
                                edx_17 = edx_16 + eax_20
                            else
                                edx_17 = 0
                            
                            if (edx_17 u< ecx_12 + 1)
                                edx_17 = ecx_12 + 1
                            
                            sub_6b0560(&var_50, edx_17)
                            eax_16 = var_4c_1
                    
                    if (eax_16 != 0)
                        *eax_16 = ebp_2
                else
                    int32_t edi_3 = (&var_54 - esi_2) s>> 2
                    
                    if (eax_16 == var_48_1)
                        int32_t ecx_7 = (eax_16 - esi_2) s>> 2
                        
                        if (ecx_7 u> 0x3ffffffe)
                            goto label_6af0f3
                        
                        int32_t edx_12 = (var_48_1 - esi_2) s>> 2
                        
                        if (ecx_7 + 1 u> edx_12)
                            uint32_t eax_18 = edx_12 u>> 1
                            int32_t edx_13
                            
                            if (0x3fffffff - eax_18 u>= edx_12)
                                edx_13 = edx_12 + eax_18
                            else
                                edx_13 = 0
                            
                            if (edx_13 u< ecx_7 + 1)
                                edx_13 = ecx_7 + 1
                            
                            sub_6b0560(&var_50, edx_13)
                            esi_2 = var_50
                            eax_16 = var_4c_1
                    
                    if (eax_16 != 0)
                        *eax_16 = *(esi_2 + (edi_3 << 2))
                
                var_4.b = 0
                var_4c_1 = &eax_16[1]
                
                if (var_18 u>= 0x10)
                    int32_t* var_70_4 = var_2c
                    sub_6b4d5b()
                
                edi = var_38
                i = i_1 + 1
                i_1 = i
            while (i u< arg3 - 1)
        
        int32_t eax_23 = *(edi + 0xac)
        int32_t edx_19
        
        if (&var_50 u< eax_23)
            edx_19 = *(edi + 0xa8)
        
        int32_t* eax_33
        
        if (&var_50 u>= eax_23 || edx_19 u> &var_50)
            int32_t ecx_19 = *(edi + 0xb0)
            
            if (eax_23 == ecx_19)
                int32_t edx_21 = *(edi + 0xa8)
                int32_t eax_31 = (eax_23 - edx_21) s>> 4
                
                if (eax_31 u> 0xffffffe)
                label_6af0f3:
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_21 = (ecx_19 - edx_21) s>> 4
                
                if (eax_31 + 1 u> ecx_21)
                    uint32_t edx_23 = ecx_21 u>> 1
                    int32_t ecx_22
                    
                    if (0xfffffff - edx_23 u>= ecx_21)
                        ecx_22 = ecx_21 + edx_23
                    else
                        ecx_22 = 0
                    
                    if (ecx_22 u< eax_31 + 1)
                        ecx_22 = eax_31 + 1
                    
                    sub_6630b0(edi + 0xa8, ecx_22)
                
                goto label_6af074
            
        label_6af074:
            eax_33 = *(edi + 0xac)
            var_4.b = 4
            
            if (eax_33 != 0)
                sub_6b05e0(eax_33, &var_50)
        else
            int32_t ecx_14 = *(edi + 0xb0)
            
            if (eax_23 == ecx_14)
                int32_t eax_25 = (eax_23 - edx_19) s>> 4
                
                if (eax_25 u> 0xffffffe)
                    goto label_6af0f3
                
                int32_t ecx_16 = (ecx_14 - edx_19) s>> 4
                var_54 = eax_25 + 1
                
                if (eax_25 + 1 u> ecx_16)
                    uint32_t eax_28 = ecx_16 u>> 1
                    int32_t ecx_17
                    
                    if (0xfffffff - eax_28 u>= ecx_16)
                        ecx_17 = ecx_16 + eax_28
                    else
                        ecx_17 = 0
                    
                    int32_t eax_29 = var_54
                    
                    if (ecx_17 u< eax_29)
                        ecx_17 = eax_29
                    
                    sub_6630b0(edi + 0xa8, ecx_17)
                
                goto label_6af008
            
        label_6af008:
            eax_33 = *(edi + 0xac)
            var_4.b = 3
            
            if (eax_33 != 0)
                sub_6b05e0(eax_33, ((&var_50 - edx_19) & 0xfffffff0) + *(edi + 0xa8))
        *(edi + 0xac) += 0x10
        int32_t var_4_1 = 0xffffffff
        int32_t eax_34 = var_50
        
        if (eax_34 != 0)
            int32_t var_70_8 = eax_34
            sub_6b4d5b()
        
        result = result_1 + 1
        var_50 = 0
        int32_t var_4c_2 = 0
        int32_t var_48_2 = 0
        result_1 = result
    while (result u< result_2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_58)
return result
