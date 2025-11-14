// 函数: sub_56e840
// 地址: 0x56e840
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg3
int32_t ebp = arg2

if (arg1[0x10] != 0)
    return sub_56ddd0(&arg1[0xe], ebp, ebx, arg4, arg5)

sub_56e980(arg1, &arg3, &arg2)
int32_t ebx_1 = ebx - arg2
*arg4 = ebp - arg3
*arg5 = ebx_1
int32_t result

if (*arg4 s>= 0)
    result = (*(*arg1 + 0x10))()
    
    if (*arg4 s< result && *arg5 s>= 0)
        result = (*(*arg1 + 0x14))()
        
        if (*arg5 s< result)
            result.b = 1
            return result

result.b = 0
return result
