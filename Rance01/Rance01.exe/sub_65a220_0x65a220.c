// 函数: sub_65a220
// 地址: 0x65a220
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
void* edx = arg2
int32_t** result = arg3
int32_t** esi = *(edx + 4)
int32_t** eax = esi[1]
ecx.b = 1
var_4.b = 1

while (*(eax + 0x31) == 0)
    esi = eax
    ecx.b = arg1[3] u< eax[3]
    var_4.b = ecx.b
    
    if (ecx.b == 0)
        eax = eax[2]
    else
        eax = *eax

int32_t** ebx_2 = esi
arg3 = ebx_2

if (ecx.b == 0)
    goto label_65a2aa

char var_1c
int32_t* var_18

if (esi != **(edx + 4))
    sub_65a4b0(&arg3)
    ebx_2 = arg3
    edx = arg2
label_65a2aa:
    
    if (ebx_2[3] u>= arg1[3])
        sub_6b0a00(&arg1[3])
        int32_t* var_18_1 = arg1
        sub_6b4d5b()
        *result = ebx_2
        result[1].b = 0
        return result
    
    var_18 = arg1
    var_1c = var_4.b
else
    var_18 = arg1
    var_1c = 1

*result = *sub_65a2e0(esi, edx, &arg2, var_1c, var_18)
result[1].b = 1
return result
