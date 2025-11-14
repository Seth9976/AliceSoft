// 函数: sub_662000
// 地址: 0x662000
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72104d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_84
int32_t eax_2 = data_78c474 ^ &var_84
int32_t __saved_edi
int32_t var_98 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp = arg2
int32_t** ebx = arg3
char* ecx = *arg1
int32_t edx_1 = arg1[1]
int32_t* var_40 = ebp
int32_t** var_38 = ebx
uint32_t var_60_1
uint32_t esi_7

if (&ecx[4] u<= edx_1)
    esi_7 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
    var_60_1 = esi_7
    *arg1 = &ecx[4]

char* result

if (&ecx[4] u> edx_1 || &ecx[8] u> edx_1)
label_662581:
    result.b = 0
else
    uint32_t ecx_9 = ((zx.d(ecx[7]) << 8 | zx.d(ecx[6])) << 8 | zx.d(ecx[5])) << 8 | zx.d(ecx[4])
    *arg1 = &ecx[8]
    void** edi_4 = nullptr
    char* result_3 = nullptr
    
    if (ecx_9 s> 0)
        while (true)
            char* result_2 = nullptr
            void** var_6c_1 = nullptr
            int32_t var_68_1 = 0
            int32_t var_4 = 0
            int32_t var_54_1 = 0
            
            if (esi_7 s> 0)
                while (true)
                    char* eax_6 = *arg1
                    
                    if (&eax_6[4] u<= arg1[1])
                        uint32_t esi_14 =
                            ((zx.d(eax_6[3]) << 8 | zx.d(eax_6[2])) << 8 | zx.d(eax_6[1])) << 8
                            | zx.d(*eax_6)
                        *arg1 = &eax_6[4]
                        char* eax_8 = operator new(0x80)
                        char* var_78 = eax_8
                        var_4.b = 1
                        float var_7c
                        char* ebp_1
                        
                        if (eax_8 == 0)
                            var_7c = 0f
                            ebp_1 = var_7c
                        else
                            ebp_1 = sub_668cd0(eax_8)
                            var_7c = ebp_1
                        
                        var_4.b = 0
                        int32_t eax_10 = ebx[1]
                        int32_t* ecx_11 = &var_78
                        var_78 = ebp_1
                        
                        if (&var_78 u< eax_10)
                            ecx_11 = *ebx
                        
                        if (&var_78 u>= eax_10 || ecx_11 u> &var_78)
                            if (eax_10 == ebx[2])
                                ecx_11 = sub_4307a0(ebx)
                            
                            char** eax_15 = ebx[1]
                            
                            if (eax_15 != 0)
                                *eax_15 = ebp_1
                        else
                            int32_t edi_6 = (&var_78 - ecx_11) s>> 2
                            
                            if (eax_10 == ebx[2])
                                ecx_11 = sub_4307a0(ebx)
                            
                            int32_t** eax_13 = ebx[1]
                            
                            if (eax_13 != 0)
                                ecx_11 = (*ebx)[edi_6]
                                *eax_13 = ecx_11
                            
                            edi_4 = var_6c_1
                        
                        ebx[1] = &ebx[1][1]
                        void* eax_17 = ebx[1] - *ebx
                        var_78 = ebp_1
                        *(ebp_1 + 4) = eax_17 s>> 2
                        
                        if (esi_14 == 1)
                            void** edi_8 = arg1
                            char* ecx_18 = *edi_8
                            
                            if (&ecx_18[4] u<= edi_8[1])
                                int32_t eax_37 = ((zx.d(ecx_18[3]) << 8 | zx.d(ecx_18[2])) << 8
                                    | zx.d(ecx_18[1])) << 8 | zx.d(*ecx_18)
                                *edi_8 = &ecx_18[4]
                                ebx.b = false
                                *(ebp_1 + 0x28) = eax_37
                            else
                                ebx.b = true
                                *(ebp_1 + 0x28) = 0
                            
                            goto label_6622ac
                        
                        if (esi_14 == 2)
                            var_7c = fconvert.s(float.t(0))
                            char eax_30 = sub_40ff40(ecx_11, arg1, &var_7c)
                            *(ebp_1 + 0x2c) = fconvert.s(fconvert.t(var_7c))
                            ebx.b = eax_30 == 0
                        else
                            if (esi_14 != 3)
                                goto label_6622bf
                            
                            void* ebp_2 = nullptr
                            int32_t var_1c_1 = 0xf
                            int32_t var_20_1 = 0
                            char var_30 = 0
                            sub_401270(&var_30, nullptr, 0x72d5ab)
                            var_4.b = 2
                            char* eax_23 = *arg1
                            char var_7d_1
                            
                            if (&eax_23[4] u<= arg1[1])
                                ebp_2 = ((zx.d(eax_23[3]) << 8 | zx.d(eax_23[2])) << 8
                                    | zx.d(eax_23[1])) << 8 | zx.d(*eax_23)
                                *arg1 = &eax_23[4]
                                var_7d_1 = 1
                            else
                                var_7d_1 = 0
                            
                            ebx.b = sub_40ff90(arg1, &var_30, ebp_2) == 0
                            ebx.b |= var_7d_1 == 0
                            sub_401180(var_7c i+ 0x30, 0xffffffff, &var_30, 0)
                            var_4.b = 0
                            
                            if (var_1c_1 u>= 0x10)
                                int32_t var_9c_3 = var_30.d
                                sub_6b4d5b()
                            
                            ebp_1 = var_7c
                        
                    label_6622ac:
                        
                        if (ebx.b == 0)
                            ebx = var_38
                            edi_4 = var_6c_1
                        label_6622bf:
                            
                            if (esi_14 == 4)
                                int32_t* var_50 = nullptr
                                int32_t var_4c_1 = 0
                                int32_t var_48_1 = 0
                                var_4.b = 3
                                sub_669360(&var_50, sub_662000(arg1, &var_50, ebx), &ebp_1[0x5c])
                                var_4.b = 0
                                int32_t* eax_28 = var_50
                                
                                if (eax_28 != 0)
                                    sub_663180(eax_28, var_4c_1)
                                    int32_t* var_9c_6 = var_50
                                    sub_6b4d5b()
                                
                                var_50 = nullptr
                                int32_t var_4c_2 = 0
                                int32_t var_48_2 = 0
                            
                            *(ebp_1 + 8) = esi_14
                            char* result_4
                            
                            if (&var_78 u< edi_4)
                                result_4 = result_2
                            
                            if (&var_78 u>= edi_4 || result_4 u> &var_78)
                                if (edi_4 == var_68_1)
                                    sub_4307a0(&result_2)
                                    edi_4 = var_6c_1
                                
                                if (edi_4 != 0)
                                    *edi_4 = ebp_1
                            else
                                int32_t esi_19 = (&var_78 - result_4) s>> 2
                                
                                if (edi_4 == var_68_1)
                                    sub_4307a0(&result_2)
                                    edi_4 = var_6c_1
                                    result_4 = result_2
                                
                                if (edi_4 != 0)
                                    *edi_4 = *(result_4 + (esi_19 << 2))
                            
                            int32_t eax_40 = var_54_1 + 1
                            edi_4 = &edi_4[1]
                            var_6c_1 = edi_4
                            var_54_1 = eax_40
                            
                            if (eax_40 s< var_60_1)
                                continue
                            
                            ebp = var_40
                            esi_7 = var_60_1
                            break
                    
                    result = result_2
                    
                    if (result != 0)
                        char* result_1 = result
                        sub_6b4d5b()
                    
                    goto label_662581
            
            int32_t eax_41 = ebp[1]
            int32_t edx_16
            
            if (&result_2 u< eax_41)
                edx_16 = *ebp
            
            if (&result_2 u>= eax_41 || edx_16 u> &result_2)
                int32_t ecx_25 = ebp[2]
                
                if (eax_41 == ecx_25)
                    int32_t edx_19 = *ebp
                    int32_t eax_47 = (eax_41 - edx_19) s>> 4
                    
                    if (eax_47 u> 0xffffffe)
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    int32_t ecx_27 = (ecx_25 - edx_19) s>> 4
                    
                    if (eax_47 + 1 u> ecx_27)
                        uint32_t edx_21 = ecx_27 u>> 1
                        int32_t ecx_28
                        
                        if (0xfffffff - edx_21 u>= ecx_27)
                            ecx_28 = ecx_27 + edx_21
                        else
                            ecx_28 = 0
                        
                        if (ecx_28 u< eax_47 + 1)
                            ecx_28 = eax_47 + 1
                        
                        sub_6630b0(ebp, ecx_28)
                
                int32_t* eax_49 = ebp[1]
                var_4.b = 5
                
                if (eax_49 != 0)
                    sub_6b05e0(eax_49, &result_2)
            else
                int32_t ecx_20 = ebp[2]
                
                if (eax_41 == ecx_20)
                    int32_t eax_43 = (eax_41 - edx_16) s>> 4
                    
                    if (eax_43 u> 0xffffffe)
                        sub_6b47bf("vector<T> too long")
                        noreturn
                    
                    int32_t ecx_22 = (ecx_20 - edx_16) s>> 4
                    
                    if (eax_43 + 1 u> ecx_22)
                        uint32_t edx_18 = ecx_22 u>> 1
                        int32_t ecx_23
                        
                        if (0xfffffff - edx_18 u>= ecx_22)
                            ecx_23 = ecx_22 + edx_18
                        else
                            ecx_23 = 0
                        
                        if (ecx_23 u< eax_43 + 1)
                            ecx_23 = eax_43 + 1
                        
                        sub_6630b0(ebp, ecx_23)
                
                int32_t* eax_45 = ebp[1]
                var_4.b = 4
                
                if (eax_45 != 0)
                    sub_6b05e0(eax_45, ((&result_2 - edx_16) & 0xfffffff0) + *ebp)
                
                esi_7 = var_60_1
            
            ebp[1] += 0x10
            int32_t var_4_1 = 0xffffffff
            char* result_5 = result_2
            
            if (result_5 != 0)
                char* result_6 = result_5
                sub_6b4d5b()
            
            edi_4 = nullptr
            result = &result_3[1]
            result_2 = nullptr
            int32_t var_6c_2 = 0
            int32_t var_68_2 = 0
            result_3 = result
            
            if (result s>= ecx_9)
                break
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_84)
return result
