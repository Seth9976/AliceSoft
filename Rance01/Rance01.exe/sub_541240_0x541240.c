// 函数: sub_541240
// 地址: 0x541240
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723bfb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_23c
int32_t eax_2 = data_78c474 ^ &var_23c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg4 + 0x2b0) -= 4
int32_t eax_6 = **(arg4 + 0x2b0)
*(arg4 + 0x2b0) -= 4
float var_234 = fconvert.s(fconvert.t(**(arg4 + 0x2b0)))
void* const var_25c

if (eax_6 != 0xffffffff)
    int32_t var_254_1 = eax_6
    void var_114
    _swprintf(&var_114, 0x100, "%%.%df")
    var_25c = &var_114
else
    int32_t var_258
    var_258.q = fconvert.d(fconvert.t(var_234))
    var_25c = &data_74dfa0

void var_214
_swprintf(&var_214, 0x100, var_25c)
void* eax_7 = &var_214
int32_t var_21c = 0xf
int32_t var_220 = 0
char var_230 = 0
char i

do
    i = *eax_7
    eax_7 += 1
while (i != 0)
void var_213
sub_401270(&var_230, eax_7 - &var_213, &var_214)
int32_t var_4 = 0
bool var_235 = sub_552d50(arg4 + 0x1dc, &var_230, &var_234) == 0
int32_t var_4_1 = 0xffffffff

if (var_21c u>= 0x10)
    int32_t var_254_4 = var_230.d
    sub_6b4d5b()

int32_t var_21c_1 = 0xf
int32_t var_220_1 = 0
var_230 = 0
float* result

if (var_235 == 0)
    **(arg4 + 0x2b0) = var_234
    *(arg4 + 0x2b0) += 4
    result.b = 1
else
    int32_t entry_ebx
    sub_53d0e0(arg4, 0x74dfac, eax_4, arg3, arg2, arg1, entry_ebx)
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_23c)
return result
