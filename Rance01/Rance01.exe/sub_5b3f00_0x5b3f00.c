// 函数: sub_5b3f00
// 地址: 0x5b3f00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714223
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 1
int128_t* eax_3 = arg1[4]
int128_t* ebx = arg1[3]

if (ebx != eax_3)
    void* edi_2 = 0
    int32_t __saved_edi
    sub_6b49d0(ebx, eax_3, edi_2, data_78c474 ^ &__saved_edi)
    arg1[4] = edi_2 + ebx

int128_t* edi_4 = arg1[0x10]

if (edi_4 != 0)
    sub_5c5a90(edi_4)
    int32_t var_20_2 = arg1[0x10]
    sub_6b4d5b()
    arg1[0x10] = 0

arg1[0x11].b = 0
sub_5b4560(arg1)
int32_t eax_5 = arg1[3]

if (eax_5 != 0)
    int32_t var_20_4 = eax_5
    sub_6b4d5b()

arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
sub_5b4560(arg1)
int32_t var_20_6 = *arg1
int32_t result = sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
