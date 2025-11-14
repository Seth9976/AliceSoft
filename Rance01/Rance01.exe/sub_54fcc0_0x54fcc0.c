// 函数: sub_54fcc0
// 地址: 0x54fcc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2e8ba2e9, arg2[1] - *arg2)
int32_t edx_1 = edx s>> 3
int32_t edi_2 = (edx_1 u>> 0x1f) + edx_1
int32_t result = 0

if (edi_2 s> 0)
    int32_t edx_2 = 0
    
    while (true)
        switch (*(edx_2 + *arg2 + 0x1c))
            case 0, 0xa, 0xb, 0x1b, 0x2f
                if (arg1[1] != 0)
                    *(*arg1 + (result << 2)) = 0
                else
                    *(result << 2) = 0
                
            label_54fd28:
                result += 1
                edx_2 += 0x2c
                
                if (result s>= edi_2)
                    break
                
                continue
            case 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 
                    0x1e, 0x1f, 0x20, 0x32, 0x33, 0x34, 0x3f, 0x42, 0x43, 0x44
                int32_t ecx_6
                
                if (arg1[1] != 0)
                    ecx_6 = *arg1
                else
                    ecx_6 = 0
                
                *(ecx_6 + (result << 2)) = 0xffffffff
                goto label_54fd28
        
        result.b = 0
        return result

result.b = 1
return result
