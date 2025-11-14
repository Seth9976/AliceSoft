// 函数: sub_40ad30
// 地址: 0x40ad30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72092d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 3
int32_t* ecx_1 = arg1[0xb5]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    arg1[0xb5] = 0

char* esi = arg1[0xb2]

if (esi != 0)
    sub_436e10(esi)
    char* var_28_2 = esi
    sub_6b4d5b()
    arg1[0xb2] = 0

int32_t* ebx = arg1[0xb1]

if (ebx != 0)
    int32_t* var_10_1 = ebx
    var_4.b = 4
    int32_t* ecx_2 = *ebx
    
    if (ecx_2 != 0)
        (*(*ecx_2 + 4))(eax_2)
        *ebx = 0
    
    var_4.b = 3
    sub_4372a0(&ebx[6])
    int32_t* var_28_3 = ebx
    sub_6b4d5b()
    arg1[0xb1] = 0

sub_40cd10(&arg1[0xa3])
sub_40cd10(&arg1[0xab])
sub_572ae0(&arg1[0x8a])
sub_572ae0(&arg1[0x77])
(*(arg1[0x67] + 4))(eax_2)
int32_t* ecx_4 = arg1[0x66]
arg1[0x73] = 0
arg1[0x74] = 0

if (ecx_4 != 0)
    (*(*ecx_4 + 4))()
    arg1[0x66] = 0

int32_t* ecx_5 = arg1[0x65]

if (ecx_5 != 0)
    (*(*ecx_5 + 4))()
    arg1[0x65] = 0

sub_574270(&arg1[3])
sub_573200(&arg1[0xa])
arg1[0x5e] = 0
int32_t* ecx_6 = *arg1

if (ecx_6 != 0)
    (*(*ecx_6 + 4))()
    *arg1 = 0

int32_t* ecx_7 = arg1[1]

if (ecx_7 != 0)
    (*(*ecx_7 + 4))()
    arg1[1] = 0

int32_t* ecx_8 = arg1[2]

if (ecx_8 != 0)
    (*(*ecx_8 + 4))()
    arg1[2] = 0

arg1[0xb6] = &chipmunk::CDrawD3DPluginManager::`vftable'{for `IDrawD3DPluginManager'}
void* var_10_3 = &arg1[0x9d]
var_4.b = 6
sub_40cd10(&arg1[0xa3])
var_4.b = 5
var_4.b = 1
sub_40c4b0(sub_40c4b0(sub_40cd10(&arg1[0xab]), &arg1[0xa9]), &arg1[0xa1])
var_4.b = 0
int32_t var_4_1 = 0xffffffff
int32_t result = sub_5741e0(sub_570b90(&arg1[0x65]), &arg1[3])
fsbase->NtTib.ExceptionList = ExceptionList
return result
