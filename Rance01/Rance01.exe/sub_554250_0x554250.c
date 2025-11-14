// 函数: sub_554250
// 地址: 0x554250
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_1

if (arg1 u< (arg3[3] - arg3[2]) s>> 2)
    eax_1 = *(arg3[2] + (arg1 << 2))
    
    if (eax_1 != 0)
        int32_t ecx = eax_1[1]
        
        if (arg2 u< ecx u>> 2)
            if (ecx != 0)
                *arg4 = *(*eax_1 + (arg2 << 2))
                int32_t eax_3
                eax_3.b = 1
                return eax_3
            
            *arg4 = *(arg2 << 2)
            int32_t eax_2
            eax_2.b = 1
            return 1

eax_1.b = 0
return eax_1
