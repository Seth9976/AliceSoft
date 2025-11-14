// 函数: sub_59bbf0
// 地址: 0x59bbf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719e1e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &xxi::CApp::`vftable'{for `IXXILoader'}
int32_t var_4 = 0
void* var_14 = &arg1[0x11]
var_4.b = 2
int32_t* eax_3 = arg1[0x12]
void var_10
sub_429bc0(&arg1[0x11], &var_10, *eax_3, eax_3)
int32_t var_2c_1 = arg1[0x12]
sub_6b4d5b()
void* eax_5 = arg1[0xd]

if (eax_5 != 0)
    int32_t edx_1 = arg1[0xe]
    struct IXXILoader::xxi::CApp::VTable** var_2c_2 = arg1
    int32_t var_30_1 = edx_1
    sub_59cce0(eax_5, edx_1)
    int32_t var_34_1 = arg1[0xd]
    sub_6b4d5b()

arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xf] = 0
int128_t* eax_7 = arg1[2]
int128_t* edi_1 = arg1[1]

if (edi_1 != eax_7)
    void* esi_2 = 0
    sub_6b49d0(edi_1, eax_7, esi_2, eax_2)
    arg1[2] = esi_2 + edi_1

int32_t result = arg1[1]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
