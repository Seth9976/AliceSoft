// 函数: sub_4c4210
// 地址: 0x4c4210
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7240e3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_3c
int32_t eax_2 = data_78c474 ^ &var_3c
int32_t __saved_edi
int32_t var_4c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg1 + 0xc
int32_t var_38
sub_50ceb0(edi, &var_38)
int32_t* ebx = nullptr
int32_t var_c_1 = 0
int32_t* eax_5 = operator new(0x54)
var_3c = eax_5
var_c_1.b = 1

if (eax_5 != 0)
    ebx = sub_4dd750(eax_5, edi, &var_38)

int32_t* var_50_2 = &var_38
var_c_1.b = 0
void* result
int32_t var_24

if (sub_50cfc0(*(arg1 + 0x298), ebx) != 0)
    *(arg1 + 0x26c) = ebx
    sub_4c4320(arg1)
    *(arg1 + 0x270) = 0
    
    if (var_24 u>= 0x10)
        int32_t var_50_5 = var_38
        sub_6b4d5b()
    
    result.b = 1
else
    if (edi[5] u>= 0x10)
        edi = *edi
    
    int32_t* var_50_3 = edi
    sub_51ddc0(0x7560f8)
    sub_4dd8d0(ebx)
    
    if (var_24 u>= 0x10)
        int32_t var_50_4 = var_38
        sub_6b4d5b()
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_3c)
return result
