// 函数: sub_55b510
// 地址: 0x55b510
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_71a4fc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = data_78c474 ^ &__saved_ebp
int32_t var_88 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_88
void* esi = arg3
void* var_64 = esi
void* var_68 = esi
int32_t var_8_1 = 0
void* var_60

while (true)
    if (arg4 u<= 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        sub_6b4885(eax_2 ^ &__saved_ebp)
        return result
    
    int32_t var_54_1 = 0
    int32_t* eax_3 = operator new(0x30)
    
    if (eax_3 == 0)
        break
    
    *eax_3 = eax_3
    eax_3[1] = eax_3
    eax_3[2] = eax_3
    eax_3[0xb].b = 1
    *(eax_3 + 0x2d) = 1
    int32_t* i_1 = nullptr
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    char var_4c = 0
    int32_t var_30_1 = 0xffffffff
    int32_t var_2c_1 = 0xffffffff
    int32_t* i_2 = nullptr
    void* var_24_1 = nullptr
    int32_t var_20_1 = 0
    var_60 = esi
    var_8_1.b = 2
    void var_5c
    
    if (esi != 0)
        sub_55ba80(esi, &var_5c)
        var_8_1.b = 3
        *(esi + 0x24) = 0xf
        *(esi + 0x20) = 0
        *(esi + 0x10) = 0
        sub_401180(esi + 0x10, 0xffffffff, &var_4c, 0)
        var_8_1.b = 4
        *(esi + 0x2c) = var_30_1
        *(esi + 0x30) = var_2c_1
        sub_52fb60(esi + 0x34, &i_2)
        i_1 = i_2
    
    var_8_1.b = 0
    
    if (i_1 != 0)
        var_60 = var_24_1
        
        for (int32_t* i = i_1; i != var_60; i = &i[0xb])
            if (i[5] u>= 0x10)
                int32_t var_8c_3 = *i
                sub_6b4d5b()
            
            i[5] = 0xf
            i[4] = 0
            *i = 0
        
        int32_t* i_3 = i_2
        sub_6b4d5b()
    
    i_2 = nullptr
    int32_t var_24_2 = 0
    int32_t var_20_2 = 0
    
    if (var_38_1 u>= 0x10)
        int32_t var_8c_4 = var_4c.d
        sub_6b4d5b()
    
    int32_t var_38_2 = 0xf
    int32_t var_3c_2 = 0
    var_4c = 0
    var_8_1.b = 5
    void var_78
    sub_429bc0(&var_5c, &var_78, *eax_3, eax_3)
    var_8_1.b = 0
    int32_t* var_8c_6 = eax_3
    result = sub_6b4d5b()
    arg4 -= 1
    var_64 += 0x44
    esi = var_64

var_60 = nullptr
struct std::exception::VTable* var_74
std::exception::exception(&var_74, &var_60)
var_74 = &std::bad_alloc::`vftable'{for `std::exception'}
sub_6b77db(&var_74, 0x771508)
noreturn
