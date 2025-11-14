// 函数: sub_58cc70
// 地址: 0x58cc70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
int32_t* edx = arg3
void** ebx = arg2
void** ebp = ebx[1]
void** eax = ebp[1]
ecx.b = 1
var_4.b = 1

while (*(eax + 0x15) == 0)
    ebp = eax
    ecx.b = edx[3] u< eax[3]
    var_4.b = ecx.b
    
    if (ecx.b == 0)
        eax = eax[2]
    else
        eax = *eax

void** edi_3 = ebp
arg2 = edi_3

if (ecx.b != 0)
    if (ebp == *ebx[1])
        *arg1 = *sub_58cd40(ebp, ebx, &arg3, 1, edx)
        arg1[1].b = 1
        return arg1
    
    sub_58d240(&arg2)
    edi_3 = arg2
    edx = arg3

if (edi_3[3] u< edx[3])
    *arg1 = *sub_58cd40(ebp, ebx, &arg3, var_4.b, edx)
    arg1[1].b = 1
    return arg1

sub_6b4d5b()
*arg1 = edi_3
arg1[1].b = 0
return arg1
