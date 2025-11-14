// 函数: sub_539960
// 地址: 0x539960
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_728d90
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_84
int32_t eax_2 = data_78c474 ^ &var_84
int32_t __saved_edi
int32_t var_98 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
int32_t eax_5
int32_t edx
edx:eax_5 = muls.dp.d(0x2aaaaaab, *(ebx + 0xb0) - *(ebx + 0xac))
int32_t edx_1 = edx s>> 3
void* var_70 = ebx
int32_t result = (edx_1 u>> 0x1f) + edx_1
int32_t var_58 = 0xf
int32_t var_5c = 0
char var_6c = 0
int32_t var_4 = 0

if (result s<= 0)
    result.b = 1
else
    int32_t var_7c_1 = 0
    int32_t var_78_1 = result
    int32_t i
    
    do
        void** edi_2 = *(ebx + 0xac) + var_7c_1
        int32_t var_3c_1 = 0xf
        int32_t var_40_1 = 0
        char var_50 = 0
        int32_t var_34_1 = 0
        var_4.b = 1
        int32_t var_30
        int32_t var_1c
        
        if (sub_422850(edi_2, &var_50) != 0)
            int32_t ecx_4 = edi_2[8] - edi_2[7]
            int32_t eax_12
            int32_t edx_2
            edx_2:eax_12 = muls.dp.d(0x92492493, ecx_4)
            int32_t edx_4 = (edx_2 + ecx_4) s>> 5
            int32_t j_2 = ecx_4 s/ 0x38
            
            if (j_2 s> 0)
                int32_t var_80_1 = 0
                int32_t j_1 = j_2
                int32_t j
                
                do
                    void* ebp_2 = edi_2[7] + var_80_1
                    int32_t* esi_3 = ebp_2 + 4
                    void* eax_16
                    eax_16, edx_4 = sub_422af0(esi_3, edx_4, &var_50)
                    
                    if (eax_16 == 0)
                        if (esi_3[5] u>= 0x10)
                            esi_3 = *esi_3
                        
                        int32_t* var_9c_4 = esi_3
                        int32_t var_a0_1 = sub_401170(edi_2)
                        var_4.b = 3
                        edx_4 = sub_402000(&var_6c, sub_4104a0("%s.%s()\n"), 0, 0xffffffff)
                        var_4.b = 1
                        
                        if (var_1c u>= 0x10)
                            int32_t var_9c_5 = var_30
                            edx_4 = sub_6b4d5b()
                    
                    var_80_1 += 0x38
                    j = j_1
                    j_1 -= 1
                    *(ebp_2 + 0x34) = eax_16
                while (j != 1)
                ebx = var_70
            
            edi_2[0xb] = sub_422e30(&var_50)
            var_4.b = 0
            
            if (var_3c_1 u>= 0x10)
                int32_t var_9c_6 = var_50.d
                sub_6b4d5b()
        else
            if (edi_2[5] u>= 0x10)
                edi_2 = *edi_2
            
            void** var_9c_1 = edi_2
            var_4.b = 2
            sub_402000(&var_6c, sub_4104a0(0x751bf4), 0, 0xffffffff)
            
            if (var_1c u>= 0x10)
                int32_t var_9c_2 = var_30
                sub_6b4d5b()
            
            var_4.b = 0
            
            if (var_3c_1 u>= 0x10)
                int32_t var_9c_3 = var_50.d
                sub_6b4d5b()
        var_7c_1 += 0x30
        i = var_78_1
        var_78_1 -= 1
    while (i != 1)
    
    if (var_5c == 0)
        if (var_58 u>= 0x10)
            int32_t var_9c_9 = var_6c.d
            sub_6b4d5b()
        
        result.b = 1
    else
        char* eax_22 = var_6c.d
        
        if (var_58 u< 0x10)
            eax_22 = &var_6c
        
        char* var_9c_7 = eax_22
        sub_604c90(0x751c04)
        
        if (var_58 u>= 0x10)
            int32_t var_9c_8 = var_6c.d
            sub_6b4d5b()
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_84)
return result
