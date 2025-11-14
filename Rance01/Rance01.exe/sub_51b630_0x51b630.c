// 函数: sub_51b630
// 地址: 0x51b630
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7129fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg1
EnterCriticalSection(edi[4])
char var_14 = 1
int32_t var_4 = 0
int32_t* eax_4 = edi[1]
int32_t* i = *eax_4

if (i != eax_4)
    do
        if (*i[4] == 1)
            (*(*i[3] + 4))(eax_2)
            int32_t* edi_1 = i[4]
            void* var_18_1 = &edi_1[1]
            EnterCriticalSection(edi_1[1])
            *edi_1 -= 1
            char var_1c_1 = 0
            
            if (*edi_1 != 0)
                LeaveCriticalSection(edi_1[1])
            else
                LeaveCriticalSection(edi_1[1])
                int32_t* var_24_1 = edi_1
                var_4.b = 2
                int32_t* ecx_2 = edi_1[2]
                
                if (ecx_2 != 0)
                    (*(*ecx_2 + 4))()
                    edi_1[2] = 0
                
                CRITICAL_SECTION* lpCriticalSection = edi_1[1]
                
                if (lpCriticalSection != 0)
                    DeleteCriticalSection(lpCriticalSection)
                    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
                    sub_6b4d5b()
                
                int32_t* var_3c_4 = edi_1
                sub_6b4d5b()
            
            var_4.b = 0
            int32_t** i_7 = i
            void var_20
            
            if (*(i + 0x15) != 0)
                edi = arg1
                sub_436320(edi, &var_20, i_7)
            else
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
                    edi = arg1
                    sub_436320(edi, &var_20, i_7)
                else
                    i = i_1
                    int32_t* i_2 = *i
                    
                    if (*(i_2 + 0x15) != 0)
                        edi = arg1
                        sub_436320(edi, &var_20, i_7)
                    else
                        do
                            i = i_2
                            i_2 = *i
                        while (*(i_2 + 0x15) == 0)
                        
                        edi = arg1
                        sub_436320(edi, &var_20, i_7)
        else if (*(i + 0x15) == 0)
            int32_t* i_4 = i[2]
            
            if (*(i_4 + 0x15) != 0)
                int32_t* i_6 = i[1]
                
                if (*(i_6 + 0x15) == 0)
                    while (i == i_6[2])
                        i = i_6
                        i_6 = i_6[1]
                        
                        if (*(i_6 + 0x15) != 0)
                            break
                
                i = i_6
            else
                i = i_4
                int32_t* i_5 = *i
                
                while (*(i_5 + 0x15) == 0)
                    i = i_5
                    i_5 = *i
    while (i != edi[1])

int32_t result = LeaveCriticalSection(edi[4])
fsbase->NtTib.ExceptionList = ExceptionList
return result
