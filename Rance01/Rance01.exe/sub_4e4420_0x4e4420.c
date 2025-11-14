// 函数: sub_4e4420
// 地址: 0x4e4420
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720158
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t var_28 = data_78c474 ^ &__saved_ebx
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** eax_3

if (*(arg1 + 0x2c) != 0)
    struct fileimage::CFileImageMaker::VTable* var_20 = &fileimage::CFileImageMaker::`vftable'
    struct _EXCEPTION_REGISTRATION_RECORD** var_1c = nullptr
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0
    int32_t var_4 = 0
    
    if (sub_4e44e0(&var_20, arg1) != 0)
        struct fileimage::CFileImageMaker::VTable** ecx_2 = &var_20
        
        if (sub_602070(arg1 + 0x38, &var_1c) != 0)
            sub_4101c0(ecx_2)
            int32_t eax_9
            eax_9.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        
        sub_4101c0(ecx_2)
        int32_t eax_8
        eax_8.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_8
    
    eax_3 = var_1c
    
    if (eax_3 != 0)
        struct _EXCEPTION_REGISTRATION_RECORD** var_2c_2 = eax_3
        sub_6b4d5b()

eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
