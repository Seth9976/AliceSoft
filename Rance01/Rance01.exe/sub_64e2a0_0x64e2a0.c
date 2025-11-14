// 函数: sub_64e2a0
// 地址: 0x64e2a0
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
arg1[5] = 0xf
arg1[4] = 0
int32_t edi = 0
*arg1 = 0
sub_401270(arg1, nullptr, 0x72d6e7)
int32_t var_4_1 = 0
int32_t edx = ebp[4]
arg2 = 1
int32_t var_10 = edx

if (edx u> 0)
    do
        int32_t ecx_1 = ebp[5]
        int32_t* eax_3
        
        if (ecx_1 u< 0x10)
            eax_3 = ebp
        else
            eax_3 = *ebp
        
        if (*(eax_3 + edi) != 0x20)
            int32_t* eax_4
            
            if (ecx_1 u< 0x10)
                eax_4 = ebp
            else
                eax_4 = *ebp
            
            if (sx.d(*(eax_4 + edi)) != 0x8140)
                int32_t* eax_6
                
                if (ecx_1 u< 0x10)
                    eax_6 = ebp
                else
                    eax_6 = *ebp
                
                ecx_1.b = *(eax_6 + edi)
                sub_401f60(arg1, ecx_1.b)
                edx = var_10
        
        edi += 1
    while (edi u< edx)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
