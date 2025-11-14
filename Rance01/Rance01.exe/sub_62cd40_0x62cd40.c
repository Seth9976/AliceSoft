// 函数: sub_62cd40
// 地址: 0x62cd40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7181e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = *(arg1 + 0x14c)
int32_t ecx = *(arg1 + 0x150)
int128_t* ebx = arg2
result_1 = arg1
char* eax_5 = ebx
void* ebx_1

if (esi != ecx)
    char i
    
    do
        i = *eax_5
        eax_5 = &eax_5[1]
    while (i != 0)
    sub_402cb0(esi + (ecx - esi) s/ 0x1c * 0x1c - 0x1c, ebx, eax_5 - &eax_5[1])
    ebx_1 = *(*(arg1 + 0x14c) + (*(arg1 + 0x150) - *(arg1 + 0x14c)) s/ 0x1c * 0x1c - 0xc)
else
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    
    do
        ecx.b = *eax_5
        eax_5 = &eax_5[1]
    while (ecx.b != 0)
    
    sub_401270(&var_2c, eax_5 - &eax_5[1], ebx)
    int32_t var_4 = 0
    sub_405220(&var_2c, arg1 + 0x14c)
    
    if (var_18_1 u>= 0x10)
        int32_t var_48_1 = var_2c.d
        sub_6b4d5b()
    
    void* ecx_2 = ebx + 1
    char i_1
    
    do
        i_1 = *ebx
        ebx += 1
    while (i_1 != 0)
    ebx_1 = ebx - ecx_2

void* result = result_1

if (*(result + 0x15c) s< ebx_1)
    *(result + 0x15c) = ebx_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
