// 函数: ?terminate@@YAXXZ
// 地址: 0x6bb756
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = 8
int32_t var_8 = 0x7710b8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
int32_t eax_2 = data_78c474
int32_t var_8_3 = 0x7710b8 ^ eax_2
int32_t var_2c = eax_2 ^ &var_4
int32_t* var_1c = &var_2c
void* const var_30 = &data_6bb762
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_1 = __getptd()[0x1e]

if (eax_1 != 0)
    int32_t var_8_1 = 0
    eax_1()
    int32_t var_8_2 = 0xfffffffe

sub_6b7ace()
noreturn
