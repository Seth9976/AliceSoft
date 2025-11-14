// 函数: sub_50d2d0
// 地址: 0x50d2d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723cf5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CResourceCacheManager<class sealengine::CPolyData>::VTable** var_18 = arg1
*arg1 = &sealengine::CResourceCacheManager<class sealengine::CPolyData>::`vftable'
int32_t var_4 = 2
sub_50d390(arg1)
void* var_14 = &arg1[6]
var_4.b = 3
int32_t* eax_3 = arg1[7]
void* var_10
sub_50d940(&arg1[6], &var_10, *eax_3, eax_3)
int32_t var_2c_2 = arg1[7]
sub_6b4d5b()
var_10 = &arg1[2]
var_4.b = 4
int32_t* eax_4 = arg1[3]
sub_429bc0(&arg1[2], &var_14, *eax_4, eax_4)
int32_t var_2c_4 = arg1[3]
int32_t result = sub_6b4d5b()
CRITICAL_SECTION* lpCriticalSection = arg1[1]

if (lpCriticalSection != 0)
    DeleteCriticalSection(lpCriticalSection)
    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
