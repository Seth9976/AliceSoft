// 函数: sub_66fc50
// 地址: 0x66fc50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_edi
int32_t var_48 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
result_1 = arg2
int32_t var_30 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
char ecx = sub_401270(&var_2c, nullptr, 0x72d3a9)
int32_t var_4 = 0
int32_t eax_6 = arg1[7]

if (eax_6 u<= 0x1d)
    int32_t* var_4c_1
    char const* const edx_1
    
    switch (eax_6)
        case 0
            ecx = &var_2c
            var_4c_1 = &var_2c
            edx_1 = "TOKEN_NONE"
        case 1
            var_4c_1 = &var_2c
            edx_1 = "TOKEN_DATATYPE"
        case 2
            edx_1 = "TOKEN_SYSTEM"
            var_4c_1 = &var_2c
        case 3
            ecx = &var_2c
            var_4c_1 = &var_2c
            edx_1 = "TOKEN_SEMICOLON"
        case 4
            var_4c_1 = &var_2c
            edx_1 = "TOKEN_COMMA"
        case 5
            edx_1 = "TOKEN_BLOCK_DEFINE_S"
            var_4c_1 = &var_2c
        case 6
            ecx = &var_2c
            var_4c_1 = &var_2c
            edx_1 = "TOKEN_BLOCK_DEFINE_E"
        case 7
            var_4c_1 = &var_2c
            edx_1 = "TOKEN_BLOCK_DATA_S"
        case 8
            edx_1 = "TOKEN_BLOCK_DATA_E"
            var_4c_1 = &var_2c
        case 9
            ecx = &var_2c
            var_4c_1 = &var_2c
            edx_1 = "TOKEN_BLOCK_ARRAY_S"
        case 0xa
            var_4c_1 = &var_2c
            edx_1 = "TOKEN_BLOCK_ARRAY_E"
        case 0xb
            edx_1 = "TOKEN_EQUAL"
            var_4c_1 = &var_2c
        case 0xc
            ecx = &var_2c
            var_4c_1 = &var_2c
            edx_1 = "TOKEN_ASTERISK"
        case 0xd
            var_4c_1 = &var_2c
            edx_1 = "TOKEN_SLASH"
        case 0xe
            edx_1 = "TOKEN_PLUS"
            var_4c_1 = &var_2c
        case 0xf
            ecx = &var_2c
            var_4c_1 = &var_2c
            edx_1 = "TOKEN_MINUS"
        case 0x10
            var_4c_1 = &var_2c
            edx_1 = "TOKEN_NUMERAL"
        case 0x11
            edx_1 = "TOKEN_STRING"
            var_4c_1 = &var_2c
        case 0x12
            ecx = &var_2c
            var_4c_1 = &var_2c
            edx_1 = "TOKEN_DATANAME"
        case 0x13
            var_4c_1 = &var_2c
            edx_1 = "TOKEN_LT"
        case 0x14
            edx_1 = "TOKEN_GT"
            var_4c_1 = &var_2c
        case 0x15
            ecx = &var_2c
            var_4c_1 = &var_2c
            edx_1 = "TOKEN_MONADIC"
        case 0x16
            var_4c_1 = &var_2c
            edx_1 = "TOKEN_LSHIFT"
        case 0x17
            edx_1 = "TOKEN_RSHIFT"
            var_4c_1 = &var_2c
        case 0x18
            ecx = &var_2c
            var_4c_1 = &var_2c
            edx_1 = "TOKEN_PERCENT"
        case 0x19
            var_4c_1 = &var_2c
            edx_1 = "TOKEN_AND"
        case 0x1a
            edx_1 = "TOKEN_OR"
            var_4c_1 = &var_2c
        case 0x1b
            ecx = &var_2c
            var_4c_1 = &var_2c
            edx_1 = "TOKEN_XOR"
        case 0x1c
            var_4c_1 = &var_2c
            edx_1 = "TOKEN_TILDE"
        case 0x1d
            edx_1 = "COMMENT"
            var_4c_1 = &var_2c
    
    sub_401140(ecx, edx_1, var_4c_1)

char* ecx_1 = var_2c.d

if (var_18 u< 0x10)
    ecx_1 = &var_2c

int32_t* eax_7

if (arg1[5] u< 0x10)
    eax_7 = arg1
else
    eax_7 = *arg1

int32_t result = result_1
char* var_4c_2 = ecx_1
int32_t* var_50 = eax_7
int32_t var_54 = arg1[8]
sub_4104a0(0x7304a4)

if (var_18 u>= 0x10)
    int32_t var_4c_3 = var_2c.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
