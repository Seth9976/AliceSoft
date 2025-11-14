// 函数: sub_6c2b67
// 地址: 0x6c2b67
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi
int32_t var_10 = edi
bool cond:0 = __getptd()[0x83] != 0
int32_t edx_1

if (not(cond:0))
    edx_1 = *arg1

if (cond:0 || edx_1 == 0xe06d7363 || edx_1 == 0x80000026 || (*arg5 & 0x1fffffff) u< 0x19930522
        || (arg5[8].b & 1) == 0)
    if ((arg1[1].b & 0x66) == 0)
        if (arg5[3] != 0)
        label_6c2c00:
            
            if (*arg1 == 0xe06d7363 && arg1[4] u>= 3 && arg1[5] u> 0x19930522)
                int32_t edx_7 = *(arg1[7] + 8)
                
                if (edx_7 != 0)
                    return edx_7(arg1, arg2, arg3, arg4, arg5, arg6, arg7, zx.d(arg8))
            
            sub_6c27d5(arg1, arg2, arg3, arg4, arg5, arg8, arg6, arg7)
        else if ((*arg5 & 0x1fffffff) u>= 0x19930521 && arg5[7] != 0)
            goto label_6c2c00
    else if (arg5[1] != 0 && arg6 == 0)
        int32_t var_14_1 = 0xffffffff
        sub_6c2055(arg2, arg4, arg5)

return 1
