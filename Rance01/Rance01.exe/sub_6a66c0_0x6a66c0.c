// 函数: sub_6a66c0
// 地址: 0x6a66c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722e03
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_40
int32_t eax_2 = data_78c474 ^ &var_40
int32_t __saved_edi
int32_t var_54 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, 0x11, "DPSoundListWindow")
int32_t var_4 = 0
HICON var_3c
struct dpsound::CWindow::VTable** var_38

if (*(arg1 + 0x10c) == 0)
    struct dpsound::CWindow::VTable** eax_6 = operator new(0x454)
    var_38 = eax_6
    var_4.b = 1
    struct dpsound::CWindow::VTable** eax_13
    
    if (eax_6 == 0)
        eax_13 = nullptr
    else
        if (var_18 u< 0x10)
            var_40 = &var_2c
        else
            var_40 = var_2c.d
        
        int32_t ecx_2 = *(arg1 + 0x5c)
        HGDIOBJ eax_8 = GetStockObject(LTGRAY_BRUSH)
        HCURSOR eax_9 = LoadCursorA(nullptr, 0x7f00)
        var_3c = LoadIconA(nullptr, 0x7f00)
        HICON eax_11 = LoadIconA(nullptr, 0x7f00)
        eax_13 = sub_6a90d0(eax_9, var_3c, var_38, *(arg1 + 0x18), var_40, eax_11, eax_8, ecx_2, 
            arg1 + 0x60)
    
    var_4.b = 0
    *(arg1 + 0x10c) = eax_13
    sub_6aa300(eax_13)

void* result = *(arg1 + 0x10c)

if (*(result + 0x34) != 0)
    if (var_18 u>= 0x10)
        int32_t var_58_5 = var_2c.d
        sub_6b4d5b()
    
    result.b = 0
else
    HICON ecx_5 = *(arg1 + 0x100)
    var_38 = *(arg1 + 0xfc)
    var_3c = ecx_5
    int32_t var_34 = 0
    var_40 = nullptr
    sub_6aa520(result, &var_34, &var_40, &var_38, &var_3c)
    PSTR edi_2 = var_2c.d
    
    if (var_18 u< 0x10)
        edi_2 = &var_2c
    
    sub_6b1840(var_38, var_3c, edi_2, *(arg1 + 0x10c), 0x54300000, var_34, var_40, arg2, nullptr, 
        *(arg1 + 0x18))
    
    if (var_18 u>= 0x10)
        int32_t var_58_4 = var_2c.d
        sub_6b4d5b()
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_40)
return result
