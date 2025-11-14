// 函数: sub_4dafb0
// 地址: 0x4dafb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_714f51
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
long double x87_r7 = float.t(0)
arg2[1] = fconvert.s(x87_r7)
*arg2 = 0
arg2[2] = 0
arg2[3] = 0
arg2[4] = 0
arg2[5] = 0
int32_t var_4 = 0
arg2[7] = 9
arg2[8] = 6
arg2[9] = 0
arg2[0xa] = 0
arg2[0xb] = 0
arg2[0xd] = 0
arg2[0xe] = 0
arg2[0xf] = 0
var_4.b = 2
arg2[0x13] = fconvert.s(x87_r7)
arg2[0x12] = 0
arg2[0x14] = fconvert.s(x87_r7)
int32_t eax_3 = arg2[7]
var_10 = fconvert.s(x87_r7)
int32_t eax_4 = eax_3 * arg2[8]
arg2[0x11] = 0xffffffff
int128_t* edx = arg2[4]
int32_t ebx = arg2[3]
int32_t ecx_2 = (edx - ebx) s>> 2

if (eax_4 u> ecx_2)
    sub_4cbe10(eax_4 - ecx_2, &arg2[3], edx, &var_10)
else if (eax_4 u< ecx_2)
    int128_t* ebx_1 = ebx + (eax_4 << 2)
    
    if (ebx_1 != edx)
        void* ebp_1 = 0 s>> 2 << 2
        sub_6b49d0(ebx_1, edx, ebp_1, eax_2)
        arg2[4] = ebp_1 + ebx_1

fsbase->NtTib.ExceptionList = ExceptionList
