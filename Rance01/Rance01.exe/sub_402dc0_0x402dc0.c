// 函数: sub_402dc0
// 地址: 0x402dc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71bb36
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &afafactory::CAFAFile::`vftable'{for `IAFAFile'}
arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
sub_401270(&arg1[1], nullptr, 0x72db6f)
int32_t var_4 = 0
arg1[0xd] = 0xf
arg1[0xc] = 0
arg1[8].b = 0
sub_401270(&arg1[8], 8, "AlicArch")
var_4.b = 1
__builtin_memcpy(&arg1[0xf], 
    "\x08\x00\x00\x00\x1c\x00\x00\x00\x02\x00\x00\x00\x10\x00\x00\x00\x08\x00\x00\x00\x10\x00\x00\x00\x"
"14\x00\x00\x00\x18\x00\x00\x00\x10\x00\x00\x00\x04\x00\x00\x00\x08\x00\x00\x00\x0c\x00\x00\x00\x01"
"00\x00\x00\x01", 
    0x35)
arg1[0x1f] = 0
int32_t* eax_3 = operator new(0x74)

if (eax_3 == 0)
    int32_t var_1c = 0
    struct std::exception::VTable* var_18
    std::exception::exception(&var_18, &var_1c)
    var_18 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_18, 0x771508)
    noreturn

arg1[0x1e] = eax_3
*eax_3 = eax_3
void* eax_4 = arg1[0x1e]
*(eax_4 + 4) = eax_4
void* eax_5 = arg1[0x1e]
*(eax_5 + 8) = eax_5
arg1[0x1e][2].vFunc_0.b = 1
*(arg1[0x1e] + 0x71) = 1
arg1[0x21] = 0
arg1[0x22] = 0
arg1[0x23] = 0
arg1[0x25] = 0
arg1[0x26] = 0
arg1[0x27] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
