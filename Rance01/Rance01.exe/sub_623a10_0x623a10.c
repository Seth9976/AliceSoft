// 函数: sub_623a10
// 地址: 0x623a10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = (*(**(arg1 + 4) + 4))(arg2)

if (edi != 0 && arg3 s>= 0)
    int32_t eax_4
    int32_t edx_2
    edx_2:eax_4 = sx.q((*(*edi + 0x14))())
    
    if (arg3 s< (eax_4 + (edx_2 & 3)) s>> 2)
        float edi_1 = *((*(*edi + 0x18))() + (arg3 << 2))
        sub_622f00((*(**(arg1 + 8) + 0xc))((*(**(arg1 + 4) + 0x18))(arg2), arg3), arg1, edi_1, arg4)
        int32_t* eax_12
        eax_12.b = 1
        return eax_12

int32_t eax_1
eax_1.b = 0
return eax_1
