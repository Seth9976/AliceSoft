// 函数: sub_402b20
// 地址: 0x402b20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719cbb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void arg_4
sub_42e070(&arg1[2], &var_10, &arg_4)
int32_t* eax_4 = var_10

if (eax_4 != arg1[3])
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4[4]

int32_t* eax_5 = operator new(0xa4)
var_10 = eax_5
struct IAFAFile::afafactory::CAFAFile::VTable** edi_2 = nullptr
int32_t var_4 = 0

if (eax_5 != 0)
    edi_2 = sub_402dc0(eax_5)

int32_t var_4_1 = 0xffffffff
*sub_5cc1d0(&arg1[2], &arg_4) = edi_2
int32_t result = *sub_5cc1d0(&arg1[2], &arg_4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
