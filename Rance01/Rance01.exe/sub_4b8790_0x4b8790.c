// 函数: sub_4b8790
// 地址: 0x4b8790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711048
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CDOFFrame::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CDOFFrame::VTable** var_10_1 = arg1
*arg1 = &sealengine::CDOFFrame::`vftable'
int32_t var_4 = 1
int32_t* ecx = arg1[0x23]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[0x23] = 0

int32_t* ecx_1 = arg1[0x1a]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    arg1[0x1a] = 0

arg1[0x22].b = 0
sub_4b40e0(&arg1[1])
var_4.b = 0
int32_t* ecx_2 = arg1[0x1a]

if (ecx_2 != 0)
    (*(*ecx_2 + 4))(eax_2)
    arg1[0x1a] = 0

arg1[0x22].b = 0
int32_t var_4_1 = 0xffffffff
int32_t result = sub_4b3e80(&arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
