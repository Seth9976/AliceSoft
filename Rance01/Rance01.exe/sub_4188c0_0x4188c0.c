// 函数: sub_4188c0
// 地址: 0x4188c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7241f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t* ecx = arg2[1]
int128_t* esi = *arg2

if (esi != ecx)
    int32_t edi_1 = 0 s>> 2 << 2
    int32_t __saved_edi
    ecx = sub_6b49d0(esi, ecx, edi_1, data_78c474 ^ &__saved_edi)
    arg2[1] = edi_1 + esi

void* result = arg1
void** i = *(result + 0x10)

while (i != *(result + 0x14))
    void* esi_1 = *i
    int32_t var_1c = 0
    int32_t* var_18_1 = nullptr
    int32_t var_14_1 = 0
    int32_t var_4 = 0
    sub_414f70(ecx, &var_1c, esi_1 + 0x10)
    sub_4152d0(esi_1 + 0x10)
    int32_t esi_3 = var_1c
    void* var_38_4 = arg1
    ecx = sub_42c960(arg2, arg2[1], esi_3, var_18_1)
    int32_t var_4_1 = 0xffffffff
    
    if (esi_3 != 0)
        int32_t var_38_5 = esi_3
        ecx = sub_6b4d5b()
    
    result = arg1
    i = &i[1]
    var_1c = 0
    int32_t var_18_2 = 0
    int32_t var_14_2 = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
