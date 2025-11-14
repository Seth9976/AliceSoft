// 函数: sub_6251e0
// 地址: 0x6251e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 4) == 0)
    return 0

int32_t eax_2 = (***(arg1 + 4))()
int32_t result = 0
int32_t esi = 0

if (eax_2 s> 0)
    do
        int32_t* eax_4 = (*(**(arg1 + 4) + 4))(esi)
        
        if (eax_4 != 0)
            result += (*(*eax_4 + 0x14))()
        
        esi += 1
    while (esi s< eax_2)

return result
