// 函数: sub_5d3a30
// 地址: 0x5d3a30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7140ed
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t edi
int32_t var_20 = edi
int32_t var_24 = data_78c474 ^ &var_20
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 1
sub_5d54a0(arg1)
int32_t* var_18_1 = &arg1->RecursionCount
var_8.b = 2
int32_t* OwningThread_1 = arg1->OwningThread
void var_14
sub_4365a0(&arg1->RecursionCount, &var_14, *OwningThread_1, OwningThread_1)
int32_t OwningThread = arg1->OwningThread
int32_t result = sub_6b4d5b()
struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo = arg1->DebugInfo

if (DebugInfo != 0)
    DeleteCriticalSection(DebugInfo)
    struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo_1 = DebugInfo
    result = sub_6b4d5b()

int32_t var_10
fsbase->NtTib.ExceptionList = var_10
return result
