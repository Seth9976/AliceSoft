// 函数: sub_65e550
// 地址: 0x65e550
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7123ae
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if ((data_797e90 & 1) == 0)
    data_797e90.d |= 1
    int32_t var_4 = 0
    sub_65e6f0()
    _atexit(sub_729620)
    int32_t var_4_1 = 0xffffffff

int32_t* Msg_2
int32_t* Msg_1 = Msg_2

if (Msg_1 != 0x81)
    goto label_65e5df

int32_t esi_1 = *arg2
uint32_t Msg
WPARAM wParam
int32_t* lParam
HWND hWnd

if (esi_1 != 0)
    *sub_65e740(&hWnd) = esi_1
label_65e5df:
    sub_65ea10(&Msg_2, &hWnd)
    int32_t* Msg_3 = Msg_2
    
    if (Msg_3 != data_797e6c)
        int32_t* esi_2 = Msg_3[4]
        
        if (Msg_1 == 2)
            sub_65e7c0(&Msg_2, Msg_3)
        
        int32_t eax_8 = (**esi_2)(hWnd, Msg_1, arg1, arg2)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_8
    
    lParam = arg2
    wParam = arg1
    Msg = Msg_1
else
    lParam = arg2
    wParam = arg1
    Msg = 0x81

LRESULT eax_10 = DefWindowProcA(hWnd, Msg, wParam, lParam)
fsbase->NtTib.ExceptionList = ExceptionList
return eax_10
