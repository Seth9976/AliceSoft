// 函数: sub_4b7be0
// 地址: 0x4b7be0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711cdb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0

for (int32_t* i = *(arg1 + 8); i != *(arg1 + 0xc); i = &i[1])
    void* edi_1 = *i
    
    if (edi_1 != 0)
        sub_4b7210(edi_1)
        void* var_24_2 = edi_1
        sub_6b4d5b()

int32_t result = *(arg1 + 8)

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

*(arg1 + 8) = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
