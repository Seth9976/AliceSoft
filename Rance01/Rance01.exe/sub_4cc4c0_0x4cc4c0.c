// 函数: sub_4cc4c0
// 地址: 0x4cc4c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_713041
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 2

for (int32_t* i = *(arg1 + 0x30); i != *(arg1 + 0x34); i = &i[1])
    void* ecx_2 = *i
    
    if (ecx_2 != 0)
        sub_4cc6d0(ecx_2, 1)

int128_t* ecx_3 = *(arg1 + 0x34)
int128_t* esi = *(arg1 + 0x30)

if (esi != ecx_3)
    int32_t ebp_1 = 0 s>> 2 << 2
    sub_6b49d0(esi, ecx_3, ebp_1, eax_2)
    *(arg1 + 0x34) = ebp_1 + esi

int32_t* esi_1 = *(arg1 + 0x2c)

if (esi_1 != 0)
    void* var_10_1 = &esi_1[1]
    EnterCriticalSection(esi_1[1])
    char var_14_1 = 1
    *esi_1 -= 1
    
    if (*esi_1 != 0)
        LeaveCriticalSection(esi_1[1])
    else
        char var_14_2 = 0
        LeaveCriticalSection(esi_1[1])
        int32_t* var_18_1 = esi_1
        var_4.b = 4
        int32_t* ecx_4 = esi_1[2]
        
        if (ecx_4 != 0)
            (*(*ecx_4 + 4))(eax_2)
            esi_1[2] = 0
        
        CRITICAL_SECTION* lpCriticalSection = esi_1[1]
        
        if (lpCriticalSection != 0)
            DeleteCriticalSection(lpCriticalSection)
            CRITICAL_SECTION* lpCriticalSection_2 = lpCriticalSection
            sub_6b4d5b()
        
        int32_t* var_34_5 = esi_1
        sub_6b4d5b()
    
    var_4.b = 2
    *(arg1 + 0x2c) = 0

int32_t* esi_2 = *(arg1 + 0x28)

if (esi_2 != 0)
    void* var_10_2 = &esi_2[1]
    EnterCriticalSection(esi_2[1])
    char var_14_3 = 1
    *esi_2 -= 1
    
    if (*esi_2 != 0)
        LeaveCriticalSection(esi_2[1])
    else
        char var_14_4 = 0
        LeaveCriticalSection(esi_2[1])
        int32_t* var_18_2 = esi_2
        var_4.b = 6
        int32_t* ecx_5 = esi_2[2]
        
        if (ecx_5 != 0)
            (*(*ecx_5 + 4))(eax_2)
            esi_2[2] = 0
        
        CRITICAL_SECTION* lpCriticalSection_1 = esi_2[1]
        
        if (lpCriticalSection_1 != 0)
            DeleteCriticalSection(lpCriticalSection_1)
            CRITICAL_SECTION* lpCriticalSection_3 = lpCriticalSection_1
            sub_6b4d5b()
        
        int32_t* var_34_10 = esi_2
        sub_6b4d5b()
    
    var_4.b = 2
    *(arg1 + 0x28) = 0

void* esi_3 = arg1 + 0x18
sub_51add0(esi_3)
*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0

if (*(arg1 + 0x54) u>= 0x10)
    int32_t var_34_13 = *(arg1 + 0x40)
    sub_6b4d5b()

*(arg1 + 0x54) = 0xf
*(arg1 + 0x50) = 0
*(arg1 + 0x40) = 0
int32_t eax_13 = *(arg1 + 0x30)

if (eax_13 != 0)
    int32_t var_34_14 = eax_13
    sub_6b4d5b()

*(arg1 + 0x30) = 0
*(arg1 + 0x34) = 0
*(arg1 + 0x38) = 0
arg1 = esi_3
int32_t var_4_1 = 7
sub_51add0(esi_3)
int32_t result = *esi_3

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

*esi_3 = 0
*(esi_3 + 4) = 0
*(esi_3 + 8) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
