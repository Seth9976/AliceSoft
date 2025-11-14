// 函数: sub_59a0b0
// 地址: 0x59a0b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723d18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_38 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = 0
int128_t* ebp = nullptr
char* eax_3 = nullptr
int128_t* var_20 = nullptr
char* var_1c = nullptr
int32_t var_18 = 0
int32_t var_4 = 0
char* ecx_3
int32_t i

do
    int32_t ecx_2 = *arg2
    *arg2 = ecx_2 + 1
    i = *(*arg1 + (ecx_2 << 2))
    char var_21 = i.b
    
    if (&var_21 u>= eax_3 || ebp u> &var_21)
        if (eax_3 == esi)
            void* ecx_7 = eax_3 - ebp
            
            if (ecx_7 u> 0xfffffffe)
                sub_6b47bf("vector<T> too long")
                noreturn
            
            void* edx_8 = esi - ebp
            
            if (ecx_7 + 1 u> edx_8)
                uint32_t edx_9 = edx_8 u>> 1
                char* eax_7
                
                if (0xffffffff - edx_9 u>= edx_8)
                    eax_7 = edx_8 + edx_9
                else
                    eax_7 = nullptr
                
                if (eax_7 u< ecx_7 + 1)
                    eax_7 = ecx_7 + 1
                
                sub_424860(&var_20, eax_7)
                esi = var_18
                eax_3 = var_1c
                ebp = var_20
        
        if (eax_3 != 0)
            *eax_3 = i.b
    else
        void* edi_2 = &var_21 - ebp
        
        if (eax_3 == esi)
            void* ecx_5 = eax_3 - ebp
            
            if (ecx_5 u> 0xfffffffe)
                sub_6b47bf("vector<T> too long")
                noreturn
            
            void* edx_5 = esi - ebp
            
            if (ecx_5 + 1 u> edx_5)
                uint32_t edx_6 = edx_5 u>> 1
                char* eax_5
                
                if (0xffffffff - edx_6 u>= edx_5)
                    eax_5 = edx_5 + edx_6
                else
                    eax_5 = nullptr
                
                if (eax_5 u< ecx_5 + 1)
                    eax_5 = ecx_5 + 1
                
                sub_424860(&var_20, eax_5)
                esi = var_18
                eax_3 = var_1c
                ebp = var_20
        
        if (eax_3 != 0)
            ecx_3.b = *(edi_2 + ebp)
            *eax_3 = ecx_3.b
    
    eax_3 = &eax_3[1]
    var_1c = eax_3
while (i != 0)
char* eax_8 = ebp

do
    ecx_3.b = *eax_8
    eax_8 = &eax_8[1]
while (ecx_3.b != 0)

sub_401270(arg3, eax_8 - &eax_8[1], ebp)

if (ebp != 0)
    int128_t* var_3c_4 = ebp
    sub_6b4d5b()

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
