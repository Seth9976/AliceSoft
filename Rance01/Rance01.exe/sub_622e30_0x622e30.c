// 函数: sub_622e30
// 地址: 0x622e30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = *(arg1 + 4)
void* edi = *eax
int32_t eax_2 = (*(*eax + 0x20))()
*(arg1 + 4)
int32_t* esi_1 = (*(edi + 4))(eax_2)

if (esi_1 != 0 && arg2 s>= 0)
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 = sx.q((*(*esi_1 + 0x14))())
    
    if (arg2 s< (eax_6 + (edx_3 & 3)) s>> 2)
        *arg3 = *((*(*esi_1 + 0x18))() + (arg2 << 2))
        int32_t eax_10
        eax_10.b = 1
        return eax_10

int32_t eax_3
eax_3.b = 0
return eax_3
