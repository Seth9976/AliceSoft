// 函数: sub_519900
// 地址: 0x519900
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724b6e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD* arg_4
int32_t* ebp = arg_4
sub_519a40(ebp)
int32_t ebx = 0
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 s<= 0)
label_5199d5:
    ebp[4] = arg1
    result.b = 1
else
    while (true)
        int32_t* eax_3
        int32_t edx_1
        eax_3, edx_1 = operator new(0x2a4)
        struct _EXCEPTION_REGISTRATION_RECORD* esi_1
        
        if (eax_3 == 0)
            esi_1 = nullptr
        else
            sub_514570(eax_3, edx_1, arg3)
            esi_1 = eax_3
        
        esi_1->__offset(0x2a0).d = ebp[0x39]
        arg_4 = esi_1
        
        if (sub_514940(esi_1, arg1) == 0)
            arg2 = esi_1
            int32_t var_4 = 0
            sub_514b80(esi_1)
            int32_t var_4_1 = 0xffffffff
            int32_t* ecx_5 = esi_1->__offset(0x27c).d
            
            if (ecx_5 != 0)
                (*(*ecx_5 + 4))(eax_2)
                esi_1->__offset(0x27c).d = 0
            
            struct _EXCEPTION_REGISTRATION_RECORD* var_24_1 = esi_1
            esi_1->__offset(0x29c).b = 0
            sub_6b4d5b()
            result.b = 0
            break
        
        int32_t eax_7 = ebp[1]
        int32_t ecx_1
        
        if (&arg_4 u< eax_7)
            ecx_1 = *ebp
        
        if (&arg_4 u>= eax_7 || ecx_1 u> &arg_4)
            if (eax_7 == ebp[2])
                sub_4307a0(ebp)
            
            result = ebp[1]
            
            if (result != 0)
                *result = esi_1
        else
            if (eax_7 == ebp[2])
                sub_4307a0(ebp)
            
            result = ebp[1]
            
            if (result != 0)
                *result = *(*ebp + ((&arg_4 - ecx_1) s>> 2 << 2))
        
        ebp[1] += 4
        ebx += 1
        
        if (ebx s>= arg2)
            goto label_5199d5

fsbase->NtTib.ExceptionList = ExceptionList
return result
