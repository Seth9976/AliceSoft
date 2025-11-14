// 函数: sub_53d650
// 地址: 0x53d650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_721f9c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HWND hWndParent = arg3
HWND hWndParent_1 = __chkstk(0x4094)
int32_t eax_2 = data_78c474 ^ &hWndParent
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
int32_t arg_4080
fsbase->NtTib.ExceptionList = &arg_4080
hWndParent = hWndParent_1
char arg_74 = 0
int128_t arg_75[0x400]
sub_6bc670(&arg_75, 0, 0x3fff)
void arg_8
sub_6b5336(&arg_74, 0x4000, arg4, &arg_8)
char result

if (hWndParent_1->__offset(0x298).b == 0)
    result = 0
else if (sub_54a560(hWndParent_1, &arg_74) != 0)
    result = 0
else
    int32_t arg_10 = 0
    struct usernotice::CDialog::usernotice::CVMErrorDialog::VTable* dwInitParam =
        &usernotice::CVMErrorDialog::`vftable'{for `usernotice::CDialog'}
    HINSTANCE hInstance_1 = nullptr
    int32_t arg_2c = 0xf
    int32_t arg_28 = 0
    char arg_18 = 0
    int32_t arg_34 = 0
    int32_t arg_38 = 0
    int32_t arg_3c = 0
    char arg_44 = 1
    int32_t arg_48 = 0
    int32_t arg_4c = 0
    char arg_50 = 0
    int32_t arg_4088 = 0
    arg4 = 0xf
    char* eax_6 = &arg_74
    __return_addr = nullptr
    var_10.b = 0
    char i
    
    do
        i = *eax_6
        eax_6 = &eax_6[1]
    while (i != 0)
    sub_401270(&var_10, eax_6 - &arg_75, &arg_74)
    arg_4088.b = 1
    sub_401180(&arg_18, 0xffffffff, &var_10, 0)
    var_10 = nullptr
    int32_t var_c_1 = 0
    int32_t var_8_1 = 0
    arg_4088.b = 2
    int32_t* hWndParent_2 = hWndParent
    sub_53cea0(hWndParent_2, &var_10)
    HINSTANCE hInstance = hWndParent_2[4]
    hWndParent = hWndParent_2[3]
    hInstance_1 = hInstance
    sub_4ea570(&arg_34, &var_10)
    arg_50 = 0
    int32_t eax_11 = DialogBoxParamA(hInstance, 0x6c, hWndParent, sub_6046a0, &dwInitParam)
    arg_10 = eax_11
    
    if (eax_11 != 0)
        if (arg_50 != 0)
            hWndParent = hWndParent_2[0xa3] - hWndParent_2[0xa4]
            sub_416b60(&hWndParent, &hWndParent_2[0x4b5], 
                sub_416d20(&hWndParent_2[0x4b5], &hWndParent))
            void arg_58
            char* ecx_4 = sub_402be0(&arg_58, &arg_74)
            arg_4088.b = 3
            void* var_2c_9 = &hWndParent_2[0x4b9]
            hWndParent = hWndParent_2[0xa3] - hWndParent_2[0xa4]
            sub_405220(&arg_58, sub_54e460(ecx_4, &hWndParent))
            sub_401110(&arg_58)
        
        sub_4054e0(&var_10)
        sub_604910(&dwInitParam)
        result = 1
    else
        hWndParent_2[0xa6].b = 0
        hWndParent_2[0x8f] = 0
        
        if (hWndParent_2[0xa7] == 0)
            hWndParent_2[0xa7] = 1
        
        sub_4054e0(&var_10)
        sub_604910(&dwInitParam)
        result = 0

fsbase->NtTib.ExceptionList = arg_4080
sub_6b4885(eax_2 ^ &hWndParent)
return result
