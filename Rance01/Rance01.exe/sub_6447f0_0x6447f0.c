// 函数: sub_6447f0
// 地址: 0x6447f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7230b3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_3c
int32_t eax_2 = data_78c474 ^ &var_3c
int32_t __saved_edi
int32_t var_50 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, 0x11, "DPPartsListWindow")
int32_t var_4 = 0

if (*(arg1 + 0x8c) == 0)
    struct dpparts::CWindow::VTable** eax_6 = operator new(0x4f8)
    struct dpparts::CWindow::VTable** var_30_1 = eax_6
    var_4.b = 1
    struct dpparts::CWindow::VTable** eax_12
    
    if (eax_6 == 0)
        eax_12 = nullptr
    else
        if (var_18 u< 0x10)
            var_3c = &var_2c
        else
            var_3c = var_2c.d
        
        HGDIOBJ eax_7 = GetStockObject(LTGRAY_BRUSH)
        HCURSOR eax_8 = LoadCursorA(nullptr, 0x7f00)
        HICON eax_9 = LoadIconA(nullptr, 0x7f00)
        HICON eax_10 = LoadIconA(nullptr, 0x7f00)
        eax_12 = sub_638e20(eax_8, eax_9, eax_6, *(arg1 + 0x18), var_3c, eax_10, eax_7)
    
    var_4.b = 0
    *(arg1 + 0x8c) = eax_12
    eax_12[0xd2] = arg1 + 0x94
    *(*(arg1 + 0x8c) + 0x344) = *(arg1 + 0x84)
    sub_63b960(*(arg1 + 0x8c))

void* result = *(arg1 + 0x8c)

if (*(result + 0x34) == 0)
    char* edi_2 = var_2c.d
    
    if (var_18 u< 0x10)
        edi_2 = &var_2c
    
    sub_65e420(*(arg1 + 0x6c), *(arg1 + 0x70), edi_2, result, 0x54300000, 0, 0, arg2, nullptr, 
        *(arg1 + 0x18))
    
    if (var_18 u>= 0x10)
        int32_t var_54_4 = var_2c.d
        sub_6b4d5b()
else if (var_18 u>= 0x10)
    int32_t var_54_5 = var_2c.d
    sub_6b4d5b()

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_3c)
return result
