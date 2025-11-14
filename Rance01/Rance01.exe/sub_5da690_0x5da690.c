// 函数: sub_5da690
// 地址: 0x5da690
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* var_4 = arg1
void* esi = data_797d9c
sub_5da8f0(esi + 0xc)
char* eax = operator new(0x1c)

if (eax == 0)
    eax = nullptr
else
    *(eax + 0x14) = 0xf
    *(eax + 0x10) = 0
    *eax = 0

var_4 = eax
sub_61b5a0(&var_4, esi + 0xc)
*(esi + 0x1c) = 0
sub_5db340(*(esi + 0x3c))
BOOL result
result.b = 1
return result
