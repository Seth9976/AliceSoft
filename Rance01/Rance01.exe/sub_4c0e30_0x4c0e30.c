// 函数: sub_4c0e30
// 地址: 0x4c0e30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_717ca0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_38 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
EnterCriticalSection(arg1[4])
char var_14 = 1
int32_t var_4 = 0
int32_t* eax_4 = arg1[1]
int32_t* i = *eax_4

if (i != eax_4)
    do
        int32_t* edi_1 = i[0xa]
        EnterCriticalSection(edi_1[1])
        int32_t ebp_1 = *edi_1
        LeaveCriticalSection(edi_1[1])
        
        if (ebp_1 == 1)
            int32_t* edi_3 = i[0xa]
            void* var_18_1 = &edi_3[1]
            EnterCriticalSection(edi_3[1])
            var_4.b = 1
            *edi_3 -= 1
            CRITICAL_SECTION* lpCriticalSection = edi_3[1]
            char var_1c_1 = 0
            
            if (*edi_3 != 0)
                LeaveCriticalSection(lpCriticalSection)
            else
                LeaveCriticalSection(lpCriticalSection)
                sub_4bf950(edi_3)
                int32_t* var_3c_6 = edi_3
                sub_6b4d5b()
            
            var_4.b = 0
            int32_t** i_7 = i
            void var_20
            
            if (*(i + 0x2d) != 0)
                sub_429c80(arg1, &var_20, i_7)
            else
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
                    sub_429c80(arg1, &var_20, i_7)
                else
                    i = i_1
                    int32_t* i_2 = *i
                    
                    if (*(i_2 + 0x2d) != 0)
                        sub_429c80(arg1, &var_20, i_7)
                    else
                        do
                            i = i_2
                            i_2 = *i
                        while (*(i_2 + 0x2d) == 0)
                        
                        sub_429c80(arg1, &var_20, i_7)
        else if (*(i + 0x2d) == 0)
            int32_t* i_4 = i[2]
            
            if (*(i_4 + 0x2d) != 0)
                int32_t* i_6 = i[1]
                
                if (*(i_6 + 0x2d) == 0)
                    while (i == i_6[2])
                        i = i_6
                        i_6 = i_6[1]
                        
                        if (*(i_6 + 0x2d) != 0)
                            break
                
                i = i_6
            else
                i = i_4
                int32_t* i_5 = *i
                
                while (*(i_5 + 0x2d) == 0)
                    i = i_5
                    i_5 = *i
    while (i != arg1[1])

int32_t result = LeaveCriticalSection(arg1[4])
fsbase->NtTib.ExceptionList = ExceptionList
return result
