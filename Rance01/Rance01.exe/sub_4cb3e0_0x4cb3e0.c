// 函数: sub_4cb3e0
// 地址: 0x4cb3e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_727ceb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = arg2
int32_t* var_10

if ((arg1[1] - *arg1) s>> 2 s< i)
    var_10 = nullptr
    
    do
        int32_t eax_6 = arg1[1]
        int32_t edx_1
        
        if (&var_10 u< eax_6)
            edx_1 = *arg1
        
        if (&var_10 u>= eax_6 || edx_1 u> &var_10)
            int32_t ecx_6 = arg1[2]
            
            if (eax_6 == ecx_6)
                int32_t edx_5 = *arg1
                int32_t eax_12 = (eax_6 - edx_5) s>> 2
                
                if (eax_12 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_8 = (ecx_6 - edx_5) s>> 2
                
                if (eax_12 + 1 u> ecx_8)
                    uint32_t edx_7 = ecx_8 u>> 1
                    int32_t ecx_9
                    
                    if (0x3fffffff - edx_7 u>= ecx_8)
                        ecx_9 = ecx_8 + edx_7
                    else
                        ecx_9 = 0
                    
                    if (ecx_9 u< eax_12 + 1)
                        ecx_9 = eax_12 + 1
                    
                    sub_6b0560(arg1, ecx_9)
            
            int32_t* eax_14 = arg1[1]
            
            if (eax_14 != 0)
                *eax_14 = 0
        else
            int32_t ecx = arg1[2]
            
            if (eax_6 == ecx)
                int32_t eax_8 = (eax_6 - edx_1) s>> 2
                
                if (eax_8 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_2 = (ecx - edx_1) s>> 2
                
                if (eax_8 + 1 u> ecx_2)
                    uint32_t edx_3 = ecx_2 u>> 1
                    int32_t ecx_3
                    
                    if (0x3fffffff - edx_3 u>= ecx_2)
                        ecx_3 = ecx_2 + edx_3
                    else
                        ecx_3 = 0
                    
                    if (ecx_3 u< eax_8 + 1)
                        ecx_3 = eax_8 + 1
                    
                    sub_6b0560(arg1, ecx_3)
            
            int32_t* eax_10 = arg1[1]
            
            if (eax_10 != 0)
                *eax_10 = *(*arg1 + ((&var_10 - edx_1) s>> 2 << 2))
        
        arg1[1] += 4
        i = arg2
    while ((arg1[1] - *arg1) s>> 2 s< i)

int32_t result = *arg1

if ((arg1[1] - result) s>> 2 s> i)
    do
        int32_t ecx_12 = (arg1[1] - result) s>> 2
        
        if (*(result + (ecx_12 << 2) - 4) != 0)
            int32_t* edi_4 = *(result + (ecx_12 << 2) - 4)
            var_10 = edi_4
            
            if (edi_4 != 0)
                int32_t var_4 = 0
                sub_4c9210(edi_4)
                int32_t var_4_1 = 0xffffffff
                
                if (edi_4[0x11] u>= 0x10)
                    int32_t var_2c_3 = edi_4[0xc]
                    sub_6b4d5b()
                
                edi_4[0x11] = 0xf
                edi_4[0x10] = 0
                int32_t* var_2c_4 = edi_4
                edi_4[0xc].b = 0
                sub_6b4d5b()
        
        result = *arg1
        int32_t ecx_13 = arg1[1]
        
        if (result != ecx_13)
            arg1[1] = ecx_13 - 4
    while ((arg1[1] - result) s>> 2 s> arg2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
