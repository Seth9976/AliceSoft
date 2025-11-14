// 函数: sub_4187d0
// 地址: 0x4187d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7287e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t* ecx = arg1[1]
int128_t* esi = *arg1

if (esi != ecx)
    int32_t ebx_1 = 0 s>> 2 << 2
    int32_t __saved_esi
    sub_6b49d0(esi, ecx, ebx_1, data_78c474 ^ &__saved_esi)
    arg1[1] = ebx_1 + esi

void* result = arg2
int32_t* i = *(result + 0x10)

while (i != *(result + 0x14))
    void* ecx_1 = *i
    int32_t var_20 = 0
    int32_t* var_1c_1 = nullptr
    int32_t var_18_1 = 0
    int32_t var_4 = 0
    sub_415140(ecx_1 + 0x10, *(result + 8) - 1, &var_20)
    int32_t ebx_3 = var_20
    void* var_34_3 = arg2
    sub_42c960(arg1, arg1[1], ebx_3, var_1c_1)
    int32_t var_4_1 = 0xffffffff
    
    if (ebx_3 != 0)
        int32_t var_34_4 = ebx_3
        sub_6b4d5b()
    
    result = arg2
    i = &i[1]
    var_20 = 0
    int32_t var_1c_2 = 0
    int32_t var_18_2 = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
