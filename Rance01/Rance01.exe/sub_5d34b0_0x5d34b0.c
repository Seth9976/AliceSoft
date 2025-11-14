// 函数: sub_5d34b0
// 地址: 0x5d34b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_2 = *(arg1 + 0x28)
void* ebx = arg3

if (ecx_2 == 0)
    int32_t eax
    eax.b = 0
    return eax

void* ebp = (*(*ecx_2 + 0x20))()

if (ebp == 0xffffffff)
    void* eax_2
    eax_2.b = 0
    return eax_2

int128_t* eax_7

while (true)
    void* eax_4 = arg5 - ebp
    void* edi_1 = ebx
    
    if (ebx u>= eax_4)
        edi_1 = eax_4
    
    int32_t* ecx = *(arg1 + 0x28)
    arg3 = nullptr
    
    if ((*(*ecx + 0x10))(arg2, edi_1, &arg3).b != 0 && arg3 == edi_1)
        ebp += edi_1
        
        if (ebp u< arg5)
        label_5d353f:
            void* temp1_1 = ebx
            ebx -= edi_1
            
            if (temp1_1 == edi_1)
                break
            
            arg2 += edi_1
            continue
        else
            eax_7 = *(arg1 + 0x2c)
            
            if (eax_7 s> 0)
                *(arg1 + 0x30) += 1
                
                if (*(arg1 + 0x30) s>= eax_7)
                    if (ebx != edi_1)
                        sub_6bc670(edi_1 + arg2, 0, ebx - edi_1)
                    
                    break
            
            ebp = arg4
            
            if ((*(**(arg1 + 0x28) + 0x14))(ebp).b != 0)
                goto label_5d353f
    
    eax_7.b = 0
    return eax_7

eax_7.b = 1
return eax_7
