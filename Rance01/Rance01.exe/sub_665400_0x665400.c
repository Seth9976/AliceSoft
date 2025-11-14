// 函数: sub_665400
// 地址: 0x665400
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725730
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_48 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg3 + 8) = 4
void* var_30 = nullptr
int32_t var_2c = 0
int32_t var_28 = 0
int32_t var_4 = 0
char result

if (sub_665590(arg2, arg1, &var_30) != 0)
    int32_t* var_20 = nullptr
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    var_4.b = 1
    
    if (sub_666940(arg2, arg1, &var_30, &var_20, arg4) != 0)
        sub_669360(&var_20, sub_6691e0(arg3 + 0x4c, &var_30), arg3 + 0x5c)
        int32_t* edi_4 = var_20
        
        if (edi_4 != 0)
            sub_663180(edi_4, var_1c_1)
            int32_t* var_4c_10 = edi_4
            sub_6b4d5b()
        
        int32_t var_4_3 = 0xffffffff
        void* ebx_3 = var_30
        
        if (ebx_3 != 0)
            void* var_4c_11 = arg3
            sub_663220(ebx_3, var_2c)
            void* var_4c_12 = ebx_3
            sub_6b4d5b()
        
        result = 1
    else
        int32_t* edi_2 = var_20
        
        if (edi_2 != 0)
            sub_663180(edi_2, var_1c_1)
            int32_t* var_4c_5 = edi_2
            sub_6b4d5b()
        
        int32_t var_4_2 = 0xffffffff
        void* ebx_2 = var_30
        
        if (ebx_2 == 0)
            result = 0
        else
            void* var_4c_6 = arg3
            sub_663220(ebx_2, var_2c)
            void* var_4c_7 = ebx_2
            sub_6b4d5b()
            result = 0
else
    int32_t var_4_1 = 0xffffffff
    void* ebx_1 = var_30
    
    if (ebx_1 != 0)
        void* var_4c_1 = arg3
        sub_663220(ebx_1, var_2c)
        void* var_4c_2 = ebx_1
        sub_6b4d5b()
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
