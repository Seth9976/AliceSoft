// 函数: sub_587650
// 地址: 0x587650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71a044
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = 0
arg1[3] = 0
int32_t* eax_3 = sub_4ecfc0(1)
arg1[2] = eax_3
*eax_3 = eax_3
void* eax_4 = arg1[2]
*(eax_4 + 4) = eax_4
void* eax_5 = arg1[2]
*(eax_5 + 8) = eax_5
*(arg1[2] + 0x14) = 1
*(arg1[2] + 0x15) = 1
int32_t var_4 = 0
arg1[7] = 0
int32_t* eax_7 = sub_4fddf0(1)
arg1[6] = eax_7
*eax_7 = eax_7
void* eax_8 = arg1[6]
*(eax_8 + 4) = eax_8
void* eax_9 = arg1[6]
*(eax_9 + 8) = eax_9
*(arg1[6] + 0x20) = 1
*(arg1[6] + 0x21) = 1
var_4.b = 1
arg1[0xb] = 0
int32_t* eax_11 = sub_4fddf0(1)
arg1[0xa] = eax_11
*eax_11 = eax_11
void* eax_12 = arg1[0xa]
*(eax_12 + 4) = eax_12
void* eax_13 = arg1[0xa]
*(eax_13 + 8) = eax_13
*(arg1[0xa] + 0x20) = 1
*(arg1[0xa] + 0x21) = 1
var_4.b = 2
arg1[0xf] = 0
int32_t* eax_14 = sub_4ecfc0(1)
arg1[0xe] = eax_14
*eax_14 = eax_14
void* eax_15 = arg1[0xe]
*(eax_15 + 4) = eax_15
void* eax_16 = arg1[0xe]
*(eax_16 + 8) = eax_16
*(arg1[0xe] + 0x14) = 1
*(arg1[0xe] + 0x15) = 1
var_4.b = 3
arg1[0x11] = 0
arg1[0x12] = 0
arg1[0x13] = 0
arg1[0x16] = 0
int32_t* eax_18 = sub_4fddf0(1)
arg1[0x15] = eax_18
*eax_18 = eax_18
void* eax_19 = arg1[0x15]
*(eax_19 + 4) = eax_19
void* eax_20 = arg1[0x15]
*(eax_20 + 8) = eax_20
*(arg1[0x15] + 0x20) = 1
*(arg1[0x15] + 0x21) = 1
arg1[0x18] = 0
arg1[0x19] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
