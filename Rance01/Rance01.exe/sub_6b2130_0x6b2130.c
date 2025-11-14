// 函数: sub_6b2130
// 地址: 0x6b2130
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx
int32_t* var_4 = ecx
int32_t* ebx = data_797e5c
int32_t* eax = ebx[1]
void** result = arg1
ecx.b = 1
int32_t* esi = ebx
var_4.b = 1

while (*(eax + 0x15) == 0)
    esi = eax
    ecx.b = arg2[3] u< eax[3]
    var_4.b = ecx.b
    
    if (ecx.b == 0)
        eax = eax[2]
    else
        eax = *eax

int32_t* edi = esi
arg1 = edi

if (ecx.b != 0)
    if (esi == *ebx)
        *result = *sub_6b2200(esi, arg2, &arg2, 1)
        result[1].b = 1
        return result
    
    sub_58d240(&arg1)
    edi = arg1

int32_t* eax_6 = arg2

if (edi[3] u< eax_6[3])
    *result = *sub_6b2200(esi, eax_6, &arg2, var_4.b)
    result[1].b = 1
    return result

int32_t* var_18_1 = eax_6
sub_6b4d5b()
*result = edi
result[1].b = 0
return result
