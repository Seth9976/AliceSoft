// 函数: sub_621050
// 地址: 0x621050
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x66666667, arg1[0x4d] - arg1[0x4c])
int32_t edx_1 = edx s>> 4
int32_t eax_3 = (edx_1 u>> 0x1f) + edx_1
BOOL i = 0

if (eax_3 s<= 0)
    return eax_3

int32_t* ebx_1 = nullptr
int32_t eax_6
int32_t edx_4

do
    if ((***(ebx_1 + arg1[0x4c]))() == arg2)
        return sub_6210d0(arg1, i)
    
    int32_t edx_3
    edx_3:eax_6 = muls.dp.d(0x66666667, arg1[0x4d] - arg1[0x4c])
    edx_4 = edx_3 s>> 4
    i += 1
    ebx_1 = &ebx_1[0xa]
while (i s< (edx_4 u>> 0x1f) + edx_4)
return eax_6
