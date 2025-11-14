// 函数: sub_4b5820
// 地址: 0x4b5820
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711d86
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CBoneList::VTable** var_14 = arg1
*arg1 = &sealengine::CBoneList::`vftable'
int32_t var_4 = 1
int128_t* ecx = arg1[6]
int128_t* edi = arg1[5]

if (edi != ecx)
    int32_t ebx_1 = 0 s>> 2 << 2
    sub_6b49d0(edi, ecx, ebx_1, eax_2)
    arg1[6] = ebx_1 + edi

void* var_10
sub_4b5f30(&arg1[1], &var_10, arg1[1], arg1[2])
int32_t eax_7 = arg1[5]

if (eax_7 != 0)
    int32_t var_28_3 = eax_7
    sub_6b4d5b()

arg1[5] = 0
arg1[6] = 0
arg1[7] = 0
int32_t var_4_1 = 0xffffffff
int32_t result = sub_4b6010(&arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
