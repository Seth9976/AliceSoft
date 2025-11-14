// 函数: sub_507a60
// 地址: 0x507a60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_727b76
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0x10
var_4.b = 0xf
sub_51b200(sub_507e40(arg1), &arg1[0x1a7])
var_4.b = 0xe
sub_4b1300(&arg1[0x186], &arg1[0x186])
var_4.b = 0xd
sub_51a4c0(&arg1[0x15c])
var_4.b = 0xc
int32_t* ecx_3 = arg1[0x155]

if (ecx_3 != 0)
    ecx_3 = (*(*ecx_3 + 4))(eax_2)
    arg1[0x155] = 0

arg1[0x156] = 0
arg1[0x157] = 0
arg1[0x158].b = 0
arg1[0x159] = 0
arg1[0x15a].b = 0
var_4.b = 0xb
sub_4b3cd0(ecx_3, &arg1[0x140])
var_4.b = 0xa
sub_4b64d0(&arg1[0x12e])
var_4.b = 9
int32_t* ecx_5 = arg1[0x125]

if (ecx_5 != 0)
    (*(*ecx_5 + 4))(eax_2)
    arg1[0x125] = 0

arg1[0x12d].b = 0
var_4.b = 8
int32_t* ecx_6 = arg1[0x11f]

if (ecx_6 != 0)
    (*(*ecx_6 + 4))(eax_2)
    arg1[0x11f] = 0

arg1[0x120] = 0
arg1[0x121] = 0
arg1[0x122].b = 0
arg1[0x123] = 0
arg1[0x124].b = 0
var_4.b = 7
sub_4c1f10(&arg1[0x111], &arg1[0x111])
var_4.b = 6
sub_4b8790(&arg1[0xeb])
var_4.b = 5
int32_t* ecx_9 = arg1[0xe2]

if (ecx_9 != 0)
    (*(*ecx_9 + 4))(eax_2)
    arg1[0xe2] = 0

arg1[0xea].b = 0
var_4.b = 4
int32_t* ecx_10 = arg1[0xdc]

if (ecx_10 != 0)
    (*(*ecx_10 + 4))(eax_2)
    arg1[0xdc] = 0

arg1[0xdd] = 0
arg1[0xde] = 0
arg1[0xdf].b = 0
arg1[0xe0] = 0
arg1[0xe1].b = 0
int32_t eax_10 = arg1[0xb1]

if (eax_10 != 0)
    int32_t var_24_7 = eax_10
    sub_6b4d5b()

arg1[0xb1] = 0
arg1[0xb2] = 0
arg1[0xb3] = 0
var_4.b = 2
sub_514290(&arg1[0x85])
void* var_10_1 = &arg1[0x4b]
var_4.b = 0x11
sub_519a40(&arg1[0x4b])
int32_t eax_11 = arg1[0x4b]

if (eax_11 != 0)
    int32_t var_24_10 = eax_11
    sub_6b4d5b()

arg1[0x4b] = 0
arg1[0x4c] = 0
arg1[0x4d] = 0
void* var_10_2 = &arg1[0x41]
var_4.b = 0x12
sub_4cae40(&arg1[0x41])
int32_t eax_12 = arg1[0x41]

if (eax_12 != 0)
    int32_t var_24_12 = eax_12
    sub_6b4d5b()

arg1[0x41] = 0
arg1[0x42] = 0
arg1[0x43] = 0
int32_t var_4_1 = 0xffffffff
int32_t result = sub_509c30(&arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
