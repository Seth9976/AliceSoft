// 函数: sub_634e40
// 地址: 0x634e40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* result

while (*(arg2 + 0x10) u< *(arg2 + 0x14))
    result = *(arg2 + 0x10)
    arg1.b = *result
    
    if (arg1.b u<= 0x20 || arg1.b == 0x7f)
        *(arg2 + 0x10) = &result[1]
    else if (arg1.b != 0x3b)
        if (&result[1] u>= *(arg2 + 0x14))
            break
        
        if (arg1.b != 0x2f)
            break
        
        if (result[1] != arg1.b)
            break
        
        *(arg2 + 0x10) = &result[2]
        sub_634e10(arg1, arg2)
    else
        *(arg2 + 0x10) = &result[1]
        
        if (&result[1] u< *(arg2 + 0x14))
            do
                arg1 = *(arg2 + 0x10)
                void* eax
                eax.b = *arg1
                
                if (eax.b u< 0x81)
                    if (eax.b u< 0xe0)
                        goto label_634e88
                    
                    arg1 = &arg1[2]
                else if (eax.b u<= 0x9f || eax.b u>= 0xe0)
                    arg1 = &arg1[2]
                else
                label_634e88:
                    
                    if (eax.b == 0xa)
                        *(arg2 + 0x10) += 1
                        break
                    
                    arg1 = &arg1[1]
                
                *(arg2 + 0x10) = arg1
            while (arg1 u< *(arg2 + 0x14))

if (*(arg2 + 0x10) u< *(arg2 + 0x14))
    result.b = 1
    return result

*(arg2 + 0x18) = 0
result.b = 0
return result
