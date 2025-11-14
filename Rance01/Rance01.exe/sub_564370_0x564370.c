// 函数: sub_564370
// 地址: 0x564370
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi_2 = (arg1[1] - *arg1) s>> 2
int32_t esi_3 = esi_2 - 1

if (esi_2 - 1 s>= 0)
    int32_t temp1_1
    
    do
        int32_t eax_1 = *arg1
        
        if (*(eax_1 + (esi_3 << 2)) != 0)
            FreeLibrary(*(eax_1 + (esi_3 << 2)))
        
        temp1_1 = esi_3
        esi_3 -= 1
    while (temp1_1 - 1 s>= 0)

int128_t* ecx_2 = arg1[1]
int128_t* esi_4 = *arg1

if (esi_4 == ecx_2)
    return 

void* ebx_1 = 0 s>> 2 << 2
sub_6b49d0(esi_4, ecx_2, ebx_1)
arg1[1] = ebx_1 + esi_4
