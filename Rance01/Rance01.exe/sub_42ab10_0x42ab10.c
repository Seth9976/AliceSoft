// 函数: sub_42ab10
// 地址: 0x42ab10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg1

for (int32_t* i = *(ebp + 0x44); i != *(ebp + 0x48); i = &i[1])
    int32_t* eax = *i
    int32_t* j = *eax
    
    if (j != eax[1])
        do
            (*(**j + 4))()
            j = &j[1]
        while (j != (*i)[1])
    
    int32_t* ebx_1 = *i
    int128_t* ecx = ebx_1[1]
    int128_t* esi_1 = *ebx_1
    
    if (esi_1 != ecx)
        int32_t ebp_1 = 0 s>> 2 << 2
        eax, ecx = sub_6b49d0(esi_1, ecx, ebp_1)
        ebx_1[1] = ebp_1 + esi_1
        ebp = arg1
    
    int32_t* esi_2 = *i
    
    if (esi_2 != 0)
        int32_t eax_5 = *esi_2
        
        if (eax_5 != 0)
            int32_t var_14_2 = eax_5
            sub_6b4d5b()
        
        int32_t* var_14_3 = esi_2
        *esi_2 = 0
        esi_2[1] = 0
        esi_2[2] = 0
        eax, ecx = sub_6b4d5b()

int128_t* ecx_3 = *(ebp + 0x48)
int128_t* esi_3 = *(ebp + 0x44)

if (esi_3 == ecx_3)
    return 

int32_t edi = 0 s>> 2 << 2
sub_6b49d0(esi_3, ecx_3, edi)
*(ebp + 0x48) = edi + esi_3
