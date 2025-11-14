// 函数: sub_40d4f0
// 地址: 0x40d4f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char var_20
BOOL result = data_78c474 ^ &var_20
BOOL result_1 = result

if (arg1 != 0)
    int128_t* eax_2 = (**arg1)()
    char* ecx_1 = eax_2
    int32_t var_c_1 = 0xf
    int32_t var_10_1 = 0
    var_20 = 0
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    sub_401270(&var_20, ecx_1 - &ecx_1[1], eax_2)
    result = sub_6b2660(&var_20, data_797d30)
    
    if (var_c_1 u>= 0x10)
        int32_t __saved_esi_1 = var_20.d
        result = sub_6b4d5b()

sub_6b4885(result_1 ^ &var_20)
return result
