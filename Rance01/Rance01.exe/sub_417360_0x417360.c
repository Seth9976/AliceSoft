// 函数: sub_417360
// 地址: 0x417360
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = arg3
int32_t edi = arg1
int32_t esi = edi * 2 + 2
arg3 = edi
bool cond:0 = esi != ebp

while (esi s< ebp)
    if (sub_416ef0(*(arg2 + (esi << 2)), *(arg2 + (esi << 2) - 4)) != 0)
        esi -= 1
    
    *(arg2 + (edi << 2)) = *(arg2 + (esi << 2))
    edi = esi
    esi = esi * 2 + 2
    cond:0 = esi != ebp

if (not(cond:0))
    *(arg2 + (edi << 2)) = *(arg2 + (ebp << 2) - 4)
    edi = ebp - 1

int32_t var_14_2 = arg5
return sub_4173d0(arg2, edi, arg3, arg4)
