// 函数: sub_535d30
// 地址: 0x535d30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7146dd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = data_78c474 ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_5c
void* esi = arg3
void* var_4c = esi
int32_t var_8_1 = 0

while (true)
    void* var_48_1 = esi
    
    if (arg4 u<= 0)
        break
    
    long double x87_r7_1 = float.t(0)
    float var_38_1 = fconvert.s(x87_r7_1)
    int32_t var_44_1 = 0xffffffff
    int32_t var_40_1 = 0xffffffff
    int32_t var_3c_1 = 0xffffffff
    int32_t var_20_1 = 0xf
    int32_t var_24_1 = 0
    char var_34 = 0
    var_8_1.b = 2
    
    if (esi != 0)
        *(esi + 0xc) = fconvert.s(x87_r7_1)
        *esi = 0xffffffff
        *(esi + 4) = 0xffffffff
        *(esi + 8) = 0xffffffff
        *(esi + 0x24) = 0xf
        *(esi + 0x20) = 0
        *(esi + 0x10) = 0
        sub_401180(esi + 0x10, 0xffffffff, &var_34, 0)
    
    var_8_1.b = 0
    
    if (var_20_1 u>= 0x10)
        int32_t var_60_1 = var_34.d
        sub_6b4d5b()
    
    arg4 -= 1
    esi += 0x2c

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &__saved_ebp)
