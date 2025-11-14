// 函数: sub_62f3c0
// 地址: 0x62f3c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t var_48 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_5 = *(arg1 + 0x110)
int32_t* ecx = *(arg1 + 0x10c)

if (ecx != eax_5)
    int32_t var_30
    int32_t var_4c_1 = var_30
    int32_t* eax_6 = sub_621520(eax_5, var_30, ecx, eax_5)
    int32_t var_54_1 = var_30
    sub_630680(eax_6, *(arg1 + 0x110))
    *(arg1 + 0x110) = eax_6

*(arg1 + 0x11c) = 0xffffffff
*(arg1 + 0x120) = 0xffffffff
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, 0x14, "DPLogViewerTabWindow")
int32_t var_4 = 0
sub_401180(arg1 + 0x34, 0xffffffff, &var_2c, 0)

if (var_18 u>= 0x10)
    int32_t var_4c_2 = var_2c.d
    sub_6b4d5b()

*(arg1 + 0x6c) = arg3
*(arg1 + 0x74) = 0x52000000
*(arg1 + 0x88) = arg2
*(arg1 + 0x78) = 0
*(arg1 + 0x7c) = 0
*(arg1 + 0x80) = 0x258
*(arg1 + 0x84) = 0x190
*(arg1 + 0x90) = arg1
bool result = sub_6b3860(arg1 + 4) != 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
