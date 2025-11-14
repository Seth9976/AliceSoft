// 函数: sub_56e0c0
// 地址: 0x56e0c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x3c) != 0)
    *arg3 = 0
    *arg2 = 0
    return 

int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(*(arg1 + 0x2c) - *(arg1 + 0x34))
int32_t esi_1 = (eax_2 - edx) s>> 1
int32_t eax_6
int32_t edx_1
edx_1:eax_6 = sx.q(*(arg1 + 0x30) - *(arg1 + 0x38))
int32_t eax_8 = (eax_6 - edx_1) s>> 1
*arg2 = esi_1
*arg3 = eax_8

if (esi_1 s< 0)
    *arg2 = 0

if (eax_8 s< 0)
    *arg3 = 0
