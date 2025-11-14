// 函数: sub_40fab0
// 地址: 0x40fab0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
void* ecx_1 = arg1
int32_t* ebx = arg3
void** result = arg2
int32_t** edi = *(ecx_1 + 4)
void** esi = edi[1]
char eax = 1
var_4.b = 1

if (*(esi + 0x21) == 0)
    do
        edi = esi
        eax = sub_40f4a0(&ebx[3], &esi[3])
        var_4.b = eax
        
        if (eax == 0)
            esi = esi[2]
        else
            esi = *esi
    while (*(esi + 0x21) == 0)
    
    ecx_1 = arg1

int32_t** esi_1 = edi
arg2 = esi_1

if (eax != 0)
    if (edi == **(ecx_1 + 4))
        *result = *sub_58f8d0(edi, ecx_1, &arg3, 1, ebx)
        result[1].b = 1
        return result
    
    sub_58d1e0(&arg2)
    esi_1 = arg2

if (sub_40f4a0(&esi_1[3], &ebx[3]) != 0)
    *result = *sub_58f8d0(edi, arg1, &arg3, var_4.b, ebx)
    result[1].b = 1
    return result

int32_t* var_18_2 = ebx
sub_6b4d5b()
*result = esi_1
result[1].b = 0
return result
