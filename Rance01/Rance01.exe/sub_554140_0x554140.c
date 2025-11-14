// 函数: sub_554140
// 地址: 0x554140
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 s< (arg1[3] - arg1[2]) s>> 2)
    int32_t eax = arg1[2]
    
    if (*(eax + (arg3 << 2)) != 0)
        void* eax_1 = *(eax + (arg3 << 2))
        *(eax_1 + 0x10) += 1
        eax_1.b = 1
        return eax_1

arg1.b = 0
return arg1
