// 函数: sub_552960
// 地址: 0x552960
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s>= 0 && arg1 s<= (*(arg2 + 0xc) - *(arg2 + 8)) s>> 2)
    void* edx_2 = *(*(arg2 + 8) + (arg1 << 2))
    
    if (edx_2 != 0)
        int32_t temp0_1 = *(edx_2 + 0x10)
        *(edx_2 + 0x10) -= 1
        int32_t ecx_4 = *(edx_2 + 0x10)
        
        if (temp0_1 - 1 s< 0)
            int32_t var_4_1 = ecx_4
            enum MESSAGEBOX_RESULT var_8 = arg1
            sub_604c90("ReleasePage(%d)")
            enum MESSAGEBOX_RESULT eax
            eax.b = 0
            return eax
        
        if (ecx_4 != 0)
            arg1.b = 1
            return arg1
        
        switch (*(edx_2 + 0xc) - 1)
            case 0
                arg1 = sub_552ef0(arg2, arg1)
            label_5529b1:
                
                if (arg1.b != 0)
                    arg1.b = 1
                    return arg1
            case 1, 4
                arg1.b = 1
                return arg1
            case 2
                arg1 = sub_5530a0(arg2, edx_2, arg1)
                goto label_5529b1
            case 3
                if (sub_553070(arg1, edx_2, arg2).b != 0)
                    arg1.b = 1
                    return arg1

arg1.b = 0
return arg1
