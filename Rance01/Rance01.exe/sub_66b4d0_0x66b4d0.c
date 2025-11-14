// 函数: sub_66b4d0
// 地址: 0x66b4d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *(arg1 + 4)
int32_t* esi = arg3
char* edi = &esi[7]

while (edi != ebx)
    sub_401ef0(esi, edi)
    edi = &edi[0x1c]
    esi = &esi[7]

void* edi_1 = *(arg1 + 4)
sub_405780(edi_1 - 0x1c, edi_1)
*(arg1 + 4) -= 0x1c
*arg2 = arg3
return arg2
