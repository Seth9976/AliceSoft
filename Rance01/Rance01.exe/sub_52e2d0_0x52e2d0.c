// 函数: sub_52e2d0
// 地址: 0x52e2d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = arg1
void* esi_1 = edi - arg2
int32_t eax
void* edx
edx:eax = muls.dp.d(0x92492493, esi_1)
int32_t edx_2 = (edx + esi_1) s>> 5
int32_t i = esi_1 s/ 0x38

while (i s> 1)
    sub_52eb30(i, edx_2, arg2, edi, arg3)
    esi_1 -= 0x38
    int32_t eax_3
    void* edx_3
    edx_3:eax_3 = muls.dp.d(0x92492493, esi_1)
    edx_2 = (edx_3 + esi_1) s>> 5
    i = esi_1 s/ 0x38
    edi -= 0x38

return i
