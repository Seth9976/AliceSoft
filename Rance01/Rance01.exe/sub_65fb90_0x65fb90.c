// 函数: sub_65fb90
// 地址: 0x65fb90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718aec
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_818
int32_t eax_2 = data_78c474 ^ &var_818
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_818 = arg2
void** eax_7 = *(data_797d60 + 4)
void** esi = eax_7[1]
void** edi = eax_7

while (*(esi + 0x21) == 0)
    if (sub_40f4a0(&esi[3], 0x731798) == 0)
        edi = esi
        esi = *esi
    else
        esi = esi[2]

void** esi_1 = *(data_797d60 + 4)
void** var_808 = edi
char eax_9

if (edi != esi_1)
    eax_9 = sub_40f4a0(0x731798, &edi[3])

void*** eax_10

if (edi == esi_1 || eax_9 != 0)
    void** var_804 = esi_1
    eax_10 = &var_804
else
    eax_10 = &var_808

void** result = *eax_10

if (result == esi_1)
    result.b = 0
else
    int32_t* ecx_3 = result[7]
    
    if (ecx_3 == 0)
        result.b = 0
    else
        result = (**ecx_3)(0x7317a8)
        
        if (result == 0)
            result.b = 0
        else
            int32_t eax_13 = (**result)(eax_4)
            void param0
            sub_65f4c0(&param0)
            int32_t var_770_1 = eax_13
            int128_t* esi_3 = (**arg3)()
            char* ecx_6 = esi_3
            int32_t var_7b4_1 = 0xf
            int32_t var_7b8_1 = 0
            char var_7c8 = 0
            int128_t* eax_15
            
            do
                eax_15.b = *ecx_6
                ecx_6 = &ecx_6[1]
            while (eax_15.b != 0)
            int32_t edx_7 = sub_401270(&var_7c8, ecx_6 - &ecx_6[1], esi_3)
            int32_t var_4 = 0
            char* var_790
            int32_t var_77c
            
            if (var_7b8_1 != 0)
                char* eax_16 = &var_790
                sub_401d60(eax_16, edx_7, &var_7c8)
                
                if (var_77c u>= 0x10)
                    eax_16 = var_790
                
                char var_51c[0x105]
                sub_6b5353(&var_51c, 0x104, eax_16)
                char (* var_748_1)[0x105] = &var_51c
                
                if (var_77c u>= 0x10)
                    char* var_830_3 = var_790
                    sub_6b4d5b()
            
            int128_t* esi_5 = (**arg1)()
            char* ecx_10 = esi_5
            int32_t var_7d0_1 = 0xf
            int32_t var_7d4_1 = 0
            char var_7e4 = 0
            int128_t* eax_19
            
            do
                eax_19.b = *ecx_10
                ecx_10 = &ecx_10[1]
            while (eax_19.b != 0)
            sub_401270(&var_7e4, ecx_10 - &ecx_10[1], esi_5)
            var_4.b = 1
            char var_71c[0x200]
            
            if (var_7d4_1 != 0)
                char* eax_20 = var_7e4.d
                
                if (var_7d0_1 u< 0x10)
                    eax_20 = &var_7e4
                
                sub_6b5353(&var_71c, 0x200, eax_20)
            
            int128_t* esi_7 = (**var_818)()
            char* ecx_13 = esi_7
            int32_t var_7ec_1 = 0xf
            int32_t var_7f0_1 = 0
            char var_800 = 0
            int128_t* eax_22
            
            do
                eax_22.b = *ecx_13
                ecx_13 = &ecx_13[1]
            while (eax_22.b != 0)
            sub_401270(&var_800, ecx_13 - &ecx_13[1], esi_7)
            var_4.b = 2
            
            if (var_7f0_1 != 0)
                if (var_7ec_1 u< 0x10)
                    char* var_744_2 = &var_800
                else
                    int32_t var_744_1 = var_800.d
            
            int32_t* eax_24 = (*(*arg4 + 8))()
            int32_t edx_13 = *(*arg5 + 8)
            var_818 = eax_24
            
            if (eax_24 == edx_13())
                int32_t ebp_1 = 0
                
                if (eax_24 s<= 0)
                label_65ff7b:
                    char var_417[0x403]
                    int32_t var_14
                    var_417[var_14] = 0
                    
                    if (GetSaveFileNameA(&param0) != 0)
                        (*(*arg1 + 4))(&var_71c)
                        
                        if (var_7ec_1 u>= 0x10)
                            int32_t var_830_26 = var_800.d
                            sub_6b4d5b()
                        
                        int32_t var_7ec_6 = 0xf
                        int32_t var_7f0_6 = 0
                        var_800 = 0
                        
                        if (var_7d0_1 u>= 0x10)
                            int32_t var_830_27 = var_7e4.d
                            sub_6b4d5b()
                        
                        int32_t var_7d0_6 = 0xf
                        int32_t var_7d4_6 = 0
                        var_7e4 = 0
                        
                        if (var_7b4_1 u>= 0x10)
                            int32_t var_830_28 = var_7c8.d
                            sub_6b4d5b()
                        
                        result.b = 1
                    else
                        if (var_7ec_1 u>= 0x10)
                            int32_t var_830_16 = var_800.d
                            sub_6b4d5b()
                        
                        int32_t var_7ec_3 = 0xf
                        int32_t var_7f0_3 = 0
                        var_800 = 0
                        
                        if (var_7d0_1 u>= 0x10)
                            int32_t var_830_17 = var_7e4.d
                            sub_6b4d5b()
                        
                        int32_t var_7d0_3 = 0xf
                        int32_t var_7d4_3 = 0
                        var_7e4 = 0
                        
                        if (var_7b4_1 u< 0x10)
                            result.b = 0
                        else
                            int32_t var_830_18 = var_7c8.d
                            sub_6b4d5b()
                            result.b = 0
                else
                    while (true)
                        void** esi_10 = (*(*arg4 + 0x10))(ebp_1)
                        
                        if (esi_10 == 0)
                            if (var_7ec_1 u>= 0x10)
                                int32_t var_830_19 = var_800.d
                                sub_6b4d5b()
                            
                            int32_t var_7ec_4 = 0xf
                            int32_t var_7f0_4 = 0
                            var_800 = 0
                            
                            if (var_7d0_1 u>= 0x10)
                                int32_t var_830_20 = var_7e4.d
                                sub_6b4d5b()
                            
                            int32_t var_7d0_4 = 0xf
                            int32_t var_7d4_4 = 0
                            var_7e4 = 0
                            
                            if (var_7b4_1 u< 0x10)
                                break
                            
                            int32_t var_830_21 = var_7c8.d
                            sub_6b4d5b()
                            result.b = 0
                            goto label_660136
                        
                        result = (*(*arg5 + 0x10))(ebp_1)
                        
                        if (result == 0)
                            if (var_7ec_1 u>= 0x10)
                                int32_t var_830_22 = var_800.d
                                sub_6b4d5b()
                            
                            int32_t var_7ec_5 = 0xf
                            int32_t var_7f0_5 = 0
                            var_800 = 0
                            
                            if (var_7d0_1 u>= 0x10)
                                int32_t var_830_23 = var_7e4.d
                                sub_6b4d5b()
                            
                            int32_t var_7d0_5 = 0xf
                            int32_t var_7d4_5 = 0
                            var_7e4 = 0
                            
                            if (var_7b4_1 u< 0x10)
                                break
                            
                            int32_t var_830_24 = var_7c8.d
                            sub_6b4d5b()
                            result.b = 0
                            goto label_660136
                        
                        sub_402be0(&var_790, (**result)())
                        var_4.b = 3
                        char var_7ac
                        sub_402be0(&var_7ac, (**esi_10)())
                        sub_65f540(&param0, &var_790, &var_7ac)
                        int32_t var_798
                        
                        if (var_798 u>= 0x10)
                            int32_t var_830_13 = var_7ac.d
                            sub_6b4d5b()
                        
                        var_4.b = 2
                        var_798 = 0xf
                        int32_t var_79c_1 = 0
                        var_7ac = 0
                        
                        if (var_77c u>= 0x10)
                            char* var_830_14 = var_790
                            sub_6b4d5b()
                        
                        ebp_1 += 1
                        
                        if (ebp_1 s>= var_818)
                            goto label_65ff7b
                    
                    result.b = 0
            else
                if (var_7ec_1 u>= 0x10)
                    int32_t var_830_7 = var_800.d
                    sub_6b4d5b()
                
                int32_t var_7ec_2 = 0xf
                int32_t var_7f0_2 = 0
                var_800 = 0
                
                if (var_7d0_1 u>= 0x10)
                    int32_t var_830_8 = var_7e4.d
                    sub_6b4d5b()
                
                int32_t var_7d0_2 = 0xf
                int32_t var_7d4_2 = 0
                var_7e4 = 0
                
                if (var_7b4_1 u>= 0x10)
                    int32_t var_830_9 = var_7c8.d
                    sub_6b4d5b()
                
                result.b = 0

label_660136:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_818)
return result
