// 函数: sub_4b5260
// 地址: 0x4b5260
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *arg1
int32_t esi_4 = (arg1[1] - ebx) s/ 0x3c

if (esi_4 u> 0x4444443)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t result = (arg1[2] - ebx) s/ 0x3c

if (esi_4 + 1 u<= result)
    return result

uint32_t edx_7 = result u>> 1
int32_t eax_4

if (0x4444444 - edx_7 u>= result)
    eax_4 = result + edx_7
else
    eax_4 = 0

if (eax_4 u< esi_4 + 1)
    eax_4 = esi_4 + 1

return sub_4b5330(arg1, eax_4)
