// 函数: sub_5cb520
// 地址: 0x5cb520
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719cbb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_797d80

if (esi != 0)
    sub_5cad70(esi)
    void* var_20_1 = esi
    sub_6b4d5b()
    data_797d80 = 0

char* eax_3 = operator new(0x40)
char* var_10_1 = eax_3
int32_t var_4 = 0
char* result

if (eax_3 == 0)
    result = nullptr
else
    result = sub_5cad20(eax_3)

data_797d80 = result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
