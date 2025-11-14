// 函数: sub_4c8880
// 地址: 0x4c8880
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 == arg4)
    *arg2 = arg3
    return arg2

void** var_14 = arg2
int32_t* eax = sub_4c8a70(arg3, arg2, arg4, *(arg1 + 4))
int32_t edi = *(arg1 + 4)
int32_t* esi_1 = eax

if (eax != edi)
    do
        (**esi_1)(0)
        esi_1 = &esi_1[0xb]
    while (esi_1 != edi)

*(arg1 + 4) = eax
*arg2 = arg3
return arg2
