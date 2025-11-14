// 函数: sub_504ea0
// 地址: 0x504ea0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719cbb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x1e8) == 0)
    int32_t* eax_3 = operator new(0x6b0)
    int32_t* var_10_1 = eax_3
    int32_t var_4 = 0
    int32_t* eax_4
    
    if (eax_3 == 0)
        eax_4 = nullptr
    else
        eax_4 = sub_507590(eax_3, *(arg1 + 0x204))
    
    int32_t var_4_1 = 0xffffffff
    char edx_1 = *(arg1 + 0x208)
    *(arg1 + 0x1e8) = eax_4
    
    for (int32_t* i = eax_4[0x41]; i != eax_4[0x42]; i = &i[1])
        void* edi_1 = *i
        
        if (edi_1 != 0)
            *(edi_1 + 0x6c) = edx_1
    
    eax_4[0x46].b = edx_1
    *(*(arg1 + 0x1e8) + 0x690) = *(arg1 + 0x1f0)
    *(*(arg1 + 0x1e8) + 0x694) = *(arg1 + 0x1f4)
    char result = sub_507cc0(*(arg1 + 0x1e4), *(arg1 + 0x1e8), arg1)
    
    if (result == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

fsbase->NtTib.ExceptionList = ExceptionList
return 1
