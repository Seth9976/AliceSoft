// 函数: sub_6ae6b0
// 地址: 0x6ae6b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722d76
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_58
int32_t eax_2 = data_78c474 ^ &var_58
int32_t __saved_edi
int32_t var_6c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x34) = 0
*(arg1 + 0x36) = 0
sub_401180(arg1 + 0x38, 0xffffffff, arg2, 0)
*(arg1 + 0x28) = arg7
*(arg1 + 0x54) = arg8
*(arg1 + 0x20) = arg3
*(arg1 + 0x24) = arg4
sub_4c32d0(arg5, arg1 + 0x98)
struct dpsound::CWindow::VTable** i_3

if (arg5 u> 0)
    int32_t var_54_1 = 0
    i_3 = arg5
    struct dpsound::CWindow::VTable** i
    
    do
        sub_65a090(*(arg1 + 0x98) + var_54_1, arg6)
        var_54_1 += 0x10
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t i_2 = 0

if (arg5 - 1 u> 0)
    int32_t i_1
    
    do
        void* eax_11 = arg1 + 0x38
        
        if (*(arg1 + 0x4c) u>= 0x10)
            eax_11 = *eax_11
        
        int32_t i_4 = i_2
        void* var_74_1 = eax_11
        sub_4104a0("%s_x_%d")
        int32_t var_4 = 0
        struct dpsound::CWindow::VTable** i_9 = operator new(0xa0)
        struct dpsound::CWindow::VTable** i_11 = i_9
        var_4.b = 1
        struct dpsound::CWindow::VTable** i_7
        PSTR var_2c
        int32_t var_18
        struct dpsound::CWindow::VTable** i_5
        
        if (i_9 == 0)
            i_5 = nullptr
            i_7 = nullptr
        else
            int32_t* esi_3 = var_2c
            
            if (var_18 u< 0x10)
                esi_3 = &var_2c
            
            HCURSOR eax_12 = LoadCursorA(nullptr, 0x7f00)
            sub_6b1670(esi_3, i_9, *(arg1 + 0x24), 0, 0, 0, eax_12, 0, 0)
            i_9[0x17] = 5
            __builtin_memset(&i_9[0x18], 0, 0x29)
            __builtin_memset(&i_9[0x23], 0, 0x11)
            *i_9 = &
                dpsound::CSplitWindowBorderWidthTuning::`vftable'{for `dpsound::CSplitWindowBorder'}
            i_5 = i_9
            i_7 = i_9
        
        var_4.b = 0
        PSTR edi_2 = var_2c
        i_3 = i_5
        
        if (var_18 u< 0x10)
            edi_2 = &var_2c
        
        int32_t ecx_5 = *(arg1 + 0x28)
        sub_6b1840(ecx_5, 0, edi_2, i_5, 0x54000000, ecx_5 * i_2, 0, *(arg1 + 0x20), nullptr, 
            *(arg1 + 0x24))
        i_5[0x24] = arg1 + 0x34
        i_5[0x23] = arg1 + 0x36
        i_5[0x25] = *(arg1 + 0x28)
        int32_t eax_17
        eax_17.b = *(arg1 + 0x56)
        char edx_5 = *(arg1 + 0x54)
        *(i_5 + 0x99) = *(arg1 + 0x55)
        i_5[0x26].b = edx_5
        *(i_5 + 0x9a) = eax_17.b
        int32_t eax_18 = *(arg1 + 0x7c)
        int32_t edx_6
        
        if (&i_3 u< eax_18)
            edx_6 = *(arg1 + 0x78)
        
        if (&i_3 u>= eax_18 || edx_6 u> &i_3)
            int32_t ecx_13 = *(arg1 + 0x80)
            
            if (eax_18 == ecx_13)
                int32_t edx_10 = *(arg1 + 0x78)
                int32_t eax_24 = (eax_18 - edx_10) s>> 2
                
                if (eax_24 u> 0x3ffffffe)
                    goto label_6aeac9
                
                int32_t ecx_15 = (ecx_13 - edx_10) s>> 2
                
                if (eax_24 + 1 u> ecx_15)
                    uint32_t edx_12 = ecx_15 u>> 1
                    int32_t ecx_16
                    
                    if (0x3fffffff - edx_12 u>= ecx_15)
                        ecx_16 = ecx_15 + edx_12
                    else
                        ecx_16 = 0
                    
                    if (ecx_16 u< eax_24 + 1)
                        ecx_16 = eax_24 + 1
                    
                    sub_6b0560(arg1 + 0x78, ecx_16)
                    i_5 = i_7
            
            struct dpsound::CWindow::VTable*** eax_26 = *(arg1 + 0x7c)
            
            if (eax_26 != 0)
                *eax_26 = i_5
        else
            int32_t ecx_7 = *(arg1 + 0x80)
            
            if (eax_18 == ecx_7)
                int32_t eax_20 = (eax_18 - edx_6) s>> 2
                
                if (eax_20 u> 0x3ffffffe)
                    goto label_6aeac9
                
                int32_t ecx_9 = (ecx_7 - edx_6) s>> 2
                
                if (eax_20 + 1 u> ecx_9)
                    uint32_t edx_8 = ecx_9 u>> 1
                    int32_t ecx_10
                    
                    if (0x3fffffff - edx_8 u>= ecx_9)
                        ecx_10 = ecx_9 + edx_8
                    else
                        ecx_10 = 0
                    
                    if (ecx_10 u< eax_20 + 1)
                        ecx_10 = eax_20 + 1
                    
                    sub_6b0560(arg1 + 0x78, ecx_10)
            
            int32_t* eax_22 = *(arg1 + 0x7c)
            
            if (eax_22 != 0)
                *eax_22 = *(*(arg1 + 0x78) + ((&i_3 - edx_6) s>> 2 << 2))
        
        *(arg1 + 0x7c) += 4
        int32_t var_4_1 = 0xffffffff
        
        if (var_18 u>= 0x10)
            PSTR var_70_5 = var_2c
            sub_6b4d5b()
        
        i_1 = i_2 + 1
        i_2 = i_1
    while (i_1 u< arg5 - 1)

