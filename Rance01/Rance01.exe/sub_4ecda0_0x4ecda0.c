// 函数: sub_4ecda0
// 地址: 0x4ecda0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 == arg4)
    void** eax_3 = arg2
    *eax_3 = arg3
    return eax_3

void** var_14 = arg2
void* var_18 = arg4
int32_t* eax = sub_4ed1a0(arg3, *(arg1 + 4), arg4)
int32_t edi = *(arg1 + 4)
int32_t* esi_1 = eax

if (eax != edi)
    do
        (**esi_1)(0)
        esi_1 = &esi_1[6]
    while (esi_1 != edi)

*(arg1 + 4) = eax
*arg2 = arg3
return arg2
