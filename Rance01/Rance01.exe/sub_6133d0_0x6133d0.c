// 函数: sub_6133d0
// 地址: 0x6133d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_8 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_721780
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_a0
int32_t eax_2 = data_78c474 ^ &var_a0
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_402cb0(arg2, 0x7350c8, 2)
int32_t* ecx = *(*(arg1 + 0xd0) + 0xc)
int32_t eax_8 = (*(*ecx + 0x1c))(arg3)
void* edi_1 = *(arg1 + 0xd0)
int32_t* ebx = *(edi_1 + 0x10)
int32_t esi = eax_8
int32_t var_98 = esi
int32_t* var_9c = ebx

if (ebx != 0)
    int32_t* eax_10 = (*(**(edi_1 + 0xc) + 4))(arg3)
    int32_t ebp_1 = 0
    
    if (eax_10 != 0)
        void* var_8c_1 = nullptr
        int32_t var_80
        int32_t var_6c
        
        if ((*(*ebx + 0x20))(esi) s> 0)
            int32_t eax_20
            
            do
                char* eax_14 = (*(*ebx + 0x28))(esi, ebp_1)
                
                if (eax_14 != 0)
                    int32_t eax_16 = (*(*ebx + 0x24))(esi, ebp_1)
                    char* ecx_5 = eax_14
                    char i
                    
                    do
                        i = *ecx_5
                        ecx_5 = &ecx_5[1]
                    while (i != 0)
                    void* edi_6 = ecx_5 - &ecx_5[1] + *(sub_6130d0(&var_80, eax_16) + 0x10) + 1
                    
                    if (var_6c u>= 0x10)
                        int32_t var_b8_6 = var_80
                        sub_6b4d5b()
                    
                    if (var_8c_1 s< edi_6)
                        var_8c_1 = edi_6
                
                ebp_1 += 1
                eax_20 = (*(*ebx + 0x20))(esi)
            while (ebp_1 s< eax_20)
        
        int32_t edx_7 = *(*ebx + 0x20)
        int32_t ebp_2 = 0
        var_a0 = 0
        
        if (edx_7(esi) s> 0)
            while (true)
                char* eax_24 = (*(*ebx + 0x28))(esi, ebp_2)
                int32_t* ebp_4
                
                if (eax_24 == 0)
                    ebp_4 = arg2
                else
                    int32_t eax_26 = (*(*ebx + 0x24))(esi, ebp_2)
                    char* eax_27 = eax_24
                    char i_1
                    
                    do
                        i_1 = *eax_27
                        eax_27 = &eax_27[1]
                    while (i_1 != 0)
                    void* ecx_11 = *(sub_6130d0(&var_80, eax_26) + 0x10) + eax_27 - &eax_27[1] + 1
                    
                    if (var_6c u>= 0x10)
                        int32_t var_b8_12 = var_80
                        sub_6b4d5b()
                    
                    ebp_4 = arg2
                    int32_t var_4 = 0
                    sub_402000(ebp_4, sub_6130d0(&var_80, eax_26), 0, 0xffffffff)
                    int32_t var_4_1 = 0xffffffff
                    
                    if (var_6c u>= 0x10)
                        int32_t var_b8_14 = var_80
                        sub_6b4d5b()
                    
                    sub_402cb0(ebp_4, 0x7350cc, 1)
                    char* eax_33 = eax_24
                    char i_2
                    
                    do
                        i_2 = *eax_33
                        eax_33 = &eax_33[1]
                    while (i_2 != 0)
                    sub_402cb0(ebp_4, eax_24, eax_33 - &eax_33[1])
                    void* i_8 = var_8c_1 - ecx_11
                    
                    if (i_8 s> 0)
                        void* i_7 = i_8
                        void* i_3
                        
                        do
                            sub_402cb0(ebp_4, 0x7350d0, 1)
                            i_3 = i_7
                            i_7 -= 1
                        while (i_3 != 1)
                    
                    sub_402cb0(ebp_4, 0x7350d4, 3)
                    void* edx_13 = *eax_10
                    
                    if (eax_26 == 0xb)
                        (*(edx_13 + 0x18))(eax_4)
                        int128_t** eax_63 = sub_4104a0(0x7350d8)
                        int32_t var_4_6 = 1
                        int128_t* edx_20
                        
                        if (eax_63[5] u< 0x10)
                            edx_20 = eax_63
                        else
                            edx_20 = *eax_63
                        
                        int128_t* eax_64 = edx_20
                        void* edi_12 = eax_64 + 1
                        char i_4
                        
                        do
                            i_4 = *eax_64
                            eax_64 += 1
                        while (i_4 != 0)
                        sub_402cb0(ebp_4, edx_20, eax_64 - edi_12)
                        int32_t var_4_7 = 0xffffffff
                        char var_48
                        int32_t var_34
                        
                        if (var_34 u>= 0x10)
                            int32_t var_b8_25 = var_48.d
                            sub_6b4d5b()
                        
                        var_34 = 0xf
                        int32_t var_38_1 = 0
                        var_48 = 0
                    else
                        int32_t eax_41 = *(edx_13 + 0x18)
                        
                        if (eax_26 == 0xc)
                            int32_t* eax_55 = (*(*ecx + 4))(*(eax_41(eax_4) + (var_a0 << 2)))
                            
                            if (eax_55 != 0)
                                int32_t var_b8_21 = (*(*eax_55 + 0x18))()
                                int128_t** eax_58 = sub_4104a0(""%s"")
                                int32_t var_4_4 = 2
                                int128_t* edx_19
                                
                                if (eax_58[5] u< 0x10)
                                    edx_19 = eax_58
                                else
                                    edx_19 = *eax_58
                                
                                int128_t* eax_59 = edx_19
                                void* edi_11 = eax_59 + 1
                                char i_5
                                
                                do
                                    i_5 = *eax_59
                                    eax_59 += 1
                                while (i_5 != 0)
                                sub_402cb0(ebp_4, edx_19, eax_59 - edi_11)
                                int32_t var_4_5 = 0xffffffff
                                char var_64
                                int32_t var_50
                                
                                if (var_50 u>= 0x10)
                                    int32_t var_b8_23 = var_64.d
                                    sub_6b4d5b()
                                
                                var_50 = 0xf
                                int32_t var_54_1 = 0
                                var_64 = 0
                        else
                            int32_t var_b8_16 = *(eax_41(eax_4) + (var_a0 << 2))
                            char* eax_43 = sub_4104a0(0x7350e4)
                            int32_t var_4_2 = 3
                            int128_t* edx_15
                            
                            if (*(eax_43 + 0x14) u< 0x10)
                                edx_15 = eax_43
                            else
                                edx_15 = *eax_43
                            
                            int128_t* eax_44 = edx_15
                            void* edi_8 = eax_44 + 1
                            char i_6
                            
                            do
                                i_6 = *eax_44
                                eax_44 += 1
                            while (i_6 != 0)
                            sub_402cb0(ebp_4, edx_15, eax_44 - edi_8)
                            int32_t var_4_3 = 0xffffffff
                            char var_2c
                            int32_t var_18
                            
                            if (var_18 u>= 0x10)
                                int32_t var_b8_18 = var_2c.d
                                sub_6b4d5b()
                            
                            var_18 = 0xf
                            int32_t var_1c_1 = 0
                            var_2c = 0
                    
                    esi = var_98
                    ebx = var_9c
                
                sub_402cb0(ebp_4, 0x7350e8, 1)
                int32_t edx_16 = *(*ebx + 0x20)
                int32_t edi_10 = var_a0 + 1
                var_a0 = edi_10
                
                if (edi_10 s>= edx_16(esi))
                    break
                
                ebp_2 = var_a0

int32_t* result = sub_402cb0(arg2, 0x7350ec, 1)
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_a0)
return result
