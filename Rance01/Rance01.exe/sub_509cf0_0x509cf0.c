// 函数: sub_509cf0
// 地址: 0x509cf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712bbb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2
void* edi = ebx[0x3a]

if (edi != 0)
    sub_50dd80(edi)
    void* var_24_2 = edi
    sub_6b4d5b()
    ebx[0x3a] = 0

ebx[0x3b].b = (*(*arg1 + 0x6c))(eax_2)
ebx[0x3c] = (*(*arg1 + 0x70))()
int32_t* eax_7 = operator new(0x54)
arg2 = eax_7
int32_t var_4 = 0
int32_t* edi_1

if (eax_7 == 0)
    edi_1 = nullptr
else
    edi_1 = sub_50dca0(arg1, eax_7, arg3, arg4)

int32_t var_4_1 = 0xffffffff
ebx[0x3a] = edi_1

if (edi_1 == 0)
    eax_7.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_7

int32_t var_28_2 = sub_50de50(edi_1)
bool eax_9 = sub_518ae0(&edi_1[0x10], edi_1[0x14], fconvert.s(fconvert.t(edi_1[0x12])), *edi_1) != 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_9
