// 函数: sub_5915f0
// 地址: 0x5915f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg3 = 0
*arg1 = 0
int32_t* esi = *arg4

if (esi != arg4[1])
    while (true)
        switch (*esi)
            case 0
                *arg3 |= 4
                *arg1 += 0x10
            label_59163b:
                esi = &esi[1]
                
                if (esi == arg4[1])
                    break
                
                continue
            case 1
                *arg3 |= 2
                *arg1 += 0xc
                goto label_59163b
            case 2
                *arg3 |= 0x10
                *arg1 += 0xc
                goto label_59163b
            case 4
                *arg3 |= 0x40
                *arg1 += 4
                goto label_59163b
            case 6
                *arg3 |= 0x100
                *arg1 += 8
                goto label_59163b
        
        arg1.b = 0
        return arg1

arg1.b = 1
return arg1
