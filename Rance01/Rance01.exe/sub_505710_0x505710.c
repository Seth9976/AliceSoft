// 函数: sub_505710
// 地址: 0x505710
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72685b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 8
sub_4c8b60(arg1)
int32_t* esi = arg1[0x68]

if (esi != 0)
    sub_4cb6a0(esi)
    arg1[0x68] = 0

int32_t eax_3 = arg1[0x71]

if (eax_3 != 0)
    int32_t var_2c_1 = eax_3
    sub_6b4d5b()

arg1[0x71] = 0
arg1[0x72] = 0
arg1[0x73] = 0
int32_t* eax_4 = arg1[0x6d]

if (eax_4 != 0)
    sub_4b1040(eax_4, arg1[0x6e])
    int32_t var_2c_2 = arg1[0x6d]
    sub_6b4d5b()

arg1[0x6d] = 0
arg1[0x6e] = 0
arg1[0x6f] = 0
int32_t eax_6 = arg1[0x69]

if (eax_6 != 0)
    int32_t var_2c_3 = eax_6
    sub_6b4d5b()

arg1[0x69] = 0
arg1[0x6a] = 0
arg1[0x6b] = 0
int32_t eax_7 = arg1[0x62]

if (eax_7 != 0)
    int32_t var_2c_4 = eax_7
    sub_6b4d5b()

arg1[0x62] = 0
arg1[0x63] = 0
arg1[0x64] = 0
void* var_14 = &arg1[0x53]
var_4.b = 9
int32_t*** eax_8 = arg1[0x54]
void var_10
sub_4365a0(&arg1[0x53], &var_10, *eax_8, eax_8)
int32_t var_2c_6 = arg1[0x54]
sub_6b4d5b()
int32_t eax_10 = arg1[0x2a]

if (eax_10 != 0)
    int32_t var_2c_7 = eax_10
    sub_6b4d5b()

arg1[0x2a] = 0
arg1[0x2b] = 0
arg1[0x2c] = 0
int32_t eax_11 = arg1[0x26]

if (eax_11 != 0)
    int32_t var_2c_8 = eax_11
    sub_6b4d5b()

arg1[0x26] = 0
arg1[0x27] = 0
arg1[0x28] = 0
int32_t eax_12 = arg1[0x22]

if (eax_12 != 0)
    int32_t var_2c_9 = eax_12
    sub_6b4d5b()

arg1[0x22] = 0
arg1[0x23] = 0
arg1[0x24] = 0
int32_t var_4_1 = 0xa
sub_4c8b60(arg1)
int32_t result = *arg1

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
