// 函数: sub_571a90
// 地址: 0x571a90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71454e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 2
int32_t* ecx = arg2[7]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg2[7] = 0

sub_5721b0(&arg2[3], &var_10, arg2[3], arg2[4])
HANDLE hObject = *arg2

if (hObject != 0xffffffff && CloseHandle(hObject) != 0)
    *arg2 = 0xffffffff

var_4.b = 1
int32_t* ecx_2 = arg2[7]

if (ecx_2 != 0)
    (*(*ecx_2 + 4))(eax_2)
    arg2[7] = 0

int32_t* eax_7 = arg2[3]

if (eax_7 != 0)
    int32_t edx_3 = arg2[4]
    int32_t* var_28_2 = arg2
    int32_t var_2c_1 = edx_3
    sub_572460(eax_7, edx_3)
    int32_t var_30_1 = arg2[3]
    sub_6b4d5b()

arg2[3] = 0
arg2[4] = 0
arg2[5] = 0
BOOL hObject_1 = *arg2

if (hObject_1 != 0xffffffff)
    hObject_1 = CloseHandle(hObject_1)
    
    if (hObject_1 != 0)
        *arg2 = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
return hObject_1
