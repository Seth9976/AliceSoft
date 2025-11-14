// 函数: sub_64f7c0
// 地址: 0x64f7c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7230e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t var_60 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
int32_t var_4 = 0
void* eax_5 = *(arg1 + 0x8c)
void* ecx = *(eax_5 + 0x10c)
char* edx_2

if (ecx == 0)
    edx_2 = &var_48
else
    int32_t* edx_1 = *(eax_5 + 0x108)
    
    if (edx_1 == 0)
        edx_2 = &var_48
    else
        int32_t eax_6 = *(eax_5 + 0x84)
        
        if (eax_6 == 0)
            sub_643fd0(&var_48, edx_1)
        label_64f85b:
            edx_2 = var_48.d
            
            if (var_34 u< 0x10)
                edx_2 = &var_48
        else if (eax_6 != 1)
            edx_2 = &var_48
        else
            ecx = *(ecx + 0xa0)
            
            if (ecx != 0)
                sub_646900(&var_48, ecx)
                goto label_64f85b
            
            edx_2 = &var_48

char* eax_7 = edx_2
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0

do
    ecx.b = *eax_7
    eax_7 = &eax_7[1]
while (ecx.b != 0)

sub_401270(&var_2c, eax_7 - &eax_7[1], edx_2)
char* lParam = var_2c.d

if (var_18 u< 0x10)
    lParam = &var_2c

LRESULT result = SendMessageA(*(arg1 + 0xa0), 0x401, 0, lParam)

if (var_18 u>= 0x10)
    int32_t var_64_5 = var_2c.d
    result = sub_6b4d5b()

if (var_34 u>= 0x10)
    int32_t var_64_6 = var_48.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return result
