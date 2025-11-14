// 函数: sub_5eae60
// 地址: 0x5eae60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *(arg1 + 0x50)

if (eax s>= 0)
    int32_t ecx = *(arg1 + 8)
    
    if (eax s< (*(arg1 + 0xc) - ecx) s>> 2)
        int32_t* esi = *(ecx + (eax << 2))
        int32_t edi
        
        if (esi[1] != 0)
            int32_t eax_1 = *esi
            
            if (eax_1 != 0xffffffff)
                edi = sub_5f9f90(eax_1)
            else
                edi = 0
        else
            edi = 0
        
        int32_t eax_3
        
        if (esi[1] != 0)
            int32_t eax_4 = *esi
            
            if (eax_4 != 0xffffffff)
                eax_3 = sub_5f9f40(eax_4)
            else
                eax_3 = 0
        else
            eax_3 = 0
        
        void var_10
        sub_5f7e90(arg1 + 0x5c, &var_10, eax_3, edi)
        int32_t var_4
        
        if (arg3 - 1 u<= 8)
            switch (arg3 + &jump_table_5eaf24[2]:3)
                case &lookup_table_5eaf30[3], &lookup_table_5eaf30[4], &lookup_table_5eaf30[5]
                    int32_t eax_10
                    int32_t edx_4
                    edx_4:eax_10 = sx.q(var_4)
                    return neg.d((eax_10 - edx_4) s>> 1) + arg2
                case &lookup_table_5eaf30[6], &lookup_table_5eaf30[7], &lookup_table_5eaf30[8]
                    return neg.d(var_4) + arg2
        return arg2

return 0
