// 函数: sub_5854b0
// 地址: 0x5854b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = arg2[1]
int32_t esi = arg1

if (esi u< ecx)
    arg1 = *arg2

if (esi u< ecx && arg1 u<= esi)
    if (ecx == arg2[2])
        sub_585570(arg2)
    
    esi = (esi - arg1) s/ 0x7c * 0x7c + *arg2
else if (ecx == arg2[2])
    sub_585570(arg2)

int32_t edi = arg2[1]

if (edi != 0)
    __builtin_memcpy(edi, esi, 0x7c)

arg2[1] += 0x7c
