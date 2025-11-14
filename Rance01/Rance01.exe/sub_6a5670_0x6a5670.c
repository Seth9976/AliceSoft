// 函数: sub_6a5670
// 地址: 0x6a5670
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_44
int32_t eax_1 = data_78c474 ^ &var_44
int32_t eax_2 = arg1[8]
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(arg1[0x14])
int32_t ebx = arg1[0xf]
int32_t eax_8 = (arg1[1] - *arg1) s>> 5
int32_t ebp_1 = (eax_4 - edx) s>> 1
int32_t var_40 = 0
int32_t result = 0

if (eax_8 s> 0)
    int32_t var_3c_1 = 0
    int32_t result_1
    
    do
        int32_t* eax_10 = *arg1 + var_3c_1
        
        if (eax_10[7].b != 0)
            char var_41_1
            int32_t var_20
            
            if (arg4 s>= eax_2)
                var_41_1 = 0
            else
                int32_t ecx_3 = arg3 + arg2
                var_40 |= 1
                
                if (*(sub_66fc20(&var_20, eax_10) + 0x10) * ebp_1 + ebx u<= ecx_3)
                    var_41_1 = 0
                else
                    var_41_1 = 1
                    
                    if (ebx u>= ecx_3)
                        var_41_1 = 0
            
            int32_t var_c
            
            if ((var_40.b & 1) != 0)
                var_40 &= 0xfffffffe
                
                if (var_c u>= 0x10)
                    int32_t var_54_2 = var_20
                    sub_6b4d5b()
            
            if (var_41_1 != 0)
                arg1[0x1e] = result
                sub_6b4885(eax_1 ^ &var_44)
                return result
            
            ebx += *(sub_66fc20(&var_20, *arg1 + var_3c_1) + 0x10) * ebp_1
            
            if (var_c u>= 0x10)
                int32_t var_54_4 = var_20
                sub_6b4d5b()
        
        var_3c_1 += 0x20
        result_1 = result + 1
        result = result_1
    while (result_1 s< eax_8)

sub_6b4885(eax_1 ^ &var_44)
return 0xffffffff
