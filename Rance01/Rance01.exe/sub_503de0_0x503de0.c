// 函数: sub_503de0
// 地址: 0x503de0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71748a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_esi
int32_t var_1c = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg2[1]
int32_t eax_3

if (arg1 u< ecx)
    eax_3 = *arg2

int32_t* result
char* ebx

if (arg1 u>= ecx || eax_3 u> arg1)
    if (ecx == arg2[2])
        sub_503ed0(arg2)
    
    ebx = arg2[1]
    char* var_10_2 = ebx
    result = nullptr
    int32_t var_4_1 = 2
    
    if (ebx != 0)
        *(ebx + 0x10) = 0
        *(ebx + 0x14) = 0xf
        *ebx = 0
        sub_401180(ebx, 0xffffffff, arg1, 0)
        var_4_1.b = 3
        result = sub_5040f0(&ebx[0x1c], &arg1[7])
else
    if (ecx == arg2[2])
        sub_503ed0(arg2)
    
    ebx = arg2[1]
    int32_t* esi = (arg1 - eax_3) s/ 0x2c * 0x2c + *arg2
    char* var_10_1 = ebx
    result = nullptr
    int32_t var_4 = 0
    
    if (ebx != 0)
        *(ebx + 0x10) = 0
        *(ebx + 0x14) = 0xf
        *ebx = 0
        sub_401180(ebx, 0xffffffff, esi, 0)
        var_4.b = 1
        result = sub_5040f0(&ebx[0x1c], &esi[7])
arg2[1] += 0x2c
fsbase->NtTib.ExceptionList = ExceptionList
return result
