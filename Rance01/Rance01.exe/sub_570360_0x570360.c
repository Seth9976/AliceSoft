// 函数: sub_570360
// 地址: 0x570360
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72605c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_88
int32_t eax_2 = data_78c474 ^ &var_88
int32_t __saved_edi
int32_t var_9c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** lpFile = arg1
int32_t var_84 = 0
int32_t ebx = lpFile[4]
int32_t var_4 = 0
int32_t var_84_1 = 1
int32_t var_4_1 = 1
int32_t var_84_2 = 3
char var_64
char var_2c
char result = sub_402680("html", sub_401c00(&var_64, sub_401ec0(lpFile, &var_2c, ebx - 4, 4)))
char var_85
char var_80
char var_48
int32_t ebx_2

if (result != 0)
    ebx_2 = var_84_2
    var_85 = 0
else
    int32_t var_4_2 = 2
    int32_t var_84_3 = 7
    int32_t var_4_3 = 3
    ebx_2 = 0xf
    int32_t var_84_4 = 0xf
    result = sub_402680(0x74b48c, sub_401c00(&var_80, sub_401ec0(lpFile, &var_48, ebx - 3, 3)))
    
    var_85 = result != 0 ? 0 : 1

if ((ebx_2.b & 8) != 0)
    ebx_2 &= 0xfffffff7
    int32_t var_6c
    
    if (var_6c u>= 0x10)
        int32_t var_a0_2 = var_80.d
        result = sub_6b4d5b()
    
    int32_t var_6c_1 = 0xf
    int32_t var_70_1 = 0
    var_80 = 0

if ((ebx_2.b & 4) != 0)
    ebx_2 &= 0xfffffffb
    int32_t var_34
    
    if (var_34 u>= 0x10)
        int32_t var_a0_3 = var_48.d
        result = sub_6b4d5b()
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0

if ((ebx_2.b & 2) != 0)
    ebx_2 &= 0xfffffffd
    int32_t var_50
    
    if (var_50 u>= 0x10)
        int32_t var_a0_4 = var_64.d
        result = sub_6b4d5b()
    
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    var_64 = 0

int32_t var_4_4 = 0xffffffff

if ((ebx_2.b & 1) != 0)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_a0_5 = var_2c.d
        result = sub_6b4d5b()
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0

if (var_85 == 0)
    int32_t* eax_12 = data_797d54
    
    if (eax_12 != 0)
        sub_568430(eax_12)
    
    Sleep(0xc8)
    
    if (lpFile[5] u>= 0x10)
        lpFile = *lpFile
    
    result = ShellExecuteA(nullptr, nullptr, lpFile, nullptr, nullptr, SW_SHOWNORMAL)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_88)
return result
