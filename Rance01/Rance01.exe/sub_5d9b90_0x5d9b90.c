// 函数: sub_5d9b90
// 地址: 0x5d9b90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* eax = data_797d94

if (eax != 0)
    sub_5d9c10(eax)
    data_797d94 = 0

int32_t* result = operator new(0x48)

if (result == 0)
    data_797d94 = 0
    result.b = 1
    return result

__builtin_memset(&result[2], 0, 0x29)
*result = 0x1000000
result[1].b = 1
result[0xd] = 0
result[0xe] = 0
result[0xf] = 0
result[0x10] = &kiwi::CFinalizer<class kiwi::CKiwiSoundEngine>::`vftable'{for `IInterface'}
result[0x11] = result
data_797d94 = result
result.b = 1
return result
