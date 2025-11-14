// 函数: sub_6ac4a0
// 地址: 0x6ac4a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg3
void* esi = arg1
void* ebx_1 = esi - arg3
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x66666667, ebx_1)
int32_t edx_1 = edx s>> 4
int32_t i = ebx_1 s/ 0x28

while (i s> 1)
    sub_6add70(i, edx_1, esi, arg3, arg4)
    ebx_1 -= 0x28
    int32_t eax_3
    int32_t edx_2
    edx_2:eax_3 = muls.dp.d(0x66666667, ebx_1)
    edx_1 = edx_2 s>> 4
    i = ebx_1 s/ 0x28
    esi -= 0x28

return i
