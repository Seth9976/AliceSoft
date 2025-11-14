// 函数: sub_434690
// 地址: 0x434690
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4 = nullptr
void* ebx = data_797d60
void** eax = *(ebx + 4)
void** edi = eax[1]
void** ebp = eax

while (*(edi + 0x21) == 0)
    if (sub_40f4a0(&edi[3], 0x7569ac) == 0)
        ebp = edi
        edi = *edi
    else
        edi = edi[2]

void* edi_1 = *(ebx + 4)
void** var_8 = ebp
char eax_2

if (ebp != edi_1)
    eax_2 = sub_40f4a0(0x7569ac, &ebp[3])

void** eax_3

if (ebp == edi_1 || eax_2 != 0)
    var_4 = edi_1
    eax_3 = &var_4
else
    eax_3 = &var_8

void* eax_4 = *eax_3

if (eax_4 != edi_1)
    int32_t* ecx_2 = *(eax_4 + 0x1c)
    
    if (ecx_2 != 0)
        int32_t* eax_7 = (**ecx_2)(0x7569bc)
        
        if (eax_7 == 0)
            *(arg1 + 0x10) = 0
            *(arg1 + 0x14) = 0xf
            *arg1 = 0
            return arg1
        
        int128_t* eax_10 = (*(*eax_7 + 0x24))()
        *(arg1 + 0x10) = 0
        int128_t* ecx_4 = eax_10
        *(arg1 + 0x14) = 0xf
        *arg1 = 0
        void* edi_2 = ecx_4 + 1
        char i
        
        do
            i = *ecx_4
            ecx_4 += 1
        while (i != 0)
        sub_401270(arg1, ecx_4 - edi_2, eax_10)
        return arg1

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
return arg1
