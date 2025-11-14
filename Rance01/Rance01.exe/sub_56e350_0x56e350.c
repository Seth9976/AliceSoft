// 函数: sub_56e350
// 地址: 0x56e350
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7145be
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 3
sub_56d520(&arg1[0xe])
sub_6b2880(&arg1[2])
void* edi = arg1[0x25]

if (edi != 0)
    sub_58a650(edi)
    (*(arg1[0x25]->vFunc_0 + 4))(eax_2)
    arg1[0x25] = 0

arg1[0x27] = &sys40::CDXOption::`vftable'{for `IDXOption'}
var_4.b = 1
void* edi_1 = arg1[0x25]

if (edi_1 != 0)
    sub_58a650(edi_1)
    (*(arg1[0x25]->vFunc_0 + 4))(eax_2)
    arg1[0x25] = 0

void* esi_2 = arg1[0x25]

if (esi_2 != 0)
    int32_t* eax_5 = *(esi_2 + 0x14)
    
    if (eax_5 != 0)
        (*(*eax_5 + 8))(eax_5)
        *(esi_2 + 0x14) = 0

var_4.b = 0
sub_56d520(&arg1[0xe])
*arg1 = &sys40::CMainSurface::`vftable'{for `ISurface'}
sub_6b2880(&arg1[2])
arg1[2] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
int32_t result = sub_6b2880(&arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
