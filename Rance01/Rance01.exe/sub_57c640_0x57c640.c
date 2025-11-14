// 函数: sub_57c640
// 地址: 0x57c640
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_c = arg1
char result
int32_t ecx
result, ecx = sub_57c510(arg1, fconvert.s(fconvert.t(arg5)))

if (result != 0)
    int32_t var_c_2 = ecx
    
    if (sub_57c3f0(arg1, fconvert.s(fconvert.t(arg5))) != 0)
        if (*(arg1 + 4) == 0)
            if (sub_57c1f0(arg4, arg2, arg1) != 0)
                result = sub_57c6c0(arg3, arg2, arg1)
                
                if (result == 0)
                    return result
                
                return 1
        else if (sub_57c1f0(arg3, arg2, arg1) != 0 && sub_57c6c0(arg4, arg2, arg1) != 0)
            return 1

return 0
