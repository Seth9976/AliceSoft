// 函数: sub_4357d0
// 地址: 0x4357d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723d18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_4
int32_t* ebx = arg_4
int32_t result_3 = 0
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_4 = 0
sub_40cf90(&result_3, arg1)
void* var_3c_1 = arg1
int32_t* var_40 = &result_3
sub_4358f0()
sub_435bb0(&result_3, arg2)
int32_t result

if (sub_435cc0(arg1, arg2, &result_3, ebx) == 0)
label_4358db:
    result = result_3
    
    if (result != 0)
        int32_t result_2 = result
        sub_6b4d5b()
    
    result.b = 0
else
    sub_436090(arg2)
    
    if (sub_436160(ebx, arg2) == 0)
        goto label_4358db
    
    if (sub_436280(arg2) == 0)
        goto label_4358db
    
    int32_t* esi_1 = arg2[1]
    int32_t* eax_7 = *esi_1
    arg_4 = eax_7
    
    if (eax_7 != esi_1)
        while (true)
            void* eax_8 = eax_7[4]
            
            if (eax_8 != 0 && *(eax_8 + 0xd4) != 0 && (*(**(eax_8 + 0xd4) + 8))(eax_2) == 0)
                sub_604c90("Direct3D")
                break
            
            sub_5cc250(&arg_4)
            eax_7 = arg_4
            
            if (eax_7 == esi_1)
                goto label_4358a5
        
        goto label_4358db
    
label_4358a5:
    result = result_3
    
    if (result != 0)
        int32_t result_1 = result
        sub_6b4d5b()
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
