// 函数: sub_6f2880
// 地址: 0x6f2880
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_10 = arg3
int32_t eax
int32_t ecx
int32_t edx
int32_t ebx
eax, ebx, ecx, edx = __cpuid(0, arg3)
arg4[6] = ebx
arg4[7] = edx
arg4[8] = ecx

if (eax != 0)
    int32_t eax_1
    int32_t ecx_1
    int32_t edx_1
    char ebx_1
    eax_1, ebx_1, ecx_1, edx_1 = __cpuid(1, ecx)
    int32_t eax_2 = eax_1 & 0x3fff
    *arg4 = zx.d(ebx_1)
    arg4[1] = eax_2 u>> 0xc & 3
    arg4[2] = eax_2 u>> 8 & 0xf
    arg4[3] = eax_2 u>> 4 & 0xf
    arg4[4] = eax_2 & 0xf
    arg4[5] = edx_1

return arg1
