// 函数: sub_54eb00
// 地址: 0x54eb00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
int32_t* ebx = arg3
void** ebp = *(arg1 + 4)
void** eax = ebp[1]
ecx.b = 1
var_4.b = 1

while (*(eax + 0x21) == 0)
    ebp = eax
    ecx.b = ebx[3] s< eax[3]
    var_4.b = ecx.b
    
    if (ecx.b == 0)
        eax = eax[2]
    else
        eax = *eax

arg3 = ebp

if (ecx.b != 0)
    if (ebp == **(arg1 + 4))
        void* edx_2 = *sub_54ebd0(arg1, ebp, &arg3, 1, ebx)
        arg2[1].b = 1
        *arg2 = edx_2
        return arg2
    
    sub_58d1e0(&arg3)

if (arg3[3] s< ebx[3])
    *arg2 = *sub_54ebd0(arg1, ebp, &arg3, var_4.b, ebx)
    arg2[1].b = 1
    return arg2

sub_54e540(&ebx[3])
int32_t* var_14_2 = ebx
sub_6b4d5b()
arg2[1].b = 0
*arg2 = arg3
return arg2
