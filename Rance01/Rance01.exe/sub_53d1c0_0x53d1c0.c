// 函数: sub_53d1c0
// 地址: 0x53d1c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_721ff1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_18 = arg3
int32_t* ecx = __chkstk(0x4074)
int32_t eax_2 = data_78c474 ^ &var_18
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
int32_t arg_4060
fsbase->NtTib.ExceptionList = &arg_4060
char arg_54 = 0
void arg_8
sub_6b5336(&arg_54, 0x4000, arg4, &arg_8)

if (ecx[0xa7] != 2)
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
    int32_t arg_48 = 0
    int32_t arg_4c = 0
    char arg_50 = 0
    int32_t arg_4068 = 0
    arg4 = 0xf
    char* eax_5 = &arg_54
    char arg_44 = 0
    __return_addr = nullptr
    var_10.b = 0
    char i
    
    do
        i = *eax_5
        eax_5 = &eax_5[1]
    while (i != 0)
    void arg_55
    sub_401270(&var_10, eax_5 - &arg_55, &arg_54)
    arg_4068.b = 1
    sub_401180(&arg_18, 0xffffffff, &var_10, 0)
    var_10 = nullptr
    int32_t var_c_1 = 0
    int32_t var_8_1 = 0
    arg_4068.b = 2
    sub_53cea0(ecx, &var_10)
    HWND hWndParent = ecx[3]
    HINSTANCE hInstance = ecx[4]
    hInstance_1 = hInstance
    sub_4ea570(&arg_34, &var_10)
    arg_50 = 0
    arg_10 = DialogBoxParamA(hInstance, 0x6c, hWndParent, sub_6046a0, &dwInitParam)
    ecx[0xa6].b = 0
    ecx[0x8f] = 0
    
    if (ecx[0xa7] == 0)
        ecx[0xa7] = 1
    
    int32_t (* esi_3)(void* arg1) = var_10
    
    if (esi_3 != 0)
        sub_405780(esi_3, var_c_1)
        int32_t (* var_2c_6)(void* arg1) = esi_3
        sub_6b4d5b()
    
    sub_604910(&dwInitParam)

int32_t* result
result.b = 0
fsbase->NtTib.ExceptionList = arg_4060
sub_6b4885(eax_2 ^ &var_18)
return result
