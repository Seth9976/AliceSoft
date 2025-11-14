// 函数: sub_62e8d0
// 地址: 0x62e8d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_721456
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_7e8
int32_t eax_2 = data_78c474 ^ &var_7e8
int32_t __saved_edi
int32_t var_7fc = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_7e8 = arg2
uint32_t eax_6 = zx.d(arg3)

if (eax_6 == 0x9c43)
    DestroyWindow(arg1)
else if (eax_6 == 0x9c5f)
    void param0
    sub_65f4c0(&param0)
    HWND var_770_1 = arg1
    int32_t var_7d0_1 = 0xf
    int32_t var_7d4_1 = 0
    char var_7e4 = 0
    sub_401270(&var_7e4, 5, "*.txt")
    int32_t var_4 = 0
    int32_t var_77c_1 = 0xf
    int32_t var_780_1 = 0
    char var_790 = 0
    sub_401270(&var_790, 0x10, 0x733bc0)
    sub_65f540(&param0, &var_7e4, &var_790)
    
    if (var_77c_1 u>= 0x10)
        int32_t var_800_2 = var_790.d
        sub_6b4d5b()
    
    int32_t var_4_1 = 0xffffffff
    int32_t var_77c_2 = 0xf
    int32_t var_780_2 = 0
    var_790 = 0
    
    if (var_7d0_1 u>= 0x10)
        int32_t var_800_3 = var_7e4.d
        sub_6b4d5b()
    
    int32_t var_7d0_2 = 0xf
    int32_t var_7d4_2 = 0
    var_7e4 = 0
    int32_t var_798_1 = 0xf
    int32_t var_79c_1 = 0
    char var_7ac = 0
    sub_401270(&var_7ac, 3, 0x733bd4)
    int32_t var_4_2 = 1
    int32_t var_7b4_1 = 0xf
    int32_t var_7b8_1 = 0
    char var_7c8 = 0
    sub_401270(&var_7c8, 0x12, 0x733bd8)
    sub_65f540(&param0, &var_7ac, &var_7c8)
    
    if (var_7b4_1 u>= 0x10)
        int32_t var_800_5 = var_7c8.d
        sub_6b4d5b()
    
    int32_t var_4_3 = 0xffffffff
    int32_t var_7b4_2 = 0xf
    int32_t var_7b8_2 = 0
    var_7c8 = 0
    
    if (var_798_1 u>= 0x10)
        int32_t var_800_6 = var_7ac.d
        sub_6b4d5b()
    
    int32_t var_798_2 = 0xf
    int32_t var_79c_2 = 0
    var_7ac = 0
    char var_417[0x403]
    int32_t var_14
    var_417[var_14] = 0
    
    if (GetSaveFileNameA(&param0) != 0)
        void* edx_3 = var_7e8
        int32_t eax_12 = *(edx_3 + 0x1bc)
        
        if (eax_12 s>= 0)
            int32_t ecx_1 = *(edx_3 + 0x254)
            void var_71c
            
            if (eax_12 s< (*(edx_3 + 0x258) - ecx_1) s>> 2
                    && sub_62cea0(&var_71c, *(ecx_1 + (eax_12 << 2)), 1) == 0)
                void* var_800_8 = &var_71c
                sub_604c90(0x733bec)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_7e8)
return 0
