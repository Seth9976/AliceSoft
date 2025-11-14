// 函数: sub_402680
// 地址: 0x402680
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* eax = arg1
char i

do
    i = *eax
    eax = &eax[1]
while (i != 0)
void* eax_1 = eax - &eax[1]
void* esi_1 = arg2[4]
void* eax_2 = esi_1

if (esi_1 u>= eax_1)
    eax_2 = eax_1

int32_t* edx

if (arg2[5] u< 0x10)
    edx = arg2
else
    edx = *arg2

int32_t result = sub_402320(eax_2, edx, arg1, eax_2)

if (result == 0)
    if (esi_1 u< eax_1)
        int32_t eax_3
        eax_3.b = false
        return 0xffffff00
    
    result.b = esi_1 != eax_1

result.b = result == 0
return result
