// 函数: sub_4b7ef0
// 地址: 0x4b7ef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* i = *(arg2 + 8)

for (int32_t edi = *(arg2 + 0xc); i != edi; i = &i[1])
    void* esi_1 = *i
    
    for (arg2 = *(esi_1 + 0x1c); arg2 != *(esi_1 + 0x20); arg2 += 4)
        if (**arg2 == arg1)
            return sub_4b7920(arg1, *i, arg3, arg4, arg5, arg6)

arg2.b = 0
return arg2
