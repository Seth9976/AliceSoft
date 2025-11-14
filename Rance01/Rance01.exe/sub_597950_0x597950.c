// 函数: sub_597950
// 地址: 0x597950
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719cbb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_1c = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = data_797d68

if (esi != 0)
    sub_59b420(&esi[7])
    sub_598bf0(esi)
    int32_t var_20_2 = *esi
    sub_6b4d5b()
    int32_t* var_20_3 = esi
    sub_6b4d5b()
    data_797d68 = 0

int32_t* eax_5 = operator new(0x2c)
int32_t* var_10 = eax_5
int32_t var_4 = 0
int32_t* result

if (eax_5 == 0)
    result = nullptr
else
    result = sub_59ba00(eax_5)

data_797d68 = result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
