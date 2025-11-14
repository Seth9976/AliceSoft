// 函数: sub_52ec20
// 地址: 0x52ec20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg3

if (arg4 != arg1)
    void* esi_1 = arg1 + 0x20
    
    do
        esi_1 -= 0x38
        result -= 0x38
        sub_401180(result, 0xffffffff, esi_1 - 0x20, 0)
        result[7] = *(esi_1 - 4)
        sub_52d8c0(&result[8], esi_1)
        result[0xc] = *(esi_1 + 0x10)
        result[0xd] = *(esi_1 + 0x14)
    while (esi_1 - 0x20 != arg4)

return result
