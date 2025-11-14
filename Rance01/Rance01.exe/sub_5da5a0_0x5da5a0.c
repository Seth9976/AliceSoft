// 函数: sub_5da5a0
// 地址: 0x5da5a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = data_797d60
void** eax = *(ebx + 4)
void* ebp = data_797d9c
void** esi = eax[1]
void** edi = eax

while (*(esi + 0x21) == 0)
    if (sub_40f4a0(&esi[3], 0x7365a4) == 0)
        edi = esi
        esi = *esi
    else
        esi = esi[2]

void* esi_1 = *(ebx + 4)
void** var_8 = edi
char eax_2

if (edi != esi_1)
    eax_2 = sub_40f4a0(0x7365a4, &edi[3])

void** eax_3

if (edi == esi_1 || eax_2 != 0)
    void* var_4 = esi_1
    eax_3 = &var_4
else
    eax_3 = &var_8

int32_t* result = *eax_3

if (result != esi_1)
    int32_t* esi_2 = result[7]
    
    if (esi_2 != 0)
        result = (**esi_2)(0x7365c4)
        
        if (result != 0)
            (**result)(ebp)
            
            if ((**esi_2)(0x7365b4) != 0)
                *(*(ebp + 0x3c) + 0x10c) = ebp + 0xc
                *(*(ebp + 0x3c) + 0x110) = ebp + 8
                return sub_5db150(*(ebp + 0x5c), ebp + 0x40, *(ebp + 0x3c), ebp + 0x20) != 0

result.b = 0
return result
