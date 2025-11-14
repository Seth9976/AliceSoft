// 函数: sub_5514f0
// 地址: 0x5514f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg1

if (edi[0x10].b == 0)
    arg1.b = 1
    return arg1

if (edi[0xc] != 0)
    uint32_t esi_2 = edi[1] u>> 2
    int32_t esi_3 = esi_2 - 1
    
    if (esi_2 - 1 s>= 0)
        while (true)
            arg1 = edi[1]
            
            if (esi_3 u>= arg1 u>> 2)
                break
            
            if (arg1 != 0)
                arg1 = *edi
            
            if (sub_552880(edi[5], *(arg1 + (esi_3 << 2))).b == 0)
                break
            
            int32_t temp3_1 = esi_3
            esi_3 -= 1
            
            if (temp3_1 - 1 s< 0)
                goto label_551558
        
        arg1.b = 0
        return arg1
else
    int32_t eax = edi[0xd]
    
    if (eax == 0x10)
        if (sub_551570(edi).b == 0)
            arg1.b = 0
            return arg1
    else if (eax == 0x11)
        arg1 = sub_5515b0(edi)
        
        if (arg1.b == 0)
            return arg1

label_551558:
edi[1] = 0
edi[0x10].b = 0
arg1.b = 1
return arg1
