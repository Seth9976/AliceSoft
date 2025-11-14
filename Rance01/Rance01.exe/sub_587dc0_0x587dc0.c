// 函数: sub_587dc0
// 地址: 0x587dc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg2
int32_t arg_4
sub_58b230(&arg1[5], &arg2, &arg_4)
int32_t* ebx = arg2
int32_t arg_8
int32_t* eax_2

if (ebx != arg1[6])
    sub_42e070(&ebx[4], &arg2, &arg_8)
    eax_2 = arg2

if (ebx == arg1[6] || eax_2 == ebx[5] || eax_2[4] != ebp)
    int32_t* eax_3 = *arg1
    
    if ((*(*eax_3 + 0x114))(eax_3, arg_4, arg_8, ebp) s< 0)
        int32_t eax_4
        eax_4.b = 0
        return eax_4
    
    int32_t* var_14_3 = &arg_4
    *sub_4ccf80(sub_58b0d0(&arg1[5]), &arg_8) = ebp

eax_2.b = 1
return eax_2
