// 函数: sub_50d650
// 地址: 0x50d650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_723c68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
int32_t* eax_3 = edi + 4
EnterCriticalSection(*eax_3)
char var_20 = 1
int32_t var_c_1 = 0
int32_t* eax_5 = *(edi + 0x1c)
int32_t* i = *eax_5

if (i != eax_5)
    do
        int32_t* esi_1 = &i[3]
        void** eax_7 = sub_429b30(edi + 8, esi_1)
        void** edi_1 = *(edi + 0xc)
        void** var_30 = eax_7
        void*** eax_12
        void** var_28
        
        if (eax_7 == edi_1)
            var_28 = edi_1
            eax_12 = &var_28
        else
            int32_t ecx_1 = eax_7[7]
            void* eax_8 = &eax_7[3]
            
            if (*(eax_8 + 0x14) u>= 0x10)
                eax_8 = *eax_8
            
            int32_t edi_2 = esi_1[4]
            int32_t edx_1 = edi_2
            
            if (edi_2 u>= ecx_1)
                edx_1 = ecx_1
            
            if (esi_1[5] u>= 0x10)
                esi_1 = *esi_1
            
            int32_t eax_9 = sub_402320(eax_8, esi_1, eax_8, edx_1)
            bool cond:1_1 = eax_9 s< 0
            
            if (eax_9 != 0)
                goto label_50d71a
            
            if (edi_2 u< ecx_1)
                var_28 = edi_1
                eax_12 = &var_28
            else
                int32_t ecx_3
                ecx_3.b = edi_2 != ecx_1
                cond:1_1 = ecx_3 s< 0
            label_50d71a:
                
                if (cond:1_1)
                    var_28 = edi_1
                    eax_12 = &var_28
                else
                    eax_12 = &var_30
        void** edi_3 = *eax_12
        
        if (edi_3 != *(arg1 + 0xc))
            int32_t* esi_2 = edi_3[0xa]
            EnterCriticalSection(esi_2[1])
            *esi_2 += 1
            LeaveCriticalSection(esi_2[1])
            
            if (sub_4f8480(edi_3[0xa]) == 1)
                sub_4f8480(edi_3[0xa])
                void var_24
                sub_429c80(arg1 + 8, &var_24, edi_3)
        
        if (*(i + 0x29) == 0)
            int32_t* i_2 = i[2]
            
            if (*(i_2 + 0x29) != 0)
                int32_t* i_1 = i[1]
                
                if (*(i_1 + 0x29) == 0)
                    while (i == i_1[2])
                        i = i_1
                        i_1 = i_1[1]
                        
                        if (*(i_1 + 0x29) != 0)
                            break
                
                i = i_1
            else
                int32_t* i_3 = *i_2
                
                while (*(i_3 + 0x29) == 0)
                    i_2 = i_3
                    i_3 = *i_2
                
                i = i_2
        
        edi = arg1
    while (i != *(arg1 + 0x1c))

sub_50d890(*(*(edi + 0x1c) + 4))
void* eax_18 = *(edi + 0x1c)
*(eax_18 + 4) = eax_18
int32_t* eax_19 = *(edi + 0x1c)
*eax_19 = eax_19
void* eax_20 = *(edi + 0x1c)
*(eax_20 + 8) = eax_20
*(edi + 0x20) = 0
int32_t result = LeaveCriticalSection(*eax_3)
fsbase->NtTib.ExceptionList = ExceptionList
return result
