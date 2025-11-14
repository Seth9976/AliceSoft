// 函数: sub_538ae0
// 地址: 0x538ae0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d150
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* i_1
int32_t eax_2 = data_78c474 ^ &i_1
int32_t __saved_edi
int32_t var_68 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = *arg1
void* ebp = arg2
void* var_4c = ebp
i_1 = arg1

if (&result[4] u> arg1[1])
label_538cfe:
    result.b = 0
else
    uint32_t esi_7 =
        ((zx.d(result[3]) << 8 | zx.d(result[2])) << 8 | zx.d(result[1])) << 8 | zx.d(*result)
    *arg1 = &result[4]
    
    if (esi_7 s> 0)
        sub_5368a0(ebp + 0xac, esi_7)
        int32_t edi_3 = 0
        
        if (esi_7 s> 0)
            int32_t ebx_1 = 0
            
            do
                if (sub_535f80(*(ebp + 0xac) + ebx_1, i_1).b == 0)
                    goto label_538cfe_1
                
                edi_3 += 1
                ebx_1 += 0x30
            while (edi_3 s< esi_7)
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    int32_t var_4 = 0
    int32_t esi_8 = *(ebp + 0xac)
    int32_t eax_7
    int32_t edx_2
    edx_2:eax_7 = muls.dp.d(0x2aaaaaab, *(ebp + 0xb0) - esi_8)
    int32_t edx_3 = edx_2 s>> 3
    i_1 = nullptr
    
    if ((edx_3 u>> 0x1f) + edx_3 s<= 0)
        result.b = 1
    else
        void* var_50_1 = nullptr
        int32_t edx_11
        void* i
        
        do
            void** edi_5 = var_50_1 + esi_8
            int32_t esi_9 = edi_5[7]
            
            if ((*(var_50_1 + esi_8 + 0x20) - esi_9) s/ 0x38 s> 0)
                int32_t ebp_1 = 0
                int32_t j = 0
                
                do
                    int32_t eax_16 = (*(esi_9 + ebp_1 + 0x28) - *(esi_9 + ebp_1 + 0x24)) s>> 2
                    
                    if (eax_16 s< 0 || eax_16 s> 0x1a)
                        int32_t* ecx_6 = esi_9 + ebp_1 + 4
                        
                        if (*(esi_9 + ebp_1 + 0x18) u>= 0x10)
                            ecx_6 = *ecx_6
                        
                        int32_t var_6c_3 = eax_16
                        int32_t* var_70_1 = ecx_6
                        int32_t var_74_1 = sub_401170(edi_5)
                        var_4.b = 1
                        sub_402000(&var_48, 
                            sub_4104a0("HLL [%s] Function [%s] Over NumofParameter [%d]\n"), 0, 
                            0xffffffff)
                        var_4.b = 0
                        int32_t var_18
                        
                        if (var_18 u>= 0x10)
                            int32_t var_2c
                            int32_t var_6c_4 = var_2c
                            sub_6b4d5b()
                    
                    esi_9 = edi_5[7]
                    j += 1
                    ebp_1 += 0x38
                while (j s< (edi_5[8] - esi_9) s/ 0x38)
                
                ebp = var_4c
            
            esi_8 = *(ebp + 0xac)
            var_50_1 += 0x30
            int32_t edx_10
            edx_10:result = muls.dp.d(0x2aaaaaab, *(ebp + 0xb0) - esi_8)
            edx_11 = edx_10 s>> 3
            i = i_1 + 1
            i_1 = i
        while (i s< (edx_11 u>> 0x1f) + edx_11)
        
        if (var_38_1 == 0)
            if (var_34_1 u>= 0x10)
                int32_t var_6c_7 = var_48.d
                sub_6b4d5b()
            
            result.b = 1
        else
            char* eax_24 = var_48.d
            
            if (var_34_1 u< 0x10)
                eax_24 = &var_48
            
            sub_604c90(eax_24)
            
            if (var_34_1 u>= 0x10)
                int32_t var_6c_6 = var_48.d
                sub_6b4d5b()
            
        label_538cfe_1:
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &i_1)
return result
