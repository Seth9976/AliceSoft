// 函数: sub_64d2d0
// 地址: 0x64d2d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7231a3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_3c
int32_t eax_2 = data_78c474 ^ &var_3c
int32_t __saved_edi
int32_t var_4c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, 0xf, "ThumbnailWindow")
int32_t var_4 = 0

if (*(arg1 + 0xa4) == 0)
    struct dpparts::CWindow::dpparts::CThumbnailWindow::VTable** eax_6 = operator new(0xdc)
    var_4.b = 1
    struct dpparts::CWindow::dpparts::CThumbnailWindow::VTable** eax_13
    
    if (eax_6 == 0)
        eax_13 = nullptr
    else
        if (var_18 u< 0x10)
            var_3c = &var_2c
        else
            var_3c = var_2c.d
        
        HGDIOBJ eax_7 = GetStockObject(LTGRAY_BRUSH)
        HCURSOR eax_8 = LoadCursorA(nullptr, 0x7f00)
        HICON eax_9 = LoadIconA(nullptr, 0x7f00)
        HICON eax_10 = LoadIconA(nullptr, 0x7f00)
        eax_13 = sub_65b9e0(eax_8, eax_7, eax_6, *(arg1 + 0x18), var_3c, eax_10, eax_9)
    
    var_4.b = 0
    *(arg1 + 0xa4) = eax_13
    sub_65c010(eax_13)

void* result = *(arg1 + 0xa4)

if (*(result + 0x34) == 0)
    char* edi_1 = var_2c.d
    
    if (var_18 u< 0x10)
        edi_1 = &var_2c
    
    sub_65e420(*(arg1 + 0x6c), *(arg1 + 0x70), edi_1, result, 0x56000000, 0, 0, arg2, nullptr, 
        *(arg1 + 0x18))
    
    if (var_18 u>= 0x10)
        int32_t var_50_4 = var_2c.d
        sub_6b4d5b()
else if (var_18 u>= 0x10)
    int32_t var_50_5 = var_2c.d
    sub_6b4d5b()

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_3c)
return result
