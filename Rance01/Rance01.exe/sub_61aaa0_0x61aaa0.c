// 函数: sub_61aaa0
// 地址: 0x61aaa0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = arg3

if (arg1 != arg4)
    int32_t* esi_1 = arg1 + 0x38
    
    do
        sub_401180(result, 0xffffffff, &esi_1[-0xe], 0)
        sub_401180(result + 0x1c, 0xffffffff, &esi_1[-7], 0)
        *(result + 0x38) = *esi_1
        sub_60ad80(result + 0x3c, &esi_1[1])
        esi_1 = &esi_1[0x13]
        result += 0x4c
    while (&esi_1[-0xe] != arg4)

return result
