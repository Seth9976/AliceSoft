// 函数: sub_5e88c0
// 地址: 0x5e88c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2

if (arg1[1] == 0)
    return 

int32_t edi_1 = *arg1

if (edi_1 == 0xffffffff)
    return 

int32_t* eax_1 = sub_5f9f40(edi_1)
arg2 = eax_1
int32_t eax_3 = sub_5f9f90(edi_1)
bool cond:1_1 = eax_1 s< *ebx
int32_t var_4 = eax_3
int32_t var_8 = 0
int32_t* ecx_1 = &arg2

if (not(cond:1_1))
    ecx_1 = ebx

if (*ecx_1 s<= 0)
    ecx_1 = &var_8

*ebx = *ecx_1
bool cond:2_1 = eax_3 s< *arg3
arg2 = nullptr
arg1 = &var_4

if (not(cond:2_1))
    arg1 = arg3

if (*arg1 s<= 0)
    arg1 = &arg2

*arg3 = *arg1
