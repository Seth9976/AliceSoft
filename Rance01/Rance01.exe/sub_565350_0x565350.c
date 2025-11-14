// 函数: sub_565350
// 地址: 0x565350
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71eb20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t var_60 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_44 = nullptr
int32_t var_40 = 0
int32_t var_3c = 0
int32_t var_4 = 0
char* eax_6 = arg1
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
char i

do
    i = *eax_6
    eax_6 = &eax_6[1]
while (i != 0)
sub_401270(&var_30, eax_6 - &eax_6[1], arg1)
var_4.b = 1
int32_t* result = sub_560830(&var_30, &var_44)
int32_t ebx
ebx.b = result.b == 0
var_4.b = 0

if (var_1c u>= 0x10)
    int32_t var_64_2 = var_30.d
    result = sub_6b4d5b()

void* esi_2 = var_44

if (ebx.b == 0)
    result = (var_40 - esi_2) s/ 0x38
    
    if (result s> 0)
        void* esi_3 = esi_2 + 0x10
        int32_t* ebx_1 = result
        int32_t* i_1
        
        do
            int32_t ebp_1 = *esi_3
            int32_t eax_11 = ebp_1
            
            if (ebp_1 u>= 1)
                eax_11 = 1
            
            void* edx_4
            
            if (*(esi_3 + 4) u< 0x10)
                edx_4 = esi_3 - 0x10
            else
                edx_4 = *(esi_3 - 0x10)
            
            if (sub_402320(eax_11, edx_4, 0x74bd54, eax_11) != 0 || ebp_1 u< 1)
            label_565496:
                
                if (sub_402680(0x74bd58, esi_3 - 0x10) == 0)
                    result = sub_402680(0x74bd84, esi_3 - 0x10)
                    
                    if (result.b != 0)
                        void* eax_16
                        
                        if (*(esi_3 + 0x20) u< 0x10)
                            eax_16 = esi_3 + 0xc
                        else
                            eax_16 = *(esi_3 + 0xc)
                        
                        uint32_t* var_64_6 = &var_4c
                        result = sub_6b51b5(eax_16, 0x75758c)
                        
                        if (result == 1)
                            result = sub_576120(var_4c)
                else
                    void* eax_14
                    
                    if (*(esi_3 + 0x20) u< 0x10)
                        eax_14 = esi_3 + 0xc
                    else
                        eax_14 = *(esi_3 + 0xc)
                    
                    int32_t* result_1
                    int32_t* var_64_5 = &result_1
                    
                    if (sub_6b51b5(eax_14, 0x757590) != 1)
                        result = sub_604c90(0x74bd5c)
                    else
                        result = result_1
                        *(arg2 + 0x574) = result
            else
                int32_t eax_12
                eax_12.b = ebp_1 != 1
                
                if (eax_12 != 0)
                    goto label_565496
                
                result = sub_401180(arg2 + 0x5e4, 0xffffffff, esi_3 + 0xc, eax_12)
            
            esi_3 += 0x38
            i_1 = ebx_1
            ebx_1 -= 1
        while (i_1 != 1)
        esi_2 = var_44
    
    if (esi_2 != 0)
        esi_2 = var_44
    label_565541:
        uint32_t var_64_7 = var_4c
        sub_60f3d0(esi_2, var_40)
        void* var_64_8 = esi_2
        result = sub_6b4d5b()
else if (esi_2 != 0)
    goto label_565541

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
