// 函数: sub_60c890
// 地址: 0x60c890
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = *(arg2 + 0xd4)

if (ecx s< 0)
    return 

int32_t edi_1 = *(arg2 + 0xc0)
int32_t eax_1
int32_t edx_3
edx_3:eax_1 = muls.dp.d(0x2e8ba2e9, *(arg2 + 0xc4) - edi_1)
int32_t edx_4 = edx_3 s>> 3

if (ecx s>= (edx_4 u>> 0x1f) + edx_4)
    return 

int32_t var_c_1 = arg1
int32_t* ecx_2 = ecx * 0x2c + edi_1
sub_60ca80(&ecx_2[0xb], arg1, ecx_2, *(arg2 + 0xc4))
void* edi_2 = *(arg2 + 0xc4)
int32_t var_14_1 = arg1
sub_535e80(edi_2 - 0x2c, edi_2)
*(arg2 + 0xc4) -= 0x2c
InvalidateRect(*(arg2 + 0x88), nullptr, 1)
