// 函数: sub_623570
// 地址: 0x623570
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1 = (*(**(arg1 + 4) + 8))()
void* eax_5 = (*(**(arg1 + 8) + 0xc))((*(**(arg1 + 4) + 0x18))(eax_1), arg2)
int32_t* edi_1 = (*(**(arg1 + 4) + 4))(eax_1)

if (edi_1 != 0 && arg2 s>= 0)
    int32_t eax_10
    int32_t edx_5
    edx_5:eax_10 = sx.q((*(*edi_1 + 0x14))())
    
    if (arg2 s< (eax_10 + (edx_5 & 3)) s>> 2)
        sub_623f50(arg3, arg1, eax_5, *((*(*edi_1 + 0x18))() + (arg2 << 2)))
        int32_t* eax_15
        eax_15.b = 1
        return eax_15

int32_t eax_7
eax_7.b = 0
return eax_7
