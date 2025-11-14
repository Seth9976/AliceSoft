// 函数: sub_409390
// 地址: 0x409390
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720498
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_esi
int32_t var_40 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = data_797d2c
void* esi = *(ebx + 0x30)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (esi == 0)
    result.b = 0
else if (arg1 s>= 1)
    int32_t var_30 = arg1
    sub_42e070(esi + 0x294, &var_34, &var_30)
    int32_t* edx_2 = var_34
    
    if (edx_2 == *(esi + 0x298))
        result.b = 0
    else
        result = sub_40b9d0(arg1, edx_2, esi)
else
    int32_t var_44_1 = arg1
    char* eax_5
    int32_t edx_1
    eax_5, edx_1 = sub_4104a0("SP_Delete\nnSP=%d\n")
    int32_t var_4 = 0
    sub_406ae0(*(ebx + 0x38), edx_1, eax_5)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_2c
        int32_t var_44_2 = var_2c
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
