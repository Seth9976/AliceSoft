// 函数: sub_401c00
// 地址: 0x401c00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715739
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2
arg2 = nullptr
arg1[5] = 0xf
arg1[4] = 0
*arg1 = 0
int32_t var_4 = 0
int32_t ecx = ebx[4]
int32_t edi = 0
arg2 = 1

if (ecx s> 0)
    do
        int32_t ecx_3 = ebx[5]
        char* eax_3
        
        if (ecx_3 u< 0x10)
            eax_3 = ebx
        else
            eax_3 = *ebx
        
        char* eax_4
        
        if (eax_3[edi] u>= 0x81)
            if (ecx_3 u< 0x10)
                eax_4 = ebx
            else
                eax_4 = *ebx
        
        char* eax_5
        
        if (eax_3[edi] u< 0x81 || eax_4[edi] u> 0x9f)
            if (ecx_3 u< 0x10)
                eax_5 = ebx
            else
                eax_5 = *ebx
        
        if ((eax_3[edi] u< 0x81 || eax_4[edi] u> 0x9f) && eax_5[edi] u< 0xe0)
            int32_t* eax_9
            
            if (ecx_3 u< 0x10)
                eax_9 = ebx
            else
                eax_9 = *ebx
            
            int32_t* eax_10
            
            if (*(eax_9 + edi) s>= 0x41)
                if (ecx_3 u< 0x10)
                    eax_10 = ebx
                else
                    eax_10 = *ebx
            
            char var_34_3
            
            if (*(eax_9 + edi) s< 0x41 || *(eax_10 + edi) s> 0x5a)
                int32_t* eax_13
                
                if (ecx_3 u< 0x10)
                    eax_13 = ebx
                else
                    eax_13 = *ebx
                
                eax_13.b = *(eax_13 + edi)
                var_34_3 = eax_13.b
            else if (ecx_3 u< 0x10)
                ecx_3.b = *(ebx + edi)
                ecx_3.b += 0x20
                var_34_3 = ecx_3.b
            else
                ecx_3.b = (*ebx)[edi]
                ecx_3.b += 0x20
                var_34_3 = ecx_3.b
            
            sub_401f60(arg1, var_34_3)
            edi += 1
        else
            char* eax_6
            
            if (ecx_3 u< 0x10)
                eax_6 = ebx
            else
                eax_6 = *ebx
            
            eax_6.b = eax_6[edi]
            sub_401f60(arg1, eax_6.b)
            int32_t* eax_7
            
            if (ebx[5] u< 0x10)
                eax_7 = ebx
            else
                eax_7 = *ebx
            
            sub_401f60(arg1, *(eax_7 + edi + 1))
            edi += 2
    while (edi s< ecx)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
