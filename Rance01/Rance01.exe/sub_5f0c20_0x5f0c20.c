// 函数: sub_5f0c20
// 地址: 0x5f0c20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* result = sub_405d70(arg2, arg1 + 0x10)

if (result.b == 0 || *(arg1 + 0x2c) != 0)
    sub_401180(arg1 + 0x10, 0xffffffff, arg2, 0)
    *(arg1 + 0x2c) = 0
    result = *(arg1 + 0x34)
    int128_t* edi_1 = *(arg1 + 0x30)
    
    if (edi_1 != result)
        int32_t ebx_1 = 0 s>> 2 << 2
        result = sub_6b49d0(edi_1, result, ebx_1)
        *(arg1 + 0x34) = ebx_1 + edi_1
    
    *(arg1 + 0x350) = 1

return result
