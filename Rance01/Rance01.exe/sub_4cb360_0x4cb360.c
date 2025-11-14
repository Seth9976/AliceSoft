// 函数: sub_4cb360
// 地址: 0x4cb360
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result

for (int32_t* i = *arg2; i != arg2[1]; i = &i[1])
    int32_t* ecx_1 = *i
    
    if (ecx_1 != 0 && ecx_1[1].b != 0)
        int32_t eax = *ecx_1
        
        if (eax == 1)
            if (ecx_1[2] != 0)
                result.b = ecx_1[3].b
                
                if (result.b == 0)
                    result = sub_503260(ecx_1[2], arg3, arg1)
                    int16_t top = top - 1
                    unimplemented  {call 0x503260}
                label_4cb3bd:
                    
                    if (result.b == 0)
                        result.b = 0
                        return result
        else if (eax == 2 && ecx_1[5] != eax - 2)
            result.b = ecx_1[6].b
            
            if (result.b == 0)
                result = sub_4da450(ecx_1[5], arg1, arg3, arg4)
                unimplemented  {call 0x4da450}
                goto label_4cb3bd

result.b = 1
return result
