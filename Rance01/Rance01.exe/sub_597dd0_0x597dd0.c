// 函数: sub_597dd0
// 地址: 0x597dd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = **data_797d68
int32_t i_1 = arg1

if (i_1 s> 0)
    int32_t i
    
    do
        i = i_1
        i_1 -= 1
        eax = *eax
    while (i != 1)

int32_t eax_1 = eax[2]
int32_t edx_1 = arg2 * 7
int32_t* eax_2 = eax_1 + (edx_1 << 2)

if (*(eax_1 + (edx_1 << 2) + 0x14) u>= 0x10)
    eax_2 = *eax_2

return (*(*arg3 + 4))(eax_2)
