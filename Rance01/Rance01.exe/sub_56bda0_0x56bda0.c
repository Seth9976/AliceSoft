// 函数: sub_56bda0
// 地址: 0x56bda0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71a160
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_60
int32_t eax_2 = data_78c474 ^ &var_60
int32_t __saved_edi
int32_t var_74 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL hObject_1 = 0xffffffff
int32_t var_58 = 0
int32_t var_54 = 0
int32_t var_4 = 0
int32_t var_2c
bool cond:0 = sub_601f00(&hObject_1, sub_426250(&var_2c, arg1, arg2)) == 0
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_78_1 = var_2c
    sub_6b4d5b()

if (cond:0 != 0)
    goto label_56be77

int32_t var_34_1 = 0xf
int32_t var_38_1 = 0
char var_48 = 0
var_4.b = 1

if (sub_602270(&hObject_1, &var_48) == 0)
    if (var_34_1 u< 0x10)
        goto label_56be6b
    
    int32_t var_78_3 = var_48.d
label_56be63:
    sub_6b4d5b()
label_56be6b:
    int32_t var_34_2 = 0xf
    int32_t var_38_2 = 0
    var_48 = 0
    goto label_56be77

if (sub_402680(0x74b71c, &var_48) == 0)
    if (var_34_1 u< 0x10)
        goto label_56be6b
    
    int32_t var_78_5 = var_48.d
    goto label_56be63

int32_t var_4c = 0
BOOL hObject

if (sub_602230(&hObject_1, &var_4c) == 0)
    sub_401110(&var_48)
label_56be77:
    hObject = hObject_1
    
    if (hObject != 0xffffffff)
        CloseHandle(hObject)
    
    hObject.b = 0
else if (var_4c == 0)
    int32_t var_50 = 0
    
    if (sub_602230(&hObject_1, &var_50) == 0)
        goto label_56bed9
    
    int32_t eax_12 = var_50
    
    if (eax_12 != 0 && eax_12 != 1)
        goto label_56bed9
    
    *arg3 = eax_12
    sub_401110(&var_48)
    sub_601e80(&hObject_1)
    hObject.b = 1
else
label_56bed9:
    sub_401110(&var_48)
    sub_601e80(&hObject_1)
    hObject.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_60)
return hObject
