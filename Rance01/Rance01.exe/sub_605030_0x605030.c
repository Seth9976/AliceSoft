// 函数: sub_605030
// 地址: 0x605030
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_721ca3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &IJaffaDebugPlugin::`vftable'{for `IInterface'}
arg1[1] = &IVMTraceCallback::`vftable'
sub_618120(&arg1[2])
arg1[2] = &dpanalysis::CWinApp::`vftable'{for `dpanalysis::CWindow'}
int32_t var_4 = 0
*arg1 = &dpanalysis::CApp::`vftable'{for `IJaffaDebugPlugin'}
arg1[1] = &dpanalysis::CApp::`vftable'{for `IVMTraceCallback'}
arg1[2] = &dpanalysis::CApp::`vftable'{for `dpanalysis::CWinApp'}
arg1[0x29] = 1
arg1[0x2a] = 0
arg1[0x30] = 0xf
arg1[0x2f] = 0
arg1[0x2b].b = 0
__builtin_memset(&arg1[0x32], 0, 0x1c)
arg1[0x3a] = 0
arg1[0x3b] = 0
arg1[0x3c] = 0
var_4.b = 2
arg1[0x40] = 0
int32_t* eax_3 = operator new(0xa8)

if (eax_3 == 0)
    int32_t var_1c = 0
    struct std::exception::VTable* var_18
    std::exception::exception(&var_18, &var_1c)
    var_18 = &std::bad_alloc::`vftable'{for `std::exception'}
    sub_6b77db(&var_18, 0x771508)
    noreturn

arg1[0x3f] = eax_3
*eax_3 = eax_3
void* eax_4 = arg1[0x3f]
*(eax_4 + 4) = eax_4
void* eax_5 = arg1[0x3f]
*(eax_5 + 8) = eax_5
*(arg1[0x3f] + 0xa4) = 1
*(arg1[0x3f] + 0xa5) = 1
arg1[0x42] = 0
arg1[0x43] = 0
arg1[0x44] = 0
arg1[0x46] = 0
arg1[0x47] = 0
arg1[0x48] = 0
sub_618120(&arg1[0x4a])
arg1[0x4a] = &dpanalysis::CSplitWndLR::`vftable'{for `dpanalysis::CWindow'}
arg1[0x71] = LoadCursorA(nullptr, 0x7f84)
arg1[0x72].b = 0
arg1[0x73] = 0
arg1[0x74] = 0
arg1[0x75] = 0
arg1[0x76] = 0
sub_618120(&arg1[0x77])
arg1[0x77] = &dpanalysis::CSplitWndLR::`vftable'{for `dpanalysis::CWindow'}
arg1[0x9e] = LoadCursorA(nullptr, 0x7f84)
arg1[0x9f].b = 0
arg1[0xa0] = 0
arg1[0xa1] = 0
arg1[0xa2] = 0
arg1[0xa3] = 0
var_4.b = 7
sub_614930(&arg1[0xa4])
sub_60d110(&arg1[0x115])
sub_60e940(&arg1[0x151])
var_4.b = 0xa
sub_610940(&arg1[0x18a])
sub_60bff0(&arg1[0x1fa])
__builtin_memset(&arg1[0x233], 0, 0x14)
arg1[0x239] = 0
sub_618120(&arg1[0x23a])
arg1[0x23a] = &dpanalysis::CTreeViewWnd::`vftable'{for `dpanalysis::CWindow'}
arg1[0x261] = 0
arg1[0x262] = 0
arg1[0x263].w = 0
arg1[0x264] = 0
arg1[0x265] = 0
arg1[0x266] = 0
sub_618120(&arg1[0x267])
arg1[0x267] = &dpanalysis::CTreeViewWnd::`vftable'{for `dpanalysis::CWindow'}
arg1[0x28e] = 0
arg1[0x28f] = 0
arg1[0x290].w = 0
arg1[0x291] = 0
arg1[0x292] = 0
arg1[0x293] = 0
arg1[0x294] = 0
arg1[0x295] = 0
arg1[0x296] = 0
arg1[0x298] = 0
arg1[0x299] = 0
arg1[0x29a] = 0
arg1[0x29b] = 0
var_4.b = 0x11
__builtin_memset(&arg1[0x29d], 0, 0x15)
arg1[0x2a8] = 0xf
arg1[0x2a7] = 0
arg1[0x2a3].b = 0
sub_401270(&arg1[0x2a3], 0xb, "Sys40VM.dll")
arg1[0x2aa] = 0
arg1[0x2ab] = 0
arg1[0x2ac] = 0
arg1[0x2ad] = 0
arg1[0x2af] = 0
arg1[0x2b0] = 0
arg1[0x2b1] = 0
var_4.b = 0x14
arg1[0x2b3] = 0
arg1[0x2b4] = 0xffffffff
arg1[0x2b5] = 0xffffffff
arg1[0x2b6] = 0
arg1[0x2b7] = 0
sub_6188c0(&arg1[0x2b8])
arg1[0x1bd] = &arg1[0x239]
arg1[0x1be] = &arg1[0x29d]
arg1[0x2e9] = &arg1[0x18a]
arg1[0x232] = &arg1[0x18a]
arg1[0x189] = &arg1[0x18a]
arg1[0x1bc] = &arg1[0x2af]
arg1[0x188] = &arg1[0x3e]
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
