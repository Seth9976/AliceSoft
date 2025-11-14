// 函数: sub_5037e0
// 地址: 0x5037e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71f9c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_68
int32_t eax_2 = data_78c474 ^ &var_68
int32_t __saved_edi
int32_t var_7c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_5 = *arg2
int32_t* ecx = arg2[1]

if (eax_5 != ecx)
    void* eax_6
    int32_t edx
    int32_t edx_1
    eax_6, edx_1 = sub_504040(eax_5, edx, ecx, ecx)
    int32_t var_80_2 = var_68
    int32_t var_84_1 = arg2[1]
    sub_504080(eax_6, edx_1)
    arg2[1] = eax_6

int32_t var_64 = arg1
int32_t var_60 = arg1
int32_t var_5c = arg1 + arg3

while (true)
    int32_t var_28_1 = 0xf
    int32_t var_2c_1 = 0
    char var_3c = 0
    void* var_20_1 = nullptr
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    int32_t var_4 = 0
    int32_t var_44_1 = 0xf
    int32_t var_48_1 = 0
    char var_58 = 0
    var_4.b = 1
    int32_t var_80_9
    
    if (sub_51b970(&var_58, &var_68) == 0)
        void* result
        
        if (var_68 == 1)
            if (var_44_1 u>= 0x10)
                int32_t var_80_11 = var_58.d
                sub_6b4d5b()
            
            int32_t var_44_3 = 0xf
            int32_t var_48_3 = 0
            var_58 = 0
            sub_5047b0(&var_3c)
            result.b = 1
            goto label_503a3c
        
        var_80_9 = 0x7548cc
    label_503984:
        sub_51ddc0(var_80_9)
        
        if (var_44_1 u< 0x10)
            goto label_503a25
        
        int32_t var_80_10 = var_58.d
    label_503a19:
        sub_6b4d5b()
    label_503a25:
        int32_t var_44_4 = 0xf
        int32_t var_48_4 = 0
        var_58 = 0
        sub_5047b0(&var_3c)
        result.b = 0
    label_503a3c:
        fsbase->NtTib.ExceptionList = ExceptionList
        sub_6b4885(eax_2 ^ &var_68)
        return result
    
    if (var_68 != 4)
        char* eax_15 = var_58.d
        
        if (var_44_1 u< 0x10)
            eax_15 = &var_58
        
        char* var_80_12 = eax_15
        sub_51ddc0(0x7548ec)
        
        if (var_44_1 u< 0x10)
            goto label_503a25
        
        int32_t var_80_13 = var_58.d
        goto label_503a19
    
    sub_401180(&var_3c, 0xffffffff, &var_58, 0)
    
    if (sub_51bc80(0x754924, &var_64) == 0)
        var_80_9 = 0x754928
        goto label_503984
    
    if (sub_503a60(&var_3c, &var_64) == 0)
        sub_51ddc0(0x75494c)
        
        if (var_44_1 u< 0x10)
            goto label_503a25
        
        int32_t var_80_14 = var_58.d
        goto label_503a19
    
    sub_503de0(&var_3c, arg2)
    
    if (var_44_1 u>= 0x10)
        int32_t var_80_5 = var_58.d
        sub_6b4d5b()
    
    int32_t var_44_2 = 0xf
    int32_t var_48_2 = 0
    var_58 = 0
    
    if (var_20_1 != 0)
        int32_t var_80_6 = var_68
        sub_504500(var_20_1, var_1c_1)
        void* var_80_7 = var_20_1
        sub_6b4d5b()
    
    int32_t var_20_2 = 0
    int32_t var_1c_2 = 0
    int32_t var_18_2 = 0
    
    if (var_28_1 u>= 0x10)
        int32_t var_80_8 = var_3c.d
        sub_6b4d5b()
