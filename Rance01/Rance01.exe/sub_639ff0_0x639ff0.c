// 函数: sub_639ff0
// 地址: 0x639ff0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_728850
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = data_78c474 ^ &var_64
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_5
eax_5.b = *(*(arg1 + 0x348) + 0x10)
int32_t* var_5c
int128_t* var_58
int32_t var_54

if (eax_5.b != 0)
    sub_5f7c70(arg1 + 0x39c)
    sub_5f7c70(arg1 + 0x3ac)
    int32_t esi_1 = 0
    var_58 = nullptr
    var_54 = 0
    int32_t var_50_1 = 0
    int32_t var_c_1 = 0
    int32_t* edi_3 = *(arg1 + 0x348)
    int32_t ecx_1 = *edi_3
    int32_t eax_6 = edi_3[1]
    
    if (ecx_1 != eax_6)
        sub_65a090(&var_58, (eax_6 - ecx_1) s>> 2)
        int128_t* edi_4 = *edi_3
        sub_6b49d0(var_58, edi_4, (edi_3[1] - edi_4) s>> 2 << 2, eax_4)
        esi_1 = var_54
    
    sub_63c7a0(arg1 + 0x3cc, &var_5c, *(arg1 + 0x3cc), *(arg1 + 0x3d0))
    sub_63a6e0(arg1, arg1 + 0x3cc, &var_58)
    int128_t* edi_6 = var_58
    *(arg1 + 0x378) = ((esi_1 - edi_6) s>> 2) + 1
    sub_64d800(arg1 + 0x364)
    int32_t ecx_5 = sub_63a2f0(arg1, arg1 + 0x4e4) + 2
    int32_t eax_16
    int32_t edx_3
    edx_3:eax_16 = sx.q(*(arg1 + 0x64))
    *(arg1 + 0x394) = ecx_5 * ((eax_16 - edx_3) s>> 1)
    sub_64d800(arg1 + 0x380)
    int32_t var_c_2 = 0xffffffff
    
    if (edi_6 != 0)
        int128_t* var_78_5 = edi_6
        sub_6b4d5b()

sub_63a410(arg1 + 0x3cc, *(arg1 + 0x4e0))
int32_t eax_20 = GetScrollPos(*(arg1 + 0x368), *(arg1 + 0x370))
RECT rect
GetClientRect(*(arg1 + 0x34), &rect)
sub_405410(arg1 + 0x3bc, &var_5c, *(arg1 + 0x3bc), *(arg1 + 0x3c0))
int32_t* eax_24 = sub_63ae80(arg1 + 0x3cc, &var_58, arg1, eax_20, *(arg1 + 0x64), rect.bottom)
var_5c = eax_24

if (arg1 + 0x3bc != eax_24)
    int32_t* ecx_9 = *(arg1 + 0x3bc)
    
    if (ecx_9 != 0)
        sub_405780(ecx_9, *(arg1 + 0x3c0))
        int32_t var_78_11 = *(arg1 + 0x3bc)
        sub_6b4d5b()
        eax_24 = var_5c
    
    *(arg1 + 0x3bc) = 0
    *(arg1 + 0x3c0) = 0
    *(arg1 + 0x3c4) = 0
    *(arg1 + 0x3bc) = *eax_24
    *(arg1 + 0x3c0) = eax_24[1]
    *(arg1 + 0x3c4) = eax_24[2]
    *eax_24 = 0
    eax_24[1] = 0
    eax_24[2] = 0

int32_t var_c_3 = 0xffffffff
int128_t* eax_27 = var_58

if (eax_27 != 0)
    sub_405780(eax_27, var_54)
    int128_t* var_78_12 = var_58
    sub_6b4d5b()

char eax_28 = *(arg1 + 0x34c)
int32_t edi_11 = *(arg1 + 0x354)
int32_t eax_29 = GetScrollPos(*(arg1 + 0x384), *(arg1 + 0x38c))
void* eax_30
eax_30.b = eax_28
char var_38
sub_64e830(edi_11 - *(arg1 + 0x5c), eax_30.b, &var_38, arg1 + 0x45c, arg1 + 0x3bc, eax_29)
int32_t var_24

if (var_24 u>= 0x10)
    int32_t var_78_15 = var_38.d
    sub_6b4d5b()

int32_t eax_31 = *(arg1 + 0x354)
int32_t esi_11 = *(arg1 + 0x350)
enum SCROLLBAR_CONSTANTS nBar = *(arg1 + 0x38c)
var_5c.b = *(arg1 + 0x360)
char eax_32 = var_5c.b
HWND hWnd = *(arg1 + 0x384)
int32_t var_24_1 = 0xf
int32_t var_28 = 0
var_38 = 0
sub_64de50(arg1 + 0x3dc, GetScrollPos(hWnd, nBar), eax_32, esi_11, eax_31)
InvalidateRect(*(arg1 + 0x34), nullptr, 0)
BOOL result = UpdateWindow(*(arg1 + 0x34))
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_64)
return result
