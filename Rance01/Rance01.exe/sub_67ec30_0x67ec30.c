// 函数: sub_67ec30
// 地址: 0x67ec30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7270cc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0xd
sub_418d30(&arg1[0x2a])
sub_68bec0(&arg1[0x1e])
sub_5f71b0(*data_797da0)
*arg1 = 1
sub_5f9b30(&arg1[0x5d])
sub_5f9b30(&arg1[0x61])
int32_t* ecx_2 = arg1[0x59]

if (ecx_2 != 0)
    (*(*ecx_2 + 4))(eax_2)
    arg1[0x59] = 0

int32_t* ecx_3 = arg1[0x58]

if (ecx_3 != 0)
    (*(*ecx_3 + 4))(eax_2)
    arg1[0x58] = 0

int32_t* ecx_4 = arg1[0x56]

if (ecx_4 != 0)
    (*(*ecx_4 + 4))(eax_2)
    arg1[0x56] = 0

var_4.b = 0xc
sub_5f98f0(&arg1[0x5a])
var_4.b = 0xb
int32_t* ecx_6 = arg1[0x59]

if (ecx_6 != 0)
    (*(*ecx_6 + 4))(eax_2)
    arg1[0x59] = 0

var_4.b = 0xa
int32_t* ecx_7 = arg1[0x58]
arg1[0x57] = &partsengine::CGraph::`vftable'

if (ecx_7 != 0)
    (*(*ecx_7 + 4))(eax_2)
    arg1[0x58] = 0

var_4.b = 9
int32_t* ecx_8 = arg1[0x56]

if (ecx_8 != 0)
    (*(*ecx_8 + 4))(eax_2)
    arg1[0x56] = 0

void* var_10_1 = &arg1[0x4d]
var_4.b = 0xe
int32_t* ecx_9 = arg1[0x4d]

if (ecx_9 != 0)
    (*(*ecx_9 + 4))(eax_2)
    arg1[0x4d] = 0

if (arg1[0x54] u>= 0x10)
    int32_t var_28_5 = arg1[0x4f]
    sub_6b4d5b()

arg1[0x54] = 0xf
arg1[0x53] = 0
arg1[0x4f].b = 0

if (arg1[0x49] u>= 0x10)
    int32_t var_28_6 = arg1[0x44]
    sub_6b4d5b()

arg1[0x49] = 0xf
arg1[0x48] = 0
arg1[0x44].b = 0
void* var_10_2 = &arg1[0x2a]
arg1[0x2a] = &guiengine::CGUIControllerStack::`vftable'
var_4.b = 0x10
sub_418d30(&arg1[0x2a])
int32_t eax_15 = arg1[0x33]

if (eax_15 != 0)
    int32_t var_28_8 = eax_15
    sub_6b4d5b()

arg1[0x33] = 0
arg1[0x34] = 0
arg1[0x35] = 0
int32_t eax_16 = arg1[0x2e]

if (eax_16 != 0)
    int32_t var_28_9 = eax_16
    sub_6b4d5b()

arg1[0x2e] = 0
arg1[0x2f] = 0
arg1[0x30] = 0
arg1[0x1e] = &guiengine::CGUIMessageList::`vftable'{for `IEventObserver'}
sub_68bec0(&arg1[0x1e])

if (arg1[0x28] u>= 0x10)
    int32_t var_28_11 = arg1[0x23]
    sub_6b4d5b()

arg1[0x28] = 0xf
arg1[0x27] = 0
arg1[0x23].b = 0
int32_t eax_18 = arg1[0x1f]

if (eax_18 != 0)
    int32_t var_28_12 = eax_18
    sub_6b4d5b()

arg1[0x1f] = 0
arg1[0x20] = 0
arg1[0x21] = 0
void* var_10_3 = &arg1[0x1a]
var_4.b = 0x11
sub_5efce0(&arg1[0x1a])
int32_t eax_19 = arg1[0x1a]

if (eax_19 != 0)
    int32_t var_28_14 = eax_19
    sub_6b4d5b()

arg1[0x1a] = 0
arg1[0x1b] = 0
arg1[0x1c] = 0
sub_434640(&arg1[0x16])
int32_t eax_20 = arg1[0x12]

if (eax_20 != 0)
    int32_t var_28_16 = eax_20
    sub_6b4d5b()

arg1[0x12] = 0
arg1[0x13] = 0
arg1[0x14] = 0
int32_t eax_21 = arg1[0xe]

if (eax_21 != 0)
    int32_t var_28_17 = eax_21
    sub_6b4d5b()

arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x10] = 0
sub_434640(&arg1[0xa])
int32_t result = sub_434640(&arg1[6])
fsbase->NtTib.ExceptionList = ExceptionList
return result
