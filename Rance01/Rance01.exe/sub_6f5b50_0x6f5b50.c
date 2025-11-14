// 函数: sub_6f5b50
// 地址: 0x6f5b50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = *(arg2 + 0x18)

if (edi != 0 && modu.dp.d(0:(arg5 + arg6 * arg3 + 1), edi) == 0
        && arg5 + arg6 * arg3 + 1 s< arg4 * arg3)
    *(arg2 + 0x24) = 0
    *(arg2 + 0x28) = 0
    *(arg2 + 0x2c) = 0
    *(arg2 + 0x30) = 0
    bool cond:0_1 = *(arg1 + 0x30) == 0
    *(arg1 + 0xc) = 0
    
    if (cond:0_1)
        uint32_t var_14
        int32_t result = sub_6f2b80(arg1, &var_14)
        
        if (result != 0)
            return result
    else
        *(arg1 + 0x30) = 0

return 0
