// 函数: sub_50e370
// 地址: 0x50e370
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724bd6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_10c
int32_t eax_2 = data_78c474 ^ &var_10c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5 = *(arg3 i+ 0xb8)
int32_t* edi = arg1
var_10c = edi
char var_f4_1

if (eax_5 s> 0)
    var_f4_1 = 1

if (eax_5 s<= 0 || *(arg2 + 0x4d) == 0)
    var_f4_1 = 0

bool cond:1 = *(arg2 + 0x78) != 0
int32_t var_108 = 0
eax_5.b = *(arg2 + 0x7c) != 0
bool cond:2 = *(arg2 + 0x84) != 0
char var_fc = eax_5.b
eax_5.b = *(arg2 + 0x94)

if (eax_5.b != 0)
    eax_5 = arg4[2]
    var_108 = eax_5
    
    if (eax_5 s>= 2 && eax_5 s<= 3)
        arg1 = *(arg2 + 0x80)
        
        if (arg1 != 0)
            eax_5, arg1 = (*(*arg1 + 0x1c))(eax_4)
            
            if (eax_5.b == 0)
                var_108 = 1

int32_t esi = 0
int32_t var_f0 = 0

if (*(arg3 i+ 0xc0) s> 0)
    var_f0 = 1
    long double x87_r7_2 = float.t(0)
    long double temp1_1 = fconvert.t(fconvert.s(fconvert.t(*(arg2 + 0xcc))))
    x87_r7_2 - temp1_1
    eax_5.w = (x87_r7_2 < temp1_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        var_f0 = 0

if (*(arg3 i+ 0xbc) s> 0 && *(arg2 + 0x90) != 0)
    esi = 1

arg1.b = *(arg2 + 0xd0)
char edx = *(arg2 + 0x4c)
float var_ec
var_ec.b = *(arg2 + 0xa0)
char var_104 = arg1.b
int32_t ecx
ecx.b = *(arg2 + 0x4e) != 0
void* result

if (arg4[1] - 2 u> 1)
    result.b = 0
else
    int32_t eax_9
    
    if (edi[1].b == 0 || var_108 s< 1)
        eax_9 = 0x14
        
        if (var_108 s>= 1)
            var_108 = 0
    else
        eax_9 = 0x1e
    
    if (sub_50e180(cond:2, edi, var_f4_1, cond:1, var_fc, eax_9, 0, var_108, var_f0, esi, var_104, 
            edx, var_ec.b, ecx, arg2, arg3).b == 0)
        result.b = 0
    else if (sub_50ebb0(arg2, edi).b == 0)
        result.b = 0
    else
        int80_t st0_1
        st0_1, result = sub_50ec40(edi, arg3)
        
        if (result.b == 0)
            result.b = 0
        else
            float var_d4[0x10]
            sub_4b65f0(result, arg2 + 4, arg3 i+ 0xc, &var_d4)
            float var_94[0x10]
            sub_4b65f0(&var_94, &var_d4, arg3 i+ 0x54, &var_94)
            float* var_e8 = nullptr
            int32_t var_e4_1 = 0
            int32_t var_e0_1 = 0
            sub_65a090(&var_e8, 0x30)
            int32_t var_4 = 0
            float* eax_12 = var_e8
            __builtin_memcpy(eax_12, arg2 + 4, 0x40)
            __builtin_memcpy(&eax_12[0x10], &var_d4, 0x40)
            __builtin_memcpy(&eax_12[0x20], &var_94, 0x40)
            float edi_4 = var_10c
            
            if ((*(**(edi_4 i+ 0x28) + 0x28))(0, eax_12, 3) == 0)
                sub_65ab60(&var_e8)
                result.b = 0
            else if (var_104 == 0)
            label_50e70a:
                int32_t var_4_1 = 0xffffffff
                sub_65ab60(&var_e8)
                
                if (edx != 0)
                    result = sub_50f780(edi_4, arg2)
                
                if (edx != 0 && result.b == 0)
                    result.b = 0
                else
                    var_e8 = nullptr
                    int32_t var_e4_2 = 0
                    int32_t var_e0_2 = 0
                    sub_65a090(&var_e8, 8)
                    int32_t var_4_2 = 1
                    float* eax_18 = var_e8
                    *eax_18 = fconvert.s(fconvert.t(*(arg2 + 0x50)))
                    eax_18[1] = fconvert.s(fconvert.t(*(arg2 + 0x54)))
                    eax_18[2] = fconvert.s(fconvert.t(*(arg2 + 0x58)))
                    var_10c = fconvert.s(fconvert.t(*(arg2 + 0x70)))
                    eax_18[3] = fconvert.s(fconvert.t(var_10c))
                    eax_18[4] = fconvert.s(fconvert.t(*(arg2 + 0x60)))
                    eax_18[5] = fconvert.s(fconvert.t(*(arg2 + 0x64)))
                    eax_18[6] = fconvert.s(fconvert.t(*(arg2 + 0x68)))
                    eax_18[7] = fconvert.s(fconvert.t(*(arg2 + 0x6c)))
                    
                    if ((*(**(edi_4 i+ 0x28) + 0x20))(0x10, eax_18, (var_e4_2 - eax_18) s>> 2 u>> 2)
                            == 0)
                        sub_65ab60(&var_e8)
                        result.b = 0
                    else
                        int32_t* ecx_14 = *(edi_4 i+ 0x34)
                        var_10c = fconvert.s(fconvert.t(*(arg2 + 0xb8)))
                        var_fc.d = fconvert.s(fconvert.t(*(arg2 + 0xb4)))
                        char var_f8
                        var_f8.d = fconvert.s(fconvert.t(*(arg2 + 0xb0)))
                        var_104.d = fconvert.s(fconvert.t(*(arg2 + 0xac)))
                        
                        if ((*(*ecx_14 + 0x20))(7, fconvert.s(fconvert.t(var_104.d)), 
                                fconvert.s(fconvert.t(var_f8.d)), fconvert.s(fconvert.t(var_fc.d)), 
                                fconvert.s(fconvert.t(var_10c))) == 0)
                            sub_65ab60(&var_e8)
                            result.b = 0
                        else if (var_f0 s<= 0)
                        label_50e866:
                            
                            if (var_108 s> 0)
                            label_50e897:
                                void* edx_18 = **(edi_4 i+ 0x34)
                                var_10c = fconvert.s(fconvert.t(*(arg2 + 0xdc)))
                                var_fc.d = fconvert.s(fconvert.t(*(arg2 + 0x9c)))
                                var_f8.d = fconvert.s(fconvert.t(*(arg2 + 0x98)))
                                
                                if ((*(edx_18 + 0x20))(9, fconvert.s(fconvert.t(var_f8.d)), 
                                        fconvert.s(fconvert.t(var_fc.d)), 
                                        fconvert.s(fconvert.t(var_10c)), fconvert.s(float.t(0))) != 0)
                                    goto label_50e8e4
                                
                                sub_65ab60(&var_e8)
                                result.b = 0
                            else
                                if (sub_4b9910(arg2) != 0)
                                    var_10c = fconvert.s(fconvert.t(*(arg2 + 0xdc)))
                                    float.t(0) - fconvert.t(var_10c)
                                    bool p_2 = unimplemented  {test ah, 0x5}
                                    
                                    if (p_2)
                                        goto label_50e8e4
                                    
                                    goto label_50e897
                                
                            label_50e8e4:
                                int32_t var_4_3 = 0xffffffff
                                sub_65ab60(&var_e8)
                                
                                if (cond:1 == 0 || var_ec.b != 0)
                                    result.b = 1
                                else
                                    void* edx_19 = **(edi_4 i+ 0x28)
                                    var_10c = fconvert.s(fconvert.t(*(arg2 + 0xa8)))
                                    var_fc.d = fconvert.s(fconvert.t(*(arg2 + 0xa4)))
                                    long double x87_r6_37 = float.t(0)
                                    
                                    if ((*(edx_19 + 0x1c))(0x1c, fconvert.s(fconvert.t(var_fc.d)), 
                                            fconvert.s(fconvert.t(var_10c)), fconvert.s(x87_r6_37), 
                                            fconvert.s(x87_r6_37)).b == 0)
                                        result.b = 0
                                    else
                                        result.b = 1
                        else
                            int32_t* ecx_15 = *(edi_4 i+ 0x34)
                            var_10c = fconvert.s(fconvert.t(*(arg2 + 0xcc)))
                            int32_t eax_23 = *(*ecx_15 + 0x20)
                            var_10c = fconvert.s(fconvert.t(var_10c) / fconvert.t(*(edi_4 i+ 0x48)))
                            
                            if (eax_23(8, fconvert.s(fconvert.t(*(arg2 + 0xbc))), 
                                    fconvert.s(fconvert.t(*(arg2 + 0xc0))), 
                                    fconvert.s(fconvert.t(*(arg2 + 0xc4))), 
                                    fconvert.s(fconvert.t(var_10c))) != 0)
                                goto label_50e866
                            
                            sub_65ab60(&var_e8)
                            result.b = 0
            else
                long double x87_r6_1 = fconvert.t(0.5f)
                float eax_15 = *(arg3 i+ 0xb0)
                var_f4_1.d = fconvert.s(x87_r6_1)
                var_104.d = fconvert.s(x87_r6_1)
                long double x87_r5_1 = fconvert.t(0.5)
                
                if (eax_15 != 0)
                    var_10c = eax_15
                    var_f4_1.d = fconvert.s(x87_r5_1 / float.t(var_10c) + x87_r5_1)
                
                float ebx_1 = *(arg3 i+ 0xb4)
                
                if (ebx_1 == 0)
                    x87_r6_1 = x87_r5_1
                else
                    var_10c = ebx_1
                    var_104.d = fconvert.s(x87_r5_1 + x87_r5_1 / float.t(var_10c))
                
                long double x87_r5_3 = float.t(1)
                float* eax_16 = &var_d4
                long double x87_r4_6 = float.t(0)
                sub_4b28b0(eax_16, fconvert.s(x87_r6_1), fconvert.s(x87_r4_6), 
                    fconvert.s(x87_r4_6), fconvert.s(x87_r4_6), fconvert.s(x87_r4_6), 
                    fconvert.s(fconvert.t(-0.5f)), fconvert.s(x87_r4_6), fconvert.s(x87_r4_6), 
                    fconvert.s(x87_r4_6), fconvert.s(x87_r4_6), fconvert.s(x87_r5_3), 
                    fconvert.s(x87_r4_6), fconvert.s(fconvert.t(var_f4_1.d)), 
                    fconvert.s(fconvert.t(var_104.d)), fconvert.s(x87_r4_6), fconvert.s(x87_r5_3))
                float var_54[0x10]
                sub_4b65f0(eax_16, &var_94, &var_d4, &var_54)
                
                if ((*(**(edi_4 i+ 0x28) + 0x24))(0xc, &var_54) != 0)
                    goto label_50e70a
                
                sub_65ab60(&var_e8)
                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_10c)
return result
