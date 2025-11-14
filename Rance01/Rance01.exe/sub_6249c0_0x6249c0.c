// 函数: sub_6249c0
// 地址: 0x6249c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi
int32_t var_8 = edi
*arg1 = (*(**(arg2 + 4) + 0x28))()
int32_t var_8_1 = edi
uint32_t result

if ((*(**(arg2 + 4) + 0x24))() == 0)
    switch (*arg1 - 0xe)
        case 0, 8
            *arg1 = 0xa
        case 1, 9
            *arg1 = 0xb
            result.b = 1
            return result
        case 2, 0xa
            *arg1 = 0xc
            result.b = 1
            return result
        case 3, 0xb
            *arg1 = 0xd
            result.b = 1
            return result
        case 0x10, 0x12
            *arg1 = 0x1b
            result.b = 1
            return result
        case 0x24, 0x26
            *arg1 = 0x2f
            result.b = 1
            return result
        default
            result.b = 0
            return result

result.b = 1
return result
