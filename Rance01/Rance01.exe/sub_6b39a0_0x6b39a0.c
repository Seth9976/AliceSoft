// 函数: sub_6b39a0
// 地址: 0x6b39a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* Msg = arg2

if (Msg == 0x81)
    int32_t esi_1 = *arg4
    
    if (esi_1 == 0)
        return DefWindowProcA(arg1, 0x81, arg3, arg4)
    
    *sub_6b3a50(&arg1) = esi_1

sub_6b3d20(&arg2, &arg1)
int32_t* eax_6 = arg2

if (eax_6 != data_797e30)
    int32_t* esi_2 = eax_6[4]
    
    if (Msg == 2)
        sub_6b3ad0(&arg2, eax_6)
        *esi_2 = 0
    
    int32_t* ecx_2 = esi_2[0x23]
    
    if (ecx_2 != 0)
        return (**ecx_2)(arg1, Msg, arg3, arg4)

return DefWindowProcA(arg1, Msg, arg3, arg4)
