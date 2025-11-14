// 函数: sub_5314d0
// 地址: 0x5314d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char var_20
int32_t eax_1 = data_78c474 ^ &var_20

if (arg2 u< (*(arg4 + 0xc) - *(arg4 + 8)) s>> 2)
    int32_t* ebp_1 = *(*(arg4 + 8) + (arg2 << 2))
    
    if (ebp_1 != 0)
        if (arg1 == 0x7fffffff)
            int32_t var_c = 0xf
            int32_t var_10 = 0
            var_20 = 0
            sub_401270(&var_20, nullptr, 0x72d98e)
            int32_t ebx
            ebx.b = sub_550660(ebp_1, &var_20) == 0
            
            if (var_c u>= 0x10)
                int32_t var_34_1 = var_20.d
                sub_6b4d5b()
            
            sub_6b4885(eax_1 ^ &var_20)
            return ebx.b == 0
        
        if (arg1 s>= 0 && arg1 s< (*(arg3 + 0x24) - *(arg3 + 0x20)) s/ 0x1c)
            bool cond:1 = sub_550660(ebp_1, *(arg3 + 0x20) + arg1 * 0x1c) != 0
            sub_6b4885(eax_1 ^ &var_20)
            return cond:1

void* eax_2
eax_2.b = 0
sub_6b4885(eax_1 ^ &var_20)
return eax_2
