// 函数: sub_5b3fc0
// 地址: 0x5b3fc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_721df8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_40
int32_t eax_2 = data_78c474 ^ &var_40
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t* edi = arg1[3]
int128_t* eax_6 = arg1[4]

if (edi != eax_6)
    void* esi_2 = 0
    int32_t __saved_edi
    sub_6b49d0(edi, eax_6, esi_2, data_78c474 ^ &__saved_edi)
    arg1[4] = esi_2 + edi

int128_t* edi_1 = arg1[0x10]

if (edi_1 != 0)
    sub_5c5a90(edi_1)
    int32_t var_58_2 = arg1[0x10]
    sub_6b4d5b()
    arg1[0x10] = 0

arg1[0x11].b = 0
sub_5b4560(arg1)
BOOL result_1 = 0xffffffff
int32_t var_38 = 0
int32_t var_34 = 0
int32_t var_4 = 0
int32_t var_1c = 0
char* eax_8 = arg2
int32_t var_18 = 0xf
char var_2c = 0
char i

do
    i = *eax_8
    eax_8 = &eax_8[1]
while (i != 0)
sub_401270(&var_2c, eax_8 - &eax_8[1], arg2)
bool var_3d = sub_601f00(&result_1, &var_2c) == 0

if (var_18 u>= 0x10)
    int32_t var_58_5 = var_2c.d
    sub_6b4d5b()

BOOL result

if (var_3d == 0)
    int32_t edi_4 = arg4
    
    if (edi_4 == 0xffffffff)
        edi_4 = var_34
    
    result = result_1
    
    if (edi_4 == 0)
        goto label_5b40b7
    
    if (result == 0xffffffff)
        result.b = 0
    else if (arg3 u>= var_34)
        CloseHandle(result)
        result.b = 0
    else
        SetFilePointer(result, arg3, nullptr, FILE_BEGIN)
        int32_t var_38_1 = arg3
        sub_404f60(edi_4, &arg1[3])
        
        if (sub_6021f0(&result_1, arg1[4] - arg1[3], arg1[3]) == 0)
            goto label_5b40b3
        
        int32_t* esi_11 = &result_1
        
        if (sub_5b4170(arg1) != 0)
            arg1[0x14] = 0
            arg1[0x15] = 0
            sub_601e80(esi_11)
            result.b = 1
        else
            sub_601e80(esi_11)
            result.b = 0
else
label_5b40b3:
    result = result_1
label_5b40b7:
    
    if (result == 0xffffffff)
        result.b = 0
    else
        CloseHandle(result)
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_40)
return result
