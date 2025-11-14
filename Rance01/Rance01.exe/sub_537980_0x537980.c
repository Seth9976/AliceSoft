// 函数: sub_537980
// 地址: 0x537980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71efda
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0x11
sub_55e550(&arg1[0x5b])
int32_t* var_14 = &arg1[0x4f]
var_4.b = 0x12
int32_t* eax_4 = arg1[0x50]
int32_t* var_10
sub_429bc0(&arg1[0x4f], &var_10, *eax_4, eax_4)
int32_t var_28_2 = arg1[0x50]
sub_6b4d5b()
var_10 = &arg1[0x4b]
var_4.b = 0x13
int32_t* eax_5 = arg1[0x4c]
sub_4365a0(&arg1[0x4b], &var_14, *eax_5, eax_5)
int32_t var_28_4 = arg1[0x4c]
sub_6b4d5b()
var_10 = &arg1[0x47]
var_4.b = 0x14
int32_t* eax_7 = arg1[0x48]
sub_429bc0(&arg1[0x47], &var_14, *eax_7, eax_7)
int32_t var_28_6 = arg1[0x48]
sub_6b4d5b()
var_10 = &arg1[0x43]
var_4.b = 0x15
int32_t* eax_8 = arg1[0x44]
sub_429bc0(&arg1[0x43], &var_14, *eax_8, eax_8)
int32_t var_28_8 = arg1[0x44]
sub_6b4d5b()
int32_t* eax_9 = arg1[0x3f]

if (eax_9 != 0)
    sub_405780(eax_9, arg1[0x40])
    int32_t var_28_9 = arg1[0x3f]
    sub_6b4d5b()

arg1[0x3f] = 0
arg1[0x40] = 0
arg1[0x41] = 0
var_4.b = 0xb
int32_t* eax_11 = arg1[0x3b]

if (eax_11 != 0)
    int32_t* var_28_10 = arg1
    sub_539c30(eax_11, arg1[0x3c])
    int32_t var_34_1 = arg1[0x3b]
    sub_6b4d5b()

arg1[0x3b] = 0
arg1[0x3c] = 0
arg1[0x3d] = 0
int32_t eax_13 = arg1[0x37]

if (eax_13 != 0)
    int32_t var_28_11 = eax_13
    sub_6b4d5b()

arg1[0x37] = 0
arg1[0x38] = 0
arg1[0x39] = 0
void* eax_14 = arg1[0x33]

if (eax_14 != 0)
    int32_t* var_28_12 = arg1
    sub_535e80(eax_14, arg1[0x34])
    int32_t var_2c_5 = arg1[0x33]
    sub_6b4d5b()

arg1[0x33] = 0
arg1[0x34] = 0
arg1[0x35] = 0
int32_t* eax_16 = arg1[0x2f]

if (eax_16 != 0)
    sub_52f330(eax_16, arg1[0x30])
    int32_t var_28_13 = arg1[0x2f]
    sub_6b4d5b()

arg1[0x2f] = 0
arg1[0x30] = 0
arg1[0x31] = 0
void* eax_18 = arg1[0x2b]

if (eax_18 != 0)
    int32_t* var_28_14 = arg1
    int32_t var_2c_6 = arg1[0x2c]
    sub_536c80(eax_18, arg1)
    int32_t var_30_2 = arg1[0x2b]
    sub_6b4d5b()

arg1[0x2b] = 0
arg1[0x2c] = 0
arg1[0x2d] = 0
var_4.b = 6
sub_539be0(&arg1[0x27])
void* eax_21 = arg1[0x23]

if (eax_21 != 0)
    int32_t edx_3 = arg1[0x24]
    int32_t* var_28_16 = arg1
    int32_t var_2c_7 = edx_3
    sub_52f790(eax_21, edx_3)
    int32_t var_30_3 = arg1[0x23]
    sub_6b4d5b()

arg1[0x23] = 0
arg1[0x24] = 0
arg1[0x25] = 0
void* eax_23 = arg1[0x1f]

if (eax_23 != 0)
    int32_t edx_4 = arg1[0x20]
    int32_t* var_28_17 = arg1
    int32_t var_2c_8 = edx_4
    sub_52f790(eax_23, edx_4)
    int32_t var_30_4 = arg1[0x1f]
    sub_6b4d5b()

arg1[0x1f] = 0
arg1[0x20] = 0
arg1[0x21] = 0
void* eax_25 = arg1[0x1b]

if (eax_25 != 0)
    int32_t edx_5 = arg1[0x1c]
    int32_t* var_28_18 = arg1
    int32_t var_2c_9 = edx_5
    sub_52f790(eax_25, edx_5)
    int32_t var_30_5 = arg1[0x1b]
    sub_6b4d5b()

arg1[0x1b] = 0
arg1[0x1c] = 0
arg1[0x1d] = 0
int32_t eax_27 = arg1[0x17]

if (eax_27 != 0)
    int32_t var_28_19 = eax_27
    sub_6b4d5b()

arg1[0x17] = 0
arg1[0x18] = 0
arg1[0x19] = 0
int32_t eax_28 = arg1[0x13]

if (eax_28 != 0)
    int32_t var_28_20 = eax_28
    sub_6b4d5b()

arg1[0x13] = 0
arg1[0x14] = 0
arg1[0x15] = 0
int32_t eax_29 = arg1[0xf]

if (eax_29 != 0)
    int32_t var_28_21 = eax_29
    sub_6b4d5b()

arg1[0xf] = 0
arg1[0x10] = 0
arg1[0x11] = 0
int32_t eax_30 = arg1[0xb]

if (eax_30 != 0)
    int32_t var_28_22 = eax_30
    sub_6b4d5b()

arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
int32_t eax_31 = arg1[7]

if (eax_31 != 0)
    int32_t var_28_23 = eax_31
    sub_6b4d5b()

arg1[7] = 0
arg1[8] = 0
arg1[9] = 0
BOOL result = arg1[3]

if (result != 0)
    BOOL result_1 = result
    result = sub_6b4d5b()

arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
int32_t lpMem = *arg1

if (lpMem != 0)
    result = HeapFree(data_797df4, HEAP_NONE, lpMem)

fsbase->NtTib.ExceptionList = ExceptionList
return result
