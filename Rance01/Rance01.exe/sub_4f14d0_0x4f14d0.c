// 函数: sub_4f14d0
// 地址: 0x4f14d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711a2a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_70 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t arg_c
float* ebx = arg_c
int32_t arg_8
float* ebp = arg_8
int32_t eax_3 = sub_70c710(fconvert.t(*ebx))
long double x87_r7_1 = fconvert.t(*ebp)
arg_c = eax_3
int32_t eax_4 = sub_70c710(x87_r7_1)
arg_8 = eax_4
int32_t* ecx = &arg_c

if (eax_3 s>= eax_4)
    ecx = &arg_8

int32_t ecx_1 = *ecx
arg_8 = eax_4
int32_t var_54 = ecx_1
arg_c = eax_3
int32_t* eax_5 = &arg_c

if (eax_4 s>= eax_3)
    eax_5 = &arg_8

int32_t var_5c = *eax_5
int32_t eax_6 = sub_70c710(fconvert.t(ebx[2]))
long double x87_r7_3 = fconvert.t(ebp[2])
arg_c = eax_6
int32_t eax_7 = sub_70c710(x87_r7_3)
arg_8 = eax_7
int32_t* ecx_2 = &arg_c

if (eax_6 s>= eax_7)
    ecx_2 = &arg_8

int32_t ecx_3 = *ecx_2
int32_t var_40 = eax_7
arg_c = ecx_3
arg_8 = eax_6
int32_t* eax_8 = &arg_8

if (eax_7 s>= eax_6)
    eax_8 = &var_40

float arg_4
float edi_2 = arg_4
int32_t var_50 = *eax_8
int32_t eax_10 = *(edi_2 i+ 0x28)

if (var_54 s> eax_10)
    eax_10.b = 0
