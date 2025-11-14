// 函数: sub_56a080
// 地址: 0x56a080
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71eab0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_64
int32_t eax_2 = data_78c474 ^ &var_64
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
enum MESSAGEBOX_RESULT result

if (*(arg1 + 0xef) == 0)
label_56a1b1:
    void* esi_3 = *(arg1 + 0x1ec)
    
    if (esi_3 != 0)
        if (*(esi_3 + 0x3a) != 0)
            if (*(esi_3 + 0x38) == 0 && *(esi_3 + 0x21) == 0 && *(esi_3 + 0x3b) == 0)
                ShowCursor(1)
                *(esi_3 + 0x3b) = 1
            
            sub_425ba0(esi_3)
            *(esi_3 + 0x3a) = 0
        
        void* esi_4 = *(arg1 + 0x1ec)
        
        if (*(esi_4 + 0x3b) == 0)
            ShowCursor(1)
            *(esi_4 + 0x3b) = 1
    
    result = (**(arg1 + 0x3a8))(eax_4)
else
    char var_2c
    char* lpCaption = sub_567100(&var_2c, *(arg1 + 0x3b8))
    int32_t var_4 = 0
    char* eax_8 = sub_567100(&var_64, *(arg1 + 0x3b8))
    var_4.b = 1
    
    if (*(eax_8 + 0x14) u>= 0x10)
        eax_8 = *eax_8
    
    char* var_7c_3 = eax_8
    char* lpText = sub_4104a0(0x74b958)
    
    if (*(lpCaption + 0x14) u>= 0x10)
        lpCaption = *lpCaption
    
    if (*(lpText + 0x14) u>= 0x10)
        lpText = *lpText
    
    result = MessageBoxA(arg2, lpText, lpCaption, 0x24)
    enum MESSAGEBOX_RESULT result_1 = result
    int32_t var_34
    
    if (var_34 u>= 0x10)
        char var_48
        int32_t var_7c_4 = var_48.d
        result = sub_6b4d5b()
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48_1 = 0
    int32_t var_50
    
    if (var_50 u>= 0x10)
        int32_t var_7c_5 = var_64.d
        result = sub_6b4d5b()
    
    int32_t var_4_1 = 0xffffffff
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    var_64 = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_7c_6 = var_2c.d
        result = sub_6b4d5b()
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    
    if (result_1 == IDYES)
        goto label_56a1b1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_64)
return result
