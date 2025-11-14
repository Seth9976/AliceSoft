// 函数: sub_668e80
// 地址: 0x668e80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = *(arg2 + 0x60)
int32_t* result = *(arg2 + 0x5c)

if (result != ecx)
    int32_t __saved_ebx_1 = arg1
    int32_t* eax = sub_4f2850(result, arg1, ecx, ecx)
    result = sub_663180(eax, *(arg2 + 0x60))
    *(arg2 + 0x60) = eax

int128_t* ecx_1 = *(arg2 + 0x70)
int128_t* edi_2 = *(arg2 + 0x6c)

if (edi_2 != ecx_1)
    int32_t ebx_1 = 0 s>> 2 << 2
    result = sub_6b49d0(edi_2, ecx_1, ebx_1)
    *(arg2 + 0x70) = ebx_1 + edi_2

int32_t* __saved_ebx_4 = *(arg2 + 0x7c)

if (__saved_ebx_4 != 0)
    sub_6731d0(__saved_ebx_4)
    int32_t* __saved_ebx_3 = __saved_ebx_4
    result = sub_6b4d5b()
    *(arg2 + 0x7c) = 0

return result
