// 函数: sub_4b1080
// 地址: 0x4b1080
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7154bd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = data_78c474 ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_6c
int32_t var_8_1 = 0
long double result = float.t(1)
long double x87_r6 = float.t(0)
void* esi = arg3
void* var_5c = esi

while (true)
    void* var_58_1 = esi
    
    if (arg4 u<= 0)
        break
    
    float var_34_1 = fconvert.s(result)
    int32_t var_40_1 = 0xf
    float var_24_1 = fconvert.s(result)
    int32_t var_44_1 = 0
    float var_20_1 = fconvert.s(result)
    char var_54 = 0
    int32_t var_38_1 = 0xffffffff
    float var_30_1 = fconvert.s(x87_r6)
    char var_1c_1 = 1
    float var_2c_1 = fconvert.s(x87_r6)
    float var_28_1 = fconvert.s(x87_r6)
    var_8_1.b = 2
    
    if (esi != 0)
        *(esi + 0x14) = 0xf
        *(esi + 0x10) = 0
        *esi = 0
        sub_401180(esi, 0xffffffff, &var_54, 0)
        *(esi + 0x20) = fconvert.s(fconvert.t(var_34_1))
        *(esi + 0x30) = fconvert.s(fconvert.t(var_24_1))
        *(esi + 0x24) = var_30_1
        float edx
        edx.b = var_1c_1
        *(esi + 0x34) = fconvert.s(fconvert.t(var_20_1))
        result = float.t(1)
        *(esi + 0x1c) = var_38_1
        x87_r6 = float.t(0)
        *(esi + 0x28) = var_2c_1
        *(esi + 0x2c) = var_28_1
        *(esi + 0x38) = edx.b
    
    var_8_1.b = 0
    
    if (var_40_1 u>= 0x10)
        int32_t var_70_1 = var_54.d
        sub_6b4d5b()
        result = float.t(1)
        x87_r6 = float.t(0)
    
    arg4 -= 1
    esi += 0x3c

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &__saved_ebp)
return result
