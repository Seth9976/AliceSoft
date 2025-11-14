// 函数: sub_5d86a0
// 地址: 0x5d86a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71e4f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 8) != 0 && *(arg1 + 0x10) != 0)
    int32_t* eax_5 = (*(**(arg1 + 8) + 8))(arg2)
    
    if (eax_5 != 0)
        int32_t var_3c = 0
        int32_t var_38_1 = 0
        int32_t var_34_1 = 0
        int32_t* var_30_1 = nullptr
        int32_t var_c_1 = 0
        int32_t var_44
        void var_40
        void var_2c
        char eax_10 = sub_5d9860(&var_2c, &var_3c, 
            (*(*eax_5 + 0x18))((*(*eax_5 + 0x14))(&var_40, &var_44, *(arg1 + 0x10), eax_2)))
        int32_t eax_11 = *(*eax_5 + 4)
        
        if (eax_10 != 0)
            eax_11()
            int32_t eax_15
            uint32_t edx_4
            edx_4:eax_15 = mulu.dp.d(var_44, 0x3e8)
            int32_t var_24
            uint32_t result = __alldiv(eax_15, edx_4, var_24, 0)
            int32_t var_c_3 = 0xffffffff
            
            if (var_30_1 != 0)
                (*(*var_30_1 + 4))()
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        eax_11()
        int32_t var_c_2 = 0xffffffff
        
        if (var_30_1 != 0)
            (*(*var_30_1 + 4))()

fsbase->NtTib.ExceptionList = ExceptionList
return 0
