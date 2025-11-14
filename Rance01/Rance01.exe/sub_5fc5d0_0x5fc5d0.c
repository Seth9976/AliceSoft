// 函数: sub_5fc5d0
// 地址: 0x5fc5d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg1
void* var_48 = nullptr
void* result_1 = nullptr
void* var_38 = nullptr
int32_t var_44 = 0
int32_t* i_7 = *(ebx + 0x6c)
int32_t var_34 = ebx
int32_t* i_4 = i_7
int32_t var_30
void* var_2c

if (i_7 != *(ebx + 0x70))
    int32_t var_3c_1 = 0
    void* i
    
    do
        void** esi_1 = *i_4
        var_30 = sub_5fb060(esi_1, *(ebx + 0x38))
        void* eax_5 = sub_5fb100(esi_1)
        int32_t edi_1 = esi_1[4]
        var_2c = eax_5
        int32_t eax_6 = edi_1
        
        if (edi_1 u>= 1)
            eax_6 = 1
        
        if (esi_1[5] u>= 0x10)
            esi_1 = *esi_1
        
        void* eax_11
        
        if (sub_402320(eax_6, esi_1, &(*U"\\n\n\n\n\n\n\n\n")[1], eax_6) != 0 || edi_1 u< 1)
        label_5fc6a0:
            eax_11 = var_38 + var_30
            arg1 = var_44
            void* edx_4 = var_2c
            var_38 = eax_11
            
            if (arg1 s< edx_4)
                arg1 = edx_4
                var_44 = arg1
        else
            int32_t eax_7
            eax_7.b = edi_1 != 1
            
            if (eax_7 != 0)
                goto label_5fc6a0
            
            void* result_2 = result_1 + var_44
            int32_t ecx_3 = ((*(ebx + 0x70) - *(ebx + 0x6c)) s>> 2) - 1
            result_1 = result_2
            
            if (var_3c_1 s>> 2 s< ecx_3)
                result_1 = result_2 + *(ebx + 0x3c)
            
            eax_11 = nullptr
            var_38 = nullptr
            arg1 = 0
            var_44 = arg1
        
        if (var_48 s< eax_11)
            var_48 = eax_11
        
        var_3c_1 += 4
        i = &i_4[1]
        i_4 = i
    while (i != *(ebx + 0x70))
    
    if (arg1 s> 0)
        result_1 += arg1

int32_t* i_8 = *(ebx + 0x6c)
int32_t* i_5 = i_8
var_44 = 0
void* var_20
void* var_18
int32_t var_14

if (i_8 != *(ebx + 0x70))
    void* i_1
    
    do
        int32_t* esi_2 = *i_5
        int32_t edi_2 = esi_2[4]
        int32_t eax_14 = edi_2
        
        if (edi_2 u>= 1)
            eax_14 = 1
        
        int32_t* edx_5
        
        if (esi_2[5] u< 0x10)
            edx_5 = esi_2
        else
            edx_5 = *esi_2
        
        if (sub_402320(eax_14, edx_5, &(*U"\\n\n\n\n\n\n\n\n")[2], eax_14) != 0 || edi_2 u< 1)
        label_5fc74c:
            int32_t* ecx_5 = esi_2[0x19]
            int32_t* edx_6 = esi_2[0x1a]
            
            if (ecx_5 != edx_6)
                int32_t* eax_16 = edx_6
                
                if (edx_6 != edx_6)
                    do
                        *ecx_5 = *eax_16
                        ecx_5[1] = eax_16[1]
                        ecx_5[2] = eax_16[2]
                        ecx_5[3] = eax_16[3]
                        ecx_5[4] = eax_16[4]
                        ecx_5[5] = eax_16[5]
                        eax_16 = &eax_16[6]
                        ecx_5 = &ecx_5[6]
                    while (eax_16 != edx_6)
                
                esi_2[0x1a] = ecx_5
            
            int32_t ecx_6 = var_44
            int32_t* j = *(var_34 + 0x4c)
            int32_t ebx_10 = ((esi_2[0x15] - esi_2[0x14]) s>> 2) + ecx_6
            var_30 = ebx_10
            
            for (; j != *(var_34 + 0x50); j = &j[6])
                void* edi_4 = *j
                
                if (edi_4 s> ecx_6 || ecx_6 s> j[1])
                    edx_6.b = 0
                else
                    edx_6.b = 1
                
                char var_4d_1
                
                if (edi_4 s<= ebx_10)
                    var_4d_1 = 1
                
                if (edi_4 s> ebx_10 || ebx_10 s> j[1])
                    var_4d_1 = 0
                
                int32_t eax_17
                
                if (ecx_6 s> edi_4 || j[1] s> ebx_10)
                    eax_17.b = 0
                else
                    eax_17.b = 1
                
                if (edx_6.b != 0 || var_4d_1 != edx_6.b || eax_17.b != 0)
                    var_2c = edi_4
                    int32_t* eax_19 = &var_44
                    
                    if (edi_4 s>= ecx_6)
                        eax_19 = &var_2c
                    
                    void* eax_21 = *eax_19 - ecx_6
                    void* ecx_8 = j[1] + 1
                    var_2c = ecx_8
                    int32_t* ecx_9 = &var_30
                    
                    if (ebx_10 s>= ecx_8)
                        ecx_9 = &var_2c
                    
                    void* ecx_12 = *ecx_9 - eax_21 - var_44
                    var_20 = eax_21
                    void* var_1c_1 = ecx_12 + eax_21 - 1
                    var_18 = ecx_12
                    var_14 = j[3]
                    int32_t var_10_1 = j[4]
                    int32_t var_c_1 = j[5]
                    sub_5fc0a0(&var_20, &esi_2[0x19])
                    ecx_6 = var_44
            
            var_44 = ebx_10
            ebx = var_34
        else
            int32_t eax_15
            eax_15.b = edi_2 != 1
            
            if (eax_15 != 0)
                goto label_5fc74c
        
        i_1 = &i_5[1]
        i_5 = i_1
    while (i_1 != *(ebx + 0x70))

