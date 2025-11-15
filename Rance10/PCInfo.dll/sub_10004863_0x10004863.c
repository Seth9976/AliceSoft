// 函数: sub_10004863
// 地址: 0x10004863
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
RtlUnwind(arg1, &data_1000488d, arg2, nullptr)
uint32_t result = arg2->ExceptionFlags & 0xfffffffd
arg2->ExceptionFlags = result
ExceptionList->Next = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = ExceptionList
return result
