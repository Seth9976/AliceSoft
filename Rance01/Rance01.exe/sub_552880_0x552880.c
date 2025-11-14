// 函数: sub_552880
// 地址: 0x552880
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_2

if (arg2 u>= (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
    eax_2.b = 0
    return eax_2

int32_t ebx = *(*(arg1 + 8) + (arg2 << 2))

if (ebx != 0)
    int32_t eax_3 = *(ebx + 0x10)
    
    if (eax_3 s<= 0)
        int32_t var_10_1 = eax_3
        int32_t var_14 = arg2
        sub_604c90("ReleasePage(%d)")
        enum MESSAGEBOX_RESULT eax_4
        eax_4.b = 0
        return eax_4
    
    if (eax_3 != 1)
        *(ebx + 0x10) = eax_3 - 1
        eax_2.b = 1
        return eax_2
    
    switch (*(ebx + 0xc))
        case 0
            eax_2 = sub_552fd0(arg1)
            
            if (eax_2.b == 0)
                return eax_2
            
            goto label_552920
        case 1
            eax_2 = sub_552e10(arg2, arg1)
            
            if (eax_2.b == 0)
                return eax_2
            
            goto label_552920
        case 2, 5
            goto label_552920
        case 3
            if (ebx != 0)
                sub_5514f0(ebx)
            label_552920:
                int32_t temp1_1 = *(ebx + 0x10)
                *(ebx + 0x10) -= 1
                
                if (temp1_1 != 1)
                    eax_2.b = 1
                    return eax_2
                
                if (sub_554170(arg1, arg2).b != 0)
                    eax_2.b = 1
                    return eax_2
        case 4
            if (sub_552ff0(arg1, arg2).b != 0 && sub_552e10(arg2, arg1).b != 0)
                goto label_552920

eax_2.b = 0
return eax_2
