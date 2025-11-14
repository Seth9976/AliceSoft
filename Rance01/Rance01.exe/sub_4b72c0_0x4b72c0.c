// 函数: sub_4b72c0
// 地址: 0x4b72c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711d2b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t** arg_4
int32_t** ebx = arg_4
int32_t i

if (ebx[7] == ebx[8])
label_4b7328:
    
    for (i = ebx[7]; i != ebx[8]; i += 4)
        if (**i == arg1)
            goto label_4b7303
    
    int32_t eax_6 = *(*arg1 + 0x14)
    int32_t var_20 = 0
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0
    
    if (sub_4b74c0(ebx, (*(*arg1 + 0x10))(eax_6(&var_20, eax_2))).b != 0)
        if (ebx[7] == ebx[8])
            ebx[2].b = (*(*arg1 + 0x24))()
            *(ebx + 9) = (*(*arg1 + 0x28))()
        
        int32_t** ebx_1 = operator new(0x14)
        arg_4 = ebx_1
        int32_t var_4 = 0
        
        if (ebx_1 == 0)
            ebx_1 = nullptr
        else
            ebx_1[1] = var_20
            ebx_1[2] = var_1c_1
            ebx_1[3] = var_18_1
            ebx_1[4] = var_14_1
            *ebx_1 = arg1
            (**arg1)()
        
        int32_t var_4_1 = 0xffffffff
        arg_4 = ebx_1
        sub_61b5a0(&arg_4, &ebx[7])
        int32_t* eax_19
        eax_19.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_19
else
    i = (*(*arg1 + 0x24))(eax_2)
    
    if (ebx[2].b == i.b)
        i = (*(*arg1 + 0x28))()
        
        if (*(ebx + 9) == i.b)
            goto label_4b7328

label_4b7303:
i.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return i
