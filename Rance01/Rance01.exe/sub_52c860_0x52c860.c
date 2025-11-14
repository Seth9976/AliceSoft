// 函数: sub_52c860
// 地址: 0x52c860
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg1
void* i_2

for (void* i = *edi; i != edi[1]; i += 0x38)
    *(i + 0x1c) = 0
    *(i + 0x30) = 0
    *(i + 0x34) = 0
    sub_52bf50(i + 0x20, &i_2, *(i + 0x20), *(i + 0x24))

void* i_1 = edi[4]
i_2 = i_1

while (i_1 != edi[5])
    void* j = *i_1
    void* j_1 = j
    
    if (j != *(i_1 + 4))
        int32_t* ebx_1 = j + 0x24
        
        do
            ebx_1[-2] = 0
            ebx_1[3] = 0
            ebx_1[4] = 0
            void* esi = ebx_1[-1]
            void** eax = *ebx_1
            
            if (esi != eax)
                void** edx_2 = eax
                
                if (eax != eax)
                    void* ecx_3 = eax - esi
                    
                    do
                        *(esi + 8) = *(ecx_3 + esi + 8)
                        *(esi + 0xc) = *(ecx_3 + esi + 0xc)
                        edx_2 = &edx_2[4]
                        esi += 0x10
                    while (edx_2 != eax)
                
                int32_t ebp_1 = *ebx_1
                void* edi_4 = esi
                
                if (esi != ebp_1)
                    do
                        (**edi_4)(0)
                        edi_4 += 0x10
                    while (edi_4 != ebp_1)
                
                j = j_1
                i_1 = i_2
                edi = arg1
                *ebx_1 = esi
            
            j += 0x38
            ebx_1 = &ebx_1[0xe]
            j_1 = j
        while (j != *(i_1 + 4))
    
    i_1 += 0x10
    i_2 = i_1
