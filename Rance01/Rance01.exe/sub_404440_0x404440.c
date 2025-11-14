// 函数: sub_404440
// 地址: 0x404440
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ba28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_8c
int32_t eax_2 = data_78c474 ^ &var_8c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_88
sub_405410(&arg1[0x25], &var_88, arg1[0x25], arg1[0x26])
char* eax_6 = arg2
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
char i

do
    i = *eax_6
    eax_6 = &eax_6[1]
while (i != 0)
sub_401270(&var_2c, eax_6 - &eax_6[1], arg2)
int32_t var_4 = 0
int32_t eax_8 = *(*arg1 + 0x10)
var_8c = 0
char var_80

if (var_1c != 0)
    int32_t eax_15 = eax_8(eax_4)
    var_88 = eax_15
    
    if (eax_15 s> 0)
        int32_t eax_23
        
        do
            int128_t* esi_4 = (*(*arg1 + 0x14))(var_8c)
            char* ecx_8 = esi_4
            int32_t var_6c_2 = 0xf
            int32_t var_70_2 = 0
            var_80 = 0
            int128_t* eax_17
            
            do
                eax_17.b = *ecx_8
                ecx_8 = &ecx_8[1]
            while (eax_17.b != 0)
            sub_401270(&var_80, ecx_8 - &ecx_8[1], esi_4)
            var_4.b = 2
            char var_48
            sub_4042e0(&var_80, &var_48)
            var_4.b = 3
            int32_t* var_64
            sub_4042e0(&var_2c, &var_64)
            var_4.b = 4
            int32_t var_54
            int32_t var_38
            int32_t var_50
            int32_t var_34
            
            if (var_38 u>= var_54)
                int32_t* ecx_13 = var_64
                
                if (var_50 u< 0x10)
                    ecx_13 = &var_64
                
                if (sub_405360(&var_48, ecx_13, var_54) != 0xffffffff)
                    sub_405220(&var_80, &arg1[0x25])
                
                if (var_50 u>= 0x10)
                    int32_t* var_a4_12 = var_64
                    sub_6b4d5b()
                
                var_50 = 0xf
                var_54 = 0
                var_64.b = 0
                
                if (var_34 u>= 0x10)
                    int32_t var_a4_13 = var_48.d
                    sub_6b4d5b()
                
                var_4.b = 0
                var_34 = 0xf
                var_38 = 0
                var_48 = 0
                
                if (var_6c_2 u>= 0x10)
                    int32_t var_a4_14 = var_80.d
                    sub_6b4d5b()
            else
                if (var_50 u>= 0x10)
                    int32_t* var_a4_8 = var_64
                    sub_6b4d5b()
                
                var_50 = 0xf
                var_54 = 0
                var_64.b = 0
                
                if (var_34 u>= 0x10)
                    int32_t var_a4_9 = var_48.d
                    sub_6b4d5b()
                
                var_4.b = 0
                var_34 = 0xf
                var_38 = 0
                var_48 = 0
                
                if (var_6c_2 u>= 0x10)
                    int32_t var_a4_10 = var_80.d
                    sub_6b4d5b()
            eax_23 = var_8c + 1
            var_8c = eax_23
        while (eax_23 s< var_88)
else
    int32_t eax_9 = eax_8(eax_4)
    var_88 = eax_9
    
    if (eax_9 s> 0)
        int32_t eax_14
        
        do
            int128_t* esi_2 = (*(*arg1 + 0x14))(var_8c)
            char* ecx_3 = esi_2
            int32_t var_6c_1 = 0xf
            int32_t var_70_1 = 0
            var_80 = 0
            int128_t* eax_11
            
            do
                eax_11.b = *ecx_3
                ecx_3 = &ecx_3[1]
            while (eax_11.b != 0)
            sub_401270(&var_80, ecx_3 - &ecx_3[1], esi_2)
            var_4.b = 1
            sub_405150(&var_80, &arg1[0x25])
            var_4.b = 0
            
            if (var_6c_1 u>= 0x10)
                int32_t var_a4_5 = var_80.d
                sub_6b4d5b()
            
            eax_14 = var_8c + 1
            var_8c = eax_14
        while (eax_14 s< var_88)
int32_t ecx_17 = arg1[0x26] - arg1[0x25]

if (var_18 u>= 0x10)
    int32_t var_a4_15 = var_2c.d
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_8c)
return ecx_17 s/ 0x1c
