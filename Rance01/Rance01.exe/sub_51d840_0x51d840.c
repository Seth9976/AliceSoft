// 函数: sub_51d840
// 地址: 0x51d840
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
void* ecx_1 = arg1
void** result = arg2
int32_t** esi = *(ecx_1 + 4)
void** ebp = esi[1]
int32_t* edi_1 = &arg3[3]
char eax = 1
var_4.b = 1
int32_t edx

if (*(ebp + 0x69) == 0)
    do
        esi = ebp
        eax, edx = sub_51c740(&ebp[3], edx, edi_1)
        var_4.b = eax
        
        if (eax == 0)
            ebp = ebp[2]
        else
            ebp = *ebp
    while (*(ebp + 0x69) == 0)
    
    ecx_1 = arg1

int32_t** ebp_1 = esi
arg2 = ebp_1

if (eax != 0)
    if (esi == **(ecx_1 + 4))
        *result = *sub_51d930(esi, ecx_1, &arg3, 1, arg3)
        result[1].b = 1
        return result
    
    edx = sub_51db00(&arg2)
    ebp_1 = arg2

if (sub_51c740(edi_1, edx, &ebp_1[3]) != 0)
    *result = *sub_51d930(esi, arg1, &arg3, var_4.b, arg3)
    result[1].b = 1
    return result

sub_51d010(edi_1)
int32_t* var_18_2 = arg3
sub_6b4d5b()
*result = ebp_1
result[1].b = 0
return result
