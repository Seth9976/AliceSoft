// 函数: sub_57b970
// 地址: 0x57b970
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = arg2[1]
int32_t esi = arg1

if (esi u< ecx)
    arg1 = *arg2

if (esi u< ecx && arg1 u<= esi)
    if (ecx == arg2[2])
        sub_57ba30(arg2)
    
    esi = *arg2 + (esi - arg1) s/ 0x78 * 0x78
else if (ecx == arg2[2])
    sub_57ba30(arg2)

int32_t edi = arg2[1]

if (edi != 0)
    __builtin_memcpy(edi, esi, 0x78)

arg2[1] += 0x78
