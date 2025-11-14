// 函数: sub_67a770
// 地址: 0x67a770
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg1

if (*(ebx + 0x28) == 0)
    return 

int32_t ebp_1 = arg2

for (int32_t* i = *(ebx + 0x34); i != *(ebx + 0x38); i = &i[1])
    int32_t eax
    eax, arg1 = (*(**i + 0x3c))(*(ebx + 0x44), ebp_1)

if (ebp_1 != 1)
    return 

*(ebx + 0x25) = 0

if (*(ebx + 0x1c) == 0xffffffff && *(ebx + 0x20) == 0xffffffff)
    return 

void* eax_3 = *(ebx + 0x28)
arg1.b = *(eax_3 + 0x26) == 0

if (*(eax_3 + 0x26) != arg1.b)
    *(eax_3 + 0x26) = arg1.b
    *(eax_3 + 0x14c) = 1

for (int32_t* i_1 = *(ebx + 0x34); i_1 != *(ebx + 0x38); i_1 = &i_1[1])
    (*(**i_1 + 0x4c))(*(ebx + 0x44))

char* eax_5 = data_797d44
int32_t var_8

if (sub_424db0(eax_5) != 0)
    (***(eax_5 + 8))(&var_8, &arg2)

int32_t* esi_2 = *(ebx + 0x28)
int32_t eax_10 = (*(*esi_2 + 0x28))()
int32_t eax_12 = (*(*esi_2 + 0x24))(arg2 - eax_10)
sub_41d680(ebx + 0x34, var_8 - eax_12)
