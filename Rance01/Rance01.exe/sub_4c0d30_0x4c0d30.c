// 函数: sub_4c0d30
// 地址: 0x4c0d30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_715428
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
EnterCriticalSection(*(arg1 + 0x10))
char var_20 = 1
int32_t var_c_1 = 0
int32_t* eax_4 = *(arg1 + 4)
int32_t* i = *eax_4

if (i != eax_4)
    do
        int32_t* esi_1 = i[0xa]
        
        if (esi_1 != 0)
            sub_4bf9f0(esi_1)
        
        if (*(i + 0x2d) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0x2d) != 0)
                int32_t* i_3 = i[1]
                
                if (*(i_3 + 0x2d) == 0)
                    while (i == i_3[2])
                        i = i_3
                        i_3 = i_3[1]
                        
                        if (*(i_3 + 0x2d) != 0)
                            break
                
                i = i_3
            else
                i = i_1
                int32_t* i_2 = *i
                
                while (*(i_2 + 0x2d) == 0)
                    i = i_2
                    i_2 = *i
    while (i != *(arg1 + 4))

sub_429ad0(*(*(arg1 + 4) + 4))
void* eax_6 = *(arg1 + 4)
*(eax_6 + 4) = eax_6
int32_t* eax_7 = *(arg1 + 4)
*eax_7 = eax_7
void* eax_8 = *(arg1 + 4)
*(eax_8 + 8) = eax_8
*(arg1 + 8) = 0
int32_t result = LeaveCriticalSection(*(arg1 + 0x10))
fsbase->NtTib.ExceptionList = ExceptionList
return result
