// 函数: sub_5fb370
// 地址: 0x5fb370
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* const ebp = arg1
int32_t ebx = *(ebp + 0x54)
int32_t* i = *(ebp + 0x50)
int32_t var_4 = arg2
arg1 = *(ebp + 0x24)
int32_t* var_10
int32_t* var_c

for (; i != ebx; i = &i[1])
    int32_t* eax_1 = *i
    void* const eax_2
    
    if (eax_1[1] != 0)
        int32_t* eax_3 = *eax_1
        
        if (eax_3 != 0xffffffff)
            void* esi_1 = *(data_797d2c + 0x30)
            var_10 = eax_3
            sub_42e070(esi_1 + 0x294, &var_c, &var_10)
            int32_t* eax_5 = var_c
            void* eax_6
            
            if (eax_5 != *(esi_1 + 0x298))
                eax_6 = eax_5[4]
            
            if (eax_5 != *(esi_1 + 0x298) && eax_6 != 0)
                eax_2 = *(eax_6 + 0x18)
            else
                eax_2 = nullptr
        else
            eax_2 = nullptr
    else
        eax_2 = nullptr
    
    if (arg1 s< eax_2)
        arg1 = eax_2

int32_t* esi_2 = arg5
*arg6 = arg1
*esi_2 = 0

for (int32_t* i_1 = *(ebp + 0x50); i_1 != *(ebp + 0x54); i_1 = &i_1[1])
    int32_t* edi = *i_1
    int32_t eax_7
    
    if (edi[1] != 0)
        int32_t esi_3 = *edi
        
        if (esi_3 != 0xffffffff)
            void* ecx_3 = *(data_797d2c + 0x30)
            void** edx_3 = *(ecx_3 + 0x298)
            void** eax_9 = edx_3[1]
            
            while (*(eax_9 + 0x15) == 0)
                if (eax_9[3] s>= esi_3)
                    edx_3 = eax_9
                    eax_9 = *eax_9
                else
                    eax_9 = eax_9[2]
            
            int32_t* eax_10 = *(ecx_3 + 0x298)
            var_c = edx_3
            int32_t** eax_11
            
            if (edx_3 == eax_10 || esi_3 s< edx_3[3])
                var_10 = eax_10
                eax_11 = &var_10
            else
                eax_11 = &var_c
            
            int32_t* eax_12 = *eax_11
            void* eax_13
            
            if (eax_12 != *(ecx_3 + 0x298))
                eax_13 = eax_12[4]
            
            if (eax_12 != *(ecx_3 + 0x298) && eax_13 != 0)
                eax_7 = *(eax_13 + 0x18)
            else
                eax_7 = 0
        else
            eax_7 = 0
        
        esi_2 = arg5
    else
        eax_7 = 0
    
    if (edi[1] != 0)
        int32_t* ecx_4 = *edi
        
        if (ecx_4 != 0xffffffff)
            sub_409460(ecx_4, arg2, arg1 - eax_7 + arg3)
    
    int32_t* eax_14 = *i_1
    int32_t eax_15
    
    if (eax_14[1] != 0)
        int32_t esi_4 = *eax_14
        
        if (esi_4 != 0xffffffff)
            void* ecx_5 = *(data_797d2c + 0x30)
            void** edx_8 = *(ecx_5 + 0x298)
            void** eax_17 = edx_8[1]
            
            while (*(eax_17 + 0x15) == 0)
                if (eax_17[3] s>= esi_4)
                    edx_8 = eax_17
                    eax_17 = *eax_17
                else
                    eax_17 = eax_17[2]
            
            int32_t* eax_18 = *(ecx_5 + 0x298)
            var_c = edx_8
            int32_t** eax_19
            
            if (edx_8 == eax_18 || esi_4 s< edx_8[3])
                int32_t* var_8 = eax_18
                eax_19 = &var_8
            else
                eax_19 = &var_c
            
            int32_t* eax_20 = *eax_19
            void* eax_21
            
            if (eax_20 != *(ecx_5 + 0x298))
                eax_21 = eax_20[4]
            
            if (eax_20 != *(ecx_5 + 0x298) && eax_21 != 0)
                eax_15 = *(eax_21 + 0x14)
            else
                eax_15 = 0
        else
            eax_15 = 0
        
        esi_2 = arg5
    else
        eax_15 = 0
    
    *esi_2 += eax_15
    int32_t eax_22 = *(ebp + 0x54)
    arg2 += eax_15 + arg4
    
    if ((eax_22 - i_1) s>> 2 s< ((eax_22 - *(ebp + 0x50)) s>> 2) - 1)
        *esi_2 += arg4

void* var_24_3 = *arg6
int32_t var_28 = *esi_2
int32_t var_2c = arg4
return sub_5fb190(ebp, var_4, arg3)
