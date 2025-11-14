// 函数: sub_6aa6b0
// 地址: 0x6aa6b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_728148
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = data_78c474 ^ &var_5c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x450) == 0)
    *(arg1 + 0x44c) += 1
    
    if (*(arg1 + 0x68) s< *(arg1 + 0x44c))
        sub_6a86e0(arg1 + 0x2ec)
        void* var_74_2 = arg1 + 0x25c
        *(arg1 + 0x44c) = 0
        sub_6a8780(arg1 + 0x2ec, arg1 + 0x24c)
        int32_t eax_6
        int32_t edx_1
        edx_1:eax_6 = muls.dp.d(0x66666667, *(arg1 + 0x260) - *(arg1 + 0x25c))
        int32_t edx_2 = edx_1 s>> 4
        int32_t eax_7
        int32_t edx_3
        edx_3:eax_7 = muls.dp.d(0x66666667, *(arg1 + 0x250) - *(arg1 + 0x24c))
        int32_t edx_4 = edx_3 s>> 4
        *(arg1 + 0x2c4) = (edx_4 u>> 0x1f) + (edx_2 u>> 0x1f) + edx_2 + edx_4 + 1
        sub_6a7890(arg1 + 0x2ac)
        int32_t eax_12
        int32_t edx_5
        edx_5:eax_12 = sx.q(*(arg1 + 0x64))
        *(arg1 + 0x2e4) = ((eax_12 - edx_5) s>> 1) * *(arg1 + 0x6c)
        sub_6a7890(arg1 + 0x2cc)
    
    sub_6aad70(arg1 + 0x24c, *(arg1 + 0x448))
    sub_6aad70(arg1 + 0x25c, *(arg1 + 0x448))
    RECT rect
    GetClientRect(*(arg1 + 0x34), &rect)
    void* eax_18 = *(arg1 + 0x270)
    int32_t* ecx_7 = *(arg1 + 0x26c)
    
    if (ecx_7 != eax_18)
        int32_t var_58
        int32_t var_74_6 = var_58
        int32_t* eax_19
        int32_t edx_8
        eax_19, edx_8 = sub_6a8f00(eax_18, var_58, ecx_7, eax_18)
        int32_t var_7c_2 = var_58
        int32_t var_80_1 = *(arg1 + 0x270)
        sub_6a8f60(eax_19, edx_8)
        *(arg1 + 0x270) = eax_19
    
    int32_t eax_22
    int32_t edx_9
    edx_9:eax_22 = muls.dp.d(0x66666667, *(arg1 + 0x250) - *(arg1 + 0x24c))
    int32_t edx_10 = edx_9 s>> 4
    int32_t i_5 = (edx_10 u>> 0x1f) + edx_10
    int32_t eax_23
    int32_t edx_13
    edx_13:eax_23 = muls.dp.d(0x66666667, *(arg1 + 0x260) - *(arg1 + 0x25c))
    int32_t edx_14 = edx_13 s>> 4
    int32_t i_4 = (edx_14 u>> 0x1f) + edx_14
    
    if (i_5 s> 0)
        int32_t var_54_1 = 0
        int32_t i_3 = i_5
        int32_t i
        
        do
            sub_6a8c80(*(arg1 + 0x24c) + var_54_1, arg1 + 0x26c)
            var_54_1 += 0x28
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    if (i_4 s> 0)
        int32_t ebx_2 = 0
        int32_t i_1
        
        do
            sub_6a8c80(*(arg1 + 0x25c) + ebx_2, arg1 + 0x26c)
            ebx_2 += 0x28
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    char* eax_24 = *(arg1 + 0x280)
    int32_t* esi_10 = *(arg1 + 0x27c)
    void* edi_5 = arg1 + 0x27c
    char* var_58_1 = eax_24
    
    if (esi_10 != eax_24)
        char* edi_6 = eax_24
        
        if (eax_24 != eax_24)
            int32_t ebx_4 = eax_24 - esi_10
            
            do
                if (esi_10 != edi_6)
                    if (esi_10[5] u>= 0x10)
                        int32_t var_74_7 = *esi_10
                        sub_6b4d5b()
                        eax_24 = var_58_1
                    
                    esi_10[5] = 0xf
                    esi_10[4] = 0
                    *esi_10 = 0
                    
                    if (*(ebx_4 + esi_10 + 0x14) u>= 0x10)
                        *esi_10 = *edi_6
                        *edi_6 = 0
                    else
                        sub_6b49d0(esi_10, edi_6, *(edi_6 + 0x10) + 1, eax_4)
                        eax_24 = var_58_1
                    
                    esi_10[4] = *(edi_6 + 0x10)
                    esi_10[5] = *(ebx_4 + esi_10 + 0x14)
                    *(ebx_4 + esi_10 + 0x14) = 0xf
                    *(edi_6 + 0x10) = 0
                    *edi_6 = 0
                
                edi_6 = &edi_6[0x1c]
                esi_10 = &esi_10[7]
            while (edi_6 != eax_24)
        
        int32_t ebx_5 = *(arg1 + 0x280)
        int32_t* edi_7 = esi_10
        
        if (esi_10 != ebx_5)
            do
                if (edi_7[5] u>= 0x10)
                    int32_t var_74_9 = *edi_7
                    sub_6b4d5b()
                
                edi_7[5] = 0xf
                edi_7[4] = 0
                *edi_7 = 0
                edi_7 = &edi_7[7]
            while (edi_7 != ebx_5)
        
        edi_5 = arg1 + 0x27c
        *(edi_5 + 4) = esi_10
    
    int32_t* var_50
    int32_t* eax_30 = sub_6aab30(arg1, arg1 + 0x26c, &var_50, rect.bottom)
    
    if (edi_5 != eax_30)
        int32_t* i_2 = *edi_5
        
        if (i_2 != 0)
            for (int32_t edi_8 = *(edi_5 + 4); i_2 != edi_8; i_2 = &i_2[7])
                if (i_2[5] u>= 0x10)
                    int32_t var_74_11 = *i_2
                    sub_6b4d5b()
                
                i_2[5] = 0xf
                i_2[4] = 0
                *i_2 = 0
            
            edi_5 = arg1 + 0x27c
            int32_t var_74_12 = *(arg1 + 0x27c)
            sub_6b4d5b()
        
        *edi_5 = 0
        *(edi_5 + 4) = 0
        *(edi_5 + 8) = 0
        *edi_5 = *eax_30
        *(edi_5 + 4) = eax_30[1]
        *(edi_5 + 8) = eax_30[2]
        *eax_30 = 0
        eax_30[1] = 0
        eax_30[2] = 0
    
    int32_t var_4 = 0xffffffff
    int32_t* esi_12 = var_50
    
    if (esi_12 != 0)
        int32_t var_4c
        
        if (esi_12 != var_4c)
            do
                if (esi_12[5] u>= 0x10)
                    int32_t var_74_13 = *esi_12
                    sub_6b4d5b()
                
                esi_12[5] = 0xf
                esi_12[4] = 0
                *esi_12 = 0
                esi_12 = &esi_12[7]
            while (esi_12 != var_4c)
            
            esi_12 = var_50
        
        int32_t* var_74_14 = esi_12
        sub_6b4d5b()
    
    int32_t* ebx_7
    ebx_7.b = *(arg1 + 0x28c)
    int32_t esi_13 = *(arg1 + 0x294)
    int32_t eax_34 = GetScrollPos(*(arg1 + 0x2d0), *(arg1 + 0x2dc))
    void* eax_35
    eax_35.b = ebx_7.b
    char var_30
    sub_6a5c80(esi_13 - *(arg1 + 0x5c), eax_35.b, &var_30, arg1 + 0x27c, eax_34)
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        int32_t var_74_17 = var_30.d
        sub_6b4d5b()
    
    int32_t eax_37 = *(arg1 + 0x294)
    int32_t ecx_23 = *(arg1 + 0x290)
    enum SCROLLBAR_CONSTANTS nBar = *(arg1 + 0x2dc)
    var_58_1.b = *(arg1 + 0x2a0)
    HWND hWnd = *(arg1 + 0x2d0)
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    var_30 = 0
    sub_6a5250(arg1 + 0x30c, GetScrollPos(hWnd, nBar), var_58_1.b, ecx_23, eax_37)
    InvalidateRect(*(arg1 + 0x34), nullptr, 0)
    UpdateWindow(*(arg1 + 0x34))
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_5c)
return result
