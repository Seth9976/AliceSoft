// 函数: sub_58eb60
// 地址: 0x58eb60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71439b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct graphengine::CShaderArchive::VTable** var_18 = arg1
*arg1 = &graphengine::CShaderArchive::`vftable'
int32_t var_4 = 2
int128_t* eax_3 = arg1[0xa]
int128_t* edi = arg1[9]

if (edi != eax_3)
    void* esi_2 = 0
    sub_6b49d0(edi, eax_3, esi_2, eax_2)
    arg1[0xa] = esi_2 + edi

bool cond:0 = arg1[7] u< 0x10
arg1[6] = 0
char* eax_4

if (cond:0)
    eax_4 = &arg1[2]
else
    eax_4 = arg1[2]

*eax_4 = 0
sub_58f670(&arg1[0xd])
int32_t* ecx = arg1[0x11]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[0x11] = 0

arg1[1] = 0
void* var_14 = &arg1[0xd]
var_4.b = 3
int32_t* eax_6 = arg1[0xe]
void var_10
sub_40f580(&arg1[0xd], &var_10, *eax_6, eax_6)
int32_t var_30_3 = arg1[0xe]
sub_6b4d5b()
int32_t result = arg1[9]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[9] = 0
arg1[0xa] = 0
arg1[0xb] = 0

if (arg1[7] u>= 0x10)
    int32_t var_30_4 = arg1[2]
    result = sub_6b4d5b()

arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
