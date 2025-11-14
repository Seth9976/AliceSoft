// 函数: sub_6d37e0
// 地址: 0x6d37e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx_3 = ((sx.d(*arg1) + 4) s>> 3) + 0x80

if (edx_3 s< 0)
    edx_3 = 0
else if (edx_3 s> 0xff)
    edx_3 = 0xff

*arg1 = edx_3.w
return arg1
