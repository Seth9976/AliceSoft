// 函数: sub_50a8a0
// 地址: 0x50a8a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_4 = *arg1

if (ecx_4 != 0)
    (*(*ecx_4 + 4))()
    *arg1 = 0

arg1[1] = 0
arg1[2] = 0
arg1[3].b = 0
arg1[4] = 0
arg1[5].b = 0
int32_t* eax_3 = (*(*arg7 + 0x28))()
*arg1 = eax_3

if (eax_3 != 0)
    if ((*(*eax_3 + 8))(arg3, arg4, 1, arg5, arg2, arg6) != 0)
        arg1[2] = arg4
        arg1[1] = arg3
        arg1[3].b = arg6.b
        arg1[4] = arg2
        arg1[5].b = 1
        int32_t eax_5
        eax_5.b = 1
        return eax_5
    
    sub_51ddc0(0x754368)

eax_3.b = 0
return eax_3
