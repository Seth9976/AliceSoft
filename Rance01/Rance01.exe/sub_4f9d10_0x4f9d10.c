// 函数: sub_4f9d10
// 地址: 0x4f9d10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71fb9a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
bool var_54
int32_t eax_2 = data_78c474 ^ &var_54
int32_t __saved_edi
int32_t var_68 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx_1

if (arg1 s>= 0)
    int32_t eax_5
    int32_t edx
    edx:eax_5 = muls.dp.d(0x30c30c31, *(arg2 + 0x1c) - *(arg2 + 0x18))
    edx_1 = edx s>> 4

int32_t* var_34

if (arg1 s< 0 || arg1 s>= (edx_1 u>> 0x1f) + edx_1)
    var_34 = 0xffffffff
else
    var_34 = *(arg1 * 0x54 + *(arg2 + 0x18) + 0x1c)

int32_t* var_50 = var_34
int32_t* result_1
sub_42e070(&arg3[0xb], &result_1, &var_50)
int32_t* result = result_1

if (result != arg3[0xc])
    void* eax_11 = result[4]
    var_54 = ((*(eax_11 + 0x50) - *(eax_11 + 0x4c)) & 0xfffffffc) s> 0
else
    var_54 = false

int32_t edx_5

if (arg1 s>= 0)
    int32_t eax_12
    int32_t edx_4
    edx_4:eax_12 = muls.dp.d(0x30c30c31, *(arg2 + 0x1c) - *(arg2 + 0x18))
    edx_5 = edx_4 s>> 4

if (arg1 s< 0 || arg1 s>= (edx_5 u>> 0x1f) + edx_5)
    result_1.b = 0
else
    result.b = *(arg1 * 0x54 + *(arg2 + 0x18) + 0x50)
    result_1.b = result.b

int32_t edx_8

if (arg1 s>= 0)
    int32_t edx_7
    edx_7:result = muls.dp.d(0x30c30c31, *(arg2 + 0x1c) - *(arg2 + 0x18))
    edx_8 = edx_7 s>> 4

if (arg1 s< 0 || arg1 s>= (edx_8 u>> 0x1f) + edx_8)
    var_50.b = 0
else
    int32_t ecx_16
    ecx_16.b = *(&(*(arg2 + 0x18))[arg1 * 0x15] + 0x51)
    var_50.b = ecx_16.b

int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
int32_t var_4 = 0

if (arg1 s< 0)
    result.b = 0
else
    int32_t eax_15
    int32_t edx_11
    edx_11:eax_15 = muls.dp.d(0x30c30c31, *(arg2 + 0x1c) - *(arg2 + 0x18))
    int32_t edx_12 = edx_11 s>> 4
    
    if (arg1 s>= (edx_12 u>> 0x1f) + edx_12)
        result.b = 0
    else
        sub_401180(&var_30, 0xffffffff, arg1 * 0x54 + *(arg2 + 0x18), 0)
        void* eax_21 = sub_405360(&var_30, "(both)", 6)
        int32_t ecx_21 = arg3[0x19] - arg3[0x18]
        bool var_4c = eax_21 != 0xffffffff
        
        if (sub_4fa520(arg3, arg2, arg1).b != 0)
            int32_t var_3c_1 = 0
            int32_t** eax_24 = sub_4fddf0(1)
            *eax_24 = eax_24
            eax_24[1] = eax_24
            eax_24[2] = eax_24
            eax_24[8].b = 1
            *(eax_24 + 0x21) = 1
            var_4.b = 1
            void var_44
            char eax_28
            int80_t st0_1
            st0_1, eax_28 = sub_4fa5f0(&var_30, arg3, &var_44, arg2, arg1, ecx_21 s/ 0x2c, 
                (var_4c.d).b, (var_54.d).b)
            
            if (eax_28 != 0)
                int32_t** ecx_27 = eax_24
                int32_t* eax_31 = *ecx_27
                var_54.d = eax_31
                
                if (eax_31 == ecx_27)
                label_4f9fc5:
                    var_4.b = 4
                    sub_4fd610(&var_44, &var_4c, *ecx_27, ecx_27)
                    int32_t** var_6c_9 = eax_24
                    sub_6b4d5b()
                    
                    if (var_1c u>= 0x10)
                        int32_t var_6c_10 = var_30.d
                        sub_6b4d5b()
                    
                    result.b = 1
                else
                    char result_2 = result_1.b
                    int32_t* edi_2 = var_50
                    
                    while (true)
                        void* var_6c_7 = &eax_31[4]
                        
                        if (sub_4fa0d0(arg3, &var_30, var_34, eax_31[3], result_2, edi_2) == 0)
                            break
                        
                        sub_58bba0(&var_54)
                        eax_31 = var_54.d
                        ecx_27 = eax_24
                        
                        if (eax_31 == ecx_27)
                            goto label_4f9fc5
                    
                    var_4.b = 3
                    sub_4fd610(&var_44, &var_4c, *eax_24, eax_24)
                    int32_t** var_6c_12 = eax_24
                    sub_6b4d5b()
                    
                    if (var_1c u< 0x10)
                        result.b = 0
                    else
                        int32_t var_6c_13 = var_30.d
                        sub_6b4d5b()
                        result.b = 0
            else
                var_4.b = 2
                sub_4fd610(&var_44, &var_4c, *eax_24, eax_24)
                int32_t** var_6c_5 = eax_24
                sub_6b4d5b()
                
                if (var_1c u< 0x10)
                    result.b = 0
                else
                    int32_t var_6c_6 = var_30.d
                    sub_6b4d5b()
                    result.b = 0
        else
            if (var_1c u>= 0x10)
                int32_t var_6c_2 = var_30.d
                sub_6b4d5b()
            
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_54)
return result
