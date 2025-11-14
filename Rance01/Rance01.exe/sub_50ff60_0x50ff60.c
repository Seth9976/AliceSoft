// 函数: sub_50ff60
// 地址: 0x50ff60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71491b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
int128_t* eax_3 = *(arg1 + 0x30)
int128_t* ebp = *(arg1 + 0x2c)

if (ebp != eax_3)
    void* edi_2 = 0
    sub_6b49d0(ebp, eax_3, edi_2, eax_2)
    *(arg1 + 0x30) = edi_2 + ebp

bool cond:0 = *(arg1 + 0x24) u< 0x10
void* eax_4 = arg1 + 0x10
*(eax_4 + 0x10) = 0

if (not(cond:0))
    eax_4 = *eax_4

*eax_4 = 0
sub_58f670(arg1 + 0x3c)
int32_t* ecx = *(arg1 + 0x4c)

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    *(arg1 + 0x4c) = 0

*(arg1 + 0xc) = 0
int32_t var_4_1 = 0xffffffff
int32_t result = sub_58eb60(arg1 + 8)
fsbase->NtTib.ExceptionList = ExceptionList
return result
