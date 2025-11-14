// 函数: sub_4356f0
// 地址: 0x4356f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg1
int32_t* ecx = ebp[1]
int32_t* i = *ecx
arg1 = ecx

while (i != ecx)
    int32_t* edi_1 = i[4]
    
    if (edi_1 != 0)
        sub_434bc0(edi_1)
        int32_t* var_10_1 = edi_1
        sub_6b4d5b()
        ecx = arg1
    
    if (*(i + 0x15) == 0)
        int32_t* i_1 = i[2]
        
        if (*(i_1 + 0x15) != 0)
            int32_t* i_3 = i[1]
            
            if (*(i_3 + 0x15) == 0)
                while (i == i_3[2])
                    i = i_3
                    i_3 = i_3[1]
                    
                    if (*(i_3 + 0x15) != 0)
                        break
            
            i = i_3
        else
            i = i_1
            int32_t* i_2 = *i
            
            while (*(i_2 + 0x15) == 0)
                i = i_2
                i_2 = *i

void** edi_2 = *(ebp[1] + 4)
void** esi = edi_2

if (*(edi_2 + 0x15) == 0)
    do
        sub_402c20(esi[2])
        esi = *esi
        void** var_10_3 = edi_2
        sub_6b4d5b()
        edi_2 = esi
    while (*(esi + 0x15) == 0)

void* eax_2 = ebp[1]
*(eax_2 + 4) = eax_2
int32_t* eax_3 = ebp[1]
*eax_3 = eax_3
void* result = ebp[1]
*(result + 8) = result
int32_t* ecx_3 = ebp[8]
ebp[2] = 0

if (ecx_3 != 0)
    result = (*(*ecx_3 + 4))()
    ebp[8] = 0

return result
