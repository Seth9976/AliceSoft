// 函数: sub_594910
// 地址: 0x594910
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7142fd
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
sub_5949a0(arg1)
int32_t* var_18_1 = &arg1->LockCount
var_8.b = 2
int32_t* RecursionCount_1 = arg1->RecursionCount
void var_14
sub_4365a0(&arg1->LockCount, &var_14, *RecursionCount_1, RecursionCount_1)
int32_t RecursionCount = arg1->RecursionCount
int32_t result = sub_6b4d5b()
struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo = arg1->DebugInfo

if (DebugInfo != 0)
    DeleteCriticalSection(DebugInfo)
    struct _RTL_CRITICAL_SECTION_DEBUG* DebugInfo_1 = DebugInfo
    result = sub_6b4d5b()

int32_t var_10
fsbase->NtTib.ExceptionList = var_10
return result
