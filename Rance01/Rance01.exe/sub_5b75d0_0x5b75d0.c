// 函数: sub_5b75d0
// 地址: 0x5b75d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = *(arg1 + 0x1c)
int32_t i = 0
int32_t var_114 = 0
int32_t var_11c = 0xffffffff
int32_t edx
int32_t* result_2 = _calloc(arg1, edx, ecx, 1, 0x460)
int32_t* result = result_2
int32_t eax_2 = sub_5b4d20(5, arg2)
*result_2 = eax_2

if (eax_2 s> 0)
    void* ebx_1 = &result_2[1]
    
    do
        int32_t eax_3 = sub_5b4d20(4, arg2)
        *ebx_1 = eax_3
        
        if (eax_3 s< 0)
            goto label_5b7862
        
        if (var_11c s< eax_3)
            var_11c = eax_3
        
        i += 1
        ebx_1 += 4
    while (i s< *result_2)

int32_t ebx_3 = var_11c + 1
int32_t var_110_1 = 0
int32_t var_108 = ebx_3

if (ebx_3 s> 0)
    void* var_11c_1 = &result_2[0x50]
    void* esi = &result_2[0x40]
    int32_t eax_12
    
    do
        *(esi - 0x80) = sub_5b4d20(3, arg2) + 1
        int32_t eax_6 = sub_5b4d20(2, arg2)
        *(esi - 0x40) = eax_6
        
        if (eax_6 s< 0)
            goto label_5b7862
        
        if (eax_6 != 0)
            *esi = sub_5b4d20(8, arg2)
        
        int32_t eax_8 = *esi
        
        if (eax_8 s< 0)
            goto label_5b7862
        
        if (eax_8 s>= *(ecx + 0x18))
            goto label_5b7862
        
        int32_t i_1 = 0
        
        if (1 << (*(esi - 0x40)).b s> 0)
            void* ebx_4 = var_11c_1
            
            do
                int32_t eax_10 = sub_5b4d20(8, arg2) - 1
                *ebx_4 = eax_10
                
                if (eax_10 s< 0xffffffff)
                    goto label_5b7856
                
                if (eax_10 s>= *(ecx + 0x18))
                    goto label_5b7856
                
                i_1 += 1
                ebx_4 += 4
            while (i_1 s< 1 << (*(esi - 0x40)).b)
            
            ebx_3 = var_108
        
        var_11c_1 += 0x20
        result_2 = result
        eax_12 = var_110_1 + 1
        esi += 4
        var_110_1 = eax_12
    while (eax_12 s< ebx_3)

result_2[0xd0] = sub_5b4d20(2, arg2) + 1
int32_t eax_15 = sub_5b4d20(4, arg2)

if (eax_15 s>= 0)
    int32_t* result_1 = result
    int32_t ebp = 0
    int32_t var_110_2 = 0
    int32_t esi_2
    
    if (*result_1 s<= 0)
        esi_2 = 0
    else
        void* var_11c_2 = &result_1[1]
        
        while (true)
            esi_2 = var_114 + result_1[*var_11c_2 + 0x20]
            var_114 = esi_2
            
            if (esi_2 s> 0x3f)
                goto label_5b7856
            
            if (ebp s< esi_2)
                void* esi_3 = &result[ebp + 0xd3]
                
                do
                    int32_t eax_17 = sub_5b4d20(eax_15, arg2)
                    *esi_3 = eax_17
                    
                    if (eax_17 s< 0)
                        goto label_5b7856
                    
                    if (eax_17 s>= 1 << eax_15.b)
                        goto label_5b7856
                    
                    ebp += 1
                    esi_3 += 4
                while (ebp s< var_114)
                
                esi_2 = var_114
            
            var_11c_2 += 4
            int32_t eax_19 = var_110_2 + 1
            var_110_2 = eax_19
            
            if (eax_19 s>= *result)
                result_1 = result
                break
            
            result_1 = result
    
    result_1[0xd1] = 0
    result_1[0xd2] = 1 << eax_15.b
    int32_t i_2 = 0
    int32_t var_104[0x41]
    
    if (esi_2 + 2 s> 0)
        void* ecx_10 = &result_1[0xd1]
        
        do
            var_104[i_2] = ecx_10
            i_2 += 1
            ecx_10 += 4
        while (i_2 s< esi_2 + 2)
    
    sub_6b6b50(&var_104, esi_2 + 2, 4, sub_5b75b0)
    int32_t eax_20 = 1
    
    if (esi_2 + 2 s<= 1)
        return result
    
    while (*(&var_108)[eax_20] != *var_104[eax_20])
        eax_20 += 1
        
        if (eax_20 s>= esi_2 + 2)
            return result
    
label_5b7856:
    result_2 = result

label_5b7862:
sub_6bc670(result_2, 0, 0x460)
__free_base(result_2)
return 0
