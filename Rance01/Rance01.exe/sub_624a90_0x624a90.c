// 函数: sub_624a90
// 地址: 0x624a90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg3
int32_t* esi = (*(**(arg2 + 4) + 4))(arg1)

if (esi != 0 && ebx s>= 0)
    int32_t eax_4
    int32_t edx_2
    edx_2:eax_4 = sx.q((*(*esi + 0x14))())
    
    if (ebx s< (eax_4 + (edx_2 & 3)) s>> 2)
        float ebx_1 = *((*(*esi + 0x18))() + (ebx << 2))
        
        if (sub_6249c0(&arg3, arg2).b != 0)
            sub_622f00(arg3, arg2, ebx_1, arg4)
            int32_t* eax_9
            eax_9.b = 1
            return eax_9

int32_t eax_1
eax_1.b = 0
return eax_1
