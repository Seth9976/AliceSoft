// 函数: sub_550860
// 地址: 0x550860
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* ecx

if (arg1[1] != 0)
    ecx = *arg1
else
    ecx = nullptr

void* eax

if (arg2[1] != 0)
    eax = *arg2
else
    eax = nullptr

while (true)
    arg2.b = *eax
    char temp0_1 = *ecx
    bool c_1 = arg2.b u< temp0_1
    
    if (arg2.b == temp0_1)
        if (arg2.b == 0)
            break
        
        arg2.b = *(eax + 1)
        char temp3_1 = ecx[1]
        c_1 = arg2.b u< temp3_1
        
        if (arg2.b == temp3_1)
            eax += 2
            ecx = &ecx[2]
            
            if (arg2.b == 0)
                break
            
            continue
    
    bool c_2 = unimplemented  {sbb eax, eax}
    int32_t result
    result.b = sbb.d(sbb.d(eax, eax, c_1), 0xffffffff, c_2) != 0
    return result

int32_t eax_1
eax_1.b = false
return 0
