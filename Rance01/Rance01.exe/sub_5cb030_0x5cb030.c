// 函数: sub_5cb030
// 地址: 0x5cb030
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
char* edi = data_797d80
char eax = sub_5cadb0(edi)

if (eax == 0)
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = eax
    return arg1

int128_t* eax_3 = (***(edi + 0x18))()
int128_t* ecx_3 = eax_3
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
void* edi_1 = ecx_3 + 1
char i

do
    i = *ecx_3
    ecx_3 += 1
while (i != 0)
sub_401270(arg1, ecx_3 - edi_1, eax_3)
return arg1
