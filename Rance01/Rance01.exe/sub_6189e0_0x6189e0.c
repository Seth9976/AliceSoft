// 函数: sub_6189e0
// 地址: 0x6189e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_721741
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpanalysis::CTreeViewCallback::dpanalysis::CWorkSpace::VTable** edi = arg2
*edi = &dpanalysis::CWorkSpace::`vftable'{for `dpanalysis::CTreeViewCallback'}
int32_t var_4 = 4
sub_618b00(edi)
sub_618980(&edi[0x1f])
sub_618980(&edi[0xd])
void* eax_3 = edi[9]

if (eax_3 != 0)
    void* var_20_1 = arg2
    int32_t var_24_1 = edi[0xa]
    sub_60a740(eax_3, arg2)
    int32_t var_28_1 = edi[9]
    sub_6b4d5b()

edi[9] = 0
edi[0xa] = 0
edi[0xb] = 0
sub_609bd0(&edi[5])
arg2 = &edi[1]
int32_t var_4_1 = 5
int32_t*** eax_6 = edi[2]
sub_4365a0(&edi[1], &var_10, *eax_6, eax_6)
int32_t var_20_4 = edi[2]
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
