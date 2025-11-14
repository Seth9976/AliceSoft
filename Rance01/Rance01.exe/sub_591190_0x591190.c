// 函数: sub_591190
// 地址: 0x591190
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71135b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_4
int32_t* result_5 = result_4
int32_t* result

if (result_5[5] == 0)
    result = nullptr
else
    int32_t* arg_8
    sub_591420(&result_5[1], &result_4, &arg_8)
    int32_t* result_6 = result_4
    
    if (result_6 == result_5[2])
        int32_t* eax_6 = (*(*result_5[5] + 0x2c))(eax_2)
        
        if (eax_6 == 0)
            result = nullptr
        else if ((*(*eax_6 + 8))(arg_8, arg1) != 0)
            int32_t* result_3 = operator new(0x10)
            result_4 = result_3
            int32_t var_4 = 0
            int32_t* result_1
            
            if (result_3 == 0)
                result_1 = nullptr
            else
                *result_3 = &graphengine::CCachedTexture::`vftable'{for `ITexture'}
                result_3[1] = 1
                result_3[2] = result_5
                result_3[3] = eax_6
                (**eax_6)()
                result_1 = result_3
            
            int32_t var_4_1 = 0xffffffff
            int32_t* var_14 = arg_8
            int32_t* result_2 = result_1
            sub_58cc70(&var_14, &result_5[1], sub_40d430(&result_5[1], &var_14))
            (**arg_8)()
            (**result_1)()
            (*(*eax_6 + 4))()
            result = result_1
        else
            (*(*eax_6 + 4))()
            result = nullptr
    else
        (**result_6[4])(eax_2)
        result = result_6[4]

fsbase->NtTib.ExceptionList = ExceptionList
return result
