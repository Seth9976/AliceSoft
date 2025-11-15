// 函数: ___InternalCxxFrameHandler
// 地址: 0x10003e78
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t var_14 = arg3

if (*(sub_10004538() + 0x20) != 0 || *arg1 == 0xe06d7363 || *arg1 == 0x80000026
        || (*arg5 & 0x1fffffff) u< 0x19930522 || (arg5[8].b & 1) == 0)
    if ((arg1[1].b & 0x66) == 0)
        if (arg5[3] != 0)
        label_10003f20:
            
            if (*arg1 == 0xe06d7363 && arg1[4] u>= 3 && arg1[5] u> 0x19930522)
                int32_t esi_1 = *(arg1[7] + 8)
                
                if (esi_1 != 0)
                    j_sub_10004a52()
                    return esi_1(arg1, arg2, arg3, arg4, arg5, arg6, arg7, zx.d(arg8))
            
            FindHandler(arg1, arg2, arg3, arg4, arg5, arg8, arg6, arg7)
        else
            int32_t eax_4 = *arg5 & 0x1fffffff
            
            if (eax_4 u>= 0x19930521 && arg5[7] != 0)
                goto label_10003f20
            
            if (eax_4 u>= 0x19930522 && (arg5[8].b & 4) != 0)
                goto label_10003f20
    else if (arg5[1] != 0 && arg6 == 0)
        int32_t var_14_1 = 0xffffffff
        ___FrameUnwindToState(arg2, arg4, arg5)

return 1
