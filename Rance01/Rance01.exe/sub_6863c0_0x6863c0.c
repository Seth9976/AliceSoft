// 函数: sub_6863c0
// 地址: 0x6863c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x3c) == 0)
    return 

for (int32_t* i = *(arg1 + 0xa4); i != *(arg1 + 0xa8); i = &i[1])
    (*(**i + 0x38))(*(arg1 + 0xb4), arg3)

if (arg3 != 1)
    return 

void* eax_3 = *(arg1 + 0x3c)
int32_t ecx_1 = *(eax_3 + 0x48)
int32_t esi_1 = *(eax_3 + 0x40)
int32_t eax_5

if (arg2 == *(*(arg1 + 0x10) + 8))
    eax_5 = esi_1 - ecx_1
label_686428:
    int32_t var_14_2 = eax_5
    sub_6856c0(*(arg1 + 0x3c))
    sub_41d720(arg1 + 0xa4, esi_1)
else if (arg2 == *(*(arg1 + 0x14) + 8))
    eax_5 = esi_1 + ecx_1
    goto label_686428
