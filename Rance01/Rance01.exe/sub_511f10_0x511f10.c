// 函数: sub_511f10
// 地址: 0x511f10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723d18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (arg1[1].b == 0)
    int32_t var_20 = 0
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    int32_t* var_3c_1 = arg2
    int32_t var_4 = 0
    int32_t edx
    
    if (sub_58f220(&arg1[2], edx, arg1, &var_20) != 0)
        int32_t esi_2 = var_20
        
        if (esi_2 != var_1c_1)
            int32_t* result_1 = (*(**arg1 + 0x24))(eax_2)
            
            if (result_1 == 0)
                sub_65ab60(&var_20)
                result = nullptr
            else if ((*(*result_1 + 8))(esi_2, var_1c_1 - esi_2) != 0)
                sub_65ab60(&var_20)
                result = result_1
            else
                sub_51ddc0(0x753e24)
                (*(*result_1 + 4))()
                sub_65ab60(&var_20)
                result = nullptr
        else if (esi_2 == 0)
            result = nullptr
        else
            int32_t var_3c_4 = esi_2
            sub_6b4d5b()
            result = nullptr
    else
        int32_t* var_3c_2 = arg2
        sub_51ddc0(0x753df0)
        int32_t eax_5 = var_20
        
        if (eax_5 != 0)
            int32_t var_3c_3 = eax_5
            sub_6b4d5b()
        
        result = nullptr
else
    result = sub_512020(arg2, arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
