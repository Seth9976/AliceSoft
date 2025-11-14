// 函数: sub_42fc10
// 地址: 0x42fc10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7287e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_30 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = arg2
int32_t* result_2 = nullptr
int32_t i = 0
int32_t var_18 = 0
int32_t var_4 = 0
void* ecx
sub_42fb90(ecx, &result_2)
int32_t* result_3 = result_2

if (result_3 != i)
    do
        char eax_3
        eax_3, ebx, arg1 = sub_4099e0(data_797d2c, *result_3, ebx, arg1, 1)
        int16_t top = top - 1
        unimplemented  {call 0x4099e0}
        
        if (eax_3 != 0)
            int32_t* result = result_2
            
            if (result != 0)
                int32_t* result_1 = result
                sub_6b4d5b()
            
            result.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        result_3 = 4
    while (4 != i)
    
    result_3 = result_2

if (result_3 != 0)
    int32_t* result_4 = result_3
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return 0
