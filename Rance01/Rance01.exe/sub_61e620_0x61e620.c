// 函数: sub_61e620
// 地址: 0x61e620
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg2
arg2 = nullptr
int32_t* edi

if (ebp[5] u< 0x10)
    edi = ebp
else
    edi = *ebp

void* eax = sub_61e5e0(edi)

if (eax == 0)
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = eax
    *arg1 = eax.b
    sub_401270(arg1, eax + 6, 0x734294)
    return arg1

void* eax_2 = sub_61e5e0(eax)

if (eax_2 != 0)
    sub_401ec0(ebp, arg1, eax - edi, eax_2 - eax - 1)
    return arg1

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = eax_2
*arg1 = eax_2.b
sub_401270(arg1, eax_2 + 6, 0x73429c)
return arg1
