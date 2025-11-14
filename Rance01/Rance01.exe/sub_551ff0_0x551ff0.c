// 函数: sub_551ff0
// 地址: 0x551ff0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = arg2[1]

if (edi == 0)
    arg1[1] = edi
    arg1.b = 1
    return arg1

char eax = sub_54fa60(arg1, edi)

if (eax == 0)
    return eax

void* ecx = arg2[1]
int128_t* ebx_1

if (ecx != 0)
    ebx_1 = *arg2
else
    ebx_1 = nullptr

if (arg1[1] != 0)
    sub_6c02a0(*arg1, ebx_1, ecx)
    int128_t* eax_3
    eax_3.b = 1
    return eax_3

sub_6c02a0(nullptr, ebx_1, ecx)
int128_t* eax_1
eax_1.b = 1
return eax_1
