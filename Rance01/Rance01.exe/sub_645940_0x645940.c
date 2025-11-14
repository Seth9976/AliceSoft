// 函数: sub_645940
// 地址: 0x645940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_723160
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_6c
int32_t eax_2 = data_78c474 ^ &var_6c
int32_t __saved_edi
int32_t var_7c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_5
eax_5.b = *(*(arg1 + 0x18c) + 0x10)
char* result
int32_t* var_68
char* var_60
int32_t var_5c
int32_t* var_58
int32_t var_54

if (eax_5.b == 0)
label_645a6b:
    sub_645d80(arg1 + 0x204, *(arg1 + 0x318))
    int32_t eax_16 = GetScrollPos(*(arg1 + 0x1c0), *(arg1 + 0x1c8))
    HWND hWnd = *(arg1 + 0x34)
    var_5c = eax_16
    RECT rect
    GetClientRect(hWnd, &rect)
    char* edi_4 = *(arg1 + 0x1f8)
    int32_t* eax_17 = *(arg1 + 0x1f4)
    void* esi_6 = arg1 + 0x1f4
    var_60 = edi_4
    
    if (eax_17 != edi_4)
        var_68 = eax_17
        
        if (edi_4 != edi_4)
            do
                sub_401ef0(var_68, edi_4)
                var_68 = &var_68[7]
                edi_4 = &edi_4[0x1c]
            while (edi_4 != var_60)
        
        esi_6 = arg1 + 0x1f4
        sub_405780(var_68, *(arg1 + 0x1f8))
        *(esi_6 + 4) = var_68
    
    int32_t* eax_21 = sub_645c60(&var_58, arg1 + 0x204, var_5c, *(arg1 + 0x64), rect.bottom)
    var_5c = eax_21
    
    if (esi_6 != eax_21)
        int32_t* ecx_4 = *esi_6
        
        if (ecx_4 != 0)
            sub_405780(ecx_4, *(esi_6 + 4))
            int32_t var_80_8 = *esi_6
            sub_6b4d5b()
            eax_21 = var_5c
        
        *esi_6 = 0
        *(esi_6 + 4) = 0
        *(esi_6 + 8) = 0
        *esi_6 = *eax_21
        *(esi_6 + 4) = eax_21[1]
        *(esi_6 + 8) = eax_21[2]
        *eax_21 = 0
        eax_21[1] = 0
        eax_21[2] = 0
    
    int32_t var_c_3 = 0xffffffff
    int32_t* eax_24 = var_58
    
    if (eax_24 != 0)
        sub_405780(eax_24, var_54)
        int32_t* var_80_9 = var_58
        sub_6b4d5b()
    
    char eax_25 = *(arg1 + 0x1a4)
    int32_t edi_9 = *(arg1 + 0x1ac)
    int32_t eax_26 = GetScrollPos(*(arg1 + 0x1dc), *(arg1 + 0x1e4))
    void* eax_27
    eax_27.b = eax_25
    char var_38
    sub_64e830(edi_9 - *(arg1 + 0x5c), eax_27.b, &var_38, arg1 + 0x294, esi_6, eax_26)
    int32_t var_24
    
    if (var_24 u>= 0x10)
        int32_t var_80_12 = var_38.d
        sub_6b4d5b()
    
    int32_t eax_28 = *(arg1 + 0x1ac)
    int32_t esi_9 = *(arg1 + 0x1a8)
    enum SCROLLBAR_CONSTANTS nBar = *(arg1 + 0x1e4)
    var_5c.b = *(arg1 + 0x1b8)
    char eax_29 = var_5c.b
    HWND hWnd_1 = *(arg1 + 0x1dc)
    int32_t var_24_1 = 0xf
    int32_t var_28_1 = 0
    var_38 = 0
    sub_64de50(arg1 + 0x214, GetScrollPos(hWnd_1, nBar), eax_29, esi_9, eax_28)
    InvalidateRect(*(arg1 + 0x34), nullptr, 0)
    result = UpdateWindow(*(arg1 + 0x34))
else
    var_58 = nullptr
    var_54 = 0
    int32_t var_50_1 = 0
    int32_t var_c_1 = 0
    var_68 = nullptr
    var_60 = nullptr
    result = sub_4087b0(&var_60, &var_68)
    
    if (result.b != 0)
        int32_t* esi_2 = var_68
        
        if (esi_2 != 0)
            result = var_60
            
            if (result s> 0)
                var_60 = result
                char* i
                
                do
                    if (*(arg1 + 0x184) == 0)
                        sub_416780(esi_2, &var_58)
                    else if (sub_65ab90(*esi_2) == 1)
                        sub_416780(esi_2, &var_58)
                    
                    esi_2 = &esi_2[1]
                    i = var_60
                    var_60 -= 1
                while (i != 1)
                sub_646c80(arg1 + 0x204, &var_5c, *(arg1 + 0x204), *(arg1 + 0x208))
                sub_646000(arg1 + 0x204, &var_58)
                int32_t* edi_3 = var_58
                *(arg1 + 0x1d0) = ((var_54 - edi_3) s>> 2) + 1
                sub_64d800(arg1 + 0x1bc)
                int32_t var_c_2 = 0xffffffff
                
                if (edi_3 != 0)
                    int32_t* var_80_3 = edi_3
                    sub_6b4d5b()
                
                goto label_645a6b
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_6c)
return result
