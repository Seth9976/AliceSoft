// 函数: sub_4b9c10
// 地址: 0x4b9c10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720735
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &sealengine::CEmitter::`vftable'
arg1[1] = 0
arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
int32_t var_4 = 0
long double x87_r7 = float.t(0)
arg1[0xb] = fconvert.s(x87_r7)
arg1[9] = 0
long double x87_r6 = float.t(1)
arg1[0xa] = 0
arg1[0xe] = fconvert.s(x87_r6)
arg1[0xd] = 0
arg1[0xf] = fconvert.s(x87_r6)
arg1[0x14] = 0
arg1[0x10] = fconvert.s(x87_r6)
arg1[0x11] = fconvert.s(x87_r6)
arg1[0xc] = 1
arg1[0x12] = fconvert.s(x87_r6)
arg1[0x13] = fconvert.s(x87_r6)
arg1[0x15] = fconvert.s(x87_r7)
arg1[0x16] = fconvert.s(x87_r7)
arg1[0x17] = fconvert.s(x87_r7)
arg1[0x18] = fconvert.s(x87_r7)
arg1[0x1b] = fconvert.s(x87_r7)
arg1[0x19] = 1
arg1[0x1c] = fconvert.s(x87_r7)
arg1[0x1a] = 0
arg1[0x1d] = fconvert.s(x87_r7)
arg1[0x1f].b = 0
arg1[0x24] = 1
arg1[0x1e] = fconvert.s(x87_r6)
arg1[0x20] = fconvert.s(x87_r7)
arg1[0x21] = fconvert.s(x87_r7)
arg1[0x22] = fconvert.s(x87_r7)
arg1[0x23] = fconvert.s(x87_r7)
arg1[0x25] = 0
arg1[0x26] = 0
arg1[0x27] = 0
arg1[0x2e] = 0xf
arg1[0x2d] = 0
arg1[0x29].b = 0
arg1[0x30] = fconvert.s(x87_r7)
arg1[0x31] = fconvert.s(x87_r7)
arg1[0x32] = fconvert.s(x87_r7)
arg1[0x33] = 0
arg1[0x34] = 0
arg1[0x35] = 0
arg1[0x37] = 0
arg1[0x38] = 0
arg1[0x39] = 0
arg1[0x3b] = 0
arg1[0x3c] = 0
arg1[0x3d] = 0
arg1[0x3f] = 0
arg1[0x40] = 0
arg1[0x41] = 0
arg1[0x43] = 0
arg1[0x44] = 0
arg1[0x45] = 0
arg1[0x47] = 0
arg1[0x48] = 0
arg1[0x49] = 0
arg1[0x4b].w = 1
arg1[0x4d] = 0
arg1[0x4e] = 0
arg1[0x4f] = 0
arg1[0x51] = fconvert.s(x87_r7)
arg1[0x52] = fconvert.s(x87_r7)
arg1[0x57] = 0
arg1[0x53] = fconvert.s(x87_r7)
arg1[0x58] = 0
arg1[0x59] = 0
arg1[0x5b] = 0
arg1[0x5c] = 0
arg1[0x5d] = 0
arg1[0x5f] = 0
arg1[0x60] = 0
arg1[0x61] = 0
arg1[0x63] = 0
arg1[0x64] = 0
arg1[0x65] = 0
arg1[0x67] = 0
arg1[0x68] = 0
arg1[0x69] = 0
arg1[0x6b] = 0
arg1[0x6c] = 0
arg1[0x6d] = 0
arg1[0x6f] = 0
arg1[0x70] = 0
arg1[0x71] = 0
arg1[0x73] = 0
arg1[0x74] = 0
arg1[0x75] = 0
arg1[0x77] = 0
arg1[0x78] = 0
arg1[0x79] = 0
arg1[0x7b] = 0
arg1[0x7c] = 0
arg1[0x7d] = 0
var_4.b = 0x13
arg1[0x4c] = 0
int32_t edx
sub_4bc7e0(0x20, edx, 0xf, &arg1[0x25])
arg1[0x54] = fconvert.s(float.t(1))
arg1[0x55] = 0
sub_65a090(&arg1[0x4d], 2)
int32_t eax_3 = arg1[0x4e]

for (int32_t* i = arg1[0x4d]; i != eax_3; i = &i[1])
    *i = 0

arg1[0x56] = 0
sub_65a090(&arg1[0x57], 1)
int32_t ecx = arg1[0x58]

for (int32_t* i_1 = arg1[0x57]; i_1 != ecx; i_1 = &i_1[1])
    *i_1 = 0

sub_65a090(&arg1[0x73], 2)
int32_t ecx_1 = arg1[0x74]

for (float* i_2 = arg1[0x73]; i_2 != ecx_1; i_2 = &i_2[1])
    *i_2 = fconvert.s(float.t(0))

sub_65a090(&arg1[0x77], 2)
int32_t ecx_2 = arg1[0x78]

for (float* i_3 = arg1[0x77]; i_3 != ecx_2; i_3 = &i_3[1])
    *i_3 = fconvert.s(float.t(0))

sub_65a090(&arg1[0x7b], 2)
int32_t ecx_3 = arg1[0x7c]

for (float* i_4 = arg1[0x7b]; i_4 != ecx_3; i_4 = &i_4[1])
    *i_4 = fconvert.s(float.t(0))

sub_65a090(&arg1[0x5b], 2)
int32_t ecx_4 = arg1[0x5c]

for (float* i_5 = arg1[0x5b]; i_5 != ecx_4; i_5 = &i_5[1])
    *i_5 = fconvert.s(float.t(0))

sub_65a090(&arg1[0x5f], 2)
int32_t ecx_5 = arg1[0x60]

for (float* i_6 = arg1[0x5f]; i_6 != ecx_5; i_6 = &i_6[1])
    *i_6 = fconvert.s(float.t(0))

sub_65a090(&arg1[0x63], 2)
int32_t ecx_6 = arg1[0x64]

for (float* i_7 = arg1[0x63]; i_7 != ecx_6; i_7 = &i_7[1])
    *i_7 = fconvert.s(float.t(0))

sub_65a090(&arg1[0x67], 2)
int32_t ecx_7 = arg1[0x68]

for (float* i_8 = arg1[0x67]; i_8 != ecx_7; i_8 = &i_8[1])
    *i_8 = fconvert.s(float.t(0))

sub_65a090(&arg1[0x6b], 2)
int32_t ecx_8 = arg1[0x6c]

for (float* i_9 = arg1[0x6b]; i_9 != ecx_8; i_9 = &i_9[1])
    *i_9 = fconvert.s(float.t(0))

sub_65a090(&arg1[0x6f], 2)
long double x87_r7_12 = float.t(0)
int32_t ecx_9 = arg1[0x70]

for (float* i_10 = arg1[0x6f]; i_10 != ecx_9; i_10 = &i_10[1])
    *i_10 = fconvert.s(x87_r7_12)

arg1[0x51] = fconvert.s(x87_r7_12)
arg1[0x52] = fconvert.s(x87_r7_12)
arg1[0x53] = fconvert.s(x87_r7_12)
arg1[0x81] = 0
long double x87_r7_13 = float.t(1)
arg1[0x7f] = fconvert.s(x87_r7_13)
arg1[0x80] = fconvert.s(x87_r7_13)
fsbase->NtTib.ExceptionList = ExceptionList
