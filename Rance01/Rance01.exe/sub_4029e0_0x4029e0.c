// 函数: sub_4029e0
// 地址: 0x4029e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71bb6b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14
void arg_4
sub_42e070(arg1 + 8, &var_14, &arg_4)
struct IAFAFile::afafactory::CAFAFile::VTable** var_10

if (var_14 == *(arg1 + 0xc))
    struct IAFAFile::afafactory::CAFAFile::VTable** eax_4 = operator new(0xa4)
    var_10 = eax_4
    struct IAFAFile::afafactory::CAFAFile::VTable** esi_2 = nullptr
    int32_t var_4 = 0
    
    if (eax_4 != 0)
        esi_2 = sub_402dc0(eax_4)
    
    int32_t var_4_1 = 0xffffffff
    *sub_5cc1d0(arg1 + 8, &arg_4) = esi_2

void* ebp = data_797d60
int32_t* eax_8 = *(ebp + 4)
void** esi_3 = eax_8[1]
int32_t* edi = eax_8

while (*(esi_3 + 0x21) == 0)
    if (sub_40f4a0(&esi_3[3], 0x7580d4) == 0)
        edi = esi_3
        esi_3 = *esi_3
    else
        esi_3 = esi_3[2]

struct IAFAFile::afafactory::CAFAFile::VTable** esi_4 = *(ebp + 4)
var_14 = edi
char eax_10

if (edi != esi_4)
    eax_10 = sub_40f4a0(0x7580d4, &edi[3])

struct IAFAFile::afafactory::CAFAFile::VTable*** eax_11

if (edi == esi_4 || eax_10 != 0)
    var_10 = esi_4
    eax_11 = &var_10
else
    eax_11 = &var_14

struct IAFAFile::afafactory::CAFAFile::VTable** result = *eax_11
int32_t* ecx_2

if (result != esi_4)
    ecx_2 = result[7]

if (result != esi_4 && ecx_2 != 0)
    var_14.b = 0
    int32_t* eax_13 = (**ecx_2)(0x7580e4)
    
    if (eax_13 != 0)
        var_14.b = (**eax_13)(eax_2)
    
    int32_t* ecx_4 = *sub_5cc1d0(arg1 + 8, &arg_4)
    result = (*(*ecx_4 + 0x30))(arg2, var_14)
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
