// 函数: sub_5f03b0
// 地址: 0x5f03b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = arg1
void* var_4c = esi
int32_t var_18
sub_5f7e90(esi + 0x340, &var_18, *(esi + 0x334), *(esi + 0x338))
int32_t var_50
int32_t var_10

if (arg4 - 1 u> 8)
    var_50 = 0
else
    switch (arg4 + &jump_table_5f0698[2]:3)
        case &lookup_table_5f06a4, &lookup_table_5f06a4[3], &lookup_table_5f06a4[6]
            var_50 = 0
        case &lookup_table_5f06a4[1], &lookup_table_5f06a4[4], &lookup_table_5f06a4[7]
            int32_t eax_4
            int32_t edx_1
            edx_1:eax_4 = sx.q(var_10)
            var_50 = neg.d((eax_4 - edx_1) s>> 1)
        case &lookup_table_5f06a4[2], &lookup_table_5f06a4[5], &lookup_table_5f06a4[8]
            var_50 = neg.d(var_10)

int32_t var_54
int32_t var_c

if (arg4 - 1 u> 8)
    var_54 = 0
else
    switch (arg4 + &jump_table_5f06b0[2]:3)
        case &lookup_table_5f06bc, &lookup_table_5f06bc[1], &lookup_table_5f06bc[2]
            var_54 = 0
        case &lookup_table_5f06bc[3], &lookup_table_5f06bc[4], &lookup_table_5f06bc[5]
            int32_t eax_11
            int32_t edx_2
            edx_2:eax_11 = sx.q(var_c)
            var_54 = neg.d((eax_11 - edx_2) s>> 1)
        case &lookup_table_5f06bc[6], &lookup_table_5f06bc[7], &lookup_table_5f06bc[8]
            var_54 = neg.d(var_c)

int32_t ecx_4 = *(esi + 0x324)
int32_t ebx = arg2
int32_t edi = 0
int32_t result = (*(esi + 0x328) - ecx_4) s>> 2
int32_t var_48 = ebx

if (result s> 0)
    int32_t var_34 = var_18
    int32_t var_2c = 0
    int32_t var_14
    int32_t var_30 = var_14
    
    while (true)
        if (edi s>= 0 && edi s< result)
            int32_t* ecx_5 = *(ecx_4 + (edi << 2))
            
            if (ecx_5[1] != 0)
                int32_t* ecx_6 = *ecx_5
                
                if (ecx_6 != 0xffffffff)
                    sub_409460(ecx_6, ebx + var_50, var_54 + arg3)
        
        int32_t eax_21 = ebx - arg2
        bool cond:0_1 = eax_21 s< var_18
        int32_t var_40 = eax_21
        int32_t* eax_22 = &var_34
        
        if (not(cond:0_1))
            eax_22 = &var_40
        
        int32_t edx_8 = *eax_22
        int32_t var_44_1 = edx_8
        int32_t* eax_23 = &var_30
        
        if (var_14 s<= 0)
            eax_23 = &var_2c
        
        int32_t ecx_7 = *eax_23
        int32_t ebx_2 = var_10 - edx_8
        int32_t var_24 = ebx_2
        int32_t var_38
        int32_t eax_30
        
        if (edi s< 0)
            eax_30 = 0
        else
            int32_t eax_24 = *(esi + 0x324)
            
            if (edi s>= (*(esi + 0x328) - eax_24) s>> 2)
                eax_30 = 0
            else
                int32_t* eax_25 = *(eax_24 + (edi << 2))
                
                if (eax_25[1] == 0)
                    eax_30 = 0
                else
                    int32_t eax_26 = *eax_25
                    
                    if (eax_26 == 0xffffffff)
                        eax_30 = 0
                    else
                        void* esi_1 = *(data_797d2c + 0x30)
                        var_38 = eax_26
                        int32_t* var_28
                        sub_42e070(esi_1 + 0x294, &var_28, &var_38)
                        int32_t* eax_28 = var_28
                        void* eax_29
                        
                        if (eax_28 != *(esi_1 + 0x298))
                            eax_29 = eax_28[4]
                        
                        if (eax_28 != *(esi_1 + 0x298) && eax_29 != 0)
                            eax_30 = *(eax_29 + 0x14)
                            esi = var_4c
                            edx_8 = var_44_1
                        else
                            esi = var_4c
                            edx_8 = var_44_1
                            eax_30 = 0
        
        var_38 = eax_30
        int32_t* eax_31 = &var_24
        
        if (ebx_2 s>= eax_30)
            eax_31 = &var_38
        
        int32_t ebx_4 = var_c - ecx_7
        var_38 = *eax_31
        int32_t var_1c = ebx_4
        int32_t eax_38
        
        if (edi s< 0)
            eax_38 = 0
        else
            int32_t eax_32 = *(esi + 0x324)
            
            if (edi s>= (*(esi + 0x328) - eax_32) s>> 2)
                eax_38 = 0
            else
                int32_t* eax_33 = *(eax_32 + (edi << 2))
                
                if (eax_33[1] == 0)
                    eax_38 = 0
                else
                    int32_t eax_34 = *eax_33
                    
                    if (eax_34 == 0xffffffff)
                        eax_38 = 0
                    else
                        void* esi_2 = *(data_797d2c + 0x30)
                        var_24 = eax_34
                        int32_t* var_20
                        sub_42e070(esi_2 + 0x294, &var_20, &var_24)
                        int32_t* eax_36 = var_20
                        void* eax_37
                        
                        if (eax_36 != *(esi_2 + 0x298))
                            eax_37 = eax_36[4]
                        
                        if (eax_36 != *(esi_2 + 0x298) && eax_37 != 0)
                            eax_38 = *(eax_37 + 0x18)
                            esi = var_4c
                            edx_8 = var_44_1
                        else
                            esi = var_4c
                            edx_8 = var_44_1
                            eax_38 = 0
        
        var_24 = eax_38
        int32_t* ecx_17 = &var_1c
        
        if (ebx_4 s>= eax_38)
            ecx_17 = &var_24
        
        if (edi s>= 0)
            int32_t eax_39 = *(esi + 0x324)
            
            if (edi s< (*(esi + 0x328) - eax_39) s>> 2)
                int32_t* eax_40 = *(eax_39 + (edi << 2))
                
                if (eax_40[1] != 0 && *eax_40 != 0xffffffff)
                    sub_5f9e50(edx_8 - var_40, ecx_7, var_38, *ecx_17)
                
                esi = var_4c
        
        ecx_4 = *(esi + 0x324)
        var_48 += *(esi + 0x31c) + var_38
        edi += 1
        result = (*(esi + 0x328) - ecx_4) s>> 2
        
        if (edi s>= result)
            break
        
        ebx = var_48

return result
