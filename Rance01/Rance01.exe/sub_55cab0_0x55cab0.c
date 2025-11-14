// 函数: sub_55cab0
// 地址: 0x55cab0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg2
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2e8ba2e9, ebp[1] - *ebp)
void* ecx_2 = *arg1
void* eax_1 = arg1[1]
int32_t edx_1 = edx s>> 3
int32_t i_1 = (edx_1 u>> 0x1f) + edx_1

if (ecx_2 != eax_1)
    void* var_10_1 = arg2
    void* eax_2 = sub_52fc30(eax_1, arg2, ecx_2, eax_1)
    sub_52f330(eax_2, arg1[1])
    arg1[1] = eax_2

int32_t result = sub_55cbd0(i_1, arg1)

if (i_1 s> 0)
    int32_t edx_3 = 0
    int32_t i
    
    do
        int32_t eax_5 = *ebp
        int32_t ecx_3 = *arg1
        *(ecx_3 + edx_3 + 0x1c) = *(eax_5 + edx_3 + 0x1c)
        result = *(eax_5 + edx_3 + 0x20)
        *(ecx_3 + edx_3 + 0x20) = result
        edx_3 += 0x2c
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
