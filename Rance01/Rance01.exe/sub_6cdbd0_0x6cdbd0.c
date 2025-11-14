// 函数: sub_6cdbd0
// 地址: 0x6cdbd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t var_c = 0x79b164
int32_t var_10 = 0x70c1a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void var_9b4
void* var_1c = &var_9b4
int32_t var_1ac = 0
int32_t var_1a8 = 0
int32_t var_1a4 = 0
int32_t var_19c = 0
int32_t var_8_1 = 0
int32_t ecx = 0
int32_t var_198 = 0
int32_t edx_1 = 0
int32_t var_194 = 0
int32_t eax_2 = arg1[0xdf0]

if (eax_2 s> 0)
    int32_t edi_1 = arg1[0xdf3]
    
    do
        int32_t ebx_2 = ecx << 4
        edx_1 += *(ebx_2 + edi_1 + 4) * *(ebx_2 + edi_1 + 8)
        int32_t var_194_1 = edx_1
        ecx += 1
        int32_t var_198_1 = ecx
    while (ecx s< eax_2)

int32_t ecx_2 = arg1[0x1e] * arg1[0x1f]
int32_t var_190 = ecx_2
int32_t edx_2 = edx_1 << 6
int32_t var_18c = edx_2
int32_t edx_3 = edx_2 * ecx_2
int32_t var_188 = edx_3
void* var_9b8 = &var_9b4
int32_t eax_4 = operator new(edx_3 * 2)
arg1[0x1379] = eax_4
int32_t var_19c_1

if (eax_4 == 0)
    var_19c_1 = 0xfffffffb
