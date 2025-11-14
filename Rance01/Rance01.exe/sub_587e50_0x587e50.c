// 函数: sub_587e50
// 地址: 0x587e50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg2
int32_t arg_4
sub_58b230(&arg1[9], &arg2, &arg_4)
int32_t* ebx = arg2
int32_t arg_8
int32_t** eax_2

if (ebx != arg1[0xa])
    sub_42e070(&ebx[4], &arg2, &arg_8)
    eax_2 = arg2

if (ebx == arg1[0xa] || eax_2 == ebx[5] || eax_2[4] != ebp)
    int32_t* eax_3 = *arg1
    
    if (eax_3 == 0)
        eax_3.b = 0
        return eax_3
    
    if ((*(*eax_3 + 0x10c))(eax_3, arg_4, arg_8, ebp) s< 0)
        eax_3.b = 0
        return eax_3
    
    int32_t* var_14_3 = &arg_4
    *sub_4ccf80(sub_58b0d0(&arg1[9]), &arg_8) = ebp

eax_2.b = 1
return eax_2
