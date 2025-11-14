// 函数: sub_654910
// 地址: 0x654910
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_11 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_728a22
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_118
int32_t eax_2 = data_78c474 ^ &var_118
int32_t __saved_edi
int32_t var_12c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_118 = sub_651280(arg2, arg3)
int32_t eax_6 = sub_650b10(arg2, arg3)
int32_t var_fc = 0xf
int32_t var_100 = 0
char var_110 = 0
sub_401270(&var_110, 0x16, 0x732090)
int32_t var_4 = 0
sub_405220(&var_110, arg4)
int32_t var_4_1 = 0xffffffff

if (var_fc u>= 0x10)
    int32_t var_130_2 = var_110.d
    sub_6b4d5b()

int32_t var_130_3 = eax_6
*(arg1 + 0x68) = 1
*(arg1 + 0x204) = eax_6
int32_t var_4_2 = 1
sub_405150(sub_4104a0(0x7320a8), arg4)
int32_t var_4_3 = 0xffffffff

if (var_fc u>= 0x10)
    int32_t var_130_5 = var_110.d
    sub_6b4d5b()

int32_t var_130_6 = var_118
int32_t var_4_4 = 2
int32_t* result = sub_405150(sub_4104a0(0x7320c0), arg4)
int32_t var_4_5 = 0xffffffff

if (var_fc u>= 0x10)
    int32_t var_130_8 = var_110.d
    result = sub_6b4d5b()

if (var_118 s> 0)
    int32_t ebx_1 = 0
    
    while (true)
        int32_t var_fc_1 = 0xf
        int32_t var_100_1 = 0
        var_110 = 0
        sub_401270(&var_110, 1, 0x7320d8)
        int32_t var_4_6 = 3
        sub_405220(&var_110, arg4)
        int32_t var_4_7 = 0xffffffff
        
        if (var_fc_1 u>= 0x10)
            int32_t var_130_9 = var_110.d
            sub_6b4d5b()
        
        int32_t var_130_10 = ebx_1 + 1
        int32_t var_4_8 = 4
        sub_405150(sub_4104a0("===== "), arg4)
        char var_f4
        int32_t var_e0
        
        if (var_e0 u>= 0x10)
            int32_t var_130_12 = var_f4.d
            sub_6b4d5b()
        
        var_e0 = 0xf
        int32_t var_e4_1 = 0
        var_f4 = 0
        struct partsengine::CConstructionSpriteData::VTable* var_d8
        sub_5e6570(&var_d8)
        int32_t var_4_9 = 5
        
        if (arg2 s> 0)
            void* esi_3 = data_797ddc
            int32_t* var_130_13 = arg2
            char eax_16
            int32_t* ecx_8
            int32_t edx_2
            eax_16, ecx_8, edx_2 = sub_418b70(esi_3 + 0xa8, 0xf, nullptr)
            
            if (eax_16 != 0)
                int32_t* var_130_14 = arg2
                
                if (sub_418b70(esi_3 + 0xa8, edx_2, ecx_8) != 0)
                    int32_t eax_19
                    eax_19.b = sub_6841d0(arg2, arg3) == 8
                    
                    if (eax_19.b != 0 && sub_682680(arg2, ebx_1, &var_d8, arg3) != 0)
                        int32_t var_d4
                        
                        switch (var_d4)
                            case 0
                                sub_6553a0(&var_d8, arg4)
                            case 1
                                sub_655610(&var_d8, arg4)
                            case 2
                                sub_655740(&var_d8, arg4)
                            case 3
                                sub_655840(&var_d8, arg4)
                            case 4
                                sub_655aa0(&var_d8, arg4)
                            case 5
                                sub_655d30(&var_d8, arg4)
                            case 6
                                sub_655f10(&var_d8, arg4)
                            case 7
                                sub_6561a0(&var_d8, arg4)
                            case 8
                                sub_6563d0(&var_d8, arg4)
                            case 9
                                sub_656600(&var_d8, arg4)
                            case 0xa
                                sub_656910(&var_d8, arg4)
                            case 0xb
                                sub_656b70(&var_d8, arg4)
                            case 0xc
                                sub_656dd0(&var_d8, arg4)
                            case 0xd
                                sub_657030(&var_d8, arg4)
                            case 0xe
                                sub_657220(&var_d8, arg4)
                            case 0xf
                                sub_6574c0(&var_d8, arg4)
                            case 0x10
                                sub_657760(&var_d8, arg4)
                        
                        int32_t var_4_10 = 0xffffffff
                        result = sub_5e6630(&var_d8)
                        ebx_1 += 1
                        
                        if (ebx_1 s>= var_118)
                            break
                        
                        continue
        
        result = sub_5e6630(&var_d8)
        break

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_118)
return result
