// 函数: sub_533150
// 地址: 0x533150
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4 = arg1
int32_t* ecx = *(arg2 + 0x14)
int32_t* eax = *(arg2 + 0x10)

if (eax != ecx)
    int32_t edx
    void* eax_1 = sub_532500(eax, edx, ecx, ecx)
    void* var_14_1 = var_4
    sub_535360(eax_1, *(arg2 + 0x14))
    *(arg2 + 0x14) = eax_1

sub_405410(arg2 + 0x20, &var_4, *(arg2 + 0x20), *(arg2 + 0x24))
int32_t* ecx_2 = *(arg2 + 0x34)
int32_t* result = *(arg2 + 0x30)

if (result != ecx_2)
    void* edx_2 = var_4
    void* var_10_3 = edx_2
    void* eax_5
    int32_t edx_3
    eax_5, edx_3 = sub_5353a0(result, edx_2, ecx_2, ecx_2)
    void* var_18_1 = var_4
    int32_t var_1c_1 = *(arg2 + 0x34)
    result = sub_5353e0(eax_5, edx_3)
    *(arg2 + 0x34) = eax_5

int128_t* ecx_4 = *(arg2 + 0x44)
int128_t* edi_3 = *(arg2 + 0x40)

if (edi_3 != ecx_4)
    void* ebx_2 = 0 s>> 2 << 2
    result = sub_6b49d0(edi_3, ecx_4, ebx_2)
    *(arg2 + 0x44) = ebx_2 + edi_3

return result
