// 函数: sub_42e900
// 地址: 0x42e900
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7241f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = nullptr
int32_t ebp = 0
int32_t var_1c = 0
int32_t* var_18 = nullptr
int32_t var_14 = 0
int32_t* ecx = arg6
int32_t var_4 = 0
int32_t* ebx = ecx
int32_t result

if (ecx == 0)
label_42ea08:
    result = sub_42ea30(arg1, arg2 - (*(*ecx + 0x14))(arg3, arg4, arg5, &var_1c, eax_2))
else
    while (true)
        void* edi_1 = *ebx
        result = (*(edi_1 + 8))((*(edi_1 + 0x10))(eax_2))
        int32_t result_1 = result
        
        if (result == 0)
            break
        
        if (&result_1 u>= esi || ebp u> &result_1)
            if (esi == var_14)
                sub_4307a0(&var_1c)
                esi = var_18
                ebp = var_1c
            
            if (esi != 0)
                *esi = result
        else
            int32_t edi_4 = (&result_1 - ebp) s>> 2
            
            if (esi == var_14)
                sub_4307a0(&var_1c)
                esi = var_18
                ebp = var_1c
            
            if (esi != 0)
                *esi = *(ebp + (edi_4 << 2))
        
        esi = &esi[1]
        var_18 = esi
        ebx = (*(*ebx + 0xc))()
        
        if (ebx == 0)
            ecx = arg6
            goto label_42ea08

if (ebp != 0)
    int32_t var_38_3 = ebp
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
