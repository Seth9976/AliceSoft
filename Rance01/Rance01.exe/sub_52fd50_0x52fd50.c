// 函数: sub_52fd50
// 地址: 0x52fd50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ac58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 7
void* ecx
int32_t edx = sub_52fed0(ecx, arg1)

if (arg1[0x25] u>= 0x10)
    int32_t var_20_1 = arg1[0x20]
    edx = sub_6b4d5b()

arg1[0x25] = 0xf
arg1[0x24] = 0
arg1[0x20].b = 0

if (arg1[0x1d] u>= 0x10)
    int32_t var_20_2 = arg1[0x18]
    edx = sub_6b4d5b()

arg1[0x1d] = 0xf
arg1[0x1c] = 0
arg1[0x18].b = 0
void* eax_4 = arg1[0x14]

if (eax_4 != 0)
    int32_t* var_20_3 = arg1
    int32_t var_24_1 = arg1[0x15]
    sub_532810(eax_4, arg1)
    int32_t var_28_1 = arg1[0x14]
    edx = sub_6b4d5b()

arg1[0x14] = 0
arg1[0x15] = 0
arg1[0x16] = 0
int32_t eax_5 = arg1[0x10]

if (eax_5 != 0)
    int32_t var_20_4 = eax_5
    edx = sub_6b4d5b()

arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x12] = 0
void* eax_6 = arg1[0xc]

if (eax_6 != 0)
    int32_t edx_3 = arg1[0xd]
    int32_t* var_20_5 = arg1
    int32_t var_24_2 = edx_3
    sub_5353e0(eax_6, edx_3)
    int32_t var_28_2 = arg1[0xc]
    edx = sub_6b4d5b()

arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 0
int32_t* eax_8 = arg1[8]

if (eax_8 != 0)
    sub_405780(eax_8, arg1[9])
    int32_t var_20_6 = arg1[8]
    edx = sub_6b4d5b()

arg1[8] = 0
arg1[9] = 0
arg1[0xa] = 0
void* eax_9 = arg1[4]

if (eax_9 != 0)
    int32_t* var_20_7 = arg1
    sub_535360(eax_9, arg1[5])
    int32_t var_24_3 = arg1[4]
    edx = sub_6b4d5b()

arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
void* result = *arg1

if (result != 0)
    int32_t var_20_8 = arg1[1]
    sub_5325a0(result, edx)
    int32_t var_24_4 = *arg1
    result = sub_6b4d5b()

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
