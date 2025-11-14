// 函数: sub_6999c0
// 地址: 0x6999c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7283bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t var_14 = data_78c474 ^ &var_10
fsbase->NtTib.ExceptionList = &ExceptionList
sub_699a40()
char eax_3 = sub_6002f0()

if (eax_3 == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

int32_t* eax_4 = operator new(0x198)
var_10 = eax_4
int32_t var_4 = 0
int32_t eax_5
int80_t st0_1

if (eax_4 == 0)
    eax_5 = 0
else
    st0_1, eax_5 = sub_67e870(eax_4)
data_797ddc = eax_5
eax_5.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_5
