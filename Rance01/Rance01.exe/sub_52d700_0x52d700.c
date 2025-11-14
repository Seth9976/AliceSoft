// 函数: sub_52d700
// 地址: 0x52d700
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = arg3

if (arg1 != arg4)
    void* esi_1 = arg1 + 0x20
    
    do
        sub_401180(result, 0xffffffff, esi_1 - 0x20, 0)
        *(result + 0x1c) = *(esi_1 - 4)
        sub_52d8c0(result + 0x20, esi_1)
        *(result + 0x30) = *(esi_1 + 0x10)
        int32_t ecx_2 = *(esi_1 + 0x14)
        esi_1 += 0x38
        *(result + 0x34) = ecx_2
        result += 0x38
    while (esi_1 - 0x20 != arg4)

return result
