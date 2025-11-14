// 函数: sub_68d240
// 地址: 0x68d240
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* edi = *arg1

if (&edi[4] u<= arg1[1])
    uint32_t esi_7 = ((zx.d(edi[3]) << 8 | zx.d(edi[2])) << 8 | zx.d(edi[1])) << 8 | zx.d(*edi)
    *arg1 = &edi[4]
    *arg2 = esi_7
    
    if (esi_7 - 1 u> 3)
        arg1.b = 1
        return arg1
    
    switch (esi_7)
        case 1
            if (sub_5546f0(arg1, &arg2[1]).b != 0)
                arg1.b = 1
                return arg1
        case 2
            arg1 = sub_40ff40(esi_7 - 1, arg1, &arg2[2])
            
            if (arg1.b == 0)
                return arg1
            
            arg1.b = 1
            return arg1
        case 3
            arg1 = sub_40fea0(arg1, &arg2[3])
            
            if (arg1.b == 0)
                return arg1
            
            arg1.b = 1
            return arg1
        case 4
            arg1 = sub_410070(arg1, &arg2[4])
            
            if (arg1.b == 0)
                return arg1
            
            arg1.b = 1
            return arg1

arg1.b = 0
return arg1
