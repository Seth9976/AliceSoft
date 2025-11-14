// 函数: sub_61a130
// 地址: 0x61a130
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*arg2 s> *arg1)
    return 1

void* ecx

if (arg1[6] u< 0x10)
    ecx = &arg1[1]
else
    ecx = arg1[1]

void* eax_1 = &arg2[1]

if (arg2[6] u>= 0x10)
    eax_1 = *eax_1

while (true)
    arg2.b = *eax_1
    char temp0_1 = *ecx
    bool c_1 = arg2.b u< temp0_1
    
    if (arg2.b == temp0_1)
        if (arg2.b == 0)
            break
        
        arg2.b = *(eax_1 + 1)
        char temp3_1 = *(ecx + 1)
        c_1 = arg2.b u< temp3_1
        
        if (arg2.b == temp3_1)
            eax_1 += 2
            ecx += 2
            
            if (arg2.b == 0)
                break
            
            continue
    
    bool c_2 = unimplemented  {sbb eax, eax}
    return sbb.d(sbb.d(eax_1, eax_1, c_1), 0xffffffff, c_2)

return 0
