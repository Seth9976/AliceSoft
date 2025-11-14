// 函数: sub_624670
// 地址: 0x624670
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax_3 = (*(**(arg2 + 8) + 0x24))((*(**(arg2 + 4) + 0x1c))(arg1), arg3)
int32_t* edi_1 = (*(**(arg2 + 4) + 4))(arg1)

if (edi_1 != 0 && arg3 s>= 0)
    int32_t eax_8
    int32_t edx_4
    edx_4:eax_8 = sx.q((*(*edi_1 + 0x14))())
    
    if (arg3 s< (eax_8 + (edx_4 & 3)) s>> 2)
        sub_623f50(arg4, arg2, eax_3, *((*(*edi_1 + 0x18))() + (arg3 << 2)))
        int32_t* eax_13
        eax_13.b = 1
        return eax_13

int32_t eax_5
eax_5.b = 0
return eax_5
