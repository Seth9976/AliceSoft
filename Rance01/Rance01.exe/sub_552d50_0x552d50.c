// 函数: sub_552d50
// 地址: 0x552d50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = sub_5527e0(arg1)
*(*(arg1 + 8) + (eax << 2)) = sub_552440(arg1 + 0x20)
int32_t* result

if (eax s>= 0)
    result = *(arg1 + 8)
    
    if (eax u< (*(arg1 + 0xc) - result) s>> 2)
        int32_t* esi_1 = result[eax]
        
        if (esi_1 != 0 && sub_550660(esi_1, arg2).b != 0)
            result.b = 1
            *(esi_1 + 0x2d) = 1
            *arg3 = eax
            return result

result.b = 0
return result
