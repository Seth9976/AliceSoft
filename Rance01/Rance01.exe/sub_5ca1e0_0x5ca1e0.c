// 函数: sub_5ca1e0
// 地址: 0x5ca1e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* esi = arg3
char* edi = arg1

while (esi != arg4)
    arg1.b = *esi
    *edi = arg1.b
    sub_401180(&edi[4], 0xffffffff, &esi[4], 0)
    sub_4b55f0(&edi[0x20], &esi[0x20])
    esi = &esi[0x30]
    edi = &edi[0x30]
