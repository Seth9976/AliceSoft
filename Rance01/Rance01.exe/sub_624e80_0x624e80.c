// 函数: sub_624e80
// 地址: 0x624e80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = arg1 * 3
int32_t* esi = (*(**(arg2 + 4) + 4))(arg3)

if (esi != 0 && edi s>= 0)
    int32_t eax_5
    int32_t edx_3
    edx_3:eax_5 = sx.q((*(*esi + 0x14))())
    
    if (edi s< (eax_5 + (edx_3 & 3)) s>> 2)
        *arg4 = *((*(*esi + 0x18))() + (edi << 2))
        int32_t eax_9
        eax_9.b = 1
        return eax_9

int32_t eax_2
eax_2.b = 0
return eax_2
