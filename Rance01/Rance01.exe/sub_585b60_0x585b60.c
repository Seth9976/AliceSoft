// 函数: sub_585b60
// 地址: 0x585b60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2
int32_t eax_1 = (*(*ebx + 0x10))()
int32_t esi = (*(*ebx + 0x14))()
int32_t var_18 = esi
(*(***(arg1 + 4) + 0x10))(ebx, 0, 0, arg4, 0, 0, eax_1, esi)
long double x87_r6 = fconvert.t(arg5)
int32_t ecx_5 = eax_1 - sub_70c710(float.t(eax_1 * 2) * x87_r6)
int32_t edx_5 = esi - sub_70c710(x87_r6 * float.t(esi * 2))
int32_t ebp_2 = eax_1 - ecx_5
int32_t ecx_7 = esi - edx_5
float result = 0f
int32_t var_14 = edx_5
int32_t var_10 = ebp_2
int32_t var_c = ecx_7
arg5 = 0f

if (ecx_7 s> 0)
    int32_t var_24_1 = 0
    arg2 = edx_5
    int32_t var_20_1 = esi - 1
    
    do
        if (arg2 s>= 0)
            result = arg5
            
            if (arg2 s>= esi)
                break
            
            if (result s>= esi)
                break
            
            int32_t esi_2 = ebp_2 - divs.dp.d(sx.q(var_24_1), ecx_7)
            int32_t eax_15 = (*(*ebx + 8))(0, arg2)
            int32_t ecx_10 = 0
            char* ebp_3 = (*(*arg4 + 8))(eax_1 - 1, var_20_1)
            
            if (esi_2 s> 0)
                char* eax_20 = eax_15 + (ecx_5 << 2) + 2
                
                do
                    if (ecx_5 + ecx_10 s>= 0)
                        if (ecx_5 + ecx_10 s>= eax_1)
                            break
                        
                        if (ecx_10 s>= eax_1)
                            break
                        
                        eax_20[0xfffffffe] = *ebp_3
                        eax_20[0xffffffff] = ebp_3[1]
                        *eax_20 = ebp_3[2]
                    
                    ecx_10 += 1
                    ebp_3 -= 4
                    eax_20 = &eax_20[4]
                while (ecx_10 s< esi_2)
            
            int32_t ebp_4 = esi_2 + ecx_5
            void* eax_23 = (*(*ebx + 8))(ebp_4, arg2)
            void* eax_25 = (*(*arg3 + 8))(ebp_4, arg2)
            
            if (ebp_4 s< eax_1)
                void* ecx_13 = eax_25 + 2
                void* esi_5 = eax_23 + 2
                int32_t i_1 = eax_1 - ebp_4
                int32_t i
                
                do
                    *(ecx_13 + eax_23 - eax_25 - 2) = *(ecx_13 - 2)
                    *(esi_5 - 1) = *(ecx_13 - 1)
                    *esi_5 = *ecx_13
                    ecx_13 += 4
                    esi_5 += 4
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            ecx_7 = var_c
            ebp_2 = var_10
            edx_5 = var_14
            esi = var_18
        
        arg5 += 1
        result = arg5
        var_24_1 += ebp_2
        var_20_1 -= 1
        arg2 += 1
    while (result s< ecx_7)

int32_t esi_7 = esi i- result - edx_5

if (esi_7 s> 0)
    int32_t edx_22 = edx_5 i+ result
    (*(***(arg1 + 4) + 0x10))(ebx, 0, edx_22, arg3, 0, edx_22, eax_1, esi_7)

result.b = 1
return result
