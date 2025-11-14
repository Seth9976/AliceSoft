// 函数: sub_6006c0
// 地址: 0x6006c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_38
int32_t* eax_1 = sub_5e0090(arg7, arg8, arg9, arg11, &var_38, arg5, arg6, 
    fconvert.s(fconvert.t(arg10)), fconvert.s(fconvert.t(arg12)), arg3, arg1)
void* result = sub_5f7370(*data_797da0, arg4)

if (result != 0)
    result = sub_5f33b0(result, arg13)
    
    if (result != 0)
        if (sub_5e0140(eax_1, result + 8) == 0)
            __builtin_memcpy(result + 8, eax_1, 0x30)
            *(result + 0x95) = 1
        
        return 1

result.b = 0
return result
