// 函数: sub_432750
// 地址: 0x432750
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xff
int32_t var_4 = 0
int32_t arg_4
int32_t* eax = &arg_4

if (arg_4 s>= 0xff)
    eax = &var_8

if (*eax s<= 0)
    eax = &var_4

int32_t edi = *eax
arg_4 = 0xff
var_4 = 0
int32_t arg_8
int32_t* eax_1 = &arg_8

if (arg_8 s>= 0xff)
    eax_1 = &arg_4

if (*eax_1 s<= 0)
    eax_1 = &var_4

int32_t edx = *eax_1
arg_4 = 0xff
arg_8 = 0
int32_t arg_c
int32_t* eax_2 = &arg_c

if (arg_c s>= 0xff)
    eax_2 = &arg_4

if (*eax_2 s<= 0)
    eax_2 = &arg_8

int32_t result = *eax_2

if (*(arg1 + 0x2c) != edi || *(arg1 + 0x30) != edx || *(arg1 + 0x34) != result)
    *(arg1 + 0x2c) = edi
    *(arg1 + 0x30) = edx
    *(arg1 + 0x34) = result
    *(arg1 + 0xc) = 1

return result
