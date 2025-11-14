// 函数: sub_686200
// 地址: 0x686200
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x3c) == 0)
    return 

int32_t* i = *(arg1 + 0xa4)

if (i != *(arg1 + 0xa8))
    int32_t ebx_1 = arg3
    
    do
        (*(**i + 0x30))(*(arg1 + 0xb4), ebx_1)
        i = &i[1]
    while (i != *(arg1 + 0xa8))

void* ecx_1 = *(arg1 + 0x3c)

if (*(ecx_1 + 0x38) - *(ecx_1 + 0x3c) s<= 0)
    return 

void* ecx_2 = *(arg1 + 0x18)

if (arg2 != *(ecx_2 + 8))
    return 

int32_t eax_6 = (*sub_414610(ecx_2))->vFunc_9()
char* eax_7 = data_797d44
arg3 = 0

if (sub_424db0(eax_7).b != 0)
    (***(eax_7 + 8))(arg1 + 0x38, &arg3)

*(arg1 + 0x38) -= eax_6
