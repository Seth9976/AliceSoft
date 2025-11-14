// 函数: sub_51b430
// 地址: 0x51b430
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711008
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t eax_2 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_10 = arg1 + 0x10
EnterCriticalSection(*(arg1 + 0x10))
char var_14 = 1
int32_t var_4 = 0
int32_t* eax_4 = *(arg1 + 4)
int32_t* i = *eax_4

if (i != eax_4)
    do
        void* eax_5 = i[4]
        char eax_7
        
        if (*(eax_5 + 8) != 0)
            eax_7 = (*(**(eax_5 + 8) + 0x14))(eax_2)
        
        if (*(eax_5 + 8) == 0 || eax_7 == 0)
            LeaveCriticalSection(*(arg1 + 0x10))
            int32_t eax_10
            eax_10.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_10
        
        if (*(i + 0x15) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0x15) != 0)
                int32_t* i_3 = i[1]
                
                if (*(i_3 + 0x15) == 0)
                    while (i == i_3[2])
                        i = i_3
                        i_3 = i_3[1]
                        
                        if (*(i_3 + 0x15) != 0)
                            break
                
                i = i_3
            else
                i = i_1
                int32_t* i_2 = *i
                
                while (*(i_2 + 0x15) == 0)
                    i = i_2
                    i_2 = *i
    while (i != *(arg1 + 4))

LeaveCriticalSection(*(arg1 + 0x10))
int32_t eax_8
eax_8.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_8
