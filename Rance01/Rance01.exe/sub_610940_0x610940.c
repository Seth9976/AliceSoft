// 函数: sub_610940
// 地址: 0x610940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d883
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_38 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_615da0(arg1)
int32_t var_4 = 0
*arg1 = &dpanalysis::CSourceWnd::`vftable'{for `dpanalysis::CTextChildWnd'}
arg1[0x30] = 0
sub_60b530(&arg1[0x35])
arg1[0x68] = 0
arg1[0x69] = 0
arg1[0x6a] = 0
var_4.b = 2
arg1[0x6e] = 0
int32_t* eax_5 = operator new(0x2c)

if (eax_5 == 0)
    int32_t var_28 = 0
    struct std::exception::VTable* var_1c
    std::exception::exception(&var_1c, &var_28)
    var_1c = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_1c, 0x771508)
    noreturn

arg1[0x6d] = eax_5
*eax_5 = eax_5
void* eax_6 = arg1[0x6d]
*(eax_6 + 4) = eax_6
void* eax_7 = arg1[0x6d]
*(eax_7 + 8) = eax_7
arg1[0x6d]->vFunc_10.b = 1
*(&arg1[0x6d]->vFunc_10 + 1) = 1
var_4.b = 3
char const* const var_3c_1 = "void"
arg1[0x31] = 0
arg1[0x5d] = 0
arg1[0x5e] = 0
arg1[0x5f] = 0xff8080
arg1[0x60] = 0xffffff
arg1[0x61] = 0x80
arg1[0x63] = 0xffffffff
arg1[0x64] = 0xffffffff
arg1[0x32] = 0
arg1[0x33] = 0
arg1[0x34] = 0
arg1[0x62] = 0
arg1[0x65] = 0xffffffff
arg1[0x66] = 0xffffffff
arg1[0x67] = 0xffc0c0
void* var_24
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
void* const var_3c_3 = &data_734bc0
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_5 = "float"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_7 = "string"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_9 = "bool"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_11 = "const"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_13 = "array"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_15 = "struct"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_17 = "class"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_19 = "functype"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_21 = "delegate"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
void* const var_3c_23 = &data_734c14
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_25 = "ifdef"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_27 = "ifndef"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_29 = "endif"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_31 = "assert"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_33 = "objectgroup"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_35 = "system"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_37 = "this"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_39 = "private"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_41 = "public"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
void* const var_3c_43 = &data_734c64
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_45 = "else"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_47 = "while"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
void* const var_3c_49 = &data_734c78
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
void* const var_3c_51 = &data_734c7c
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_53 = "break"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_55 = "continue"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_57 = "return"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_59 = "goto"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_61 = "switch"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_63 = "case"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_65 = "default"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_67 = "jump"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
char const* const var_3c_69 = "jumps"
sub_5cdb70(&arg1[0x6c], &var_24, sub_614110(&arg1[0x6c]))
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
