// 函数: sub_4fe420
// 地址: 0x4fe420
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edx = arg3
void** ebp = *(edx + 4)
void** eax = ebp[1]
bool ecx = true
bool var_4 = true

while (*(eax + 0x21) == 0)
    ebp = eax
    ecx = arg1[3] s< eax[3]
    var_4 = ecx
    
    if (ecx == 0)
        eax = eax[2]
    else
        eax = *eax

void** ebx_2 = ebp
void** var_8 = ebx_2

if (ecx != 0)
    if (ebp == **(edx + 4))
        *arg2 = *sub_4fe500(ebp, edx, &arg3, 1, arg1)
        arg2[1].b = 1
        return arg2
    
    sub_58d1e0(&var_8)
    ebx_2 = var_8
    edx = arg3

if (ebx_2[3] s< arg1[3])
    *arg2 = *sub_4fe500(ebp, edx, &arg3, var_4, arg1)
    arg2[1].b = 1
    return arg2

sub_4fd080(&arg1[4])
int32_t* var_18_3 = arg1
sub_6b4d5b()
*arg2 = ebx_2
arg2[1].b = 0
return arg2
