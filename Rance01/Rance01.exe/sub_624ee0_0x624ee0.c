// 函数: sub_624ee0
// 地址: 0x624ee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
void* ebx

if (arg2 == 0)
    ebx = arg1
else
    char* eax_1 = arg2
    
    do
        ecx.b = *eax_1
        eax_1 = &eax_1[1]
    while (ecx.b != 0)
    
    ebx = arg1
    sub_401270(ebx + 0x74, eax_1 - &eax_1[1], arg2)

void* eax_3 = ebx + 0x74

if (*(ebx + 0x88) u>= 0x10)
    eax_3 = *eax_3

int128_t* ecx_1 = *(ebx + 0x38)
int128_t* esi_3 = *(ebx + 0x34)
arg2 = eax_3

if (esi_3 != ecx_1)
    int32_t edi_2 = 0 s>> 2 << 2
    sub_6b49d0(esi_3, ecx_1, edi_2)
    *(ebx + 0x38) = edi_2 + esi_3

char* eax_7 = arg2
void* edx_1 = &eax_7[1]

do
    ecx_1.b = *eax_7
    eax_7 = &eax_7[1]
while (ecx_1.b != 0)

void* edi_4 = eax_7 - edx_1
void* var_4 = edi_4
uint32_t i_1

if (eax_7 != edx_1)
    i_1 = *(ebx + 0x28)
    uint32_t i = *i_1
    
    if (i != i_1)
        while (true)
            int32_t ebp_1 = *(i + 0x1c)
            i_1 = i + 0xc
            
            if (*(i + 0x20) u>= 0x10)
                i_1 = *i_1
            
            if (edi_4 s<= ebp_1)
                uint32_t i_3 = i_1
                
                do
                    if (sub_6b557b(i_3, arg2, var_4) == 0)
                        int32_t var_18_4 = *(i + 0x28)
                        i_1 = sub_625060(arg1)
                        break
                    
                    i_1.b = *i_3
                    
                    if (i_1.b u< 0x81)
                        if (i_1.b u>= 0xe0)
                            i_3 += 1
                            edi_4 += 1
                    else if (i_1.b u<= 0x9f || i_1.b u>= 0xe0)
                        i_3 += 1
                        edi_4 += 1
                    
                    edi_4 += 1
                    i_3 += 1
                while (edi_4 s<= ebp_1)
            
            if (*(i + 0x2d) == 0)
                uint32_t i_2 = *(i + 8)
                
                if (*(i_2 + 0x2d) != 0)
                    i_1 = *(i + 4)
                    
                    if (*(i_1 + 0x2d) == 0)
                        while (i == *(i_1 + 8))
                            i = i_1
                            i_1 = *(i_1 + 4)
                            
                            if (*(i_1 + 0x2d) != 0)
                                break
                    
                    i = i_1
                else
                    i_1 = *i_2
                    
                    while (*(i_1 + 0x2d) == 0)
                        i_2 = i_1
                        i_1 = *i_2
                    
                    i = i_2
            
            if (i == *(arg1 + 0x28))
                break
            
            edi_4 = var_4
else
    int32_t __saved_ebp_4 = 0
    i_1 = (*(**(ebx + 8) + 0x14))()
    
    if (i_1 s> 0)
        int32_t eax_11
        
        do
            int32_t __saved_ebp_3 = __saved_ebp_4
            sub_625060(ebx)
            __saved_ebp_4 += 1
            eax_11 = (*(**(ebx + 8) + 0x14))()
        while (__saved_ebp_4 s< eax_11)
        
        return eax_11

return i_1
