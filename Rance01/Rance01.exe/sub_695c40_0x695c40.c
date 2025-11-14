// 函数: sub_695c40
// 地址: 0x695c40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = arg1[4]
int32_t edx = 0
int32_t result = 0

if (esi s> 0)
    do
        int32_t* ecx_1
        
        if (arg1[5] u< 0x10)
            ecx_1 = arg1
        else
            ecx_1 = *arg1
        
        ecx_1.b = *(ecx_1 + edx)
        
        if (ecx_1.b u< 0x81)
            if (ecx_1.b u>= 0xe0)
                edx += 1
        else if (ecx_1.b u<= 0x9f || ecx_1.b u>= 0xe0)
            edx += 1
        
        edx += 1
        result += 1
    while (edx s< esi)

return result
