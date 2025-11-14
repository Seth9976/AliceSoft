// 函数: sub_410240
// 地址: 0x410240
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

void* var_14 = arg3
return sub_4102d0(arg3 + 4, *(arg3 + 8), arg1, edx + ebx)
