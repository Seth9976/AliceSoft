// 函数: sub_5b0b00
// 地址: 0x5b0b00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* ecx
int128_t* var_4 = ecx

if (arg1 == 0 || arg2 == 0)
    return 

int128_t* eax_1 = sub_5a6370((*(arg2 + 0xc0) * 5 + 5) * 4, arg1)

if (eax_1 == 0)
    sub_5a5de0("Out of memory while processing unknown chunk", arg1)
    return 

sub_6c02a0(eax_1, *(arg2 + 0xbc), *(arg2 + 0xc0) * 0x14)
sub_5a6340(arg1, *(arg2 + 0xbc))
int32_t eax_7 = *(arg2 + 0xc0)
*(arg2 + 0xbc) = 0
int32_t* edi_2 = eax_1 + eax_7 * 0x14
*edi_2 = *arg3
edi_2[1].b = 0
edi_2[3] = arg3[3]
int32_t eax_8
eax_8.b = *(arg1 + 0x6c)
edi_2[4].b = eax_8.b

if (arg3[3] != 0)
    int128_t* eax_9 = sub_5a6370(arg3[3], arg1)
    edi_2[2] = eax_9
    
    if (eax_9 != 0)
        sub_6c02a0(eax_9, arg3[2], arg3[3])
    else
        sub_5a5de0("Out of memory while processing unknown chunk", arg1)
        edi_2[3] = 0
else
    edi_2[2] = 0

*(arg2 + 0xc0) += 1
*(arg2 + 0xb8) |= 0x200
*(arg2 + 0xbc) = eax_1
