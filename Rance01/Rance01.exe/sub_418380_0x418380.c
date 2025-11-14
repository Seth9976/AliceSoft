// 函数: sub_418380
// 地址: 0x418380
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724b3b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_4 = *data_797da0
int32_t esi

if (eax_4 != 0)
    esi = sub_5f7440(eax_4)
else
    esi = 0xffffffff

void* eax_6 = operator new(0x6c)
var_10 = eax_6
int32_t var_4 = 0
void* const result
void* const result_1

if (eax_6 == 0)
    result_1 = nullptr
else
    result_1 = sub_41d7a0(esi, eax_6, *(arg1 + 0x5c), result.b)

int32_t var_4_1 = 0xffffffff
result = result_1
var_10 = arg1 - 4

if (arg1 != 4)
    int32_t ecx_2 = *(result_1 + 0x5c)
    int32_t* eax_7 = *(result_1 + 0x58)
    
    if (eax_7 == ecx_2)
        sub_61b5a0(&var_10, result_1 + 0x58)
    else
        while (*eax_7 != arg1 - 4)
            eax_7 = &eax_7[1]
            
            if (eax_7 == ecx_2)
                break
        
        if (eax_7 == ecx_2)
            sub_61b5a0(&var_10, result_1 + 0x58)

sub_61b5a0(&result, arg1 + 0x6c)
fsbase->NtTib.ExceptionList = ExceptionList
return result
