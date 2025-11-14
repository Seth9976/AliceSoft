// 函数: sub_410280
// 地址: 0x410280
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg1[4]
int32_t ecx = arg1[5]
void** edx

if (ecx u< 0x10)
    edx = arg1
else
    edx = *arg1

if (ecx u>= 0x10)
    arg1 = *arg1

int32_t var_4
int32_t var_18 = var_4
sub_4102d0(arg3 + 4, *(arg3 + 8), arg1, edx + ebx)
char var_5 = 0
return sub_54e400(&var_5, arg3 + 4)
