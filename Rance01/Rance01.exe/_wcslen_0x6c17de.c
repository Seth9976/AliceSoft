// 函数: _wcslen
// 地址: 0x6c17de
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t* eax = arg1
int16_t i

do
    i = *eax
    eax = &eax[1]
while (i != 0)
return ((eax - arg1) s>> 1) - 1
