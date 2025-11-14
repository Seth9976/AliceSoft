// 函数: sub_62d350
// 地址: 0x62d350
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebp = arg3
void* esi = arg1
void* var_3c = esi
int32_t var_44 = arg2
char eax_6 = sub_402680(&(*U"\\n\n\t ")[2], arg4)
char eax_7

if (eax_6 == 0)
    eax_7 = sub_402680(&(*U"\\n\n\t ")[3], arg4)

int32_t* result_2
int32_t* result

if (eax_6 != 0 || eax_7 != 0)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_401270(&var_2c, 1, &(*U"\\n\n\t ")[4])
    int32_t var_4 = 0
    result = sub_62b4c0(*(var_3c + 0x9c), var_3c + 0xdc, &var_2c)
    int32_t var_4_1 = 0xffffffff
    result_2 = result
    
    if (var_18_1 u>= 0x10)
        int32_t var_64_2 = var_2c.d
        result = sub_6b4d5b()
    
    esi = var_3c
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
else
    result = sub_62b4c0(*(esi + 0x9c), esi + 0xdc, arg4)
    result_2 = result

if (result_2 != 0)
    int32_t* result_4 = *(esi + 0x9c)
    int32_t* result_1 = result_4
    uint32_t j_4 = (arg4[4] * result_4) u>> 1
    uint32_t j_2 = j_4
    
    if (var_44 s< 0)
        j_4 += var_44
        j_2 = j_4
        var_44 = 0
    
    if (ebp s< 0)
        result_1 += ebp
        ebp = 0
    
    if (var_44 + j_4 s> (*(*(esi + 0xa8) + 0x10))(eax_4))
        uint32_t j_3 = (*(*(esi + 0xa8) + 0x10))() - var_44
        j_2 = j_3
        j_4 = j_3
    
    result = (*(*(esi + 0xa8) + 0x14))()
    int32_t* result_3 = result_1
    void* ecx_9
    
    if (result_3 + ebp s> result)
        int32_t eax_16
        eax_16, ecx_9 = (*(*(esi + 0xa8) + 0x14))()
        result = eax_16 - ebp
        result_1 = result
        result_3 = result
    
    if (j_4 s> 0 && result_3 s> 0)
        char eax_17
        
        if (*(esi + 0x1bc) s>= ebp || *(esi + 0x1c4) s<= result_3 + ebp)
            eax_17 = 0
        else
            eax_17 = 1
        
        ecx_9.b = eax_17
        int32_t eax_18 = *(esi + 0x1c4)
        char eax_19
        
        if (eax_18 s>= ebp || *(esi + 0x1bc) s<= result_3 + ebp)
            eax_19 = 0
        else
            eax_19 = 1
        
        ecx_9.b |= eax_19
        char var_49_1 = ecx_9.b
        int32_t eax_20 = sub_70c710(float.t(j_2) * fconvert.t(-0.80000000000000004))
        int32_t esi_2 = *(esi + 0x1b8)
        int32_t ecx_12 = var_44 - eax_20
        int32_t ecx_13
        
        if (esi_2 s<= ecx_12)
            ecx_13 = *(var_3c + 0x1bc)
        
        char eax_24
        void* edx_7
        
        if (esi_2 s> ecx_12 || ecx_13 s< ebp)
            edx_7 = var_3c
            eax_24 = 0
        else
            edx_7 = var_3c
            void* eax_23 = result_1 + ebp
            
            if (ecx_13 s> eax_23 || *(edx_7 + 0x1c0) s< var_44 + j_4 || eax_18 s< ebp
                    || eax_18 s> eax_23)
                eax_24 = 0
            else
                eax_24 = 1
        
        char eax_27
        
        if (esi_2 s> ecx_12)
            eax_27 = 0
        else
            int32_t ecx_17 = *(edx_7 + 0x1bc)
            
            if (ecx_17 s< ebp)
                eax_27 = 0
            else
                void* eax_26 = result_1 + ebp
                
                if (ecx_17 s> eax_26 || eax_18 s<= eax_26)
                    eax_27 = 0
                else
                    eax_27 = 1
        
        int32_t ebx_3 = j_4 + var_44
        char eax_30
        
        if (esi_2 s< ebx_3)
            eax_30 = 0
        else
            int32_t ecx_18 = *(edx_7 + 0x1bc)
            
            if (ecx_18 s< ebp)
                eax_30 = 0
            else
                void* eax_29 = result_1 + ebp
                
                if (ecx_18 s> eax_29 || *(edx_7 + 0x1c0) s> ecx_12 || eax_18 s< ebp
                        || eax_18 s> eax_29)
                    eax_30 = 0
                else
                    eax_30 = 1
        
        int32_t eax_31
        
        if (esi_2 s>= ebx_3)
            eax_31 = *(edx_7 + 0x1bc)
        
        char eax_32
        
        if (esi_2 s< ebx_3 || eax_31 s< ebp || eax_31 s> result_1 + ebp || eax_18 s>= ebp)
            eax_32 = 0
        else
            eax_32 = 1
        
        int32_t ecx_23 = *(edx_7 + 0x1bc)
        char eax_34
        
        if (ecx_23 s>= ebp || *(edx_7 + 0x1c0) s< ebx_3 || eax_18 s< ebp
                || eax_18 s> result_1 + ebp)
            eax_34 = 0
        else
            eax_34 = 1
        
        void* eax_36 = result_1 + ebp
        char eax_37
        
        if (ecx_23 s<= eax_36 || *(edx_7 + 0x1c0) s> ecx_12 || eax_18 s< ebp || eax_18 s> eax_36)
            eax_37 = 0
        else
            eax_37 = 1
        
        int32_t ebx_4 = 0xffffffff
        
        if ((eax_37 | var_49_1 | eax_24 | eax_27 | eax_30 | eax_32 | eax_34) != 0)
            ebx_4 = 0xffc8c8
        
        void* esi_5 = (*(*(esi + 0xa8) + 8))(var_44, ebp)
        int32_t eax_42
        int32_t edx_11
        edx_11:eax_42 = sx.q((*(*(esi + 0xa8) + 0x1c))())
        char* edi_2 = (*(*result_2 + 0xc))(0, 0)
        uint32_t j_1 = j_2
        result = (*(*result_2 + 0x20))() - j_1
        
        if (result_1 s> 0)
            int32_t* i_1 = result_1
            int32_t* i
            
            do
                if (j_1 s> 0)
                    uint32_t j
                    
                    do
                        int32_t edx_16
                        edx_16.b = *edi_2 != 0
                        esi_5 += 4
                        edi_2 = &edi_2[1]
                        j = j_1
                        j_1 -= 1
                        *(esi_5 - 4) = (edx_16 - 1) & ebx_4
                    while (j != 1)
                    j_1 = j_2
                
                esi_5 += ((((edx_11 & 3) + eax_42) s>> 2) - j_2) * 4
                edi_2 += result
                i = i_1
                i_1 -= 1
            while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
