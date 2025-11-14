// 函数: sub_5721b0
// 地址: 0x5721b0
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
    edx = sub_5724d0(esi, edi)
    edi = &edi[4]
    esi = &esi[4]

void** var_14_2 = arg2
int32_t var_18 = ebp[1]
sub_572460(esi, edx)
ebp[1] = esi
*arg2 = arg1
return arg2
