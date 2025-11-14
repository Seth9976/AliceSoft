// 函数: sub_587d60
// 地址: 0x587d60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2
int32_t arg_4
sub_42e070(&arg1[1], &arg2, &arg_4)
int32_t** eax_1 = arg2

if (eax_1 == arg1[2] || eax_1[4] != ebx)
    int32_t* esi_1 = *arg1
    
    if ((*(*esi_1 + 0xe4))(esi_1, arg_4, ebx) s< 0)
        int32_t eax_3
        eax_3.b = 0
        return eax_3
    
    *sub_5cc1d0(&arg1[1], &arg_4) = ebx

eax_1.b = 1
return eax_1
