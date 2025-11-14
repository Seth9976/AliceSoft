// 函数: sub_6b7664
// 地址: 0x6b7664
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = 0x58
int32_t var_8 = 0x771078
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
int32_t eax_10 = data_78c474
int32_t var_8_2 = 0x771078 ^ eax_10
int32_t var_7c = eax_10 ^ &var_4
int32_t* var_1c = &var_7c
void* const var_80_5 = &data_6b7670
int32_t var_8_3 = 0xfffffffe
int32_t var_c = var_8_2
fsbase->NtTib.ExceptionList = &ExceptionList
STARTUPINFOW startupInfo
GetStartupInfoW(&startupInfo)

if (data_798210 == 0)
    HeapSetInformation(nullptr, HeapEnableTerminationOnCorruption, nullptr, 0)

int32_t var_20 = 0

if (__heap_init() == 0)
    _fast_error_exit(0x1c)
    noreturn

if (sub_6bbb8f() == 0)
    _fast_error_exit(0x10)
    noreturn

sub_6c090b()
int32_t var_8_1 = 0

if (sub_6bc8c8() s< 0)
    __amsg_exit(0x1b)
    noreturn

data_79820c = GetCommandLineA()
data_796eec = sub_6c13f6()

if (sub_6c133b() s< 0)
    __amsg_exit(8)
    noreturn

if (sub_6c10c5() s< 0)
    __amsg_exit(9)
    noreturn

int32_t eax_7 = sub_6b6e87(1)

if (eax_7 != 0)
    __amsg_exit(eax_7)
    noreturn

void* eax_8 = __wincmdln()
uint32_t wShowWindow

if ((startupInfo.dwFlags.b & 1) == 0)
    int32_t var_80_2 = 0xa
    wShowWindow = 0xa
else
    wShowWindow = zx.d(startupInfo.wShowWindow)

HMODULE status = sub_6b4350(&__dos_header, 0, eax_8, wShowWindow)
HMODULE status_1 = status

if (var_20 != 0)
    __cexit()
    int32_t entry_ebx
    return sub_6b77c1(&var_4, arg2, arg1, entry_ebx) __tailcall

_exit(status)
noreturn
