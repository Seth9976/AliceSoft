// 函数: sub_58f5e0
// 地址: 0x58f5e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg3
void** ecx = ebx[1]
void** eax = ecx[1]
void** esi = ecx

while (*(eax + 0x21) == 0)
    if (eax[3] u>= *arg2)
        esi = eax
        eax = *eax
    else
        eax = eax[2]

if (esi != ebx[1] && *arg2 u>= esi[3])
    return &esi[4]

int32_t var_10 = 0
int32_t var_c = 0
int32_t var_8 = 0
int32_t var_4 = 0
int32_t var_14 = *arg2
sub_58f6c0(ebx, sub_58fa60(ebx, &var_14), &arg3, esi)
return &arg3[4]