int32_t var_54_2 = 0

if (arg6 - 1 u<= 0)
label_6aec8e:
    int32_t result = sub_6aecc0(arg1, arg5, arg6)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_6b4885(eax_2 ^ &var_58)
    return result

while (true)
    void* eax_31 = arg1 + 0x38
    
    if (*(arg1 + 0x4c) u>= 0x10)
        eax_31 = *eax_31
    
    int32_t var_70_6 = var_54_2
    void* var_74_2 = eax_31
    sub_4104a0("%s_y_%d")
    int32_t var_4_2 = 2
    struct dpsound::CWindow::VTable** i_10 = operator new(0xa0)
    struct dpsound::CWindow::VTable** i_12 = i_10
    var_4_2.b = 3
    struct dpsound::CWindow::VTable** i_8
    char* var_48
    int32_t var_34
    struct dpsound::CWindow::VTable** i_6
    
    if (i_10 == 0)
        i_6 = nullptr
        i_8 = nullptr
    else
        char* esi_10 = var_48
        
        if (var_34 u< 0x10)
            esi_10 = &var_48
        
        HCURSOR eax_32 = LoadCursorA(nullptr, 0x7f00)
        sub_6b1670(esi_10, i_10, *(arg1 + 0x24), 0, 0, 0, eax_32, 0, 0)
        i_10[0x17] = 5
        __builtin_memset(&i_10[0x18], 0, 0x29)
        __builtin_memset(&i_10[0x23], 0, 0x11)
        *i_10 =
            &dpsound::CSplitWindowBorderHeightTuning::`vftable'{for `dpsound::CSplitWindowBorder'}
        i_6 = i_10
        i_8 = i_10
    
    var_4_2.b = 2
    PSTR edi_4 = var_48
    i_3 = i_6
    
    if (var_34 u< 0x10)
        edi_4 = &var_48
    
    int32_t edx_14 = *(arg1 + 0x28)
    sub_6b1840(0, edx_14, edi_4, i_6, 0x54000000, 0, edx_14 * var_54_2, *(arg1 + 0x20), nullptr, 
        *(arg1 + 0x24))
    i_6[0x24] = arg1 + 0x34
    i_6[0x23] = arg1 + 0x36
    i_6[0x25] = *(arg1 + 0x28)
    int32_t eax_39
    eax_39.b = *(arg1 + 0x56)
    char edx_15 = *(arg1 + 0x54)
    *(i_6 + 0x99) = *(arg1 + 0x55)
    i_6[0x26].b = edx_15
    *(i_6 + 0x9a) = eax_39.b
    int32_t eax_40 = *(arg1 + 0x8c)
    int32_t edx_16
    
    if (&i_3 u< eax_40)
        edx_16 = *(arg1 + 0x88)
    
    if (&i_3 u>= eax_40 || edx_16 u> &i_3)
        int32_t ecx_28 = *(arg1 + 0x90)
        
        if (eax_40 == ecx_28)
            int32_t edx_20 = *(arg1 + 0x88)
            int32_t eax_46 = (eax_40 - edx_20) s>> 2
            
            if (eax_46 u> 0x3ffffffe)
                break
            
            int32_t ecx_30 = (ecx_28 - edx_20) s>> 2
            
            if (eax_46 + 1 u> ecx_30)
                uint32_t edx_22 = ecx_30 u>> 1
                int32_t ecx_31
                
                if (0x3fffffff - edx_22 u>= ecx_30)
                    ecx_31 = ecx_30 + edx_22
                else
                    ecx_31 = 0
                
                if (ecx_31 u< eax_46 + 1)
                    ecx_31 = eax_46 + 1
                
                sub_6b0560(arg1 + 0x88, ecx_31)
                i_6 = i_8
        
        void** eax_48 = *(arg1 + 0x8c)
        
        if (eax_48 != 0)
            *eax_48 = i_6
    else
        int32_t ecx_22 = *(arg1 + 0x90)
        
        if (eax_40 == ecx_22)
            int32_t eax_42 = (eax_40 - edx_16) s>> 2
            
            if (eax_42 u> 0x3ffffffe)
                break
            
            int32_t ecx_24 = (ecx_22 - edx_16) s>> 2
            
            if (eax_42 + 1 u> ecx_24)
                uint32_t edx_18 = ecx_24 u>> 1
                int32_t ecx_25
                
                if (0x3fffffff - edx_18 u>= ecx_24)
                    ecx_25 = ecx_24 + edx_18
                else
                    ecx_25 = 0
                
                if (ecx_25 u< eax_42 + 1)
                    ecx_25 = eax_42 + 1
                
                sub_6b0560(arg1 + 0x88, ecx_25)
        
        int32_t* eax_44 = *(arg1 + 0x8c)
        
        if (eax_44 != 0)
            *eax_44 = *(*(arg1 + 0x88) + ((&i_3 - edx_16) s>> 2 << 2))
    
    *(arg1 + 0x8c) += 4
    int32_t var_4_3 = 0xffffffff
    
    if (var_34 u>= 0x10)
        char* var_70_10 = var_48
        sub_6b4d5b()
    
    int32_t ecx_33 = var_54_2 + 1
    var_34 = 0xf
    int32_t var_38_1 = 0
    var_48.b = 0
    var_54_2 = ecx_33
    
    if (ecx_33 u>= arg6 - 1)
        goto label_6aec8e

label_6aeac9:
sub_6b47bf("vector<T> too long")
noreturn
