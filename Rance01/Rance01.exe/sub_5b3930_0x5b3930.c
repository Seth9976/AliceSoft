// 函数: sub_5b3930
// 地址: 0x5b3930
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2
int32_t ebp = arg1
void* eax_1 = (*(*ebx + 8))(0, *(ebp + 8) - 1)
int32_t edi = *(ebp + 4)
void* esi = eax_1
int32_t i = edi << 2
int32_t edx_4 = neg.d((*(*ebx + 0x1c))()) - i
char* ecx_5 = arg3 + 0x12
arg1 = edx_4
arg2 = 0

if (*(ebp + 8) s> 0)
    do
        int32_t eax_4 = 0
        
        if (edi s> 0)
            do
                edx_4.b = *ecx_5
                ebx.b = edx_4.b
                ebx.b u>>= 7
                ecx_5 = &ecx_5[1]
                
                if (ebx.b != 0)
                    if ((zx.d(edx_4.b) & 0x7f) + 1 s> 0)
                        void* j_2 = (zx.d(edx_4.b) & 0x7f) + 1
                        void* j
                        
                        do
                            *esi = *ecx_5
                            *(esi + 1) = ecx_5[1]
                            *(esi + 2) = ecx_5[2]
                            *(esi + 3) = ecx_5[3]
                            esi += 4
                            j = j_2
                            j_2 -= 1
                        while (j != 1)
                    
                    ecx_5 = &ecx_5[4]
                else if ((zx.d(edx_4.b) & 0x7f) + 1 s> 0)
                    int32_t j_3 = (zx.d(edx_4.b) & 0x7f) + 1
                    int32_t j_1
                    
                    do
                        *esi = *ecx_5
                        *(esi + 1) = ecx_5[1]
                        *(esi + 2) = ecx_5[2]
                        *(esi + 3) = ecx_5[3]
                        esi += 4
                        ecx_5 = &ecx_5[4]
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)
                
                edi = *(ebp + 4)
                eax_4 += (zx.d(edx_4.b) & 0x7f) + 1
            while (eax_4 s< edi)
            
            edx_4 = arg1
        
        i = arg2 + 1
        esi += edx_4
        arg2 = i
    while (i s< *(ebp + 8))

return i
