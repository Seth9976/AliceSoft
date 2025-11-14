// 函数: sub_5c0dd0
// 地址: 0x5c0dd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result_2
int32_t eax_1 = data_78c474 ^ &result_2
int32_t ebx = arg3
int32_t ebp = arg2
int32_t var_8c = arg1
int32_t eax_3 = ebx

if (ebx == 0)
    eax_3 = ebp

int32_t* result_1 = sub_6b5c43(eax_3 << 2)
result_2 = result_1
void var_88
sub_6bc670(&var_88, 0, 0x84)
int32_t edi = 0
int32_t* result

if (ebp s> 0)
    int32_t* result_3 = result_1
    
    while (true)
        int32_t i_2 = *(var_8c + (edi << 2))
        
        if (i_2 s> 0)
            int32_t esi = *(&var_88 + (i_2 << 2))
            
            if (i_2 s< 0x20 && esi u>> i_2.b != 0)
                __free_base(result_2)
                result = nullptr
                goto label_5c0f63
            
            *result_3 = esi
            result_3 = &result_3[1]
            int32_t i = i_2
            
            do
                int32_t edx_3 = *(&var_88 + (i << 2))
                
                if ((edx_3.b & 1) != 0)
                    int32_t __saved_edi
                    
                    if (i != 1)
                        (&__saved_edi)[i + 6] = (&var_8c)[i] * 2
                    else
                        int32_t var_84 = var_84 + 1
                    break
                
                *(&var_88 + (i << 2)) = edx_3 + 1
                i -= 1
            while (i s> 0)
            
            for (int32_t i_1 = i_2 + 1; i_1 s< 0x21; i_1 += 1)
                int32_t ecx_1 = *(&var_88 + (i_1 << 2))
                
                if (ecx_1 u>> 1 != esi)
                    break
                
                esi = ecx_1
                *(&var_88 + (i_1 << 2)) = (&var_8c)[i_1] * 2
        else if (arg3 == 0)
            result_3 = &result_3[1]
        
        edi += 1
        
        if (edi s>= ebp)
            result_1 = result_2
            ebx = arg3
            break

if (ebx == 1)
label_5c0f08:
    int32_t ebx_1 = 0
    
    if (ebp s> 0)
        int32_t* result_4 = result_1
        
        do
            int32_t edx_11 = *(var_8c + (ebx_1 << 2))
            int32_t eax_8 = 0
            int32_t ecx_5 = 0
            
            if (edx_11 s> 0)
                do
                    uint32_t ebp_2 = *result_4 u>> ecx_5.b
                    ecx_5 += 1
                    eax_8 = (eax_8 * 2) | (ebp_2 & 1)
                while (ecx_5 s< edx_11)
                
                ebp = arg2
            
            if (arg3 == 0 || edx_11 != 0)
                *result_4 = eax_8
                result_4 = &result_4[1]
            
            ebx_1 += 1
        while (ebx_1 s< ebp)
        
        result_1 = result_2
    
    result = result_1
else
    int32_t eax_7 = 1
    
    while ((*(&var_88 + (eax_7 << 2)) & 0xffffffff u>> (0x20 - eax_7.b)) == 0)
        eax_7 += 1
        
        if (eax_7 s>= 0x21)
            goto label_5c0f08
    
    __free_base(result_1)
    result = nullptr

label_5c0f63:
sub_6b4885(eax_1 ^ &result_2)
return result
