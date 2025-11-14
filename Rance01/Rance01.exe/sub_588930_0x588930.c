// 函数: sub_588930
// 地址: 0x588930
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e62c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IGraphEngine::graphengine::CGraphEngine::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_1c = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IGraphEngine::graphengine::CGraphEngine::VTable** var_10_1 = arg1
*arg1 = &graphengine::CGraphEngine::`vftable'{for `IGraphEngine'}
int32_t var_4 = 0xb
sub_588a80(arg1)
int32_t* eax_3 = arg1[6]

if (eax_3 != 0)
    (*(*eax_3 + 8))(eax_3)
    arg1[6] = 0

int32_t* eax_4 = arg1[5]

if (eax_4 != 0)
    (*(*eax_4 + 8))(eax_4)
    arg1[5] = 0

int32_t eax_5 = arg1[0x77]

if (eax_5 != 0)
    int32_t var_20_3 = eax_5
    sub_6b4d5b()

arg1[0x77] = 0
arg1[0x78] = 0
arg1[0x79] = 0
var_4.b = 9
sub_58fb80(&arg1[0x5a])
var_4.b = 8
sub_591020(&arg1[0x50])
var_4.b = 7
sub_58b030(&arg1[0x47])
var_4.b = 6
sub_58ae70(&arg1[0x3e])
var_4.b = 5
sub_58aca0(&arg1[0x35])
var_4.b = 4
sub_58ac00(&arg1[0x2c])
var_4.b = 3
sub_58aa90(&arg1[0x23])
var_4.b = 2
sub_58a950(&arg1[0x1a])
var_4.b = 1
sub_58a830(&arg1[0x11])
var_4.b = 0
int32_t result = sub_58a740(&arg1[8])
int32_t var_4_1 = 0xffffffff
void* esi_1 = arg1[7]

if (esi_1 != 0)
    sub_587780(esi_1)
    void* var_20_5 = esi_1
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
