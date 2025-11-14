// 函数: sub_568230
// 地址: 0x568230
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c
char eax_5 =
    sub_6b2fc0(arg1 + 0x35c, (*(*(arg1 + 0xc8) + 0x18))((*(*(arg1 + 0xc8) + 0x1c))(&var_c)))

if (eax_5 == 0)
    return eax_5

int32_t eax_6 = var_c
*(arg1 + 0xdc) = eax_6
int32_t var_8
*(arg1 + 0xe0) = var_8
*(arg1 + 0x1d8) = eax_6
*(arg1 + 0x1dc) = var_8
int32_t eax_8 = (*(*(arg1 + 0xc8) + 0x18))()
int32_t eax_10
int32_t edx_3
edx_3:eax_10 = sx.q(*(arg1 + 0xdc) - eax_8)
int32_t eax_13 = (*(*(arg1 + 0xc8) + 0x1c))()
int32_t eax_15
int32_t edx_5
edx_5:eax_15 = sx.q(*(arg1 + 0xe0) - eax_13)
int32_t edi_2 = (eax_15 - edx_5) s>> 1
int32_t ebx_1 = (eax_10 - edx_3) s>> 1

if (ebx_1 s< 0)
    ebx_1 = 0

if (edi_2 s< 0)
    edi_2 = 0

(**(arg1 + 0xc8))(ebx_1)
(*(*(arg1 + 0xc8) + 4))(edi_2)
int32_t eax_19
eax_19.b = 1
return eax_19
