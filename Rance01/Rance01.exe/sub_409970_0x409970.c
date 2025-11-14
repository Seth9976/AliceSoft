// 函数: sub_409970
// 地址: 0x409970
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = data_797d2c
int32_t edx
int32_t* result = sub_40c3c0(arg1, edx, *(esi + 0x30) + 0x274)

if (result == 0)
    result.b = 0
    return result

void* edx_1 = *(esi + 0x30)
void* esi_1 = *(edx_1 + 0x2c4)

if (esi_1 != 0 && edx_1 != 0xfffffd74
        && sub_437480(result, esi_1, *(edx_1 + 0x27c), *(edx_1 + 0x280), edx_1 + 0x28c).b != 0)
    result.b = 1
    return result

result.b = 0
return result
