// 函数: sub_66a040
// 地址: 0x66a040
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718c39
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp = arg2
int32_t var_4 = 0
arg2 = nullptr
int32_t ebx = ebp[4]
arg1[5] = 0xf
arg1[4] = 0
int32_t edi = 0
*arg1 = 0
sub_401270(arg1, nullptr, 0x72d4fa)
int32_t var_4_1 = 0
arg2 = 1

if (ebx s> 0)
    do
        int32_t ecx_1 = ebp[5]
        char* eax_3
        
        if (ecx_1 u< 0x10)
            eax_3 = ebp
        else
            eax_3 = *ebp
        
        if (eax_3[edi] != 0x22)
            char* eax_4
            
            if (ecx_1 u< 0x10)
                eax_4 = ebp
            else
                eax_4 = *ebp
            
            int32_t ecx_2 = arg1[5]
            eax_4.b = eax_4[edi]
            int32_t* edx_1
            
            if (ecx_2 u< 0x10)
                edx_1 = arg1
            else
                edx_1 = *arg1
            
            void* eax_6 = arg1[4] + edx_1
            int32_t* ecx_3
            
            if (ecx_2 u< 0x10)
                ecx_3 = arg1
            else
                ecx_3 = *arg1
            
            if (eax_6 != 0)
                eax_6 -= ecx_3
            
            sub_66b520(arg1, eax_6, eax_4.b)
            int32_t ecx_5 = ebp[5]
            char* eax_7
            
            if (ecx_5 u< 0x10)
                eax_7 = ebp
            else
                eax_7 = *ebp
            
            if (eax_7[edi] == 0x5c)
                edi += 1
                
                if (edi s< ebx)
                    char* eax_8
                    
                    if (ecx_5 u< 0x10)
                        eax_8 = ebp
                    else
                        eax_8 = *ebp
                    
                    int32_t ecx_6 = arg1[5]
                    int32_t* edx_3
                    
                    if (ecx_6 u< 0x10)
                        edx_3 = arg1
                    else
                        edx_3 = *arg1
                    
                    void* eax_10 = arg1[4] + edx_3
                    int32_t* ecx_7
                    
                    if (ecx_6 u< 0x10)
                        ecx_7 = arg1
                    else
                        ecx_7 = *arg1
                    
                    if (eax_10 != 0)
                        eax_10 -= ecx_7
                    
                    sub_66b520(arg1, eax_10, eax_8[edi])
        
        edi += 1
    while (edi s< ebx)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
