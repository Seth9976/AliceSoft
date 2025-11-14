// 函数: sub_4d01f0
// 地址: 0x4d01f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = arg3

if (arg1 != arg4)
    int32_t* esi_1 = arg1 + 0x20
    
    do
        sub_401180(result, 0xffffffff, &esi_1[-8], 0)
        *(result + 0x1c) = esi_1[-1]
        *(result + 0x20) = *esi_1
        sub_4d0360(result + 0x24, &esi_1[1])
        esi_1 = &esi_1[0xd]
        result += 0x34
    while (&esi_1[-8] != arg4)

return result
