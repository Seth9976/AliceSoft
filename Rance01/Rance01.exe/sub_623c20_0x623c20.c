// 函数: sub_623c20
// 地址: 0x623c20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d241
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_edi
int32_t var_17c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result_2 = (*(**(arg1 + 4) + 0x28))(arg3)
int32_t* ecx_1 = *(arg1 + 4)
result_1 = result_2
int32_t eax_7
int32_t ecx_2
eax_7, ecx_2 = (*(*ecx_1 + 0x24))(arg3)
int32_t ebp = eax_7

if (ebp != 0xffffffff)
    ebp += 1

uint32_t result = result_1 - 0xe
result_1 = result
char const* const var_180_2
char ecx_7
void* edi_1

switch (result)
    case 0
        var_180_2 = "array@int"
        edi_1 = 9
    label_623d62:
        ecx_7 = sub_401270(arg2, edi_1, var_180_2)
        goto label_623d6b
    case 1
        var_180_2 = "array@float"
        edi_1 = 0xb
        goto label_623d62
    case 2
        var_180_2 = "array@string"
        edi_1 = 0xc
        goto label_623d62
    case 3
        void var_148
        sub_623ee0(ecx_2, arg3, &var_148, arg1)
        void var_164
        int32_t* eax_10 = &var_164
        int32_t var_4 = 0
        var_4.b = 1
        var_4.b = 2
        void var_12c
        sub_401ef0(arg2, sub_4b3c20(eax_10, sub_402be0(eax_10, "array@"), &var_148, &var_12c))
        sub_401110(&var_12c)
        sub_401110(&var_164)
        int32_t var_4_1 = 0xffffffff
        ecx_7 = sub_401110(&var_148)
    label_623d6b:
        
        switch (*(result_1 + sub_623e48))
            case 0
                if (ebp s<= 1)
                    if (ebp == 0xffffffff)
                        sub_405e30(ecx_7, 0x733e80, arg2)
                    
                    result.b = 1
                else
                    int32_t var_180_5 = ebp
                    void var_110
                    _swprintf(&var_110, 0x100, 0x733e7c)
                    void* eax_12 = &var_110
                    char i
                    
                    do
                        i = *eax_12
                        eax_12 += 1
                    while (i != 0)
                    void var_10f
                    sub_402cb0(arg2, &var_110, eax_12 - &var_10f)
                    result.b = 1
            case 1
                result.b = 1
    case 0x10
        var_180_2 = "array@functype"
        edi_1 = 0xe
        goto label_623d62
    case 0x24
        var_180_2 = "array@bool"
        edi_1 = 0xa
        goto label_623d62
    default
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
