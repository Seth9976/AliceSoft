// 函数: sub_589510
// 地址: 0x589510
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_c = arg1
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t var_1c = arg15
int32_t var_20 = arg14

if (sub_58ff30(&arg1[0x5a], arg2, arg7) != 0)
    float var_1c_1 = fconvert.s(fconvert.t(arg13))
    float var_20_1 = fconvert.s(fconvert.t(arg12))
    char eax_2
    int80_t st0_1
    st0_1, eax_2 = sub_5900d0(&arg1[0x5a], arg3, arg4, arg5.b, arg6, arg7, 
        fconvert.s(fconvert.t(arg8)), fconvert.s(fconvert.t(arg9)), fconvert.s(fconvert.t(arg10)), 
        fconvert.s(fconvert.t(arg11)))
    
    if (eax_2 != 0)
        uint32_t esi_3 = arg5 u>> 0x18
        
        switch (arg3)
            case nullptr
                if (arg4.b == 0 && esi_3 == 0xff && arg7.b == 0)
                    (*(*arg1 + 0x84))(0)
                    int32_t eax_5
                    eax_5.b = 1
                    return eax_5
                
                (*(*arg1 + 0x84))(1)
                int32_t eax_7
                eax_7.b = 1
                return eax_7
            case 1
                if (arg4.b == 0 && esi_3 == 0xff && arg7.b == 0)
                    (*(*arg1 + 0x84))(2)
                    int32_t eax_9
                    eax_9.b = 1
                    return eax_9
                
                (*(*arg1 + 0x84))(3)
                int32_t eax_11
                eax_11.b = 1
                return eax_11
            case 2
                (*(*arg1 + 0x84))(5)
                int32_t eax_13
                eax_13.b = 1
                return eax_13
            case 3
                (*(*arg1 + 0x84))(4)
                int32_t eax_15
                eax_15.b = 1
                return eax_15

return 0
