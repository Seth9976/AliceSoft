// 函数: sub_6733b0
// 地址: 0x6733b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7122b1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t eax_2 = data_78c474 ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &mainex::CMainEXFile::`vftable'{for `IEXFile'}
int32_t var_4 = 2
int32_t* ecx = arg1[3]

if (ecx != 0)
    result = (*(*ecx + 4))(eax_2)
    arg1[3] = 0

int32_t* ecx_1 = arg1[4]

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))(eax_2)
    arg1[4] = 0

if (arg1[0x18] u>= 0x10)
    int32_t var_1c_1 = arg1[0x13]
    result = sub_6b4d5b()

arg1[0x18] = 0xf
arg1[0x17] = 0
arg1[0x13].b = 0

if (arg1[0x11] u>= 0x10)
    int32_t var_1c_2 = arg1[0xc]
    result = sub_6b4d5b()

arg1[0x11] = 0xf
arg1[0x10] = 0
arg1[0xc].b = 0

if (arg1[0xa] u>= 0x10)
    int32_t var_1c_3 = arg1[5]
    result = sub_6b4d5b()

arg1[0xa] = 0xf
arg1[9] = 0
arg1[5].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
