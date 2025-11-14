// 函数: sub_5a6e60
// 地址: 0x5a6e60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* esi = arg1

if (esi == 0)
    return 

int32_t edx
int32_t i_2

if ((esi[7].b & 0x40) != 0)
    if (*(esi + 0x138) != 0 && (*(esi + 0x74) & 2) == 0)
        edx = sub_5a5de0("Interlace handling should be turned on when using png_read_image", esi)
        arg1 = *(esi + 0xe8)
        *(esi + 0xec) = arg1
    
    if (*(esi + 0x138) == 0 || *(esi + 0x138) == 0)
        i_2 = 1
    else
        *(esi + 0x74) |= 2
        i_2 = 7
else if (*(esi + 0x138) == 0)
    i_2 = 1
    arg1, edx = sub_5afaf0(arg1)
else
    *(esi + 0x74) |= 2
    i_2 = 7
    arg1, edx = sub_5afaf0(arg1)

int32_t j_2 = *(esi + 0xe8)

if (i_2 s<= 0)
    return 

int32_t i_1 = i_2
int32_t i

do
    int128_t** edi_1 = arg2
    
    if (j_2 != 0)
        int32_t j_1 = j_2
        int32_t j
        
        do
            arg1, edx = sub_5a69b0(arg1, edx, esi, *edi_1)
            edi_1 = &edi_1[1]
            j = j_1
            j_1 -= 1
        while (j != 1)
    
    i = i_1
    i_1 -= 1
while (i != 1)
