// 函数: sub_61b650
// 地址: 0x61b650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71fa39
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_10_1 = 0
arg2[5] = 0xf
arg2[4] = 0
*arg2 = 0
int32_t var_4 = 0
int32_t var_10_2 = 1

switch (*(arg1 + 0x34) - 0xa)
    case 0
        sub_401140(arg1.b, 0x7345b8, arg2)
    case 1
        sub_401140(arg1.b, "float", arg2)
    case 2
        sub_401140(arg1.b, "string", arg2)
    case 3
        sub_401180(arg2, 0xffffffff, arg1 + 0x3c, 0)
    case 4
        sub_401140(arg1.b, "array@int", arg2)
    case 5
        sub_401140(arg1.b, "array@float", arg2)
    case 6
        sub_401140(arg1.b, "array@string", arg2)
    case 7
        sub_401140(arg1.b, "array@", arg2)
        sub_402000(arg2, arg1 + 0x3c, 0, 0xffffffff)
    case 8
        sub_401140(arg1.b, "ref int", arg2)
    case 9
        sub_401140(arg1.b, "ref float", arg2)
    case 0xa
        sub_401140(arg1.b, "ref string", arg2)
    case 0xb
        sub_401140(arg1.b, "ref ", arg2)
        sub_402000(arg2, arg1 + 0x3c, 0, 0xffffffff)
    case 0xc
        sub_401140(arg1.b, "ref array@int", arg2)
    case 0xd
        sub_401140(arg1.b, "ref array@float", arg2)
    case 0xe
        sub_401140(arg1.b, "ref array@string", arg2)
    case 0xf
        sub_401140(arg1.b, "ref array@", arg2)
        sub_402000(arg2, arg1 + 0x3c, 0, 0xffffffff)
    case 0x11
        sub_401140(arg1.b, "functype", arg2)
    case 0x14
        sub_401140(arg1.b, "array@functype", arg2)
    case 0x15
        sub_401140(arg1.b, "ref functype", arg2)
    case 0x16
        sub_401140(arg1.b, "ref array@functype", arg2)
    case 0x25
        sub_401140(arg1.b, "bool", arg2)
    case 0x28
        sub_401140(arg1.b, "array@bool", arg2)
    case 0x29
        sub_401140(arg1.b, "ref bool", arg2)
    case 0x2a
        sub_401140(arg1.b, "ref array@bool", arg2)
    case 0x35
        sub_401140(arg1.b, "delegate", arg2)
    case 0x38
        sub_401140(arg1.b, "array@delegate", arg2)
    case 0x39
        sub_401140(arg1.b, "ref delegate", arg2)
    case 0x3a
        sub_401140(arg1.b, "ref array@delegate", arg2)
    default
        sub_401270(arg2, 3, 0x734714)

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
