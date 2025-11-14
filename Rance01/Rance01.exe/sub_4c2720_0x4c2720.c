// 函数: sub_4c2720
// 地址: 0x4c2720
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
float* ebp = arg1
long double x87_r7 = float.t(0)
long double temp1 = fconvert.t(*ebp)
x87_r7 - temp1
long double x87_r6 = fconvert.t(*ebp)
int32_t edi

if ((((x87_r7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) != 0)
    edi = sub_70c710(x87_r6)
else
    edi = sub_70c710(x87_r6) - 1

long double temp2 = fconvert.t(ebp[2])
x87_r7 - temp2
int32_t eax_4
eax_4.w = (x87_r7 < temp2 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp2) ? 1 : 0) << 0xa
    | (x87_r7 == temp2 ? 1 : 0) << 0xe | 0x3800
long double x87_r6_1 = fconvert.t(ebp[2])
int32_t eax_6

if ((eax_4:1.b & 0x41) != 0)
    eax_6 = sub_70c710(x87_r6_1)
else
    eax_6 = sub_70c710(x87_r6_1) - 1

long double temp3 = fconvert.t(*ebx)
x87_r7 - temp3
arg_c = eax_6
eax_6.w = (x87_r7 < temp3 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp3) ? 1 : 0) << 0xa
    | (x87_r7 == temp3 ? 1 : 0) << 0xe | 0x3800
long double x87_r6_2 = fconvert.t(*ebx)
int32_t esi

if ((eax_6:1.b & 0x41) != 0)
    esi = sub_70c710(x87_r6_2)
else
    esi = sub_70c710(x87_r6_2) - 1

long double temp4 = fconvert.t(ebx[2])
x87_r7 - temp4
int32_t eax_7
eax_7.w = (x87_r7 < temp4 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp4) ? 1 : 0) << 0xa
    | (x87_r7 == temp4 ? 1 : 0) << 0xe
long double x87_r7_1 = fconvert.t(ebx[2])
int32_t eax_9

if ((eax_7:1.b & 0x41) != 0)
    eax_9 = sub_70c710(x87_r7_1)
else
    eax_9 = sub_70c710(x87_r7_1) - 1

int32_t var_50 = edi
int32_t var_58_1

if (edi s>= esi)
    var_50 = esi
    var_58_1 = edi

if (edi s< esi || edi s<= esi)
    var_58_1 = esi

int32_t ecx = arg_c
arg_c = ecx
int32_t var_54_1

if (ecx s>= eax_9)
    arg_c = eax_9
    var_54_1 = ecx

if (ecx s< eax_9 || ecx s<= eax_9)
    var_54_1 = eax_9

float arg_4
float edi_1 = arg_4
int32_t ecx_1 = *(edi_1 i+ 0x28)

if (var_50 s> ecx_1)
    eax_9.b = 0
