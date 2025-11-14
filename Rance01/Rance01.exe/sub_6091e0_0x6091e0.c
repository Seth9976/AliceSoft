// 函数: sub_6091e0
// 地址: 0x6091e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_721920
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_7c
int32_t eax_2 = data_78c474 ^ &var_7c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_6

if (*(arg1 + 0xa78) != 0)
    eax_6 = (***(arg1 + 0xa78))(eax_4)
else
    eax_6 = 0xffffffff

int32_t var_78
sub_6081c0(arg1, &var_7c, &var_78, eax_6)
sub_60e1d0(arg1 + 0xcc)
int32_t var_5c = 0xf
int32_t var_60 = 0
char var_70 = 0
int32_t var_c_1 = 0
int32_t edi = var_7c
int32_t edx_4

if (edi s>= 0)
    int32_t ecx_3 = data_797e10 - data_797e0c
    int32_t eax_10
    int32_t edx_2
    edx_2:eax_10 = muls.dp.d(0x92492493, ecx_3)
    edx_4 = (edx_2 + ecx_3) s>> 4

int32_t* rect
int32_t var_38
int32_t var_24

if (edi s< 0 || edi s>= (edx_4 u>> 0x1f) + edx_4)
    int32_t eax_18
    
    if (*(arg1 + 0xa78) != 0)
        eax_18 = (***(arg1 + 0xa78))(eax_4)
    else
        eax_18 = 0xffffffff
    
    int32_t var_90_4 = var_78 + 1
    int32_t var_94_2 = edi
    int32_t var_98_1 = eax_18
    var_c_1.b = 3
    sub_401ef0(&var_70, sub_4104a0(0x7354bc))
    var_c_1.b = 0
    
    if (var_24 u>= 0x10)
        int32_t var_90_5 = var_38
        sub_6b4d5b()
else
    sub_61ac30(&rect, edi)
    var_c_1.b = 1
    int32_t* rect_2 = rect
    int32_t var_40
    
    if (var_40 u< 0x10)
        rect_2 = &rect
    
    int32_t eax_14
    
    if (*(arg1 + 0xa78) != 0)
        eax_14 = (***(arg1 + 0xa78))(eax_4)
    else
        eax_14 = 0xffffffff
    
    int32_t var_90_2 = var_78 + 1
    int32_t var_94_1 = var_7c
    int32_t* rect_3 = rect_2
    int32_t var_9c_1 = eax_14
    var_c_1.b = 2
    sub_401ef0(&var_70, sub_4104a0(0x73547c))
    
    if (var_24 u>= 0x10)
        int32_t var_90_3 = var_38
        sub_6b4d5b()
    
    var_c_1.b = 0
    
    if (var_40 u>= 0x10)
        int32_t* rect_1 = rect
        sub_6b4d5b()
char* lpString = var_70.d

if (var_5c u< 0x10)
    lpString = &var_70

BOOL result = SetWindowTextA(arg2, lpString)
int32_t edi_3 = var_7c

if (edi_3 s>= 0)
    int32_t eax_22 = data_797e1c
    int32_t eax_24
    
    if (edi_3 s>= (data_797e20 - eax_22) s>> 2)
    label_609406:
        var_7c = *(arg1 + 0xadc)
        edi_3 = var_7c
        eax_24 = 0xffffffff
    else
        eax_22.b = *(eax_22 + (edi_3 << 2)) != 0
        
        if (eax_22.b == 0)
            goto label_609406
        
        eax_24 = var_78
    
    data_78f4f8 = edi_3
    data_78f4fc = eax_24
    
    if (arg3 != 0)
        int32_t eax_25 = data_797dac
        data_797dac = edi_3
        
        if (eax_25 != edi_3)
            HWND hWnd = data_797db8
            GetClientRect(hWnd, &rect)
            int16_t var_50
            int16_t var_4c
            int16_t var_48
            SendMessageA(hWnd, 5, 0, zx.d(var_48 - var_50) << 0x10 | zx.d(var_4c - rect.w))
        
        sub_611ac0(data_78f4fc, arg1 + 0x628)
    
    InvalidateRect(*(arg1 + 0x4dc), nullptr, 1)
    UpdateWindow(*(arg1 + 0x4dc))
    sub_60ea20(arg1 + 0xcc, arg1 + 0x544)
    InvalidateRect(*(arg1 + 0x6b0), nullptr, 1)
    result = UpdateWindow(*(arg1 + 0x6b0))
    *(arg1 + 0xadc) = edi_3
    
    if (var_5c u>= 0x10)
        int32_t var_90_13 = var_70.d
        result = sub_6b4d5b()
else if (var_5c u>= 0x10)
    int32_t var_90_7 = var_70.d
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_7c)
return result
