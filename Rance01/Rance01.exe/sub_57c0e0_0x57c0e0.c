// 函数: sub_57c0e0
// 地址: 0x57c0e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char result
int32_t ecx
result, ecx = sub_57bd80(arg1)

if (result != 0)
    int32_t var_c_1 = ecx
    
    if (sub_57be90(arg1, fconvert.s(fconvert.t(arg5))) != 0)
        if (*(arg1 + 4) == 0)
            if (sub_57c160(arg4, arg2, arg1) != 0)
                result = sub_57c1f0(arg3, arg2, arg1)
                
                if (result == 0)
                    return result
                
                return 1
        else if (sub_57c160(arg3, arg2, arg1) != 0 && sub_57c1f0(arg4, arg2, arg1) != 0)
            return 1

return 0
