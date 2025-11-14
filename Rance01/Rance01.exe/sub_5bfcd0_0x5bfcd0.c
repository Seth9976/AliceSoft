// 函数: sub_5bfcd0
// 地址: 0x5bfcd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_74
int32_t eax_1 = data_78c474 ^ &var_74
int32_t ebp = 0
int32_t ecx = arg3[0xd]
int32_t ebx = arg3[0xb]
int32_t esi = arg3[0xc]
void* eax_3 = *arg3
int32_t ecx_2 = ebx s>> 1
void* var_68 = eax_3
int32_t result_1 = 0
int32_t var_24
__builtin_memset(&var_24, 0, 0x20)
int32_t __saved_edi

if (ecx == 1)
    if (eax_3 s> 0)
        int32_t edx_12 = arg4 - &var_24
        void* eax_11 = &(&__saved_edi)[eax_3 + 0x18]
        int32_t var_6c_2 = edx_12
        var_74 = var_68
        
        while (true)
            int32_t eax_14 = *(eax_11 - 4 + edx_12) - esi
            int32_t edx_15
            
            if (eax_14 s>= ecx_2)
                edx_15 = (eax_14 - ecx_2) * 2
            else
                edx_15 = (ecx_2 - eax_14) * 2 - 1
            
            if (edx_15 s< 0)
                edx_15 = 0
            else if (edx_15 s>= ebx)
                edx_15 = ebx - 1
            
            int32_t result_4 = result_1 * ebx + edx_15
            void* temp2_1 = var_74
            var_74 -= 1
            eax_11 -= 4
            result_1 = result_4
            *eax_11 = eax_14 + esi
            
            if (temp2_1 == 1)
                break
            
            edx_12 = var_6c_2
        
        eax_3 = var_68
        ebp = 0
else if (eax_3 s> 0)
    void* edx_3 = arg4 - &var_24
    void* edi_1 = &(&__saved_edi)[eax_3 + 0x18]
    void* var_6c_1 = edx_3
    var_74 = eax_3
    
    while (true)
        int32_t eax_4 = *(edx_3 + edi_1 - 4)
        edi_1 -= 4
        int32_t temp0_1 = divs.dp.d(sx.q(eax_4 - esi + (ecx s>> 1)), ecx)
        int32_t edx_8
        
        if (temp0_1 s>= ecx_2)
            edx_8 = (temp0_1 - ecx_2) * 2
        else
            edx_8 = (ecx_2 - temp0_1) * 2 - 1
        
        if (edx_8 s< 0)
            edx_8 = 0
        else if (edx_8 s>= ebx)
            edx_8 = ebx - 1
        
        int32_t result_3 = result_1 * ebx + edx_8
        void* temp3_1 = var_74
        var_74 -= 1
        result_1 = result_3
        *edi_1 = temp0_1 * ecx + esi
        
        if (temp3_1 == 1)
            break
        
        edx_3 = var_6c_1
    
    eax_3 = var_68
    ebp = 0

void* ecx_3 = arg3[3]
int32_t edx_19 = *(ecx_3 + 8)
var_74 = ecx_3
int32_t result = result_1

if (*(edx_19 + (result << 2)) s<= 0)
    int32_t edi_2 = arg3[1]
    int32_t i_1 = (ebx - 1) * ecx + esi
    int32_t var_60_3 = 0xffffffff
    int32_t var_44
    __builtin_memset(&var_44, 0, 0x20)
    int32_t i_2 = i_1
    int32_t result_2 = 0
    
    if (edi_2 s> 0)
        var_74 = *(var_74 + 8)
        int32_t result_5
        
        do
            if (*var_74 s> 0)
                void* ecx_5 = var_68
                int32_t ebx_1 = 0
                int32_t eax_17 = 0
                int32_t esi_1 = 0
                int32_t var_6c_3 = 0
                
                if (ecx_5 s>= 2)
                    int32_t* eax_18 = arg4
                    void* esi_2 = &var_44 - eax_18
                    int32_t var_40
                    void* edi_3 = &var_40 - eax_18
                    int32_t i_3 = ((ecx_5 - 2) u>> 1) + 1
                    int32_t ecx_6 = i_3 * 2
                    int32_t i
                    
                    do
                        int32_t ecx_8 = *(esi_2 + eax_18) - *eax_18
                        eax_18 = &eax_18[2]
                        ebx_1 += ecx_8 * ecx_8
                        int32_t ecx_11 = *(edi_3 + eax_18 - 8) - eax_18[-1]
                        var_6c_3 += ecx_11 * ecx_11
                        i = i_3
                        i_3 -= 1
                    while (i != 1)
                    i_1 = i_2
                    esi_1 = ecx_6
                    ecx_5 = var_68
                    ebp = 0
                    eax_17 = 0
                
                if (esi_1 s< ecx_5)
                    int32_t eax_20 = (&var_44)[esi_1] - arg4[esi_1]
                    eax_17 = eax_20 * eax_20
                
                int32_t eax_21 = eax_17 + var_6c_3 + ebx_1
                
                if (var_60_3 == 0xffffffff || eax_21 s< var_60_3)
                    var_60_3 = eax_21
                    __builtin_memcpy(&var_24, &var_44, 0x20)
                    result_1 = result_2
            
            int32_t ecx_17 = 0
            
            if (var_44 s>= i_1)
                int32_t* eax_23 = &var_44
                
                do
                    ecx_17 += 1
                    *eax_23 = 0
                    eax_23 = &(&__saved_edi)[ecx_17 + 0x10]
                while ((&var_44)[ecx_17] s>= i_1)
            
            int32_t eax_24 = (&var_44)[ecx_17]
            
            if (eax_24 s>= 0)
                (&__saved_edi)[ecx_17 + 0x10] = eax_24 + ecx
            
            int32_t eax_26 = (&__saved_edi)[ecx_17 + 0x10]
            var_74 += 4
            (&__saved_edi)[ecx_17 + 0x10] = neg.d(eax_26)
            result_5 = result_2 + 1
            result_2 = result_5
        while (result_5 s< edi_2)
        result = result_1
    
    eax_3 = var_68

int32_t* edx_24 = arg4

if (result s> 0xffffffff && eax_3 s> 0)
    do
        *edx_24 -= (&var_24)[ebp]
        ebp += 1
        edx_24 = &edx_24[1]
    while (ebp s< eax_3)

sub_6b4885(eax_1 ^ &var_74)
return result
