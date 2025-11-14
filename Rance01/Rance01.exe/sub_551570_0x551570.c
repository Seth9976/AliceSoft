// 函数: sub_551570
// 地址: 0x551570
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t esi_1 = arg1[1] u>> 2
int32_t esi_2 = esi_1 - 1
int32_t result

if (esi_1 - 1 s>= 0)
    int32_t temp1_1
    
    do
        result = arg1[1]
        
        if (esi_2 u>= result u>> 2)
            result.b = 0
            return result
        
        if (result != 0)
            result = *arg1
        
        if (sub_552880(arg1[5], *(result + (esi_2 << 2))).b == 0)
            result.b = 0
            return result
        
        temp1_1 = esi_2
        esi_2 -= 1
    while (temp1_1 - 1 s>= 0)

result.b = 1
return result