else if (arg1[0xdf8] == 0)
    int32_t eax_46 = sub_6ccc20(arg1, &var_1ac)
    int32_t var_19c_2 = eax_46
    
    if (eax_46 != 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_46
    
    int32_t* edx_24 = arg1
    int32_t eax_47 = *edx_24
    
    if (eax_47 == 9 || eax_47 == 8)
        goto label_6ce21d
    
    void* var_9b8_23 = &var_9b4
    int32_t eax_57 = sub_6fbb70(&arg1[0xdfa])
    var_19c_1 = eax_57
    
    if (eax_57 == 0)
        edx_24 = arg1
    label_6ce21d:
        int32_t eax_49 = sub_6fbe00(&arg1[0xdfa], &edx_24[0xde9])
        var_19c_1 = eax_49
        
        if (eax_49 == 0)
            int32_t* eax_50 = arg1
            int32_t edx_26 = eax_50[0xdf4]
            
            if (edx_26 == 0)
                goto label_6ce244
            
            int32_t eax_77 = sub_6fcc90(edx_26, &arg1[0xdfa])
            var_19c_1 = eax_77
            
            if (eax_77 == 0)
                eax_50 = arg1
            label_6ce244:
                void* var_9b8_22 = &var_9b4
                int32_t eax_51 = sub_6d3d10(eax_50)
                var_19c_1 = eax_51
                
                if (eax_51 == 0)
                    int32_t* var_28_1 = arg1
                    int32_t* eax_53 = arg1[0x1377]
                    
                    if (eax_53 == 0 || *eax_53 != 0)
                        void* var_9b8_25 = &var_9b4
                        sub_6fd440(var_28_1)
                        var_19c_1 = 0
                    else
                        int32_t ebx_5 = 0
                        int32_t var_184_1 = 0
                        int32_t edx_27 = 0
                        int32_t var_180_1 = 0
                        int32_t eax_55 = var_28_1[0xdf0]
                        
                        if (eax_55 s> 0)
                            int32_t edi_4 = var_28_1[0xdf3]
                            
                            do
                                int32_t ecx_13 = edx_27 << 4
                                ebx_5 += *(ecx_13 + edi_4 + 8) * *(ecx_13 + edi_4 + 4)
                                int32_t var_184_2 = ebx_5
                                edx_27 += 1
                                int32_t var_180_2 = edx_27
                            while (edx_27 s< eax_55)
                        
                        int32_t ebx_6 = ebx_5 << 6
                        int32_t ecx_15 = var_28_1[0x1e]
                        int32_t ebx_7 = ebx_6 * ecx_15
                        int32_t var_38_1 = 0
                        int32_t var_17c_1 = 0
                        int32_t ebx_8 = var_28_1[0x1f]
                        
                        if (ebx_8 s> 0)
                            int32_t edx_39
                            
                            do
                                int32_t var_34_1 = 0
                                int32_t var_178_1 = 0
                                
                                if (ecx_15 s> 0)
                                    int32_t edx_36
                                    
                                    do
                                        int32_t ebx_13 = var_38_1 * 2 * ebx_7 + var_28_1[0x1379]
                                            + var_34_1 * 2 * ebx_6
                                        int32_t var_1a8_1 = ebx_13
                                        int32_t edx_30 = 0
                                        int32_t var_174_1 = 0
                                        
                                        if (eax_55 s> 0)
                                            int32_t var_24_1 = var_28_1[0xdf3]
                                            
                                            do
                                                int32_t var_2c_1 = 0
                                                int32_t var_170_1 = 0
                                                int32_t edi_9 = edx_30 << 4
                                                int32_t esi_14 = *(edi_9 + var_24_1 + 8)
                                                
                                                if (esi_14 s> 0)
                                                    int32_t edi_10 = *(edi_9 + var_24_1 + 4)
                                                    int32_t eax_73
                                                    
                                                    do
                                                        int32_t var_30_1 = 0
                                                        int32_t var_16c_1 = 0
                                                        
                                                        if (edi_10 s> 0)
                                                            int32_t eax_71
                                                            
                                                            do
                                                                int32_t esi_18 = esi_14
                                                                    * (var_38_1 << 7) * ecx_15 * edi_10 +
                                                                    *(var_28_1[0x1377] + (edx_30 << 2) + 4)
                                                                    + ecx_15 * (var_2c_1 << 7) * edi_10
                                                                    + edi_10 * (var_34_1 << 4)
                                                                int32_t esi_19 =
                                                                    esi_18 + (var_30_1 << 4)
                                                                int32_t var_168_1 = esi_19
                                                                int32_t i_1 = 0
                                                                int32_t var_160_1 = ebx_13
                                                                int32_t ebx_15
                                                                int32_t i
                                                                
                                                                do
                                                                    data_797c48(ebx_13, esi_19, 0x10, 
                                                                        &var_9b4)
                                                                    i = i_1 + 1
                                                                    i_1 = i
                                                                    var_28_1 = arg1
                                                                    ecx_15 = arg1[0x1e]
                                                                    int32_t esi_20 = arg1[0xdf3]
                                                                    var_24_1 = esi_20
                                                                    edx_30 = var_174_1
                                                                    ebx_15 = edx_30 << 4
                                                                    edi_10 = *(ebx_15 + esi_20 + 4)
                                                                    esi_19 =
                                                                        (ecx_15 << 4) * edi_10 + var_168_1
                                                                    var_168_1 = esi_19
                                                                    ebx_13 = var_1a8_1 + 0x10
                                                                    var_1a8_1 = ebx_13
                                                                while (i s< 8)
                                                                var_38_1 = var_17c_1
                                                                var_34_1 = var_178_1
                                                                esi_14 = *(ebx_15 + var_24_1 + 8)
                                                                var_2c_1 = var_170_1
                                                                eax_71 = var_16c_1 + 1
                                                                var_30_1 = eax_71
                                                                var_16c_1 = eax_71
                                                            while (eax_71 s< edi_10)
                                                        
                                                        eax_73 = var_2c_1 + 1
                                                        var_2c_1 = eax_73
                                                        var_170_1 = eax_73
                                                    while (eax_73 s< esi_14)
                                                    eax_55 = var_28_1[0xdf0]
                                                
                                                edx_30 += 1
                                                var_174_1 = edx_30
                                            while (edx_30 s< eax_55)
                                        
                                        edx_36 = var_34_1 + 1
                                        var_34_1 = edx_36
                                        var_178_1 = edx_36
                                    while (edx_36 s< ecx_15)
                                    ebx_8 = var_28_1[0x1f]
                                
                                edx_39 = var_38_1 + 1
                                var_38_1 = edx_39
                                var_17c_1 = edx_39
                            while (edx_39 s< ebx_8)
                    
                    goto label_6cdcc7
else
label_6cdcc7:
    int32_t ecx_3 = 0
    int32_t var_198_2 = 0
    int32_t var_15c_1 = 0
    
    if (var_1ac s<= 0)
    label_6ce149:
        void* var_9b8_17 = &var_9b4
        int32_t eax_40 = sub_6fbbc0(&arg1[0xdfa])
        var_19c_1 = eax_40
        
        if (eax_40 == 0)
            void* var_9b8_18 = &var_9b4
            int32_t eax_42 = sub_6d3c40(&arg1[0xdfa])
            var_19c_1 = eax_42
            
            if (eax_42 == 0)
                int32_t var_8_2 = 0xffffffff
    else
        while (true)
            int32_t* edx_8 = ecx_3 * 0x38 + arg1[0xdf8]
            data_797c44(&var_9b4, 0x404)
            void var_5b0
            data_797c44(&var_5b0, 0x404)
            void var_158
            data_797c44(&var_158, 0x10)
            void var_148
            data_797c44(&var_148, 0x100)
            sub_6fd7a0(arg1, &arg1[0xdfa], edx_8, &var_9b4)
            var_19c_1 = 0
            int32_t* eax_7 = edx_8
            int32_t* esi_4
            
            if (eax_7[2] != 0 || eax_7[3] != 0)
                if (*eax_7[0xd] != 0)
                    int32_t var_48_4 = 1
                    void* var_9b8_11 = &var_9b4
                    sub_6d0190(&var_5b0, &var_158, &var_148)
                    void* var_9b8_12 = &var_9b4
                    int32_t eax_28 = sub_6cb740(&var_158, &var_148, &arg1[0x275])
                    var_19c_1 = eax_28
                    
                    if (eax_28 != 0)
                        break
                    
                    arg1[0xdbe] = &arg1[0x275]
                    void* var_9b8_13 = &var_9b4
                    int32_t eax_31 = sub_6fc110(&arg1[0xdfa], &var_158, &var_148, 1, 1)
                    var_19c_1 = eax_31
                    
                    if (eax_31 != 0)
                        break
                    
                    eax_7 = edx_8
                    esi_4 = arg1
                else
                    int32_t var_48_3 = 0
                    void* var_9b8_8 = &var_9b4
                    sub_6d0190(&var_9b4, &var_158, &var_148)
                    void* var_9b8_9 = &var_9b4
                    int32_t eax_23 = sub_6cb740(&var_158, &var_148, &arg1[0xd9])
                    var_19c_1 = eax_23
                    
                    if (eax_23 != 0)
                        break
                    
                    arg1[0xdbd] = &arg1[0xd9]
                    void* var_9b8_10 = &var_9b4
                    int32_t eax_25 = sub_6fc110(&arg1[0xdfa], &var_158, &var_148, 1, 0)
                    var_19c_1 = eax_25
                    
                    if (eax_25 != 0)
                        break
                    
                    eax_7 = edx_8
                    esi_4 = arg1
            else if (eax_7[4] != 0)
                esi_4 = arg1
            else
                eax_7[9] = 0
                eax_7[0xa] = 0
                eax_7[0xb] = 0
                eax_7[0xc] = 0
                int32_t var_48_1 = 0
                void* var_9b8_2 = &var_9b4
                sub_6d0190(&var_9b4, &var_158, &var_148)
                void* var_9b8_3 = &var_9b4
                int32_t eax_10 = sub_6cb740(&var_158, &var_148, &arg1[0x749])
                var_19c_1 = eax_10
                
                if (eax_10 != 0)
                    break
                
                arg1[0xdc1] = &arg1[0x749]
                void* var_9b8_4 = &var_9b4
                int32_t eax_13 = sub_6fc110(&arg1[0xdfa], &var_158, &var_148, 0, 0)
                var_19c_1 = eax_13
                
                if (eax_13 != 0)
                    break
                
                esi_4 = arg1
                
                if (esi_4[0x15] == 1)
                    eax_7 = edx_8
                else
                    data_797c44(&var_158, 0x10)
                    data_797c44(&var_148, 0x100)
                    int32_t var_48_2 = 1
                    void* var_9b8_5 = &var_9b4
                    sub_6d0190(&var_5b0, &var_158, &var_148)
                    void* var_9b8_6 = &var_9b4
                    int32_t eax_17 = sub_6cb740(&var_158, &var_148, &arg1[0x8e5])
                    var_19c_1 = eax_17
                    
                    if (eax_17 != 0)
                        break
                    
                    arg1[0xdc2] = &arg1[0x8e5]
                    void* var_9b8_7 = &var_9b4
                    int32_t eax_19 = sub_6fc110(&arg1[0xdfa], &var_158, &var_148, 0, 1)
                    var_19c_1 = eax_19
                    
                    if (eax_19 != 0)
                        break
                    
                    eax_7 = edx_8
                    esi_4 = arg1
            
            int32_t eax_32 = sub_6fcb40(&arg1[0xdfa], eax_7, &esi_4[0xde8], &esi_4[0xde7])
            var_19c_1 = eax_32
            
            if (eax_32 != 0)
                break
            
            void* var_9b8_16 = &var_9b4
            int32_t eax_38 = sub_6fdd80(arg1, &arg1[0xdfa], edx_8)
            var_19c_1 = eax_38
            
            if (eax_38 s< 0)
                break
            
            var_15c_1 += 1
            ecx_3 = var_198_2 + 1
            var_198_2 = ecx_3
            
            if (ecx_3 s>= var_1ac)
                goto label_6ce149

if (arg1[0xdf8] != 0)
    int32_t var_198_3 = 0
    
    if (var_1ac s> 0)
        bool cond:0_1
        
        do
            void* var_9b8_15 = &var_9b4
            int32_t var_9bc_17 = *(var_198_3 * 0x38 + arg1[0xdf8] + 0x34)
            sub_6b4d5b()
            *(var_198_3 * 0x38 + arg1[0xdf8] + 0x34) = 0
            cond:0_1 = var_198_3 + 1 s< var_1ac
            var_198_3 += 1
        while (cond:0_1)
    
    void* var_9b8_19 = &var_9b4
    int32_t var_9bc_21 = arg1[0xdf8]
    sub_6b4d5b()
    arg1[0xdf8] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return var_19c_1
