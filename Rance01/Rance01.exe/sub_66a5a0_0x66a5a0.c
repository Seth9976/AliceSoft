// 函数: sub_66a5a0
// 地址: 0x66a5a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_4 = *arg2

if ((arg2[1] - ecx_4) s>> 2 s>= arg3)
    void* ecx = *(ecx_4 + (arg3 << 2) - 4)
    
    if (ecx != 0 && *(ecx + 8) == 4 && arg4 s>= 0 && arg1 s>= 0)
        int32_t edx_3 = *(ecx + 0x5c)
        
        if ((*(ecx + 0x60) - edx_3) s>> 4 s> arg1)
            int32_t* eax_1 = (arg1 << 4) + edx_3
            eax_1.b = (eax_1[1] - *eax_1) s>> 2 s> arg4
            return eax_1

arg1.b = 0
return arg1
