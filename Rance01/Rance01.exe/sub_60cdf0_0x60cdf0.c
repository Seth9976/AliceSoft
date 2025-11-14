// 函数: sub_60cdf0
// 地址: 0x60cdf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = data_797d60
void** eax = *(ebp + 4)
void** esi = eax[1]
void** ebx = eax

while (*(esi + 0x21) == 0)
    if (sub_40f4a0(&esi[3], 0x735200) == 0)
        ebx = esi
        esi = *esi
    else
        esi = esi[2]

void* esi_1 = *(ebp + 4)
void** var_8 = ebx
char eax_2

if (ebx != esi_1)
    eax_2 = sub_40f4a0(0x735200, &ebx[3])

void** eax_3

if (ebx == esi_1 || eax_2 != 0)
    void* var_4 = esi_1
    eax_3 = &var_4
else
    eax_3 = &var_8

int32_t* eax_4 = *eax_3

if (eax_4 != esi_1)
    int32_t* ecx_2 = eax_4[7]
    
    if (ecx_2 != 0)
        eax_4 = (**ecx_2)(0x735210)
        *arg1 = eax_4
        
        if (eax_4 != 0)
            eax_4 = (*(*eax_4 + 0x10))(0x735220)
            arg1[1] = eax_4
            
            if (eax_4 != 0)
                eax_4 = (*(**arg1 + 0x10))(0x735230)
                arg1[2] = eax_4
                
                if (eax_4 != 0)
                    eax_4 = (*(**arg1 + 0x10))(0x735260)
                    arg1[3] = eax_4
                    
                    if (eax_4 != 0)
                        int32_t eax_10 = (*(**arg1 + 0x10))(0x735250)
                        arg1[4] = eax_10
                        eax_10.b = eax_10 != 0
                        return eax_10

eax_4.b = 0
return eax_4
