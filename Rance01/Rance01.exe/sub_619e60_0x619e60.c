// 函数: sub_619e60
// 地址: 0x619e60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_715ff0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_74
int32_t eax_2 = data_78c474 ^ &var_74
int32_t __saved_edi
int32_t var_84 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
POINT point
point.x = arg2
POINT var_64
var_64.x = zx.d(arg3.w)
var_64.y = arg3 u>> 0x10
ScreenToClient(arg2, &var_64)
LRESULT lParam = SendMessageA(arg2, 0x1111, 0, &var_64)
LRESULT lParam_1 = lParam

if (lParam != 0)
    SendMessageA(arg2, 0x110b, 9, lParam)
    int32_t edx_1 = sub_591420(arg1 + 4, &var_74, &lParam_1)
    int32_t* eax_8 = var_74
    
    if (eax_8 != *(arg1 + 8))
        int32_t* eax_9 = eax_8[4]
        var_74 = eax_9
        int32_t* var_54
        sub_401a00(&var_54, edx_1, &eax_9[8])
        int32_t i = 0
        int32_t var_c_1 = 0
        int32_t var_40
        
        if ((data_797e10 - data_797e0c) s/ 0x1c s> 0)
            do
                int32_t var_38
                char* eax_15 = sub_61ac30(&var_38, i)
                int32_t* ecx_5 = var_54
                
                if (var_40 u< 0x10)
                    ecx_5 = &var_54
                
                int32_t esi_3 = *(eax_15 + 0x10)
                int32_t edx_5 = esi_3
                int32_t var_44
                
                if (esi_3 u>= var_44)
                    edx_5 = var_44
                
                if (*(eax_15 + 0x14) u>= 0x10)
                    eax_15 = *eax_15
                
                int32_t eax_16 = sub_402320(eax_15, eax_15, ecx_5, edx_5)
                bool cond:1_1 = eax_16 == 0
                
                if (eax_16 == 0)
                    int32_t eax_17
                    
                    if (esi_3 u>= var_44)
                        eax_17.b = esi_3 != var_44
                    else
                        eax_17 = 0xffffffff
                    
                    cond:1_1 = eax_17 == 0
                
                int32_t ebx_1
                ebx_1.b = cond:1_1
                var_c_1.b = 0
                int32_t var_24
                
                if (var_24 u>= 0x10)
                    int32_t var_88_5 = var_38
                    sub_6b4d5b()
                
                if (ebx_1.b != 0)
                    int32_t x = point.x
                    int32_t edx_10 = var_74[0xf]
                    data_78f500 = i
                    data_797dc4 = edx_10
                    HWND hWnd = GetParent(GetParent(GetParent(GetParent(x))))
                    HMENU hMenu = CreatePopupMenu()
                    
                    if (hMenu == 0)
                        if (var_40 u< 0x10)
                            goto label_61a001
                        
                        int32_t* var_88_11 = var_54
                        goto label_619ff3
                    
                    AppendMenuA(hMenu, MF_BYCOMMAND, 0x9d0b, 0x734854)
                    GetCursorPos(&point)
                    TrackPopupMenu(hMenu, TPM_RIGHTBUTTON, point.x, point.y, 0, hWnd, nullptr)
                    DestroyMenu(hMenu)
                    
                    if (var_40 u< 0x10)
                        goto label_61a001
                    
                    int32_t* var_88_14 = var_54
                    goto label_619ff3
                
                i += 1
            while (i s< (data_797e10 - data_797e0c) s/ 0x1c)
        
        if (var_40 u>= 0x10)
            int32_t* var_88_6 = var_54
        label_619ff3:
            sub_6b4d5b()

label_61a001:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_74)
return 0
