// 函数: sub_55e3d0
// 地址: 0x55e3d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_1 = *(arg1 + 4)
void* eax = *ecx_1

if (arg2 u< (*(eax + 0xc) - *(eax + 8)) s>> 2)
    void* eax_2 = *(*(eax + 8) + (arg2 << 2))
    
    if (eax_2 != 0)
        int32_t eax_4 = *(eax_2 + 0x1c)
        
        if (eax_4 s>= 0)
            return eax_4 - *(ecx_1[1] + 0x1b0)

return 0xffffffff
