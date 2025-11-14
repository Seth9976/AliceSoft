// 函数: sub_59cf10
// 地址: 0x59cf10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719dab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &xxi::CApp2::`vftable'{for `IXXILoader'}
arg1[5] = 0
arg1[6] = 0
arg1[7] = 0
int32_t var_4 = 0
arg1[0xb] = 0
int32_t* eax_3 = operator new(0x30)

if (eax_3 == 0)
    int32_t var_1c = 0
    struct std::exception::VTable* var_18
    std::exception::exception(&var_18, &var_1c)
    var_18 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_18, 0x771508)
    noreturn

arg1[0xa] = eax_3
*eax_3 = eax_3
void* eax_4 = arg1[0xa]
*(eax_4 + 4) = eax_4
void* eax_5 = arg1[0xa]
*(eax_5 + 8) = eax_5
arg1[0xa][1].vFunc_0.b = 1
*(arg1[0xa] + 0x2d) = 1
arg1[0xd] = 1
arg1[1] = 0xffffffff
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
