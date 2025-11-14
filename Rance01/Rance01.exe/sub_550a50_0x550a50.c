// 函数: sub_550a50
// 地址: 0x550a50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = arg1
int32_t ebx = esi[1]
char* eax

if (ebx != 0)
    eax = *esi
else
    eax = nullptr

int32_t edx = 0

if (arg2 != 0)
    do
        arg1.b = *eax
        
        if (arg1.b == 0)
            goto label_550ac7
        
        if (arg1.b u< 0x81)
            if (arg1.b u< 0xe0)
                eax = &eax[1]
            else
                eax = &eax[2]
        else if (arg1.b u<= 0x9f || arg1.b u>= 0xe0)
            eax = &eax[2]
        else
            eax = &eax[1]
        
        edx += 1
    while (edx u< arg2)

arg1.b = *eax

if (arg1.b == 0)
label_550ac7:
    eax.b = 1
    return eax

if ((arg1.b u>= 0x81 && arg1.b u<= 0x9f) || arg1.b u>= 0xe0)
    *eax = arg3.b
    
    if (arg3.w u<= 0xff)
        int128_t* ecx_2 = &eax[2]
        void* edi_1 = ecx_2 + 1
        char i
        
        do
            i = *ecx_2
            ecx_2 += 1
        while (i != 0)
        sub_6b49d0(&eax[1], &eax[2], ecx_2 - edi_1 + 1)
        int128_t* eax_2
        eax_2.b = 1
        return eax_2
    
    eax[1] = (arg3 u>> 8).b
    eax.b = 1
    return eax

int16_t ecx_5 = arg3.w

if (ecx_5 u<= 0xff)
    *eax = ecx_5.b
    eax.b = 1
    return eax

int32_t ecx_6

if (ebx != 0)
    ecx_6 = *esi
else
    ecx_6 = 0

void* eax_3 = eax - ecx_6
char eax_4 = sub_427ad0(esi, ebx + 1)

if (eax_4 == 0)
    return eax_4

char* edi_3

if (esi[1] != 0)
    edi_3 = *esi
else
    edi_3 = nullptr

int128_t* eax_5 = edi_3 + eax_3 + 1
void* edx_1 = eax_5 + 1
char i_1

do
    i_1 = *eax_5
    eax_5 += 1
while (i_1 != 0)
sub_6b49d0(edi_3 + eax_3 + 2, edi_3 + eax_3 + 1, eax_5 - edx_1 + 1)
*(edi_3 + eax_3) = arg3.b
*(edi_3 + eax_3 + 1) = (arg3 u>> 8).b
return 1
