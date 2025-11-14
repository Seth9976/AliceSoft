// 函数: sub_55efd0
// 地址: 0x55efd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_20
int32_t eax_1 = data_78c474 ^ &var_20
int32_t* eax_2

if (arg2 s>= 0)
    eax_2 = *(arg1 + 4)

int32_t eax_6

if (arg2 s< 0 || arg2 s>= eax_2[9])
    sub_604c90(0x74c294)
else
    switch (*(eax_2[8] + (arg2 << 2)) - 0xc)
        case 0
            int32_t ebx
            ebx.b = sub_5603e0(sub_402be0(&var_20, arg3), arg2, arg1, &var_20) == 0
            sub_401110(&var_20)
            
            if (ebx.b == 0)
                goto label_55f096
            
            eax_6.b = 0
            sub_6b4885(eax_1 ^ &var_20)
            return eax_6
        case 1, 2, 3, 4, 5, 0x26
            sub_604c90(0x74c2bc)
        default
            int32_t ecx_8 = eax_2[1]
            int32_t edx_2 = *arg3
            
            if (arg2 u< ecx_8 u>> 2)
                if (ecx_8 == 0)
                    *(arg2 << 2) = edx_2
                    int32_t eax_7
                    eax_7.b = 1
                    sub_6b4885(eax_1 ^ &var_20)
                    return 1
                
                *(*eax_2 + (arg2 << 2)) = edx_2
            label_55f096:
                eax_6.b = 1
                sub_6b4885(eax_1 ^ &var_20)
                return eax_6
eax_2.b = 0
sub_6b4885(eax_1 ^ &var_20)
return eax_2
