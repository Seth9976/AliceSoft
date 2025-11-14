// 函数: sub_4d0240
// 地址: 0x4d0240
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712c78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1

while (esi != arg2)
    int32_t var_4 = 0
    int32_t* i = esi[9]
    
    if (i != 0)
        for (int32_t ebp_1 = esi[0xa]; i != ebp_1; i = &i[8])
            (**i)(0)
        
        int32_t var_24_1 = esi[9]
        result = sub_6b4d5b()
    
    esi[9] = 0
    esi[0xa] = 0
    esi[0xb] = 0
    int32_t var_4_1 = 0xffffffff
    
    if (esi[5] u>= 0x10)
        int32_t var_24_2 = *esi
        result = sub_6b4d5b()
    
    esi[5] = 0xf
    esi[4] = 0
    *esi = 0
    esi = &esi[0xd]
    arg1 = esi

fsbase->NtTib.ExceptionList = ExceptionList
return result