else
    eax_9 = *(edi_1 i+ 0x24)
    
    if (var_58_1 s< eax_9 || arg_c s> *(edi_1 i+ 0x30))
        eax_9.b = 0
    else
        int32_t esi_1 = *(edi_1 i+ 0x2c)
        
        if (var_54_1 s< esi_1)
            eax_9.b = 0
        else
            if (var_50 s< eax_9)
                var_50 = eax_9
            
            if (var_58_1 s> ecx_1)
                var_58_1 = ecx_1
            
            if (arg_c s< esi_1)
                arg_c = esi_1
            
            int32_t eax_10 = *(edi_1 i+ 0x30)
            
            if (var_54_1 s> eax_10)
                var_54_1 = eax_10
            
            void var_20
            sub_4167e0(&var_20)
            int32_t var_4 = 0
            int32_t eax_11 = arg_c
            int32_t var_4c_1 = eax_11
            float var_38
            
            if (eax_11 s<= var_54_1)
                int32_t eax_23
                
                do
                    int32_t esi_3 = var_50
                    int32_t var_48_1 = esi_3
                    
                    while (esi_3 s<= var_58_1)
                        int32_t ecx_5 =
                            (var_4c_1 - *(edi_1 i+ 0x2c)) * *(edi_1 i+ 0x34) - *(edi_1 i+ 0x24)
                        int32_t ecx_6 = ecx_5 + esi_3
                        
                        if (ecx_5 + esi_3 s>= 0
                                && ecx_6 s< (*(edi_1 i+ 0x18) - *(edi_1 i+ 0x14)) s>> 4)
                            arg_c = var_4c_1 + 1
                            float var_44_1 = fconvert.s(float.t(arg_c))
                            arg1 = fconvert.s(float.t(var_48_1))
                            float var_3c_1 = fconvert.s(float.t(var_4c_1))
                            long double x87_r7_6 = fconvert.t(arg1)
                            char eax_14 = sub_4f2300(fconvert.s(fconvert.t(*ebp)), 
                                fconvert.s(fconvert.t(ebp[2])), fconvert.s(fconvert.t(*ebx)), 
                                fconvert.s(fconvert.t(ebx[2])), fconvert.s(x87_r7_6), 
                                fconvert.s(fconvert.t(var_3c_1)), fconvert.s(x87_r7_6), 
                                fconvert.s(fconvert.t(var_44_1)))
                            arg_c = esi_3 + 1
                            int32_t edx_4
                            edx_4.b = eax_14
                            float var_40_1 = fconvert.s(float.t(arg_c))
                            long double x87_r7_12 = fconvert.t(var_3c_1)
                            long double x87_r7_18 = fconvert.t(var_44_1)
                            arg_c.b = sub_4f2300(fconvert.s(fconvert.t(*ebp)), 
                                fconvert.s(fconvert.t(ebp[2])), fconvert.s(fconvert.t(*ebx)), 
                                fconvert.s(fconvert.t(ebx[2])), fconvert.s(fconvert.t(arg1)), 
                                fconvert.s(x87_r7_12), fconvert.s(fconvert.t(var_40_1)), 
                                fconvert.s(x87_r7_12))
                            arg1.b = sub_4f2300(fconvert.s(fconvert.t(*ebp)), 
                                fconvert.s(fconvert.t(ebp[2])), fconvert.s(fconvert.t(*ebx)), 
                                fconvert.s(fconvert.t(ebx[2])), fconvert.s(fconvert.t(arg1)), 
                                fconvert.s(x87_r7_18), fconvert.s(fconvert.t(var_40_1)), 
                                fconvert.s(x87_r7_18))
                            long double x87_r7_25 = fconvert.t(var_40_1)
                            char eax_17 = sub_4f2300(fconvert.s(fconvert.t(*ebp)), 
                                fconvert.s(fconvert.t(ebp[2])), fconvert.s(fconvert.t(*ebx)), 
                                fconvert.s(fconvert.t(ebx[2])), fconvert.s(x87_r7_25), 
                                fconvert.s(fconvert.t(var_3c_1)), fconvert.s(x87_r7_25), 
                                fconvert.s(fconvert.t(var_44_1)))
                            
                            if (edx_4.b != 0 || arg_c.b != edx_4.b || arg1.b != edx_4.b
                                    || eax_17 != 0)
                                int32_t* eax_18 = *(arg_4 i+ 0x14)
                                int32_t* i = eax_18[ecx_6 * 4]
                                
                                if (i != eax_18[ecx_6 * 4 + 1])
                                    do
                                        sub_4c33d0(&var_20, i, &var_38)
                                        i = &i[1]
                                    while (i != *(*(arg_4 i+ 0x14) + (ecx_6 << 4) + 4))
                            
                            esi_3 = var_48_1
                            edi_1 = arg_4
                        
                        esi_3 += 1
                        var_48_1 = esi_3
                    
                    eax_23 = var_4c_1 + 1
                    var_4c_1 = eax_23
                while (eax_23 s<= var_54_1)
            
            int32_t*** var_1c
            int32_t*** ecx_15 = var_1c
            int32_t** eax_24 = *ecx_15
            arg_4 = fconvert.s(fconvert.t(3.40282347e+38f))
            arg_c = eax_24
            
            if (eax_24 != ecx_15)
                do
                    int32_t* edi_3 = eax_24[3]
                    long double x87_r7_31 = float.t(0)
                    var_38 = fconvert.s(x87_r7_31)
                    float var_34_1 = fconvert.s(x87_r7_31)
                    float var_30_1 = fconvert.s(x87_r7_31)
                    
                    if (sub_529e40(ebp, ebx, &var_38, &edi_3[8]) != 0)
                        float* ecx_12 = &var_38
                        char eax_27
                        long double st0_1
                        st0_1, eax_27 = sub_4c2c40(ecx_12, edi_3)
                        
                        if (eax_27 != 0)
                            float var_2c
                            long double x87_r7_33 = fconvert.t(fconvert.s(fconvert.t(sub_51e1c0(
                                ecx_12, &var_2c, arg2, &var_38)[2])))
                            long double x87_r6_7 = fconvert.t(arg_4)
                            x87_r6_7 - x87_r7_33
                            float* eax_29
                            eax_29.w = (x87_r6_7 < x87_r7_33 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_7, x87_r7_33) ? 1 : 0) << 0xa
                                | (x87_r6_7 == x87_r7_33 ? 1 : 0) << 0xe | 0x3800
                            
                            if ((eax_29:1.b & 0x41) == 0)
                                arg_4 = fconvert.s(x87_r7_33)
                                *arg3 = var_38
                                arg3[1] = var_34_1
                                arg3[2] = var_30_1
                    
                    sub_58bbf0(&arg_c)
                    eax_24 = arg_c
                while (eax_24 != var_1c)
                
                ecx_15 = var_1c
            
            long double x87_r7_34 = fconvert.t(arg_4)
            long double x87_r6_8 = fconvert.t(3.4028234663852886e+38)
            x87_r6_8 - x87_r7_34
            eax_24.w = (x87_r6_8 < x87_r7_34 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_8, x87_r7_34) ? 1 : 0) << 0xa
                | (x87_r6_8 == x87_r7_34 ? 1 : 0) << 0xe
            bool p_1 = unimplemented  {test ah, 0x44}
            
            if (not(p_1))
                int32_t var_4_2 = 2
                sub_58bc40(&var_20, &arg_4, *ecx_15, ecx_15)
                int32_t*** var_74_11 = var_1c
                sub_6b4d5b()
                eax_9.b = 0
            else
                int32_t var_4_1 = 1
                sub_58bc40(&var_20, &arg_4, *ecx_15, ecx_15)
                int32_t*** var_74_9 = var_1c
                sub_6b4d5b()
                int32_t eax_34
                eax_34.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
