// 函数: sub_550810
// 地址: 0x550810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* eax

if (arg1[1] != 0)
    eax = *arg1
else
    eax = nullptr

while (true)
    arg2 = *eax
    char temp0_1 = *arg3
    bool c_1 = arg2 u< temp0_1
    
    if (arg2 == temp0_1)
        if (arg2 == 0)
            break
        
        arg2 = eax[1]
        char temp3_1 = arg3[1]
        c_1 = arg2 u< temp3_1
        
        if (arg2 == temp3_1)
            eax = &eax[2]
            arg3 = &arg3[2]
            
            if (arg2 == 0)
                break
            
            continue
    
    bool c_2 = unimplemented  {sbb eax, eax}
    int32_t result
    result.b = sbb.d(sbb.d(eax, eax, c_1), 0xffffffff, c_2) == 0
    return result

int32_t eax_1
eax_1.b = true
return 1
