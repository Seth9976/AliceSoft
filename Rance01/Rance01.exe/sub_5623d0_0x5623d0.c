// 函数: sub_5623d0
// 地址: 0x5623d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = *arg1
int32_t i = 0

if (((arg1[1] - result) & 0xfffffff8) s> 0)
    do
        int32_t* ecx_2 = *(result + (i << 3))
        
        if (ecx_2 != 0)
            (*(*ecx_2 + 0x10))()
            (*(**(*arg1 + (i << 3)) + 4))()
            *(*arg1 + (i << 3)) = 0
        
        result = *arg1
        i += 1
    while (i s< (arg1[1] - result) s>> 3)

return result
