// 函数: sub_5e9160
// 地址: 0x5e9160
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg1[1]

if (result == 0 || arg2 s<= 0 || arg3 s<= 0)
    result.b = 0
    return result

int32_t* esi = *arg1

if (esi == 0xffffffff)
    int32_t* ecx_1 = data_797d2c
    int32_t var_10_1 = *result
    int32_t edx
    esi = sub_40d040(ecx_1[0xc] + 0x28c, edx, ecx_1)

if (sub_4092a0(esi, arg3, arg2) != 1)
    return 0

*arg1 = esi
return 1
