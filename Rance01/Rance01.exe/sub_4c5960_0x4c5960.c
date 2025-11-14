// 函数: sub_4c5960
// 地址: 0x4c5960
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s>= 0 && arg1 s< (*(arg3 + 0x1c0) - *(arg3 + 0x1bc)) s>> 2)
    int32_t eax = *(*(arg3 + 0x1bc) + (arg1 << 2))
    
    if (eax != 0xffffffff)
        int32_t* ecx = *(arg3 + 0x290)
        
        if (eax s>= 0)
            int32_t edx_4 = *ecx
            
            if (eax s< (ecx[1] - edx_4) s>> 2)
                return *(edx_4 + (eax << 2))

return 0
