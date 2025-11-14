// 函数: sub_642500
// 地址: 0x642500
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = arg3
int32_t edi = arg1
int32_t edx = edi * 2 + 2
arg3 = edi
bool cond:0 = edx != ebp

while (edx s< ebp)
    int32_t* eax_1 = edx * 0x8c
    
    if (*(eax_1 + arg2) s< *(eax_1 + arg2 - 0x8c))
        edx -= 1
    
    __builtin_memcpy(edi * 0x8c + arg2, edx * 0x8c + arg2, 0x8c)
    edi = edx
    edx = edx * 2 + 2
    cond:0 = edx != ebp

if (not(cond:0))
    __builtin_memcpy(edi * 0x8c + arg2, &arg2[ebp * 0x23 - 0x23], 0x8c)
    edi = ebp - 1

int32_t var_14 = arg5
int32_t var_18 = arg4
int32_t var_1c = arg3
return sub_643510(edi, arg5, arg3, arg2)
