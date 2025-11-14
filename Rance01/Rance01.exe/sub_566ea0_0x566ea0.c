// 函数: sub_566ea0
// 地址: 0x566ea0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71a248
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_84
int32_t eax_2 = data_78c474 ^ &var_84
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_74 = 0
int32_t __saved_edi
int128_t* esi = (**(arg1 + 0x4fc))(data_78c474 ^ &__saved_edi)
char* ecx_2 = esi
int32_t var_60 = 0
int32_t var_5c = 0xf
char var_70 = 0
int128_t* eax_6

do
    eax_6.b = *ecx_2
    ecx_2 = &ecx_2[1]
while (eax_6.b != 0)
int32_t var_c_1 = 0
char var_38
int32_t* var_98_1 = sub_401800(sub_401270(&var_70, ecx_2 - &ecx_2[1], esi), &var_70, &var_38)
var_c_1.b = 1
int32_t var_54
sub_402c60(&var_54, "Version.txt", nullptr)
int32_t var_24

if (var_24 u>= 0x10)
    int32_t var_98_2 = var_38.d
    sub_6b4d5b()

int32_t var_24_1 = 0xf
int32_t var_28 = 0
var_38 = 0

if (var_5c u>= 0x10)
    int32_t var_98_3 = var_70.d
    sub_6b4d5b()

HANDLE hObject_4 = 0xffffffff
int32_t var_7c = 0
uint32_t var_78 = 0
var_c_1.b = 5
char eax_10 = sub_601f00(&hObject_4, &var_54)
int32_t var_40

if (eax_10 == 0)
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = eax_10
    HANDLE hObject = hObject_4
    
    if (hObject != 0xffffffff)
        CloseHandle(hObject)
    
    if (var_40 u>= 0x10)
        int32_t var_98_5 = var_54
        sub_6b4d5b()
else if (var_78 == 0 || var_78 u>= 0x100)
    *(arg2 + 0x10) = 0
    *(arg2 + 0x14) = 0xf
    *arg2 = 0
    HANDLE hObject_3 = hObject_4
    
    if (hObject_3 != 0xffffffff)
        CloseHandle(hObject_3)
    
    if (var_40 u>= 0x10)
        int32_t var_98_10 = var_54
        sub_6b4d5b()
else
    var_70.d = 0
    int32_t var_6c_1 = 0
    int32_t var_68_1 = 0
    sub_404f60(var_78, &var_70)
    var_c_1.b = 6
    char eax_13 = sub_6021f0(&hObject_4, var_78, var_70.d)
    char* esi_5 = &var_70
    
    if (eax_13 != 0)
        char var_81 = 0
        sub_54e400(&var_81, esi_5)
        sub_402be0(arg2, var_70.d)
        sub_65ab60(&var_70)
        HANDLE hObject_2 = hObject_4
        
        if (hObject_2 != 0xffffffff)
            CloseHandle(hObject_2)
        
        sub_401110(&var_54)
    else
        *(arg2 + 0x14) = 0xf
        *(arg2 + 0x10) = 0
        *arg2 = eax_13
        sub_65ab60(esi_5)
        HANDLE hObject_1 = hObject_4
        
        if (hObject_1 != 0xffffffff)
            CloseHandle(hObject_1)
        
        sub_401110(&var_54)
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_84)
return arg2
