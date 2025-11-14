// 函数: sub_5486d0
// 地址: 0x5486d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0x2b0) -= 4
int32_t edx = **(arg1 + 0x2b0)
*(arg1 + 0x2b0) -= 4
int32_t* eax_2 = **(arg1 + 0x2b0)

if (eax_2 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    eax_2 = *(*(arg1 + 0x1e4) + (eax_2 << 2))
    
    if (eax_2 != 0)
        **(arg1 + 0x2b0) = sub_550a00(eax_2, edx)
        *(arg1 + 0x2b0) += 4
        uint32_t result
        result.b = 1
        return result

return sub_53d1c0(eax_2, edx, arg1, 0x7501ec)
