// 函数: sub_4b7c70
// 地址: 0x4b7c70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* i = *(arg1 + 8)

for (int32_t esi = *(arg1 + 0xc); i != esi; i = &i[1])
    void* ecx_1 = *i
    
    for (arg1 = *(ecx_1 + 0x1c); arg1 != *(ecx_1 + 0x20); arg1 += 4)
        if (**arg1 == arg2)
            arg1.b = 1
            return arg1

arg1.b = 0
return arg1