else
    int32_t edx_1 = *(edi_2 i+ 0x24)
    
    if (var_5c s< edx_1 || ecx_3 s> *(edi_2 i+ 0x30))
        eax_10.b = 0
    else
        int32_t ecx_4 = *(edi_2 i+ 0x2c)
        
        if (var_50 s< ecx_4)
            eax_10.b = 0
        else
            if (var_54 s< edx_1)
                var_54 = edx_1
            
            if (var_5c s> eax_10)
                var_5c = eax_10
            
            if (arg_c s< ecx_4)
                arg_c = ecx_4
            
            int32_t eax_11 = *(edi_2 i+ 0x30)
            
            if (var_50 s> eax_11)
                var_50 = eax_11
            
            void var_20
            sub_4167e0(&var_20)
            int32_t var_4 = 0
            int32_t eax_12 = arg_c
            int32_t var_58_1 = eax_12
            float var_38
            
            if (eax_12 s<= var_50)
                float edi_3 = edi_2
                int32_t eax_25
                
                do
                    int32_t esi_3 = var_54
                    var_40 = var_54
                    
                    if (var_54 s<= var_5c)
                        do
                            int32_t ecx_8 =
                                (var_58_1 - *(edi_3 i+ 0x2c)) * *(edi_3 i+ 0x34) - *(edi_3 i+ 0x24)
                            int32_t ecx_9 = ecx_8 + esi_3
                            
                            if (ecx_8 + esi_3 s>= 0)
                                int32_t* eax_14 = *(edi_3 i+ 0x14)
                                
                                if (ecx_9 s< (*(edi_3 i+ 0x18) - eax_14) s>> 4)
                                    arg_c = var_58_1 + 1
                                    float var_4c_1 = fconvert.s(float.t(arg_c))
                                    arg_8 = fconvert.s(float.t(var_40))
                                    float var_44_1 = fconvert.s(float.t(var_58_1))
                                    long double x87_r7_8 = fconvert.t(arg_8)
                                    char eax_17 = sub_4f2300(fconvert.s(fconvert.t(*ebp)), 
                                        fconvert.s(fconvert.t(ebp[2])), 
                                        fconvert.s(fconvert.t(*ebx)), 
                                        fconvert.s(fconvert.t(ebx[2])), fconvert.s(x87_r7_8), 
                                        fconvert.s(fconvert.t(var_44_1)), fconvert.s(x87_r7_8), 
                                        fconvert.s(fconvert.t(var_4c_1)))
                                    arg_c = esi_3 + 1
                                    int32_t edx_4
                                    edx_4.b = eax_17
                                    float var_48_1 = fconvert.s(float.t(arg_c))
                                    long double x87_r7_14 = fconvert.t(var_44_1)
                                    long double x87_r7_20 = fconvert.t(var_4c_1)
                                    arg_c.b = sub_4f2300(fconvert.s(fconvert.t(*ebp)), 
                                        fconvert.s(fconvert.t(ebp[2])), 
                                        fconvert.s(fconvert.t(*ebx)), 
                                        fconvert.s(fconvert.t(ebx[2])), 
                                        fconvert.s(fconvert.t(arg_8)), fconvert.s(x87_r7_14), 
                                        fconvert.s(fconvert.t(var_48_1)), fconvert.s(x87_r7_14))
                                    arg_8.b = sub_4f2300(fconvert.s(fconvert.t(*ebp)), 
                                        fconvert.s(fconvert.t(ebp[2])), 
                                        fconvert.s(fconvert.t(*ebx)), 
                                        fconvert.s(fconvert.t(ebx[2])), 
                                        fconvert.s(fconvert.t(arg_8)), fconvert.s(x87_r7_20), 
                                        fconvert.s(fconvert.t(var_48_1)), fconvert.s(x87_r7_20))
                                    long double x87_r7_27 = fconvert.t(var_48_1)
                                    char eax_20 = sub_4f2300(fconvert.s(fconvert.t(*ebp)), 
                                        fconvert.s(fconvert.t(ebp[2])), 
                                        fconvert.s(fconvert.t(*ebx)), 
                                        fconvert.s(fconvert.t(ebx[2])), fconvert.s(x87_r7_27), 
                                        fconvert.s(fconvert.t(var_44_1)), fconvert.s(x87_r7_27), 
                                        fconvert.s(fconvert.t(var_4c_1)))
                                    
                                    if (edx_4.b != 0 || arg_c.b != edx_4.b || arg_8.b != edx_4.b
                                            || eax_20 != 0)
                                        int32_t* i = eax_14[ecx_9 * 4]
                                        
                                        if (i == eax_14[ecx_9 * 4 + 1])
                                            edi_3 = arg_4
                                        else
                                            float edx_5
                                            
                                            do
                                                sub_4c33d0(&var_20, i, &var_38)
                                                edx_5 = arg_4
                                                i = &i[1]
                                            while (i != *(*(edx_5 i+ 0x14) + (ecx_9 << 4) + 4))
                                            
                                            edi_3 = edx_5
                            
                            esi_3 = var_40 + 1
                            var_40 = esi_3
                        while (esi_3 s<= var_5c)
                    
                    eax_25 = var_58_1 + 1
                    var_58_1 = eax_25
                while (eax_25 s<= var_50)
            
            int32_t* var_1c
            int32_t* ecx_15 = var_1c
            int32_t eax_26 = *ecx_15
            arg_4 = fconvert.s(fconvert.t(3.40282347e+38f))
            arg_c = eax_26
            
            if (eax_26 != ecx_15)
                do
                    void* edi_5 = *(eax_26 + 0xc)
                    long double x87_r7_33 = float.t(0)
                    var_38 = fconvert.s(x87_r7_33)
                    float var_34_1 = fconvert.s(x87_r7_33)
                    float var_30_1 = fconvert.s(x87_r7_33)
                    
                    if (sub_529e40(ebp, ebx, &var_38, edi_5 + 0x3c) != 0)
                        float* ecx_13 = &var_38
                        char eax_30
                        long double st0_1
                        st0_1, eax_30 = sub_4f19e0(ecx_13, edi_5)
                        
                        if (eax_30 != 0)
                            float var_2c
                            arg_8 = fconvert.s(fconvert.t(sub_51e1c0(ecx_13, &var_2c, arg1, 
                                &var_38)[2]))
                            long double x87_r7_35 = fconvert.t(arg_8)
                            long double x87_r6_5 = fconvert.t(arg_4)
                            x87_r6_5 - x87_r7_35
                            float* eax_32
                            eax_32.w = (x87_r6_5 < x87_r7_35 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_5, x87_r7_35) ? 1 : 0) << 0xa
                                | (x87_r6_5 == x87_r7_35 ? 1 : 0) << 0xe | 0x3800
                            
                            if ((eax_32:1.b & 0x41) == 0)
                                arg_4 = fconvert.s(x87_r7_35)
                                *arg2 = var_38
                                arg2[1] = var_34_1
                                arg2[2] = var_30_1
                    
                    sub_58bbf0(&arg_c)
                    eax_26 = arg_c
                while (eax_26 != var_1c)
                
                ecx_15 = var_1c
            
            long double x87_r7_36 = fconvert.t(arg_4)
            long double x87_r6_6 = fconvert.t(3.4028234663852886e+38)
            x87_r6_6 - x87_r7_36
            eax_26.w = (x87_r6_6 < x87_r7_36 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_6, x87_r7_36) ? 1 : 0) << 0xa
                | (x87_r6_6 == x87_r7_36 ? 1 : 0) << 0xe
            bool p_1 = unimplemented  {test ah, 0x44}
            
            if (not(p_1))
                int32_t var_4_2 = 2
                sub_58bc40(&var_20, &arg_4, *ecx_15, ecx_15)
                int32_t* var_74_11 = var_1c
                sub_6b4d5b()
                eax_10.b = 0
            else
                int32_t var_4_1 = 1
                sub_58bc40(&var_20, &arg_4, *ecx_15, ecx_15)
                int32_t* var_74_9 = var_1c
                sub_6b4d5b()
                int32_t eax_38
                eax_38.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
