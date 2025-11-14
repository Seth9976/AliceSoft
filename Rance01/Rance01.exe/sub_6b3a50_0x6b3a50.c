// 函数: sub_6b3a50
// 地址: 0x6b3a50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** ecx_1 = data_797e30
void** eax = ecx_1[1]
void** edi = ecx_1

while (*(eax + 0x15) == 0)
    if (eax[3] u>= *arg1)
        edi = eax
        eax = *eax
    else
        eax = eax[2]

if (edi != ecx_1 && *arg1 u>= edi[3])
    return &edi[4]

void* var_8 = *arg1
int32_t var_4 = 0
sub_6b3f50(sub_6b4310(&var_8), &var_8, edi)
return var_8 + 0x10
