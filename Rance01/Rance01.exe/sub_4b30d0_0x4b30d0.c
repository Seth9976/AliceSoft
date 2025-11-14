// 函数: sub_4b30d0
// 地址: 0x4b30d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_715428
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result_1 = arg1
int32_t* i = result_1[0x11]

if (i != result_1[0x12])
    do
        int32_t* esi_1 = *i
        void* var_1c_1 = &esi_1[1]
        EnterCriticalSection(esi_1[1])
        int32_t var_c_1 = 0
        *esi_1 -= 1
        CRITICAL_SECTION* lpCriticalSection = esi_1[1]
        char var_20_1 = 0
        
        if (*esi_1 != 0)
            LeaveCriticalSection(lpCriticalSection)
        else
            LeaveCriticalSection(lpCriticalSection)
            sub_4bf950(esi_1)
            int32_t* var_38_4 = esi_1
            sub_6b4d5b()
        
        result = arg1
        i = &i[1]
        int32_t var_c_2 = 0xffffffff
    while (i != result[0x12])
    
    result_1 = result

int128_t* ecx = result_1[0x12]
int128_t* esi_2 = result_1[0x11]

if (esi_2 != ecx)
    int32_t ebx = 0 s>> 2 << 2
    result = sub_6b49d0(esi_2, ecx, ebx, eax_2)
    result_1[0x12] = ebx + esi_2

fsbase->NtTib.ExceptionList = ExceptionList
return result
