// 函数: sub_567870
// 地址: 0x567870
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t var_48 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_34 = arg1
*(arg2 + 0x98) = arg3
*(arg2 + 0xac) = 0
*(arg2 + 0xa4) = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_401270(&var_2c, 0x13, "AliceRunWindowClass")
int32_t var_4 = 0
sub_401180(arg2 + 0x38, 0xffffffff, &var_2c, 0)
int32_t var_4_1 = 0xffffffff

if (var_18 u>= 0x10)
    int32_t var_4c_1 = var_2c.d
    sub_6b4d5b()

char eax_6 = *(arg2 + 0xa4)
int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0

if (eax_6 == 0)
    *(arg2 + 0x78) = 0x20f0000
else
    *(arg2 + 0x78) = 0x40000000
    *(arg2 + 0x8c) = 0

if (eax_6 == 0)
    *(arg2 + 0x20) = LoadIconA(arg3, 0x66)

sub_401180(arg2 + 0x54, 0xffffffff, arg6, 0)
int32_t* edi = var_34
*(arg2 + 0x70) = arg3
*(arg2 + 0x94) = arg2
sub_56f6f0(arg2 + 0xe4, edi)
sub_56fab0(edi, arg2 + 0xe4)
uint32_t edx = zx.d(*(arg2 + 0xe4))
int32_t edx_1 = neg.d(edx)
*(arg2 + 0x360) = sbb.d(edx_1, edx_1, edx != 0) & 2
*(arg2 + 0xd4) = arg4
*(arg2 + 0xd8) = arg5
sub_567b40(arg2, arg4, arg5)
char result = sub_6b3860(arg2 + 8)

if (result != 0)
    int32_t* eax_11 = *(arg2 + 0x284)
    *(arg2 + 0x1e4) = 1
    
    if (eax_11 != 0)
        sub_425060(eax_11, *(arg2 + 8))
    
    uint32_t uIDEvent = *(arg2 + 0x39c)
    HWND hWnd_1 = *(arg2 + 8)
    
    if (uIDEvent != 0)
        KillTimer(*(arg2 + 0x3a0), uIDEvent)
        *(arg2 + 0x39c) = 0
    
    *(arg2 + 0x3a0) = hWnd_1
    *(arg2 + 0x39c) = SetTimer(hWnd_1, 1, 0xc8, nullptr)
    HWND hWnd = *(arg2 + 8)
    *(arg2 + 0x274) = hWnd
    GetWindowThreadProcessId(hWnd, arg2 + 0xa8)
    
    if (*(arg2 + 0xa4) == 0)
        *(arg2 + 0x390) = LoadAcceleratorsA(arg3, 0x67)
    
    int32_t edx_5 = *(arg2 + 8)
    void* eax_14 = *(arg2 + 0x1bc)
    *(arg2 + 0x1b4) = edx_5
    *(arg2 + 0x1b8) = arg3
    
    if (eax_14 != 0)
        *(eax_14 + 0xc) = edx_5
        *(eax_14 + 0x10) = arg3
    
    if (*(arg2 + 0xa4) == 0)
        sub_567f90(arg2, 0)
    
    ShowWindow(*(arg2 + 8), SW_SHOW)
    UpdateWindow(*(arg2 + 8))
    char eax_16 = *(arg2 + 0xa4)
    *(arg2 + 0x1d6) = eax_16
    bool cond:0_1 = *(arg2 + 0xec) != 0
    *(arg2 + 0x2a0) = eax_16 == 0
    int32_t eax_17
    eax_17.b = cond:0_1
    (**(arg2 + 0x1c4))(1, eax_17)
    sub_56e790(arg2 + 0x128, arg3, *(arg2 + 0xe8))
    
    if (*(arg2 + 0xa4) != 0)
        *(arg2 + 0xc4) = 1
    
    sub_401180(arg2 + 0x3bc, 0xffffffff, edi, 0)
    result = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
