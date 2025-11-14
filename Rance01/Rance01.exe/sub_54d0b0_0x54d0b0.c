// 函数: sub_54d0b0
// 地址: 0x54d0b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t esi = **(arg1 + 0x2b0)

if (esi s>= 0 && esi s< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    int32_t edx = *(arg1 + 0x1e4)
    
    if (*(edx + (esi << 2)) != 0)
        void* result = *(edx + (esi << 2))
        
        if (*(result + 0x10) != 1)
            *(result + 0x10) -= 1
            result.b = 1
            return result
        
        if (sub_552880(arg1 + 0x1dc, esi) != 0)
            return 1

return sub_53d0e0(arg1, 0x75110c, esi, arg5, arg4, arg3, __return_addr)
