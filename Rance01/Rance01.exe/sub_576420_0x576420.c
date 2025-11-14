// 函数: sub_576420
// 地址: 0x576420
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5766c0(arg1)
void* var_10 = arg1 + 4
EnterCriticalSection(*(arg1 + 4))
char var_14 = 1
int32_t var_4 = 0
int32_t* eax_4 = *(arg1 + 8)
void** i = *eax_4

if (i != eax_4)
    do
        (*(*i[2] + 4))(eax_2)
        i = *i
    while (i != *(arg1 + 8))

int32_t* ecx_1 = *(arg1 + 8)
int32_t* i_2 = *ecx_1
*ecx_1 = ecx_1
void* ecx_2 = *(arg1 + 8)
*(ecx_2 + 4) = ecx_2
*(arg1 + 0xc) = 0

if (i_2 != *(arg1 + 8))
    int32_t* i_1
    
    do
        i_1 = *i_2
        int32_t* i_3 = i_2
        sub_6b4d5b()
        i_2 = i_1
    while (i_1 != *(arg1 + 8))

int32_t result = LeaveCriticalSection(*(arg1 + 4))
fsbase->NtTib.ExceptionList = ExceptionList
return result
