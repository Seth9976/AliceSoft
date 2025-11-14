// 函数: sub_613f60
// 地址: 0x613f60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg1
int32_t* esi = arg3
int32_t* edi = arg4
arg1 = esi

if (esi == edi)
    *arg2 = esi
    return arg2

int32_t ebx = ebp[1]
int32_t edx

while (edi != ebx)
    edx = sub_5ec870(esi, edi)
    edi = &edi[4]
    esi = &esi[4]

void** var_14_2 = arg2
int32_t var_18 = ebp[1]
sub_614290(esi, edx)
ebp[1] = esi
*arg2 = arg1
return arg2
