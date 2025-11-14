// 函数: sub_6586a0
// 地址: 0x6586a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7230b3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_3c
int32_t eax_2 = data_78c474 ^ &var_3c
int32_t __saved_edi
int32_t var_50 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpparts::CWindow::VTable** ebp = nullptr
int32_t result = arg2 - 1
int32_t result_1 = 0
int32_t result_2 = result

if (result u> 0)
    while (true)
        int32_t* eax_6 = arg1 + 0x38
        
        if (*(arg1 + 0x4c) u>= 0x10)
            eax_6 = *eax_6
        
        int32_t result_3 = result_1
        int32_t* var_58_1 = eax_6
        sub_4104a0("%s_y_%d")
        int32_t var_4 = 0
        struct dpparts::CWindow::VTable** eax_7 = operator new(0x9c)
        struct dpparts::CWindow::VTable** var_30_1 = eax_7
        var_4.b = 1
        PSTR var_2c
        int32_t var_18
        
        if (eax_7 != 0)
            var_3c = var_18 u< 0x10 ? &var_2c : var_2c
            
            HCURSOR eax_8 = LoadCursorA(nullptr, 0x7f00)
            sub_65e270(var_3c, eax_7, *(arg1 + 0x24), 0, 0, 0, eax_8, 0, 0)
            eax_7[0x17] = 5
            __builtin_memset(&eax_7[0x18], 0, 0x20)
            eax_7[0x23] = 0
            eax_7[0x24] = 0
            eax_7[0x25] = 0
            eax_7[0x22].b = 0
            eax_7[0x26] = 0
            *eax_7 = &dpparts::CSplitWindowBorderHeightTuning::`vftable'{for `dpparts::CSplitWindowBorder'}
            ebp = eax_7
        
        var_4.b = 0
        PSTR edi_2 = var_2c
        var_3c = ebp
        
        if (var_18 u< 0x10)
            edi_2 = &var_2c
        
        int32_t edx_2 = *(arg1 + 0x28)
        sub_65e420(0, edx_2, edi_2, ebp, 0x54000000, 0, edx_2 * result_1, *(arg1 + 0x20), nullptr, 
            *(arg1 + 0x24))
        ebp[0x24] = arg1 + 0x34
        ebp[0x23] = arg1 + 0x36
        ebp[0x25] = *(arg1 + 0x28)
        int32_t eax_13
        eax_13.b = *(arg1 + 0x56)
        ebp[0x26].b = *(arg1 + 0x54)
        *(ebp + 0x99) = *(arg1 + 0x55)
        *(ebp + 0x9a) = eax_13.b
        int32_t eax_14 = *(arg1 + 0x8c)
        int32_t edx_4
        
        if (&var_3c u< eax_14)
            edx_4 = *(arg1 + 0x88)
        
        if (&var_3c u>= eax_14 || edx_4 u> &var_3c)
            int32_t ecx_12 = *(arg1 + 0x90)
            
            if (eax_14 == ecx_12)
                int32_t edx_8 = *(arg1 + 0x88)
                int32_t eax_20 = (eax_14 - edx_8) s>> 2
                
                if (eax_20 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_14 = (ecx_12 - edx_8) s>> 2
                
                if (eax_20 + 1 u> ecx_14)
                    uint32_t edx_10 = ecx_14 u>> 1
                    int32_t ecx_15
                    
                    if (0x3fffffff - edx_10 u>= ecx_14)
                        ecx_15 = ecx_14 + edx_10
                    else
                        ecx_15 = 0
                    
                    if (ecx_15 u< eax_20 + 1)
                        ecx_15 = eax_20 + 1
                    
                    sub_6b0560(arg1 + 0x88, ecx_15)
            
            void** eax_22 = *(arg1 + 0x8c)
            
            if (eax_22 != 0)
                *eax_22 = ebp
        else
            int32_t ecx_7 = *(arg1 + 0x90)
            
            if (eax_14 == ecx_7)
                int32_t eax_16 = (eax_14 - edx_4) s>> 2
                
                if (eax_16 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_9 = (ecx_7 - edx_4) s>> 2
                
                if (eax_16 + 1 u> ecx_9)
                    uint32_t edx_6 = ecx_9 u>> 1
                    int32_t ecx_10
                    
                    if (0x3fffffff - edx_6 u>= ecx_9)
                        ecx_10 = ecx_9 + edx_6
                    else
                        ecx_10 = 0
                    
                    if (ecx_10 u< eax_16 + 1)
                        ecx_10 = eax_16 + 1
                    
                    sub_6b0560(arg1 + 0x88, ecx_10)
            
            int32_t* eax_18 = *(arg1 + 0x8c)
            
            if (eax_18 != 0)
                *eax_18 = *(*(arg1 + 0x88) + ((&var_3c - edx_4) s>> 2 << 2))
        
        *(arg1 + 0x8c) += 4
        int32_t var_4_1 = 0xffffffff
        
        if (var_18 u>= 0x10)
            PSTR var_54_4 = var_2c
            sub_6b4d5b()
        
        result = result_1 + 1
        result_1 = result
        
        if (result u>= result_2)
            break
        
        ebp = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_3c)
return result
