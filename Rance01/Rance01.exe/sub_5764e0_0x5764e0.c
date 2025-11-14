// 函数: sub_5764e0
// 地址: 0x5764e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_711488
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ebx
void* var_2c = ebx
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

while (true)
    EnterCriticalSection(*(arg1 + 4))
    
    if (*(arg1 + 0xc) == 0 || *(arg1 + 0x20) != 0)
        ebx.b = 0
    else
        ebx.b = 1
    
    LeaveCriticalSection(*(arg1 + 4))
    
    if (ebx.b == 0)
        int32_t edx_1 = *(arg1 + 0x18)
        HANDLE handles = *(arg1 + 0x14)
        int32_t var_1c_1 = edx_1
        enum WAIT_EVENT result = WaitForMultipleObjects(2, &handles, 0, 0xffffffff)
        
        if (result == WAIT_OBJECT_0)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
    
    void* var_24_1 = arg1 + 4
    EnterCriticalSection(*(arg1 + 4))
    char var_28_1 = 1
    int32_t var_c_1 = 0
    
    if (*(arg1 + 0xc) != 0)
        int32_t* ecx_3 = *(arg1 + 8)
        int32_t* edi_1 = *(**(arg1 + 8) + 8)
        int32_t* eax_9 = *ecx_3
        
        if (eax_9 != ecx_3)
            *eax_9[1] = *eax_9
            int32_t* var_38_5 = eax_9
            *(*eax_9 + 4) = eax_9[1]
            sub_6b4d5b()
            *(arg1 + 0xc) -= 1
        
        *(arg1 + 0x20) = 1
        char var_28_3 = 0
        LeaveCriticalSection(*(arg1 + 4))
        (*(*edi_1 + 8))(eax_2)
        (*(*edi_1 + 4))()
        *(arg1 + 0x20) = 0
        int32_t var_c_3 = 0xffffffff
    else
        int32_t var_c_2 = 0xffffffff
        char var_28_2 = 0
        LeaveCriticalSection(*(arg1 + 4))
