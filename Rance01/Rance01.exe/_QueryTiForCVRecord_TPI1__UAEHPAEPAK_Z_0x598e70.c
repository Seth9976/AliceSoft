// 函数: ?QueryTiForCVRecord@TPI1@@UAEHPAEPAK@Z
// 地址: 0x598e70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7247c5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_54 = data_78c474 ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_54
void* edi = arg4
int32_t i = 1
void* var_1c = edi
int32_t var_8_1 = 0
int32_t ecx = arg3

while (i s> 0)
    int32_t* j_1 = nullptr
    int32_t var_3c_1 = 0
    int32_t var_38_1 = 0
    result, ecx, arg2 = sub_4bc7e0(1, arg2, ecx, &j_1)
    int32_t var_30 = 0
    int32_t var_2c_1 = 0
    int32_t var_28_1 = 0
    void* var_20_1 = edi
    var_8_1.b = 2
    
    if (edi != 0)
        sub_4ea490(edi, &j_1)
        var_8_1.b = 3
        result, ecx, arg2 = sub_6b05e0(edi + 0x10, &var_30)
    
    var_8_1.b = 0
    int32_t* j = j_1
    
    if (j != 0)
        for (; j != var_3c_1; j = &j[7])
            if (j[5] u>= 0x10)
                int32_t var_58_3 = *j
                sub_6b4d5b()
            
            j[5] = 0xf
            j[4] = 0
            *j = 0
        
        int32_t* j_2 = j_1
        result, ecx, arg2 = sub_6b4d5b()
        edi = arg4
    
    i -= 1
    edi += 0x20
    arg4 = edi

fsbase->NtTib.ExceptionList = ExceptionList
return result
