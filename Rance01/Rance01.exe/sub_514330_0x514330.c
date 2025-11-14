// 函数: sub_514330
// 地址: 0x514330
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* ebx = arg2
sub_514400(ebx)
int32_t temp0 = divs.dp.d(sx.q(arg3), arg1)
int32_t temp0_1 = divs.dp.d(sx.q(arg4), arg1)

if (sub_50a8a0(&ebx[0xc], 0, temp0, temp0_1, 1, 1, arg5) != 0)
    long double x87_r7_1 = float.t(1)
    float var_18_1 = fconvert.s(x87_r7_1)
    long double x87_r7_4 = float.t(0)
    
    if (sub_519f30(arg5, &ebx[0x24], fconvert.s(x87_r7_4), fconvert.s(x87_r7_4), 
            fconvert.s(float.t(arg3)), fconvert.s(float.t(arg4)), -3.39615136e+38f, 
            fconvert.s(x87_r7_1)) != 0 && sub_4b3f30(&ebx[0x48], temp0, temp0_1, 3, arg5, 0) != 0)
        *(ebx + 8) = arg4
        *(ebx + 0xac) = 3
        *(ebx + 4) = arg3
        *ebx = 1
        int32_t result
        result.b = 1
        return result

return 0
