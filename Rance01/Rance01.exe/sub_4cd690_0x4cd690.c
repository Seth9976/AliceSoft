// 函数: sub_4cd690
// 地址: 0x4cd690
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_726a5b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_13c
int32_t eax_2 = data_78c474 ^ &var_13c
int32_t __saved_edi
int32_t var_14c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float* eax_7
int32_t edx
edx:eax_7 = muls.dp.d(0x76b981db, *(arg1 + 0x2c) - *(arg1 + 0x28))
int32_t edx_1 = edx s>> 7

if ((edx_1 u>> 0x1f) + edx_1 s<= 0 || *(arg1 + 4) == 0)
    eax_7.b = 1
else if (sub_4cd4b0(arg1, arg3).b == 0)
    eax_7.b = 1
else
    struct sealengine::CDrawParam::VTable* var_100
    sub_4b97d0(&var_100)
    int32_t var_c_1 = 0
    void* edx_3 = *(arg1 + 4)
    struct sealengine::CDrawParam::VTable** eax_8
    eax_8.b = *(edx_3 + 0x71)
    char var_136_1 = eax_8.b
    int32_t* eax_9 = *(arg4 + 0xd8)
    float ecx_7 = *eax_9
    
    if ((((eax_9[1] i- ecx_7) & 0xfffffffc) s<= 4 || *(ecx_7 i+ 4) == 0) && var_136_1 != 0)
        eax_7.b = 1
    else
        if (arg3 == 4)
            char var_b2_1 = 1
        
        eax_7 = *(arg1 + 0xe8)
        float* var_118_1 = eax_7
        
        if (eax_7 == 0)
            eax_7.b = 1
        else
            long double x87_r7_1 = float.t(1)
            float var_10c_1 = fconvert.s(x87_r7_1)
            float var_108_1 = fconvert.s(x87_r7_1)
            
            if (*(arg1 + 0x26) != 0)
                eax_7 = *(arg1 + 0xec)
                
                if (eax_7 != 0)
                    var_10c_1 = eax_7[1]
                    var_108_1 = eax_7[2]
            
            ecx_7.b = *(edx_3 + 0x26)
            char var_135_1 = ecx_7.b
            
            if (*(arg1 + 0xe4) == 0)
                eax_7.b = 0
            else if (sub_4cde90(arg1).b == 0)
                eax_7.b = 0
            else
                float* var_134_1 = nullptr
                
                if (arg3 u> 7)
                label_4cd819:
                    int32_t var_130_1 = 0
                    
                    switch (arg3)
                        case 0, 1, 3, 6, 7
                            void* eax_14 = *(*(arg1 + 0xe8) + 0x28)
                            
                            if (eax_14 != 0)
                                var_130_1 = *(eax_14 + 8)
                    
                    int32_t var_110_1 = 0
                    
                    switch (arg3)
                        case 0, 1, 3, 6, 7
                            if (*(arg1 + 0x25) != 0)
                                void* eax_17 = *(*(arg1 + 0xe8) + 0x2c)
                                
                                if (eax_17 != 0)
                                    var_110_1 = *(eax_17 + 8)
                    
                    int32_t var_114_1 = 0
                    
                    switch (arg3)
                        case 0, 1, 3, 6, 7
                            void* eax_19 = *(arg1 + 0xec)
                            
                            if (eax_19 != 0)
                                void* eax_20 = sub_4ccb90(eax_19, *(arg1 + 0xcc))
                                
                                if (eax_20 != 0)
                                    var_114_1 = *(eax_20 + 8)
                    
                    int32_t eax_21 = 0
                    
                    switch (arg3)
                        case 0, 1, 3, 6, 7
                            void* ecx_9 = *(arg1 + 0xec)
                            
                            if (ecx_9 != 0)
                                void* ecx_10 = *(ecx_9 + 0x2c)
                                
                                if (ecx_10 != 0)
                                    eax_21 = *(ecx_10 + 8)
                    
                    int32_t var_84_1 = var_114_1
                    int32_t var_7c_1 = eax_21
                    float* var_88_1 = var_134_1
                    int32_t var_70_1 = var_130_1
                    int32_t var_80_1 = var_110_1
                    int32_t var_78_1 = 0
                    int32_t var_74_1 = 0
                    (*(*arg5 + 0x80))(0, 0)
                    void* edx_14 = *arg5
                    int32_t var_150_1
                    
                    if (arg3 == 5)
                        var_150_1 = 1
                    else
                        (*(edx_14 + 0x80))(1, 0)
                        (*(*arg5 + 0x80))(2, 0)
                        (*(*arg5 + 0x80))(3, 0)
                        (*(*arg5 + 0x80))(4, 0)
                        edx_14 = *arg5
                        var_150_1 = 5
                    
                    (*(edx_14 + 0x8c))(0, var_150_1)
                    int32_t var_150_2 = *(arg4 + 0x94)
                    sub_509e70(arg4, arg5)
                    long double x87_r7_2 = float.t(0)
                    long double x87_r7_3
                    
                    switch (arg3)
                        case 0, 1, 3, 6, 7
                            x87_r7_3 = float.t(1)
                            int32_t var_b0_1 = *(arg1 + 0x98)
                            int32_t var_ac_1 = *(arg1 + 0x9c)
                            int32_t var_a8_1 = *(arg1 + 0xa0)
                            int32_t var_a4_1 = *(arg1 + 0xa4)
                            int32_t var_a0_1 = *(arg1 + 0xa8)
                            int32_t var_9c_1 = *(arg1 + 0xac)
                            int32_t var_98_1 = *(arg1 + 0xb0)
                            float var_94_1 = *(arg1 + 0xb4)
                        default
                            long double x87_r6_1 = float.t(1)
                            x87_r7_3 = x87_r6_1
                            float var_b0_2 = fconvert.s(x87_r6_1)
                            float var_ac_2 = fconvert.s(x87_r6_1)
                            float var_a8_2 = fconvert.s(x87_r6_1)
                            float var_a4_2 = fconvert.s(x87_r6_1)
                            float var_a0_2 = fconvert.s(x87_r7_2)
                            float var_9c_2 = fconvert.s(x87_r7_2)
                            float var_98_2 = fconvert.s(x87_r7_2)
                            float var_94_2 = fconvert.s(x87_r7_2)
                    
                    void* eax_35 = *(arg1 + 4)
                    float var_90_1 = fconvert.s(x87_r7_3)
                    float ecx_22
                    ecx_22.b = *(eax_35 + 0x27)
                    float var_24_1 = fconvert.s(fconvert.t(*(arg1 + 0xbc)))
                    char var_8c_1 = ecx_22.b
                    
                    if (arg3 == 6 || arg3 == 7)
                        int32_t var_150_3
                        
                        if (*(eax_35 + 0x74) == 1)
                            var_150_3 = 3
                        else
                            var_150_3 = 1
                        
                        (*(*arg5 + 0x84))(var_150_3)
                        (*(*arg5 + 0x90))(0, 5)
                        long double x87_r7_5 = fconvert.t(*(arg1 + 0xb8))
                        long double x87_r6_3 = float.t(1)
                        x87_r6_3 - x87_r7_5
                        int32_t eax_41
                        eax_41.w = (x87_r6_3 < x87_r7_5 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
                            | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe
                        bool p_1 = unimplemented  {test ah, 0x44}
                        
                        if (p_1)
                            (*(*arg5 + 0x90))(1, 7)
                            long double x87_r7_7 = fconvert.t(*(arg1 + 0xb8)) * fconvert.t(255.0)
                            int32_t edx_30 = *(*arg5 + 0xa8)
                            int16_t x87status_1
                            int16_t temp0_2
                            temp0_2, x87status_1 = __fnstcw_memmem16(arg2)
                            var_134_1.w = temp0_2
                            int16_t x87control
                            int16_t x87status_2
                            x87control, x87status_2 =
                                __fldcw_memmem16((zx.d(var_134_1.w) | 0xc00).w)
                            int32_t var_130_4
                            var_130_4.q = int.q(x87_r7_7)
                            int16_t x87control_1
                            int16_t x87status_3
                            x87control_1, x87status_3 = __fldcw_memmem16(var_134_1.w)
                            edx_30(var_130_4 << 0x18)
                        
                        float var_90_2 = fconvert.s(fconvert.t(*(arg1 + 0xb8)))
                    else if (var_135_1 != 0 && arg3 != 4)
                        (*(*arg5 + 0x88))(1, 0xc0)
                        (*(*arg5 + 0x90))(0, 1)
                    
                    (*(*arg5 + 0x94))(1)
                    int32_t eax_48
                    
                    if (*(arg1 + 0x69) == 0 || arg3 == 6 || arg3 == 7)
                        eax_48.b = 0
                    else
                        eax_48.b = 1
                    
                    (*(*arg5 + 0x98))(eax_48)
                    
                    if (arg3 == 2)
                        (*(*arg5 + 0x9c))(0)
                    
                    void* edx_35 = arg1
                    char eax_50 = *(edx_35 + 0x64)
                    void var_fc
                    __builtin_memcpy(&var_fc, *(edx_35 + 0xd4), 0x40)
                    int32_t ecx_33
                    
                    if (eax_50 != 0)
                        ecx_33 = *(edx_35 + 0xdc)
                        
                        if (ecx_33 != 0)
                            char var_b4_1 = eax_50
                            int32_t var_bc_1 = ecx_33
                    
                    if (*(edx_35 + 0x25) == 0 || *(edx_35 + 0xd0) == 0)
                        eax_50 = 0
                    else
                        eax_50 = 1
                    
                    ecx_33.b = *(edx_35 + 0x68)
                    char var_6c_1 = eax_50
                    void* eax_52 = *(edx_35 + 4)
                    char var_60_1 = ecx_33.b
                    float var_68_1 = fconvert.s(fconvert.t(*(eax_52 + 0x4c)))
                    float var_64_1 = fconvert.s(fconvert.t(*(eax_52 + 0x50)))
                    int32_t var_54_1 = var_118_1[1]
                    float var_5c_1 = fconvert.s(fconvert.t(*(edx_35 + 0xf0)))
                    int32_t var_50_1 = var_118_1[2]
                    float var_58_1 = fconvert.s(fconvert.t(*(edx_35 + 0xf4)))
                    float var_4c_1 = var_10c_1
                    float var_48_1 = var_108_1
                    void* eax_56 = *(edx_35 + 4)
                    int32_t var_44_1 = *(eax_56 + 0x5c)
                    float var_34_1 = fconvert.s(fconvert.t(*(eax_56 + 0x6c)))
                    int32_t var_40_1 = *(eax_56 + 0x60)
                    int32_t var_3c_1 = *(eax_56 + 0x64)
                    int32_t var_38_1 = *(eax_56 + 0x68)
                    
                    if (var_136_1 != 0)
                        (*(*arg5 + 0xa4))(1)
                        edx_35 = arg1
                    
                    if (arg3 == 2 || arg3 == 4 || arg3 == 5)
                        edx_35.b = 0
                    else
                        edx_35.b = *(edx_35 + 0x65)
                    
                    char var_b3_1 = edx_35.b
                    int32_t esi_5
                    
                    if (arg3 != 5)
                        if (sub_4bedc0(&var_100, arg4, arg1 + 0x28, *(arg1 + 0xe4)).b != 0)
                            esi_5 = arg3
                            
                            if (esi_5 != 6 && esi_5 != 7)
                                goto label_4cdd64
                            
                        label_4cdd7c:
                            (*(*arg5 + 0x84))(0)
                            (*(*arg5 + 0x90))(0, 1)
                            (*(*arg5 + 0x90))(1, 0)
                            (*(*arg5 + 0xa8))(0xffffffff)
                        label_4cddac:
                            
                            if (var_135_1 == 0)
                                goto label_4cddcb
                            
                            if (esi_5 != 4)
                                (*(*arg5 + 0x88))(0, 0)
                            
                            goto label_4cddcb
                        
                        eax_7.b = 0
                    else
                        edx_35.b = *(arg1 + 0xd1)
                        int32_t ecx_41
                        ecx_41.b = *(arg1 + 0x64)
                        var_118_1.b = edx_35.b
                        
                        if (sub_4bee30(ecx_41.b, arg4, arg1 + 0x28, *(arg1 + 0xe4), &var_100, 
                                var_118_1.b).b != 0)
                            esi_5 = arg3
                        label_4cdd64:
                            
                            if (var_135_1 != 0)
                                if (esi_5 == 4)
                                    goto label_4cddac
                                
                                goto label_4cdd7c
                            
                        label_4cddcb:
                            
                            if (esi_5 == 2)
                                (*(*arg5 + 0x9c))(1)
                            
                            long double x87_r7_14 = float.t(0)
                            float var_5c_2 = fconvert.s(x87_r7_14)
                            float var_58_2 = fconvert.s(x87_r7_14)
                            
                            if (var_136_1 != 0)
                                (*(*arg5 + 0xa4))(0)
                            
                            eax_7.b = 1
                        else
                            eax_7.b = 0
                else
                    switch (arg3)
                        case 0, 1, 2, 3, 4, 6, 7
                            eax_7 = sub_4ccb90(*(arg1 + 0xe8), *(arg1 + 0xcc))
                            
                            if (eax_7 == 0)
                                eax_7.b = 1
                            else
                                eax_7 = eax_7[2]
                                var_134_1 = eax_7
                                
                                if (eax_7 != 0)
                                    goto label_4cd819
                                
                                eax_7.b = 1
                        case 5
                            goto label_4cd819

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_13c)
