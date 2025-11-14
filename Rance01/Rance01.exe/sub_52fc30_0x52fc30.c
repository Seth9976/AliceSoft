// 函数: sub_52fc30
// 地址: 0x52fc30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = arg3

if (arg1 != arg4)
    int32_t* esi_1 = arg1 + 0x20
    
    do
        sub_401180(result, 0xffffffff, &esi_1[-8], 0)
        *(result + 0x1c) = esi_1[-1]
        *(result + 0x20) = *esi_1
        *(result + 0x24) = esi_1[1]
        int32_t ecx_2 = esi_1[2]
        esi_1 = &esi_1[0xb]
        *(result + 0x28) = ecx_2
        result += 0x2c
    while (&esi_1[-8] != arg4)

return result
