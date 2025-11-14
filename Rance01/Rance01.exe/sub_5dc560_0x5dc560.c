// 函数: sub_5dc560
// 地址: 0x5dc560
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719cbb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_797d9c

if (esi != 0)
    sub_5da500(esi)
    void* var_20_1 = esi
    sub_6b4d5b()
    data_797d9c = 0

struct IInterface::crayfish::CFinalizer<class crayfish::CCrayfishLogViewer>::VTable** eax_3 =
    operator new(0x60)
struct IInterface::crayfish::CFinalizer<class crayfish::CCrayfishLogViewer>::VTable** var_10_1 =
    eax_3
int32_t var_4 = 0
struct IInterface::crayfish::CFinalizer<class crayfish::CCrayfishLogViewer>::VTable** result

if (eax_3 == 0)
    result = nullptr
else
    result = sub_5da400(eax_3)

data_797d9c = result
result[0x17] = arg1
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
