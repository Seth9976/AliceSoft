// 函数: sub_5f2510
// 地址: 0x5f2510
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7244cc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* ebp = arg5
*arg1 = &partsengine::CParts::`vftable'{for `IInterface'}
arg1[1] = 0x10000
arg1[2] = 1
struct IInterface::partsengine::CPartsModel::VTable** eax_3 = operator new(0x240)
struct IInterface::partsengine::CPartsModel::VTable** var_10 = eax_3
int32_t var_4 = 0
int32_t eax_13

if (eax_3 == 0)
    eax_13 = 0
else
    char* eax_4 = data_797d80
    
    if (sub_5cadb0(eax_4) != 0)
        arg5 = (*(**(eax_4 + 0x28) + 0x14))(eax_2)
    else
        arg5 = nullptr
    
    char* eax_9 = data_797d80
    int32_t eax_11
    
    if (sub_5cadb0(eax_9) != 0)
        eax_11 = (*(**(eax_9 + 0x28) + 0x10))(eax_2)
    else
        eax_11 = 0
    
    int80_t st0_1
    st0_1, eax_13 = sub_432100(arg5, eax_11, eax_3, arg2, arg5)

arg1[0xa] = arg7
arg1[0xd] = arg3
arg1[3] = eax_13
arg1[0xe] = arg4
arg1[0x10] = arg6
arg1[4].w = 1
arg1[5] = 0
arg1[6] = 0
arg1[7] = 0x64
arg1[8].b = 0
arg1[9] = 1
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xf] = ebp
arg1[0x11] = arg8
arg1[0x12] = arg9
__builtin_memset(&arg1[0x13], 0, 0x14)
int32_t var_4_1 = 1
arg1[0x19] = 0
arg1[0x1a] = 0
arg1[0x1b] = 0
arg1[0x1d] = 0
arg1[0x1e] = 0
arg1[0x1f] = 0
arg1[0x21] = 0
arg1[0x22] = 0
arg1[0x23] = 0
arg1[0x25] = 0
arg1[0x26] = 0
arg1[0x27] = 0
arg1[0x29] = 0
arg1[0x2a] = 0
arg1[0x2b] = 0
arg1[0x2d] = 0
arg1[0x2e] = 0
arg1[0x2f] = 0
var_4_1.b = 7
sub_5f5e20(&arg1[0x2d])

for (struct partsengine::CSprite::partsengine::CCGSprite::VTable*** i = arg1[0x2d]; 
        i != arg1[0x2e]; i = &i[1])
    struct partsengine::CSprite::partsengine::CCGSprite::VTable** eax_14 = operator new(0x94)
    arg5 = eax_14
    var_4_1.b = 8
    struct partsengine::CSprite::partsengine::CCGSprite::VTable** eax_15
    
    if (eax_14 == 0)
        eax_15 = nullptr
    else
        eax_15 = sub_5dec10(eax_14, arg3, arg4, ebp, arg1[3] + 0x1b4)
    
    var_4_1.b = 7
    *i = eax_15

fsbase->NtTib.ExceptionList = ExceptionList
