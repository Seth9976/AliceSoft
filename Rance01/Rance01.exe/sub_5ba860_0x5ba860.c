// 函数: sub_5ba860
// 地址: 0x5ba860
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_24
int32_t eax_1 = data_78c474 ^ &var_24

if (arg5 != 0)
    int32_t ecx = *arg5
    int32_t var_20
    __builtin_memset(&var_20, 0, 0x14)
    int32_t var_10_1 = arg5[1]
    int32_t var_14_1 = ecx
    int32_t var_18_1 = ecx
    int32_t eax_3 = sub_5b4d20(8, &var_20)
    int32_t var_c = 0
    int16_t var_8_1 = 0
    sub_5b9f50(&var_20, &var_c, 6)
    void* edx
    
    if (var_c == (*"vorbis")[0].d && (*"is")[0] == var_8_1.b)
        edx.b = (*"s")[0]
    
    if (var_c != (*"vorbis")[0].d || (*"is")[0] != var_8_1.b || edx.b != var_8_1:1.b)
        sub_6b4885(eax_1 ^ &var_24)
        return 0xffffff7c
    
    if (eax_3 == 1)
        if (arg5[2] != 0 && arg3[2] == 0)
            int32_t eax_14 = sub_5ba2f0(&var_20, arg3)
            sub_6b4885(eax_1 ^ &var_24)
            return eax_14
    else if (eax_3 == 3)
        if (arg3[2] != 0)
            int32_t eax_12 = sub_5ba3d0(&var_20, edx, arg4)
            sub_6b4885(eax_1 ^ &var_24)
            return eax_12
    else if (eax_3 == 5 && arg3[2] != eax_3 - 5 && arg4[3] != eax_3 - 5)
        int32_t* var_38 = arg3
        int32_t eax_10 = sub_5ba4f0(&var_20, edx)
        sub_6b4885(eax_1 ^ &var_24)
        return eax_10

sub_6b4885(eax_1 ^ &var_24)
return 0xffffff7b
