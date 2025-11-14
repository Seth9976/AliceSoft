// 函数: sub_51cf50
// 地址: 0x51cf50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7172e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_74 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_4
int32_t* ebx = arg_4
void** eax_4
int32_t edx
eax_4, edx = sub_51d2f0(arg1, ebx)
void** esi = eax_4
char eax_6

if (esi != *(arg1 + 4))
    eax_6 = sub_51c740(&esi[3], edx, ebx)

if (esi == *(arg1 + 4) || eax_6 != 0)
    void var_68
    sub_4bf2b0(&var_68, ebx)
    int32_t var_10_1 = 0
    void* var_78_2 = &var_68
    int32_t var_4 = 0
    sub_51d6e0(arg1, &arg_4, esi, sub_51db60(arg1))
    esi = arg_4
    int32_t var_20
    
    if (var_20 != 0)
        int32_t var_78_4 = var_20
        sub_6b4d5b()
    
    int32_t var_20_1 = 0
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    int32_t var_30
    
    if (var_30 != 0)
        int32_t var_78_5 = var_30
        sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return &esi[0x19]
