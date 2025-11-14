// 函数: sub_597640
// 地址: 0x597640
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719cbb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct ISurface::surfacefactory::CSurface::VTable** eax_3 = operator new(0x38)
struct ISurface::surfacefactory::CSurface::VTable** var_10_1 = eax_3
int32_t var_4 = 0
struct ISurface::surfacefactory::CSurface::VTable** result

if (eax_3 == 0)
    result = nullptr
else
    result = sub_597350(eax_3)

int32_t var_4_1 = 0xffffffff

if (sub_597490(result, arg1, arg2, arg3) != 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

if (result != 0)
    sub_597420(result)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
