// 函数: sub_52fed0
// 地址: 0x52fed0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4 = arg1
int32_t ecx = *(arg2 + 0x54)
void* eax = *(arg2 + 0x50)
int32_t* edx

if (eax != ecx)
    int32_t var_10_1 = ecx
    int32_t var_14_1 = ecx
    void* eax_1
    int32_t edx_1
    eax_1, edx_1 = sub_532550(eax, edx, ecx)
    void* var_18_1 = var_4
    int32_t var_1c_1 = *(arg2 + 0x54)
    edx = sub_532810(eax_1, edx_1)
    *(arg2 + 0x54) = eax_1

int32_t* ecx_2 = *(arg2 + 0x14)
int32_t* eax_4 = *(arg2 + 0x10)

if (eax_4 != ecx_2)
    void* eax_5 = sub_532500(eax_4, edx, ecx_2, ecx_2)
    void* var_14_2 = var_4
    sub_535360(eax_5, *(arg2 + 0x14))
    *(arg2 + 0x14) = eax_5

sub_405410(arg2 + 0x20, &var_4, *(arg2 + 0x20), *(arg2 + 0x24))
int32_t* ecx_4 = *(arg2 + 0x34)
int32_t* result = *(arg2 + 0x30)

if (result != ecx_4)
    void* edx_4 = var_4
    void* var_10_4 = edx_4
    void* eax_7
    int32_t edx_5
    eax_7, edx_5 = sub_5353a0(result, edx_4, ecx_4, ecx_4)
    void* var_18_3 = var_4
    int32_t var_1c_3 = *(arg2 + 0x34)
    result = sub_5353e0(eax_7, edx_5)
    *(arg2 + 0x34) = eax_7

int128_t* ecx_6 = *(arg2 + 0x44)
int128_t* edi_4 = *(arg2 + 0x40)

if (edi_4 != ecx_6)
    void* ebx_2 = 0 s>> 2 << 2
    result = sub_6b49d0(edi_4, ecx_6, ebx_2)
    *(arg2 + 0x44) = ebx_2 + edi_4

return result