sub_5f7e90(ebx + 0x84, &var_20, var_48, result_1)
int32_t edi_7

if (arg4 - 1 u> 8)
    edi_7 = 0
else
    switch (arg4 + &jump_table_5fca8c[2]:3)
        case &lookup_table_5fca98, &lookup_table_5fca98[3], &lookup_table_5fca98[6]
            edi_7 = 0
        case &lookup_table_5fca98[1], &lookup_table_5fca98[4], &lookup_table_5fca98[7]
            int32_t eax_28
            int32_t edx_11
            edx_11:eax_28 = sx.q(var_18)
            edi_7 = neg.d((eax_28 - edx_11) s>> 1)
        case &lookup_table_5fca98[2], &lookup_table_5fca98[5], &lookup_table_5fca98[8]
            edi_7 = neg.d(var_18)

var_44 = edi_7
int32_t eax_36

if (arg4 - 1 u> 8)
    eax_36 = 0
else
    switch (arg4 + &jump_table_5fcaa4[2]:3)
        case &lookup_table_5fcab0, &lookup_table_5fcab0[1], &lookup_table_5fcab0[2]
            eax_36 = 0
        case &lookup_table_5fcab0[3], &lookup_table_5fcab0[4], &lookup_table_5fcab0[5]
            int32_t eax_33
            int32_t edx_12
            edx_12:eax_33 = sx.q(var_14)
            eax_36 = neg.d((eax_33 - edx_12) s>> 1)
        case &lookup_table_5fcab0[6], &lookup_table_5fcab0[7], &lookup_table_5fcab0[8]
            eax_36 = neg.d(var_14)

int32_t esi_3 = arg2
void* eax_38 = eax_36 + arg3
void* edi_9 = edi_7 + esi_3
int32_t* i_9 = *(ebx + 0x6c)
void* var_24 = edi_9
int32_t var_28 = esi_3
void* var_3c_3 = nullptr
int32_t* i_6 = i_9

if (i_9 != *(ebx + 0x70))
    void* i_2
    
    do
        sub_5fb370(*i_6, var_44 + esi_3, eax_36 + arg3, *(ebx + 0x38), &var_30, &var_2c)
        void* eax_40 = var_2c
        
        if (var_3c_3 s< eax_40)
            var_3c_3 = eax_40
        
        void** eax_41 = *i_6
        int32_t edi_10 = eax_41[4]
        esi_3 += var_30
        int32_t ecx_21 = edi_10
        
        if (edi_10 u>= 1)
            ecx_21 = 1
        
        if (eax_41[5] u>= 0x10)
            eax_41 = *eax_41
        
        if (sub_402320(eax_41, eax_41, &(*U"\\n\n\n\n\n\n\n\n")[3], ecx_21) == 0 && edi_10 u>= 1)
            void* eax_42
            eax_42.b = edi_10 != 1
            
            if (eax_42 == 0)
                esi_3 = var_28
                arg3 += *(ebx + 0x3c) + var_3c_3
                var_3c_3 = eax_42
        
        i_2 = &i_6[1]
        i_6 = i_2
    while (i_2 != *(ebx + 0x70))
    edi_9 = var_24

void* ecx_23 = *(ebx + 0x88) + eax_38
int32_t** i_3 = *(ebx + 0x6c)
int32_t edx_19 = *(ebx + 0x8c)
var_20 = *(ebx + 0x84) + edi_9
void* var_1c_2 = ecx_23
int32_t var_18_1 = edx_19
int32_t var_14_1 = *(ebx + 0x90)

for (; i_3 != *(ebx + 0x70); i_3 = &i_3[1])
    sub_5fb5a0(*i_3, edi_9, eax_38, &var_20)

void* ecx_24 = *(ebx + 0x8c)
void* eax_48

if (ecx_24 s> 0)
    eax_48 = *(ebx + 0x90)

void* result
void* ecx_26

if (ecx_24 s<= 0 || eax_48 s<= 0)
    ecx_26 = var_48
    result = result_1
else
    bool cond:0_1 = ecx_24 s< var_48
    var_24 = ecx_24
    void** ecx_25 = &var_24
    
    if (not(cond:0_1))
        ecx_25 = &var_48
    
    ecx_26 = *ecx_25
    bool cond:1_1 = eax_48 s< result_1
    var_24 = eax_48
    void** eax_49 = &var_24
    
    if (not(cond:1_1))
        eax_49 = &result_1
    
    result = *eax_49

*(ebx + 0x5c) = edi_9
*(ebx + 0x60) = eax_38
*(ebx + 0x64) = ecx_26
*(ebx + 0x68) = result
return result
