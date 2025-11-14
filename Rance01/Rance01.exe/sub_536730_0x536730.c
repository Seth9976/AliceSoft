// 函数: sub_536730
// 地址: 0x536730
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = arg3

if (arg1 != arg4)
    int32_t* esi_1 = arg1 + 0x20
    
    do
        *result = esi_1[-8]
        sub_401180(&result[1], 0xffffffff, &esi_1[-7], 0)
        result[8] = *esi_1
        sub_536780(&result[9], &esi_1[1])
        int32_t ecx_2 = esi_1[5]
        esi_1 = &esi_1[0xe]
        result[0xd] = ecx_2
        result = &result[0xe]
    while (&esi_1[-8] != arg4)

return result
