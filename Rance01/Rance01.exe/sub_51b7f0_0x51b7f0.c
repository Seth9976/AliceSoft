// 函数: sub_51b7f0
// 地址: 0x51b7f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_10 = arg1 + 0x10
EnterCriticalSection(*(arg1 + 0x10))
char var_14 = 1
int32_t var_4 = 0
int32_t* eax_4 = *(arg1 + 4)
int32_t* i = *eax_4

if (i != eax_4)
    while (true)
        void* eax_5 = i[4]
        
        if (*(eax_5 + 8) != 0 && (*(**(eax_5 + 8) + 0x14))(eax_2) != 0)
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
            
            if (i == *(arg1 + 4))
                break
            
            continue
        
        int32_t edi_1 = i[3]
        void* esi = i[4]
        int32_t* ecx_3 = *(esi + 8)
        
        if (ecx_3 != 0)
            (*(*ecx_3 + 4))(eax_2)
            *(esi + 8) = 0
        
        int32_t* eax_11 = (*(*arg2 + 0x2c))(eax_2)
        *(esi + 8) = eax_11
        char eax_13
        
        if (eax_11 != 0)
            eax_13 = (*(*eax_11 + 8))(edi_1, 1)
        
        if (eax_11 != 0 && eax_13 != 0)
            break
        
        LeaveCriticalSection(*(arg1 + 0x10))
        int32_t eax_14
        eax_14.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_14

LeaveCriticalSection(*(arg1 + 0x10))
int32_t eax_8
eax_8.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_8
