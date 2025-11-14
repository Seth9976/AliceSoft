// 函数: sub_563d60
// 地址: 0x563d60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71eba4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_e0
int32_t eax_2 = data_78c474 ^ &var_e0
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp = arg4
int32_t* esi = arg3
int32_t ecx_1 = ebp[1] - *ebp
int32_t* i_1
int32_t edx
edx:i_1 = muls.dp.d(0x92492493, ecx_1)
int32_t edx_2 = (edx + ecx_1) s>> 4
int32_t edi_2 = ecx_1 s/ 0x1c
int32_t ebx = 0
int32_t* var_dc = esi
var_e0 = ebp
int32_t var_c8 = edi_2

if (edi_2 s<= 0)
label_5642fd:
    i_1.b = 1
else
    char var_b8
    char var_9c
    int32_t var_88
    char var_80
    int32_t var_6c
    
    if (edi_2 - 1 s> 0)
        int32_t var_d8_1 = 0
        int32_t var_d4_1 = 1
        int32_t i_2 = edi_2 - 1
        int32_t i
        
        do
            int32_t var_4 = 0
            int32_t* var_64
            edx_2 = sub_401940(&var_64, sub_401ab0(&var_80, edx_2, *ebp + var_d8_1), &var_80)
            var_4.b = 2
            
            if (var_6c u>= 0x10)
                int32_t var_f8_1 = var_80.d
                edx_2 = sub_6b4d5b()
            
            var_6c = 0xf
            int32_t var_70_1 = 0
            var_80 = 0
            int32_t var_50
            
            if (var_d4_1 s< edi_2)
                int32_t esi_2 = var_d8_1 + 0x1c
                int32_t j_1 = edi_2 - var_d4_1
                int32_t j
                
                do
                    var_4.b = 3
                    sub_401940(&var_b8, sub_401ab0(&var_9c, edx_2, *ebp + esi_2), &var_9c)
                    var_4.b = 5
                    
                    if (var_88 u>= 0x10)
                        int32_t var_f8_2 = var_9c.d
                        sub_6b4d5b()
                    
                    char* ecx_9 = var_b8.d
                    var_88 = 0xf
                    int32_t var_8c_1 = 0
                    var_9c = 0
                    int32_t var_a4
                    
                    if (var_a4 u< 0x10)
                        ecx_9 = &var_b8
                    
                    int32_t var_54
                    int32_t eax_13 = var_54
                    int32_t var_a8
                    
                    if (var_54 u>= var_a8)
                        eax_13 = var_a8
                    
                    int32_t* edx_5 = var_64
                    
                    if (var_50 u< 0x10)
                        edx_5 = &var_64
                    
                    int32_t eax_14
                    eax_14, edx_2 = sub_402320(eax_13, edx_5, ecx_9, eax_13)
                    bool cond:2_1 = eax_14 == 0
                    
                    if (eax_14 == 0)
                        if (var_54 u>= var_a8)
                            eax_14.b = var_54 != var_a8
                        else
                            eax_14 = 0xffffffff
                        
                        cond:2_1 = eax_14 == 0
                    
                    eax_14.b = cond:2_1
                    
                    if (eax_14.b != 0)
                        void** eax_16 = *var_e0 + var_d8_1
                        
                        if (eax_16[5] u>= 0x10)
                            eax_16 = *eax_16
                        
                        void** var_f8_4 = eax_16
                        edx_2 = sub_604c90(0x74bf0c)
                    
                    var_4.b = 2
                    
                    if (var_a4 u>= 0x10)
                        int32_t var_f8_5 = var_b8.d
                        edx_2 = sub_6b4d5b()
                    
                    ebp = var_e0
                    esi_2 += 0x1c
                    ebx = 0
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                edi_2 = var_c8
                esi = var_dc
            
            int32_t var_4_1 = 0xffffffff
            
            if (var_50 u>= 0x10)
                int32_t* var_f8_6 = var_64
                edx_2 = sub_6b4d5b()
            
            var_d8_1 += 0x1c
            var_d4_1 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    sub_65a090(esi, edi_2)
    int32_t ecx_11 = esi[1]
    
    for (i_1 = *esi; i_1 != ecx_11; i_1 = &i_1[1])
        *i_1 = 0
    
    if (edi_2 s<= 0)
    label_5642fd_1:
        i_1.b = 1
    else
        int32_t esi_3 = 0
        
        while (true)
            int32_t var_a4_1 = 0xf
            int32_t var_a8_1 = 0
            var_b8 = 0
            int32_t ecx_13 = sub_401180(&var_b8, 0xffffffff, arg5, 0)
            int32_t var_4_2 = 6
            
            if (var_a8_1 u<= 0)
                *(*var_dc + (ebx << 2)) = 0
            else
                int32_t* eax_18 = sub_401800(ecx_13, &var_b8, &var_80)
                var_4_2.b = 7
                char* eax_21 = sub_4c1d70(*ebp + esi_3, &var_9c, eax_18, &var_9c)
                
                if (&var_b8 != eax_21)
                    if (var_a4_1 u>= 0x10)
                        int32_t var_f8_9 = var_b8.d
                        sub_6b4d5b()
                    
                    int32_t var_a4_2 = 0xf
                    int32_t var_a8_2 = 0
                    var_b8 = 0
                    
                    if (*(eax_21 + 0x14) u>= 0x10)
                        var_b8.d = *eax_21
                        *eax_21 = 0
                    else
                        sub_6b49d0(&var_b8, eax_21, *(eax_21 + 0x10) + 1, eax_4)
                    
                    int32_t var_a8_3 = *(eax_21 + 0x10)
                    var_a4_1 = *(eax_21 + 0x14)
                    *(eax_21 + 0x14) = 0xf
                    *(eax_21 + 0x10) = 0
                    *eax_21 = 0
                
                if (var_88 u>= 0x10)
                    int32_t var_f8_11 = var_9c.d
                    sub_6b4d5b()
                
                var_4_2.b = 6
                var_88 = 0xf
                int32_t var_8c_2 = 0
                var_9c = 0
                
                if (var_6c u>= 0x10)
                    int32_t var_f8_12 = var_80.d
                    sub_6b4d5b()
            
            int32_t* edi_7 = *var_dc
            HMODULE* edi_8 = &edi_7[ebx]
            
            if (edi_7[ebx] == 0)
                char var_2c
                int32_t* eax_28 = sub_401800(var_dc, arg1, &var_2c)
                var_4_2.b = 9
                char var_48
                char* eax_32 = sub_4c1d70(*var_e0 + esi_3, &var_48, eax_28, &var_48)
                
                if (&var_b8 != eax_32)
                    if (var_a4_1 u>= 0x10)
                        int32_t var_f8_14 = var_b8.d
                        sub_6b4d5b()
                    
                    int32_t var_a4_3 = 0xf
                    int32_t var_a8_4 = 0
                    var_b8 = 0
                    
                    if (*(eax_32 + 0x14) u>= 0x10)
                        var_b8.d = *eax_32
                        *eax_32 = 0
                    else
                        sub_6b49d0(&var_b8, eax_32, *(eax_32 + 0x10) + 1, eax_4)
                    
                    int32_t var_a8_5 = *(eax_32 + 0x10)
                    var_a4_1 = *(eax_32 + 0x14)
                    *(eax_32 + 0x14) = 0xf
                    *(eax_32 + 0x10) = 0
                    *eax_32 = 0
                
                int32_t var_34
                
                if (var_34 u>= 0x10)
                    int32_t var_f8_16 = var_48.d
                    sub_6b4d5b()
                
                var_4_2.b = 6
                var_34 = 0xf
                int32_t var_38_1 = 0
                var_48 = 0
                int32_t var_18
                
                if (var_18 u>= 0x10)
                    int32_t var_f8_17 = var_2c.d
                    sub_6b4d5b()
                
                char* lpLibFileName = var_b8.d
                var_18 = 0xf
                int32_t var_1c_1 = 0
                var_2c = 0
                
                if (var_a4_1 u< 0x10)
                    lpLibFileName = &var_b8
                
                (*var_dc)[ebx] = LoadLibraryA(lpLibFileName)
                int32_t* edi_12 = *var_dc
                edi_8 = &edi_12[ebx]
                
                if (edi_12[ebx] == 0)
                    PSTR lpLibFileName_1 = *var_e0 + esi_3
                    
                    if (*(lpLibFileName_1 + 0x14) u>= 0x10)
                        lpLibFileName_1 = *lpLibFileName_1
                    
                    *edi_8 = LoadLibraryA(lpLibFileName_1)
                    int32_t* edi_13 = *var_dc
                    edi_8 = &edi_13[ebx]
                    
                    if (edi_13[ebx] == 0)
                        void** eax_46 = *var_e0 + ebx * 0x1c
                        
                        if (eax_46[5] u>= 0x10)
                            eax_46 = *eax_46
                        
                        void** var_f8_22 = eax_46
                        sub_604c90(0x74bf34)
                        
                        if (var_a4_1 u>= 0x10)
                            int32_t var_f8_23 = var_b8.d
                            sub_6b4d5b()
                        
                        i_1.b = 0
                        break
            
            i_1 = GetProcAddress(*edi_8, "SetComponentSupplier")
            
            if (i_1 != 0)
                i_1(arg2, eax_4)
            
            int32_t var_4_3 = 0xffffffff
            
            if (var_a4_1 u>= 0x10)
                int32_t var_f8_21 = var_b8.d
                sub_6b4d5b()
            
            ebx += 1
            esi_3 += 0x1c
            
            if (ebx s>= var_c8)
                goto label_5642fd_1
            
            ebp = var_e0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_e0)
return i_1
