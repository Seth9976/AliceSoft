// 函数: sub_4b2c30
// 地址: 0x4b2c30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_722a17
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_dc
int32_t eax_2 = data_78c474 ^ &var_dc
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_d8 = 0
sub_4b31a0(arg1)
sub_4b30d0(arg1)
int32_t* ecx = arg1[0x10]

if (ecx != 0)
    (*(*ecx + 4))(eax_4)
    arg1[0x10] = 0

void* result = &arg1[0x19]
arg1[0x21] = 0xffffffff
bool cond:0 = *(result + 0x14) u< 0x10
*(result + 0x10) = 0

if (not(cond:0))
    result = *result

*result = 0
arg1[0x20] = 0
arg1[3].b = 0

if (arg1[0x26] == 0)
    result.b = 0
else
    sub_4b30d0(arg1)
    int32_t eax_7 = 0
    int32_t var_d4_1 = 0
    
    if (arg3 s> 0)
        while (true)
            char var_c4
            int32_t var_b0
            int32_t edx_3
            int32_t* esi_1
            
            if (eax_7 s<= 0)
                esi_1 = &var_c4
                var_b0 = 0xf
                int32_t var_b4_1 = 0
                var_c4 = 0
                edx_3 = sub_401270(esi_1, 4, ".png")
                int32_t var_c_2 = 1
                var_d8 |= 2
            else
                int32_t var_f0_2 = eax_7
                int32_t* eax_8
                eax_8, edx_3 = sub_4104a0("[%d].png")
                esi_1 = eax_8
                int32_t var_c_1 = 0
                var_d8 |= 1
            
            char var_70
            sub_401ab0(&var_70, edx_3, arg2)
            int32_t var_c_3 = 2
            char var_8c
            int32_t* eax_10
            int32_t edx_5
            eax_10, edx_5 = sub_401800(0, arg2, &var_8c)
            var_c_3.b = 3
            var_c_3.b = 4
            int32_t var_a8
            char var_54
            sub_4b3c20(sub_4b3c20(eax_10, edx_5, &var_70, &var_54), &var_a8, esi_1, &var_a8)
            int32_t var_40
            
            if (var_40 u>= 0x10)
                int32_t var_f0_5 = var_54.d
                sub_6b4d5b()
            
            var_40 = 0xf
            int32_t var_44_1 = 0
            var_54 = 0
            int32_t var_78
            
            if (var_78 u>= 0x10)
                int32_t var_f0_6 = var_8c.d
                sub_6b4d5b()
            
            var_78 = 0xf
            int32_t var_7c_1 = 0
            var_8c = 0
            int32_t var_5c
            
            if (var_5c u>= 0x10)
                int32_t var_f0_7 = var_70.d
                sub_6b4d5b()
            
            var_5c = 0xf
            int32_t var_60_1 = 0
            var_70 = 0
            int32_t ebx_1 = var_d8
            
            if ((ebx_1.b & 2) != 0)
                ebx_1 &= 0xfffffffd
                var_d8 = ebx_1
                
                if (var_b0 u>= 0x10)
                    int32_t var_f0_8 = var_c4.d
                    sub_6b4d5b()
                
                var_b0 = 0xf
                int32_t var_b4_2 = 0
                var_c4 = 0
            
            var_c_3.b = 0xa
            
            if ((ebx_1.b & 1) != 0)
                var_d8 = ebx_1 & 0xfffffffe
                char var_38
                int32_t var_24
                
                if (var_24 u>= 0x10)
                    int32_t var_f0_9 = var_38.d
                    sub_6b4d5b()
                
                var_24 = 0xf
                int32_t var_28_1 = 0
                var_38 = 0
            
            result = sub_4c0fd0(arg1[0x26], &var_a8, 1)
            void* result_1 = result
            int32_t var_94
            
            if (result == 0)
                if (var_94 u>= 0x10)
                    int32_t var_f0_11 = var_a8
                    sub_6b4d5b()
                
                break
            
            int32_t eax_14 = arg1[0x12]
            int32_t ecx_12
            
            if (&result_1 u< eax_14)
                ecx_12 = arg1[0x11]
            
            if (&result_1 u>= eax_14 || ecx_12 u> &result_1)
                if (eax_14 == arg1[0x13])
                    sub_4307a0(&arg1[0x11])
                
                void** eax_19 = arg1[0x12]
                
                if (eax_19 != 0)
                    *eax_19 = result
                
                arg1[0x12] = &arg1[0x12]->Handler
            else
                if (eax_14 == arg1[0x13])
                    sub_4307a0(&arg1[0x11])
                
                int32_t* eax_17 = arg1[0x12]
                
                if (eax_17 != 0)
                    *eax_17 = *(arg1[0x11] + ((&result_1 - ecx_12) s>> 2 << 2))
                
                arg1[0x12] = &arg1[0x12]->Handler
            
            int32_t var_c_4 = 0xffffffff
            
            if (var_94 u>= 0x10)
                int32_t var_f0_10 = var_a8
                sub_6b4d5b()
            
            int32_t eax_21 = var_d4_1 + 1
            var_94 = 0xf
            int32_t var_98_1 = 0
            var_a8.b = 0
            var_d4_1 = eax_21
            
            if (eax_21 s>= arg3)
                goto label_4b2ceb
            
            eax_7 = var_d4_1
        
        result.b = 0
    else
    label_4b2ceb:
        sub_401180(&arg1[0x19], 0xffffffff, arg2, 0)
        arg1[0x20] = arg3
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_dc)
return result
