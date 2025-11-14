// 函数: sub_4c1c20
// 地址: 0x4c1c20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t var_24 = data_78c474 ^ &__saved_ebx
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x14) != arg2)
    void* var_10_1 = arg1 + 0x10
    EnterCriticalSection(*(arg1 + 0x10))
    char var_14_1 = 1
    int32_t var_4 = 0
    int32_t* ecx_1 = *(arg1 + 4)
    void* i = *ecx_1
    void* i_1 = i
    
    if (i != ecx_1)
        do
            void* eax_5 = *(i + 0x28)
            
            if (eax_5 != 0 && *(eax_5 + 0x34) != arg2)
                int32_t* ecx_2 = *(eax_5 + 8)
                *(eax_5 + 0x34) = arg2
                
                if (ecx_2 != 0 && sub_4bfef0(eax_5, ecx_2) == 0)
                    LeaveCriticalSection(*(arg1 + 0x10))
                    int32_t eax_9
                    eax_9.b = 0
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_9
            
            sub_4c1d20(&i_1)
            i = i_1
        while (i != *(arg1 + 4))
    
    LeaveCriticalSection(*(arg1 + 0x10))
    *(arg1 + 0x14) = arg2

struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
