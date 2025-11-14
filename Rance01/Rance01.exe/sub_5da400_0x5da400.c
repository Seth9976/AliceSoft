// 函数: sub_5da400
// 地址: 0x5da400
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71df69
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &crayfish::CFinalizer<class crayfish::CCrayfishLogViewer>::`vftable'{for `IInterface'}
arg1[1] = 0
arg1[2].b = 1
void* var_10 = &arg1[3]
arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
int32_t var_4 = 0
arg1[7] = 0
char* eax_3 = operator new(0x1c)

if (eax_3 == 0)
    eax_3 = nullptr
else
    *(eax_3 + 0x14) = 0xf
    *(eax_3 + 0x10) = 0
    *eax_3 = 0

char* var_14 = eax_3
sub_61b5a0(&var_14, &arg1[3])
int32_t var_4_1 = 1
arg1[0xd] = 0xf
arg1[0xc] = 0
arg1[8].b = 0
sub_401270(&arg1[8], 0xc, 0x7365d4)
var_4_1.b = 2
struct win32only::CWindowCallback::crayfish::CLogViewerWindow::VTable** eax_5 = operator new(0x14c)
struct win32only::CWindowCallback::crayfish::CLogViewerWindow::VTable** var_10_1 = eax_5
var_4_1.b = 3
struct win32only::CWindowCallback::crayfish::CLogViewerWindow::VTable** eax_6

if (eax_5 == 0)
    eax_6 = nullptr
else
    eax_6 = sub_5dafe0(eax_5)

arg1[0xf] = eax_6
arg1[0x15] = 0xf
arg1[0x14] = 0
arg1[0x10].b = 0
arg1[0x17] = 0
arg1[1] = arg1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
