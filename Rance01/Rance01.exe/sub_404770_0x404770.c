// 函数: sub_404770
// 地址: 0x404770
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b9c6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_b0
int32_t eax_2 = data_78c474 ^ &var_b0
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp = arg1
void* edx = &ebp[0x25]
int32_t* var_a8 = ebp
int32_t var_a0
sub_405410(edx, &var_a0, ebp[0x25], ebp[0x26])
char* eax_6 = arg2
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
char i

do
    i = *eax_6
    eax_6 = &eax_6[1]
while (i != 0)
sub_401270(&var_48, eax_6 - &eax_6[1], arg2)
int32_t var_4 = 0
char var_9c

if (var_38 != 0)
    int32_t var_ac_1 = 0
    int32_t eax_13 = (*(*ebp + 0x10))(eax_4)
    var_a0 = eax_13
    
    if (eax_13 s> 0)
        int32_t eax_24
        
        do
            int128_t* eax_15 = (*(*ebp + 0x14))(var_ac_1)
            char* ecx_10 = eax_15
            int32_t var_88_2 = 0xf
            int32_t var_8c_2 = 0
            var_9c = 0
            char i_1
            
            do
                i_1 = *ecx_10
                ecx_10 = &ecx_10[1]
            while (i_1 != 0)
            sub_401270(&var_9c, ecx_10 - &ecx_10[1], eax_15)
            var_4.b = 2
            char var_64
            sub_4042e0(&var_9c, &var_64)
            var_4.b = 3
            char var_80
            sub_4042e0(&var_48, &var_80)
            var_4.b = 4
            void* var_70
            int32_t var_54
            int32_t var_6c
            int32_t var_50
            
            if (var_54 u>= var_70)
                int32_t var_2c
                char* eax_18 = sub_401ec0(&var_64, &var_2c, 0, var_70)
                void* edi_4 = *(eax_18 + 0x10)
                
                if (*(eax_18 + 0x14) u>= 0x10)
                    eax_18 = *eax_18
                
                void* esi_8 = var_70
                
                if (var_70 u>= edi_4)
                    esi_8 = edi_4
                
                int32_t* edx_9 = var_80.d
                
                if (var_6c u< 0x10)
                    edx_9 = &var_80
                
                int32_t eax_19 = sub_402320(eax_18, edx_9, eax_18, esi_8)
                bool cond:0_1 = eax_19 == 0
                
                if (eax_19 == 0)
                    int32_t eax_20
                    
                    if (var_70 u>= edi_4)
                        eax_20.b = var_70 != edi_4
                    else
                        eax_20 = 0xffffffff
                    
                    cond:0_1 = eax_20 == 0
                
                var_4.b = 4
                int32_t var_18
                
                if (var_18 u>= 0x10)
                    int32_t var_c8_13 = var_2c
                    sub_6b4d5b()
                
                if (cond:0_1 != 0)
                    sub_405220(&var_9c, edx)
                
                if (var_6c u>= 0x10)
                    int32_t var_c8_14 = var_80.d
                    sub_6b4d5b()
                
                var_6c = 0xf
                var_70 = nullptr
                var_80 = 0
                
                if (var_50 u>= 0x10)
                    int32_t var_c8_15 = var_64.d
                    sub_6b4d5b()
                
                var_4.b = 0
                var_50 = 0xf
                var_54 = 0
                var_64 = 0
                
                if (var_88_2 u>= 0x10)
                    int32_t var_c8_16 = var_9c.d
                    sub_6b4d5b()
                
                ebp = var_a8
            else
                if (var_6c u>= 0x10)
                    int32_t var_c8_8 = var_80.d
                    sub_6b4d5b()
                
                var_6c = 0xf
                var_70 = nullptr
                var_80 = 0
                
                if (var_50 u>= 0x10)
                    int32_t var_c8_9 = var_64.d
                    sub_6b4d5b()
                
                var_4.b = 0
                var_50 = 0xf
                var_54 = 0
                var_64 = 0
                
                if (var_88_2 u>= 0x10)
                    int32_t var_c8_10 = var_9c.d
                    sub_6b4d5b()
            eax_24 = var_ac_1 + 1
            var_ac_1 = eax_24
        while (eax_24 s< var_a0)
else
    int32_t* esi_2 = var_a8
    int32_t ebp_1 = 0
    int32_t eax_9 = (*(*esi_2 + 0x10))(eax_4)
    
    if (eax_9 s> 0)
        while (true)
            int128_t* eax_11 = (*(*esi_2 + 0x14))(ebp_1)
            char* ecx_3 = eax_11
            int32_t var_88_1 = 0xf
            int32_t var_8c_1 = 0
            var_9c = 0
            char i_2
            
            do
                i_2 = *ecx_3
                ecx_3 = &ecx_3[1]
            while (i_2 != 0)
            sub_401270(&var_9c, ecx_3 - &ecx_3[1], eax_11)
            var_4.b = 1
            sub_405150(&var_9c, edx)
            var_4.b = 0
            
            if (var_88_1 u>= 0x10)
                int32_t var_c8_5 = var_9c.d
                sub_6b4d5b()
            
            ebp_1 += 1
            
            if (ebp_1 s>= eax_9)
                break
            
            esi_2 = var_a8
int32_t ecx_20 = *(edx + 4) - *edx

if (var_34 u>= 0x10)
    int32_t var_c8_17 = var_48.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_b0)
return ecx_20 s/ 0x1c
