// 函数: sub_502b50
// 地址: 0x502b50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7287e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result
int32_t edx
edx:result = muls.dp.d(0x2e8ba2e9, *(arg1 + 0x38) - *(arg1 + 0x34))
int32_t edx_1 = edx s>> 4
int32_t edi_2 = (edx_1 u>> 0x1f) + edx_1

if (edi_2 s> 0)
    int32_t* ecx_2 = *(arg1 + 0xd4)
    
    if (ecx_2 != 0)
        (*(*ecx_2 + 4))(eax_2)
        *(arg1 + 0xd4) = 0
    
    result = (*(*arg2 + 0x30))(eax_2)
    *(arg1 + 0xd4) = result
    
    if (result == 0)
    label_502c0e:
        result.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    int32_t var_20 = 0
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    int32_t var_4 = 0
    sub_502c50(&var_20, arg1)
    int32_t ebx_1 = var_20
    
    if ((*(**(arg1 + 0xd4) + 8))(edi_2, ebx_1, (var_1c_1 - ebx_1) s>> 2, 0).b == 0)
        if (ebx_1 != 0)
            int32_t var_34_2 = ebx_1
            sub_6b4d5b()
        
        goto label_502c0e
    
    if (ebx_1 != 0)
        int32_t var_34_3 = ebx_1
        sub_6b4d5b()

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
