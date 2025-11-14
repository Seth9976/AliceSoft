// 函数: sub_4e9390
// 地址: 0x4e9390
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 == arg4)
    void** eax_4 = arg2
    *eax_4 = arg3
    return eax_4

int32_t edx_1 = *(arg1 + 4)
void** var_14 = arg2
void* eax_1 = sub_4e9aa0(arg4, edx_1, arg3, edx_1)
int32_t edi = *(arg1 + 4)
void* esi_1 = eax_1

if (eax_1 != edi)
    do
        (**esi_1)(0)
        esi_1 += 0x208
    while (esi_1 != edi)

*(arg1 + 4) = eax_1
*arg2 = arg3
return arg2
