// 函数: sub_4fff40
// 地址: 0x4fff40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b043
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 3

for (int32_t* i = arg1[0x13]; i != arg1[0x14]; i = &i[1])
    int32_t* ecx_2 = *i
    
    if (ecx_2 != 0)
        sub_4f9790(ecx_2, 1)

int128_t* ecx_3 = arg1[0x14]
int128_t* esi = arg1[0x13]

if (esi != ecx_3)
    int32_t ebp_1 = 0 s>> 2 << 2
    sub_6b49d0(esi, ecx_3, ebp_1, eax_2)
    arg1[0x14] = ebp_1 + esi

int32_t* esi_1 = arg1[0x11]

if (esi_1 != 0)
    sub_4bf9f0(esi_1)
    arg1[0x11] = 0

int32_t* esi_2 = arg1[0x10]

if (esi_2 != 0)
    sub_4bf9f0(esi_2)
    arg1[0x10] = 0

sub_4c09d0(&arg1[0xc])
int32_t eax_6 = arg1[0x13]

if (eax_6 != 0)
    int32_t var_2c_3 = eax_6
    sub_6b4d5b()

arg1[0x13] = 0
arg1[0x14] = 0
arg1[0x15] = 0
void* var_10 = &arg1[0xc]
var_4.b = 4
sub_4c09d0(&arg1[0xc])
int32_t result = arg1[0xc]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 0
var_4.b = 0
int32_t* i_1 = arg1[8]

if (i_1 != 0)
    for (int32_t ebp_3 = arg1[9]; i_1 != ebp_3; i_1 = &i_1[0xb])
        (**i_1)(0)
    
    int32_t var_2c_5 = arg1[8]
    result = sub_6b4d5b()

arg1[8] = 0
arg1[9] = 0
arg1[0xa] = 0

if (arg1[5] u>= 0x10)
    int32_t var_2c_6 = *arg1
    result = sub_6b4d5b()

arg1[5] = 0xf
arg1[4] = 0
*arg1 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
