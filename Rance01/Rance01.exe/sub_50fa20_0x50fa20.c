// 函数: sub_50fa20
// 地址: 0x50fa20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** ecx = arg1[1]
void** eax = ecx[1]
void** ebx = ecx

while (*(eax + 0x15) == 0)
    if (eax[3] u>= *arg2)
        ebx = eax
        eax = *eax
    else
        eax = eax[2]

if (ebx != arg1[1] && *arg2 u>= ebx[3])
    return &ebx[4]

int32_t* var_c = *arg2
int32_t var_8 = 0
sub_58c620(arg1, sub_40d430(arg1, &var_c), &var_c, ebx)
return &var_c[4]
