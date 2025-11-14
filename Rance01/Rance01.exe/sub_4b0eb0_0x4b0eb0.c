// 函数: sub_4b0eb0
// 地址: 0x4b0eb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *arg3
int32_t esi_4 = (arg3[1] - ebx) s/ 0x3c

if (0x4444444 - arg1 u< esi_4)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t esi_5 = esi_4 + arg1
int32_t result = (arg3[2] - ebx) s/ 0x3c

if (esi_5 u<= result)
    return result

uint32_t edx_7 = result u>> 1
int32_t eax_5

if (0x4444444 - edx_7 u>= result)
    eax_5 = result + edx_7
else
    eax_5 = 0

if (eax_5 u< esi_5)
    eax_5 = esi_5

return sub_4b0f30(arg3, eax_5)
