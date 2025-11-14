// 函数: sub_554170
// 地址: 0x554170
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 s>= 0 && arg2 s< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
    int32_t ecx_1 = *(arg1 + 8)
    
    if (*(ecx_1 + (arg2 << 2)) != 0)
        int32_t* esi = *(ecx_1 + (arg2 << 2))
        int32_t eax_3 = esi[4]
        
        if (eax_3 != 0)
            int32_t var_c_1 = eax_3
            int32_t var_10 = arg2
            sub_604c90("Page = %d, RefCounter = %d")
            enum MESSAGEBOX_RESULT eax_4
            eax_4.b = 0
            return eax_4
        
        int32_t eax_5 = esi[3]
        
        if (eax_5 u<= 5)
            switch (eax_5)
                case 0
                    sub_552690(arg1 + 0x20, esi)
                case 1
                    sub_552690(arg1 + 0x20, esi)
                case 2
                    sub_552690(arg1 + 0x20, esi)
                case 3
                    sub_552690(arg1 + 0x20, esi)
                case 4
                    sub_552690(arg1 + 0x20, esi)
                case 5
                    sub_552690(arg1 + 0x20, esi)
        else if (esi != 0)
            sub_552300(esi)
        
        *(*(arg1 + 8) + (arg2 << 2)) = 0
        sub_427a60(arg1 + 0x38, arg2)
        int32_t eax_12
        eax_12.b = 1
        return eax_12

int32_t eax
eax.b = 0
return eax
