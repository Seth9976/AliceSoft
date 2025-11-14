// 函数: sub_42fcd0
// 地址: 0x42fcd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7241f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = arg2
int32_t* result_2 = nullptr
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_4 = 0
void* ecx
sub_42fb90(ecx, &result_2)
int32_t* result_3 = result_2
int32_t* result

if (result_3 == var_18)
label_42fd48:
    
    if (result_3 != 0)
        int32_t* result_4 = result_3
        sub_6b4d5b()
    
    result.b = 0
else
    while (true)
        result, ebx = sub_4099e0(data_797d2c, *result_3, arg1, ebx, 0)
        int16_t top = top - 1
        unimplemented  {call 0x4099e0}
        
        if (result.b != 0)
            result = result_2
            
            if (result != 0)
                int32_t* result_1 = result
                sub_6b4d5b()
            
            result.b = 1
            break
        
        result_3 = 4
        
        if (4 == var_18)
            result_3 = result_2
            goto label_42fd48

fsbase->NtTib.ExceptionList = ExceptionList
return result
