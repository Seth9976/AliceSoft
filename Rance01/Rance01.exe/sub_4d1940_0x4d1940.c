// 函数: sub_4d1940
// 地址: 0x4d1940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712fae
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_c4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = *(arg1 + 0xc)
int32_t eax_4 = arg3 * 0x9c
int32_t edx = *(edi + eax_4 + 0x28)
void* esi_1 = *(arg7 + 0xc) + eax_4
void* ecx_2 = (arg5 << 5) + edx
void* var_c8 = ecx_2
struct sealengine::CSQT::VTable* var_b0
sub_51a240(ecx_2, (arg4 << 5) + edx, &var_b0, fconvert.s(fconvert.t(arg6)))
int32_t var_4 = 0
int32_t esi_2 = *(esi_1 + 0x28)
void* ecx_5 = (arg9 << 5) + esi_2
void* var_c8_2 = ecx_5
struct sealengine::CSQT::VTable* var_70
int32_t var_c8_4 = sub_51a240(ecx_5, (arg8 << 5) + esi_2, &var_70, fconvert.s(fconvert.t(arg10)))
struct sealengine::CSQT::VTable* var_90
sub_51a240(&var_70, &var_b0, &var_90, fconvert.s(fconvert.t(arg11)))
var_4.b = 2
float* result = arg2
float var_50[0x11]
sub_42e150(result, sub_51a2e0(&var_90, &var_50))
int32_t edi_2 = *(edi + eax_4 + 0x24)

if (edi_2 != 0xffffffff)
    int32_t var_dc_1 = arg9
    result = sub_4d1940(arg2, edi_2, arg4, arg5, fconvert.s(fconvert.t(arg6)), arg7, arg8, arg9, 
        fconvert.s(fconvert.t(arg10)), fconvert.s(fconvert.t(arg11)))

fsbase->NtTib.ExceptionList = ExceptionList
return result
