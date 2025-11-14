// 函数: sub_5b97b0
// 地址: 0x5b97b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg3[6]

if (eax s<= arg3[7] + arg1)
    int32_t eax_3 = _realloc(arg3[4], ((eax + arg1) << 2) + 0x80)
    int32_t eax_6
    
    if (eax_3 != 0)
        void* edx_1 = ((arg3[6] + arg1) << 3) + 0x100
        arg3[4] = eax_3
        eax_6 = _realloc(arg3[5], edx_1)
    
    if (eax_3 == 0 || eax_6 == 0)
        sub_5b9710(arg3)
        return 0xffffffff
    
    arg3[6] += arg1 + 0x20
    arg3[5] = eax_6

return 0
