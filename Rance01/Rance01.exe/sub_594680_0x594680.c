// 函数: sub_594680
// 地址: 0x594680
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71e4f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_44 = 0
int32_t var_3c = 0
int32_t var_38 = 0
int32_t var_34 = 0
int32_t* var_30 = nullptr
int32_t var_c_1 = 0
void var_40
void var_2c
int16_t var_2a

if (sub_5d9860(&var_2c, &var_3c, arg2, arg3, &var_40, &var_44, *(arg1 + 0x18)).b == 0)
    sub_402cb0(arg1 + 0x48, 0x74b074, 0x17)
    int32_t var_c_2 = 0xffffffff
    
    if (var_30 != 0)
        (*(*var_30 + 4))(eax_2)
else
    int16_t var_1e
    
    if (var_2a != 1 && var_2a != 2)
        sub_402cb0(arg1 + 0x48, 0x74b08c, 0x11)
        int32_t var_c_3 = 0xffffffff
        
        if (var_30 != 0)
            (*(*var_30 + 4))(eax_2)
            int32_t eax_11
            eax_11.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_11
    else if (var_1e == 8 || var_1e == 0x10)
        int32_t var_28
        
        if (var_28 == 0x5622 || var_28 == 0xac44)
            int32_t eax_20
            uint32_t edx_5
            edx_5:eax_20 = mulu.dp.d(var_44, 0x3e8)
            int32_t var_c_6 = 0xffffffff
            int32_t var_24
            *(arg1 + 0x30) = __alldiv(eax_20, edx_5, var_24, 0)
            
            if (var_30 != 0)
                (*(*var_30 + 4))(eax_2)
            
            uint32_t eax_21
            eax_21.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_21
        
        sub_402cb0(arg1 + 0x48, 0x74b0b4, 0x11)
        int32_t var_c_5 = 0xffffffff
        
        if (var_30 != 0)
            (*(*var_30 + 4))(eax_2)
            int32_t eax_18
            eax_18.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_18
    else
        sub_402cb0(arg1 + 0x48, 0x74b0a0, 0x11)
        int32_t var_c_4 = 0xffffffff
        
        if (var_30 != 0)
            (*(*var_30 + 4))(eax_2)
            int32_t eax_14
            eax_14.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_14
int32_t* eax_7
eax_7.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_7
