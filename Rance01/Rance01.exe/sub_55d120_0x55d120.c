// 函数: sub_55d120
// 地址: 0x55d120
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_20
int32_t eax_1 = data_78c474 ^ &var_20
int32_t* ecx = *(arg1 + 4)

if (ecx[1] u>> 2 s> 0)
    int32_t eax_4 = ecx[0xd]
    
    if (eax_4 == 0x11 || ecx[0xc] != 0)
        sub_604c90(0x74c648)
    else
        if (eax_4 == 0x10)
            sub_402be0(&var_20, arg3)
            int32_t ebx
            ebx.b = sub_5603e0(&var_20, arg2, arg1, &var_20) == 0
            sub_401110(&var_20)
            
            if (ebx.b != 0)
                sub_6b4885(eax_1 ^ &var_20)
                return 0
            
            sub_6b4885(eax_1 ^ &var_20)
            return 1
        
        if (sub_54f950(ecx, arg2, *arg3) != 0)
            sub_6b4885(eax_1 ^ &var_20)
            return 1
else
    sub_604c90(0x74c620)

sub_6b4885(eax_1 ^ &var_20)
return 0
