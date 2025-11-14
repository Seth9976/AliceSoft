// 函数: sub_6e3e40
// 地址: 0x6e3e40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x74) != 0 && *(arg1 + 0x4de0) == 0)
    int32_t eax_1
    eax_1.b = arg7
    return sub_6e0df0(arg1, arg2, arg3, arg4, arg5, arg6, 0, eax_1.b)

int32_t eax_2 = *(arg1 + 0x6c)

if (eax_2 != 0 && *(arg1 + 0x68) != 0)
    eax_2.b = arg7
    return sub_6e0d40(arg1, arg2, arg3, arg4, arg5, arg6, eax_2.b)

if (eax_2 == 0 && *(arg1 + 0x68) != 0)
    sub_6e3710(arg1, arg2, arg4, arg5, arg6)
    return sub_6e3a80(arg1, arg2, arg4, arg5, arg6)

if (eax_2 == 0 || *(arg1 + 0x68) != 0)
    if (*(arg1 + 0x34) == 3)
        int32_t eax_14
        eax_14.b = arg7
        return sub_6e0d40(arg1, arg2, arg3, arg4, arg5, arg6, eax_14.b)
    
    return sub_6e3710(arg1, arg2, arg4, arg5, arg6)

int32_t eax_8

if (arg3[2] == 0 && *(arg1 + 0x4de0) == 0)
    eax_8.b = arg7
    return sub_6e0df0(arg1, arg2, arg3, arg4, arg5, arg6, 1, eax_8.b)

eax_8.b = arg7
char var_1c = eax_8.b
return sub_6e28d0(arg1, arg2, arg3, arg4, arg5, arg6.b)
