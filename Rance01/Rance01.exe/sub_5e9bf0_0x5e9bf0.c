// 函数: sub_5e9bf0
// 地址: 0x5e9bf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float result

if (arg4 == 0)
    if (*(arg3 i+ 4) != 0)
        result = *arg3
        
        if (result != 0xffffffff)
            bool eax_2
            int80_t st0_1
            st0_1, eax_2 = sub_4099e0(data_797d2c, result, arg2, arg1, 0)
            return eax_2 != 0
else if (*(arg3 i+ 4) != 0)
    result = *arg3
    
    if (result != 0xffffffff)
        bool eax_1
        int80_t st0
        st0, eax_1 = sub_4099e0(data_797d2c, result, arg2, arg1, 1)
        return eax_1 != 0

result.b = 0
return result
