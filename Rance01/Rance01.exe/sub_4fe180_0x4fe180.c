// 函数: sub_4fe180
// 地址: 0x4fe180
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg2
int32_t*** result = arg3
int32_t** esi = *(ebx + 4)
int32_t** eax = esi[1]
bool ecx = true
arg2.b = 1

while (*(eax + 0x21) == 0)
    esi = eax
    ecx = arg1[3] s< eax[3]
    arg2.b = ecx
    
    if (ecx == 0)
        eax = eax[2]
    else
        eax = *eax

arg3 = esi

if (ecx != 0)
    if (esi == **(ebx + 4))
        int32_t** edx_2 = *sub_4fe270(esi, ebx, &arg3, 1, arg1)
        result[1].b = 1
        *result = edx_2
        return result
    
    sub_58d1e0(&arg3)

if (arg3[3] s< arg1[3])
    *result = *sub_4fe270(esi, ebx, &arg3, arg2.b, arg1)
    result[1].b = 1
    return result

int32_t eax_10 = arg1[4]

if (eax_10 != 0)
    int32_t var_14_3 = eax_10
    sub_6b4d5b()

int32_t* var_14_4 = arg1
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
sub_6b4d5b()
result[1].b = 0
*result = arg3
return result
