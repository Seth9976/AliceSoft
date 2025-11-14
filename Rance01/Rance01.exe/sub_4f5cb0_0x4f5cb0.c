// 函数: sub_4f5cb0
// 地址: 0x4f5cb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 == arg4)
    void** eax_4 = arg2
    *eax_4 = arg3
    return eax_4

int32_t edx_1 = *(arg1 + 4)
void** var_14 = arg2
void* eax_1 = sub_4f6a40(arg4, edx_1, arg3, edx_1)
int32_t edi = *(arg1 + 4)
void* esi_1 = eax_1

if (eax_1 != edi)
    do
        (**esi_1)(0)
        esi_1 += 0x2c
    while (esi_1 != edi)

*(arg1 + 4) = eax_1
*arg2 = arg3
return arg2
