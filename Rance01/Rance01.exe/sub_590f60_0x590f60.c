// 函数: sub_590f60
// 地址: 0x590f60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71283d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &graphengine::CTextureManager::`vftable'
arg1[3] = 0
int32_t* eax_3 = sub_4ecfc0(1)
arg1[2] = eax_3
*eax_3 = eax_3
void* eax_4 = arg1[2]
*(eax_4 + 4) = eax_4
void* eax_5 = arg1[2]
*(eax_5 + 8) = eax_5
arg1[2][5].vFunc_0.b = 1
*(arg1[2] + 0x15) = 1
int32_t var_4 = 0
arg1[5] = 0
arg1[8] = 0
int32_t* eax_7 = sub_416b10(1)
arg1[7] = eax_7
*eax_7 = eax_7
void* eax_8 = arg1[7]
*(eax_8 + 4) = eax_8
void* eax_9 = arg1[7]
*(eax_9 + 8) = eax_9
arg1[7][4].vFunc_0.b = 1
*(arg1[7] + 0x11) = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
