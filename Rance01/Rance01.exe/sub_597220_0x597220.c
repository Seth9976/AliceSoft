// 函数: sub_597220
// 地址: 0x597220
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7142c3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = data_797d60
void* var_10

if (eax_3 != 0)
    int32_t* var_14_1 = eax_3
    int32_t var_4 = 0
    int32_t* ecx_1 = eax_3[1]
    sub_40f580(eax_3, &var_10, *ecx_1, ecx_1)
    int32_t var_4_1 = 0xffffffff
    int32_t var_2c_2 = eax_3[1]
    sub_6b4d5b()
    int32_t* var_30_2 = eax_3
    sub_6b4d5b()
    data_797d60 = 0

void* esi_2 = operator new(0x10)
var_10 = esi_2
int32_t var_4_2 = 1

if (esi_2 == 0)
    data_797d60 = 0
else
    *(esi_2 + 8) = 0
    int32_t* eax_4 = sub_4fddf0(1)
    *(esi_2 + 4) = eax_4
    *eax_4 = eax_4
    void* eax_5 = *(esi_2 + 4)
    *(eax_5 + 4) = eax_5
    void* eax_6 = *(esi_2 + 4)
    *(eax_6 + 8) = eax_6
    *(*(esi_2 + 4) + 0x20) = 1
    *(*(esi_2 + 4) + 0x21) = 1
    data_797d60 = esi_2

void* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
