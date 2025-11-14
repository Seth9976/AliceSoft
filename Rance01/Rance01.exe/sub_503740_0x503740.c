// 函数: sub_503740
// 地址: 0x503740
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7174e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
int32_t* ecx = arg1[1]
void* eax_3 = *arg1

if (eax_3 != ecx)
    void* eax_4
    int32_t edx
    int32_t edx_1
    eax_4, edx_1 = sub_504040(eax_3, edx, ecx, ecx)
    int32_t* var_20_1 = arg1
    int32_t var_24_1 = arg1[1]
    sub_504080(eax_4, edx_1)
    arg1[1] = eax_4

void* result = *arg1

if (result != 0)
    int32_t* var_1c_2 = arg1
    int32_t var_20_2 = arg1[1]
    sub_504080(result, arg1)
    int32_t var_24_2 = *arg1
    result = sub_6b4d5b()

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
