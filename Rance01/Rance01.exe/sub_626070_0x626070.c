// 函数: sub_626070
// 地址: 0x626070
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

switch (*(arg1 + 0xd8))
    case 0
        int32_t var_14_1 = arg5
        return sub_626210(arg2, arg1, arg3, arg4)
    case 1
        int32_t var_14_2 = arg5
        return sub_626540(arg1, arg2, arg3, arg4)
    case 2
        int32_t var_14_3 = arg5
        return sub_626b00(arg2, arg1, arg3, arg4)
    case 3
        return sub_626fc0(arg2, arg1, arg3, arg4, arg5)
    case 4
        int32_t ecx_7 = *(arg1 + 0xec)
        int32_t eax_10 = *(arg1 + 0xf0)
        
        if (ecx_7 != eax_10)
            int32_t edi_1 = *(ecx_7 + (eax_10 - ecx_7) s/ 0x28 * 0x28 - 0x28)
            
            switch ((*(**(*(arg1 + 0xdc) + 4) + 0x14))(edi_1) - 1)
                case 0
                    int32_t var_14_6 = edi_1
                    return sub_627110(arg1, arg2, arg3, arg4, arg5)
                case 2
                    return sub_627af0(arg1, arg2, arg3, arg4, arg5, edi_1)
                case 3
                    int32_t var_14_8 = edi_1
                    return sub_6275f0(arg1, arg2, arg3, arg4, arg5)
                case 4
                    return sub_627e20(arg2, arg1, arg3, arg4, arg5, edi_1)

return 0
