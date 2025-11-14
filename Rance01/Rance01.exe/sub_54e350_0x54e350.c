// 函数: sub_54e350
// 地址: 0x54e350
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *(arg3 + 0x28)
int32_t esi = 0
int32_t result

if (ebx s> 0)
    int32_t edi_2 = ebx * 0x2c
    
    while (true)
        switch (*(*(arg3 + 0x3c) + edi_2 - 0x10))
            case 0, 0xa, 0xb, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1b, 0x1f, 0x20, 
                0x2f, 0x33, 0x34
            label_54e39b:
                esi += 1
                edi_2 -= 0x2c
                
                if (esi s>= ebx)
                    break
                
                continue
            case 0xc
                if (sub_552880(arg1 + 0x1dc, *(arg2 + (esi << 2))).b != 0)
                    goto label_54e39b
        
        result.b = 0
        return result

result.b = 1
return result
