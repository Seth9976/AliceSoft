// 函数: sub_50dd80
// 地址: 0x50dd80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712b95
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 2
sub_50de50(arg1)
var_4.b = 1
int32_t* ecx = *(arg1 + 0x44)

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    *(arg1 + 0x44) = 0

int32_t* ecx_1 = *(arg1 + 0x40)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    *(arg1 + 0x40) = 0

void* var_14 = arg1 + 0x18
var_4.b = 3
int32_t* eax_5 = *(arg1 + 0x1c)
void var_10
sub_4365a0(arg1 + 0x18, &var_10, *eax_5, eax_5)
int32_t var_28_1 = *(arg1 + 0x1c)
sub_6b4d5b()
void* edi_2 = arg1 + 8
arg1 = edi_2
int32_t var_4_1 = 4
int32_t*** eax_7 = *(edi_2 + 4)
sub_4365a0(edi_2, &var_10, *eax_7, eax_7)
int32_t var_28_3 = *(edi_2 + 4)
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
