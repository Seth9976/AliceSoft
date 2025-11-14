// 函数: sub_5b4470
// 地址: 0x5b4470
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax_3

if (arg3 == 0)
    eax_3 = arg1
    *(eax_3 + 0x34) = *(eax_3 + 0x3c) + arg2
else if (arg3 == 1)
    eax_3 = arg1
    *(eax_3 + 0x34) += arg2
else
    if (arg3 != 2)
        return 0xffffffff
    
    eax_3 = arg1
    *(eax_3 + 0x34) = *(eax_3 + 0x3c) + *(eax_3 + 0x38) + arg2

int32_t ecx_4 = *(eax_3 + 0x3c)
int32_t edx_3 = *(eax_3 + 0x38) + ecx_4

if (*(eax_3 + 0x34) u> edx_3)
    *(eax_3 + 0x34) = edx_3

if (*(eax_3 + 0x34) u< ecx_4)
    *(eax_3 + 0x34) = ecx_4

return 0
