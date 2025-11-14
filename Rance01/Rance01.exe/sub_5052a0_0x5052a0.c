// 函数: sub_5052a0
// 地址: 0x5052a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72690e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CLightParamList::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t arg_8
int32_t eax_3 = arg_8
*arg2 = 0
arg2[1] = 0
arg2[2] = 0
arg2[4] = eax_3
arg2[5].b = 1
arg2[6] = 0
arg2[7] = 0
int32_t var_4 = 0
long double x87_r7 = float.t(0)
arg2[8] = fconvert.s(x87_r7)
arg2[9] = fconvert.s(x87_r7)
arg2[0xa] = fconvert.s(x87_r7)
arg2[0xb] = fconvert.s(x87_r7)
arg2[0xc] = fconvert.s(x87_r7)
arg2[0xe] = fconvert.s(x87_r7)
arg2[0xd].b = 0
arg2[0xf] = fconvert.s(x87_r7)
arg2[0x10] = fconvert.s(x87_r7)
arg2[0x13] = fconvert.s(x87_r7)
arg2[0x22] = 0
arg2[0x14] = fconvert.s(x87_r7)
arg2[0x23] = 0
arg2[0x15] = fconvert.s(x87_r7)
arg2[0x24] = 0
arg2[0x16] = fconvert.s(x87_r7)
arg2[0x17] = fconvert.s(x87_r7)
arg2[0x18] = fconvert.s(x87_r7)
arg2[0x19] = fconvert.s(x87_r7)
arg2[0x1a] = fconvert.s(x87_r7)
arg2[0x1b] = fconvert.s(x87_r7)
arg2[0x1c] = fconvert.s(x87_r7)
arg2[0x1d] = fconvert.s(x87_r7)
arg2[0x1e] = fconvert.s(x87_r7)
arg2[0x26] = 0
arg2[0x27] = 0
arg2[0x28] = 0
arg2[0x2a] = 0
arg2[0x2b] = 0
arg2[0x2c] = 0
var_4.b = 3
arg2[0x31] = fconvert.s(x87_r7)
arg2[0x32] = fconvert.s(x87_r7)
arg2[0x33] = fconvert.s(x87_r7)
arg2[0x34] = fconvert.s(float.t(1))
__builtin_memset(&arg2[0x35], 0, 0x48)
arg2[0x47] = fconvert.s(x87_r7)
arg2[0x48] = fconvert.s(x87_r7)
arg2[0x49] = fconvert.s(x87_r7)
arg2[0x4a] = fconvert.s(x87_r7)
arg2[0x4b] = fconvert.s(x87_r7)
arg2[0x4c] = fconvert.s(x87_r7)
arg2[0x4d] = fconvert.s(x87_r7)
arg2[0x4e] = 0
arg2[0x4f] = 0
arg2[0x50] = 0
arg2[0x51] = 0
arg2[0x55] = 0
int32_t* eax_4 = sub_4ecfc0(1)
arg2[0x54] = eax_4
*eax_4 = eax_4
void* eax_5 = arg2[0x54]
*(eax_5 + 4) = eax_5
void* eax_6 = arg2[0x54]
*(eax_6 + 8) = eax_6
*(arg2[0x54] + 0x14) = 1
*(arg2[0x54] + 0x15) = 1
var_4.b = 4
var_10 = nullptr
arg2[0x62] = 0
arg2[0x63] = 0
arg2[0x64] = 0
sub_4257e0(&arg2[0x62], 4, &var_10)
var_4.b = 5
struct sealengine::CLightParamList::VTable** eax_7 = operator new(0x1c)
var_10 = eax_7
var_4.b = 6
struct sealengine::CLightParamList::VTable** eax_8

if (eax_7 == 0)
    eax_8 = nullptr
else
    eax_8 = sub_4cb5b0(eax_7)

var_4.b = 5
var_10 = fconvert.s(float.t(0))
arg2[0x68] = eax_8
arg2[0x69] = 0
arg2[0x6a] = 0
arg2[0x6b] = 0
int32_t ecx_1
int32_t edx_1
ecx_1, edx_1 = sub_4ef9e0(&arg2[0x69], &var_10)
var_10 = &arg2[0x6d]
arg2[0x6d] = nullptr
arg2[0x6e] = 0
arg2[0x6f] = 0
var_4.b = 8
sub_4b0de0(0x10, edx_1, ecx_1, &arg2[0x6d])
arg2[0x71] = 0
arg2[0x72] = 0
arg2[0x73] = 0
var_4.b = 0xa
long double x87_r7_2 = float.t(0)
arg2[0x76] = arg_8
arg2[0x11] = 0
arg2[0x12] = 0
arg2[0x13] = fconvert.s(x87_r7_2)
arg2[0x14] = fconvert.s(x87_r7_2)
arg2[0x15] = fconvert.s(x87_r7_2)
arg2[0x16] = fconvert.s(x87_r7_2)
arg2[0x17] = fconvert.s(fconvert.t(-1f))
arg2[0x18] = fconvert.s(x87_r7_2)
long double x87_r6_2 = float.t(1)
arg2[0x1c] = fconvert.s(x87_r6_2)
arg2[0x1d] = fconvert.s(x87_r6_2)
arg2[0x1e] = fconvert.s(x87_r6_2)
arg2[0x21] = 2
arg2[0x1f] = fconvert.s(x87_r7_2)
arg2[0x20] = fconvert.s(fconvert.t(0.00700000022f))
sub_65a090(&arg2[0x22], 4)
int32_t ecx_3 = arg2[0x23]

for (float* i = arg2[0x22]; i != ecx_3; i = &i[1])
    *i = fconvert.s(float.t(0))

sub_65a090(&arg2[0x26], 4)
int32_t ecx_4 = arg2[0x27]

for (float* i_1 = arg2[0x26]; i_1 != ecx_4; i_1 = &i_1[1])
    *i_1 = fconvert.s(float.t(0))

sub_65a090(&arg2[0x2a], 4)
*arg2[0x2a] = fconvert.s(float.t(0))
*(arg2[0x2a] + 4) = fconvert.s(fconvert.t(0.964999974f))
arg_8 = 0
*(arg2[0x2a] + 8) = fconvert.s(fconvert.t(0.975000024f))
long double x87_r7_9 = float.t(1)
*(arg2[0x2a] + 0xc) = fconvert.s(x87_r7_9)
arg2[0x2f] = fconvert.s(x87_r7_9)
arg2[0x2e] = 0
arg2[0x30] = fconvert.s(fconvert.t(10f))
arg2[0x31] = fconvert.s(x87_r7_9)
arg2[0x32] = fconvert.s(x87_r7_9)
arg2[0x33] = fconvert.s(x87_r7_9)
arg2[0x34] = fconvert.s(x87_r7_9)
arg2[0x52] = 0
*sub_4ccf80(&arg2[0x53], &arg_8) = 1
arg_8 = 1
*sub_4ccf80(&arg2[0x53], &arg_8) = 1
arg_8 = 2
*sub_4ccf80(&arg2[0x53], &arg_8) = 0
__builtin_memset(&arg2[0x57], 0, 0x2c)
arg2[0x66] = 0
arg2[0x67] = 1
sub_65a090(&arg2[0x71], 4)
int32_t eax_16 = arg2[0x72]

for (float* i_2 = arg2[0x71]; i_2 != eax_16; i_2 = &i_2[1])
    *i_2 = fconvert.s(float.t(0))

arg2[0x75] = 0
arg2[0x77] = 0
arg2[0x78] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
