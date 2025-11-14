// 函数: sub_5cc1d0
// 地址: 0x5cc1d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** ecx = arg1[1]
void** eax = ecx[1]
void** ebx = ecx

while (*(eax + 0x15) == 0)
    if (eax[3] s>= *arg2)
        ebx = eax
        eax = *eax
    else
        eax = eax[2]

if (ebx != arg1[1] && *arg2 s>= ebx[3])
    return &ebx[4]

int32_t* var_8 = *arg2
int32_t var_4 = 0
sub_4cd000(arg1, sub_40d430(arg1, &var_8), &var_8, ebx)
return &var_8[4]
