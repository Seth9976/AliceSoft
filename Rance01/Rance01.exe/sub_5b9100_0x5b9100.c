// 函数: sub_5b9100
// 地址: 0x5b9100
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg2
int32_t* ebx = *(ebp + 0x510)
int32_t eax_1 = *(*(*(arg1[0x10] + 4) + 0x1c) + 0xb20)
void* edi = &arg1[1]
int32_t* var_10 = ebx

if (sub_5b4d20(1, edi) != 1)
    return 0

int32_t* result_1 = sub_5b4eb0(*(ebp + 0x504) * 4, arg1)
int32_t ecx_1 = *(ebp + 0x50c)
uint32_t i = ecx_1 - 1
int32_t* result = result_1
arg1 = result
int32_t eax_6 = 0

if (ecx_1 != 1)
    do
        eax_6 += 1
        i u>>= 1
    while (i != 0)

*result = sub_5b4d20(eax_6, edi)
int32_t ecx_2 = *(ebp + 0x50c)
uint32_t i_1 = ecx_2 - 1
int32_t eax_8 = 0

if (ecx_2 != 1)
    do
        eax_8 += 1
        i_1 u>>= 1
    while (i_1 != 0)

result[1] = sub_5b4d20(eax_8, edi)
int32_t i_3 = 0
int32_t var_28_1 = 2

if (*ebx s> 0)
    int32_t* var_24_1 = &ebx[1]
    int32_t i_2
    
    do
        int32_t esi_1 = *var_24_1
        int32_t ecx_4 = ebx[esi_1 + 0x30]
        int32_t eax_10 = ebx[esi_1 + 0x20]
        int32_t ebp_1 = 0
        
        if (ecx_4 != 0)
            int32_t ecx_6 = ebx[esi_1 + 0x40] * 7
            void* ebp_2 = eax_1 + (ecx_6 << 3)
            
            if (*(eax_1 + (ecx_6 << 3) + 8) s<= 0)
                return 0
            
            int32_t eax_13 = sub_5b6470(ebp_2, edi)
            
            if (eax_13 s< 0)
                return 0
            
            ebp_1 = *(*(ebp_2 + 0x18) + (eax_13 << 2))
            
            if (ebp_1 == 0xffffffff)
                return 0
        
        int32_t edx_3 = eax_10
        int32_t var_14_1 = 0
        
        if (edx_3 s> 0)
            void* edi_4 = &arg1[var_28_1]
            int32_t eax_21
            
            do
                int32_t eax_16 = ebx[(((1 << ecx_4.b) - 1) & ebp_1) + (esi_1 << 3) + 0x50]
                ebp_1 s>>= ecx_4.b
                
                if (eax_16 s< 0)
                    *edi_4 = 0
                else
                    int32_t edx_5 = eax_16 * 7
                    void* esi_2 = eax_1 + (edx_5 << 3)
                    int32_t eax_18
                    
                    if (*(eax_1 + (edx_5 << 3) + 8) s> 0)
                        eax_18 = sub_5b6470(esi_2, edi)
                    
                    int32_t eax_19
                    
                    if (*(eax_1 + (edx_5 << 3) + 8) s<= 0 || eax_18 s< 0)
                        eax_19 = 0xffffffff
                    else
                        eax_19 = *(*(esi_2 + 0x18) + (eax_18 << 2))
                    
                    *edi_4 = eax_19
                    
                    if (eax_19 == 0xffffffff)
                        return 0
                    
                    edx_3 = eax_10
                
                eax_21 = var_14_1 + 1
                edi_4 += 4
                var_14_1 = eax_21
            while (eax_21 s< edx_3)
        
        var_28_1 += edx_3
        var_24_1 = &var_24_1[1]
        i_2 = i_3 + 1
        i_3 = i_2
    while (i_2 s< *ebx)
    result = arg1
    ebp = arg2

int32_t var_2c_1 = 2

if (*(ebp + 0x504) s> 2)
    void* ebp_3 = ebp + 0x30c
    void* var_24_2 = &ebx[0xd3]
    
    while (true)
        int32_t eax_24 = *(ebp_3 + 0xfc)
        int32_t edi_5 = ebx[eax_24 + 0xd1]
        int32_t ebx_1 = *ebp_3
        int32_t esi_4 = result[eax_24] & 0x7fff
        int32_t ecx_17 = (arg1[ebx_1] & 0x7fff) - esi_4
        int32_t eax_26
        int32_t edx_7
        edx_7:eax_26 = sx.q(ecx_17)
        int32_t temp0_1 = divs.dp.d(sx.q(((eax_26 ^ edx_7) - edx_7) * (*var_24_2 - edi_5)), 
            var_10[ebx_1 + 0xd1] - edi_5)
        int32_t esi_5
        
        if (ecx_17 s>= 0)
            esi_5 = esi_4 + temp0_1
        else
            esi_5 = esi_4 - temp0_1
        
        int32_t edx_15 = *(arg2 + 0x50c) - esi_5
        int32_t ebx_4 = edx_15
        
        if (edx_15 s>= esi_5)
            ebx_4 = esi_5
        
        int32_t eax_33 = arg1[var_2c_1]
        
        if (eax_33 == 0)
            arg1[var_2c_1] = esi_5 | 0x8000
        else
            int32_t eax_34
            
            if (eax_33 s< ebx_4 * 2)
                if ((eax_33.b & 1) == 0)
                    eax_34 = eax_33 s>> 1
                else
                    eax_34 = neg.d((eax_33 + 1) s>> 1)
            else if (edx_15 s<= esi_5)
                eax_34 = edx_15 - eax_33 - 1
            else
                eax_34 = eax_33 - esi_5
            
            arg1[var_2c_1] = (eax_34 + esi_5) & 0x7fff
            int32_t edx_17 = *(ebp_3 + 0xfc)
            arg1[edx_17] &= 0x7fff
            int32_t eax_39 = *ebp_3
            arg1[eax_39] &= 0x7fff
        
        var_24_2 += 4
        result = arg1
        int32_t edi_7 = var_2c_1 + 1
        ebp_3 += 4
        var_2c_1 = edi_7
        
        if (edi_7 s>= *(arg2 + 0x504))
            break
        
        ebx = var_10

return result
