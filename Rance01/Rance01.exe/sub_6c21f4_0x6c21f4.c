// 函数: sub_6c21f4
// 地址: 0x6c21f4
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == 0)
    _inconsistency()
    noreturn

char var_5 = 0
int32_t i = 0

if (*arg1 s> 0)
    int32_t var_c_1 = 0
    
    do
        int32_t* eax_2 = *(*(arg2 + 0x1c) + 0xc)
        int32_t j = *eax_2
        void* esi_1 = &eax_2[1]
        
        while (j s> 0)
            if (sub_6c1fa7(arg1[1] + var_c_1, *esi_1, *(arg2 + 0x1c)) != 0)
                var_5 = 1
                break
            
            j -= 1
            esi_1 += 4
        
        i += 1
        var_c_1 += 0x10
    while (i s< *arg1)

int32_t result
result.b = var_5
return result
