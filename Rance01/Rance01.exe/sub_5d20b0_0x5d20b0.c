// 函数: sub_5d20b0
// 地址: 0x5d20b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = data_797d90

if (esi != 0)
    sub_5d18e0(esi)
    void* var_10_1 = esi
    sub_6b4d5b()
    data_797d90 = 0

char* result = operator new(0x54)

if (result == 0)
    data_797d90 = 0
    result.b = 1
    return result

*result = 0
*(result + 0x14) = 0
*(result + 0x18) = 0xf
result[4] = 0
__builtin_memset(&result[0x20], 0, 0x14)
*(result + 0x48) = 0
*(result + 0x4c) = 0xf
result[0x38] = 0
data_797d90 = result
result.b = 1
return result
