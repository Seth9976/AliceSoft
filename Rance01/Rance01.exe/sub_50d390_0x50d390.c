// 函数: sub_50d390
// 地址: 0x50d390
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_723c98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
int32_t* eax_3 = esi + 4
EnterCriticalSection(*eax_3)
char var_20 = 1
int32_t var_c_1 = 0
int32_t* eax_5 = *(esi + 0xc)
int32_t* i = *eax_5

if (i != eax_5)
    do
        sub_4f8480(i[0xa])
        
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
    while (i != *(arg1 + 0xc))
    
    esi = arg1

sub_429ad0(*(*(esi + 0xc) + 4))
void* eax_7 = *(esi + 0xc)
*(eax_7 + 4) = eax_7
int32_t* eax_8 = *(esi + 0xc)
*eax_8 = eax_8
void* eax_9 = *(esi + 0xc)
*(eax_9 + 8) = eax_9
*(esi + 0x10) = 0
int32_t result = LeaveCriticalSection(*eax_3)
fsbase->NtTib.ExceptionList = ExceptionList
return result
