// 函数: sub_4cf460
// 地址: 0x4cf460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_120 = 0xffffffff
int32_t (* var_124)(void* arg1) = sub_717c1d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_11c
int32_t eax_2 = data_78c474 ^ &var_11c
int32_t var_144 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_12c = &var_144
void* esi = arg3
void* var_134 = esi
int32_t var_120_1 = 0

while (true)
    void* var_130_1 = esi
    
    if (arg4 u<= 0)
        break
    
    int32_t (__fastcall* var_148_1)(void* arg1) = sub_51c700
    sub_6b5516(&var_11c, 0x58, 3, sub_51c6b0)
    int32_t var_14_1 = 0xffffffff
    int32_t var_10_1 = 0xffffffff
    int32_t var_c_1 = 0xffffffff
    var_120_1.b = 2
    
    if (esi != 0)
        int32_t (__fastcall* var_148_2)(void* arg1) = sub_51c700
        sub_6b53ec(esi, &var_11c, 0x58, 3, sub_4bf2b0)
        *(esi + 0x108) = var_14_1
        *(esi + 0x10c) = var_10_1
        *(esi + 0x110) = var_c_1
    
    var_120_1.b = 0
    result = sub_6b54b3(&var_11c, 0x58, 3, sub_51c700)
    arg4 -= 1
    esi += 0x114

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_11c)
return result
