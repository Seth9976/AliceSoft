// 函数: sub_51b290
// 地址: 0x51b290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_712a6b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
int32_t* eax_3 = esi + 0x10
EnterCriticalSection(*eax_3)
char var_20 = 1
int32_t var_c_1 = 0
int32_t* eax_5 = *(esi + 4)
int32_t* i = *eax_5

if (i != eax_5)
    do
        (*(*i[3] + 4))(eax_2)
        int32_t* esi_1 = i[4]
        void* var_24_1 = &esi_1[1]
        EnterCriticalSection(esi_1[1])
        *esi_1 -= 1
        CRITICAL_SECTION* lpCriticalSection = esi_1[1]
        char var_28_1 = 0
        
        if (*esi_1 != 0)
            LeaveCriticalSection(lpCriticalSection)
        else
            LeaveCriticalSection(lpCriticalSection)
            int32_t* var_2c_1 = esi_1
            var_c_1.b = 2
            int32_t* ecx_2 = esi_1[2]
            
            if (ecx_2 != 0)
                (*(*ecx_2 + 4))()
                esi_1[2] = 0
            
            CRITICAL_SECTION* lpCriticalSection_1 = esi_1[1]
            
            if (lpCriticalSection_1 != 0)
                DeleteCriticalSection(lpCriticalSection_1)
                CRITICAL_SECTION* lpCriticalSection_2 = lpCriticalSection_1
                sub_6b4d5b()
            
            int32_t* var_40_4 = esi_1
            sub_6b4d5b()
        
        var_c_1.b = 0
        
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
    
    esi = arg1

void** ebx_2 = *(*(esi + 4) + 4)

if (*(ebx_2 + 0x15) == 0)
    void** edi_1 = ebx_2
    
    do
        sub_402c20(edi_1[2])
        edi_1 = *edi_1
        void** var_40_6 = ebx_2
        sub_6b4d5b()
        ebx_2 = edi_1
    while (*(edi_1 + 0x15) == 0)

void* eax_10 = *(esi + 4)
*(eax_10 + 4) = eax_10
int32_t* eax_11 = *(esi + 4)
*eax_11 = eax_11
void* eax_12 = *(esi + 4)
*(eax_12 + 8) = eax_12
*(esi + 8) = 0
int32_t result = LeaveCriticalSection(*eax_3)
fsbase->NtTib.ExceptionList = ExceptionList
return result
