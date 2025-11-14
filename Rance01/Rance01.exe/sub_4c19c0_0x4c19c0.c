// 函数: sub_4c19c0
// 地址: 0x4c19c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72412b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_40
int32_t eax_2 = data_78c474 ^ &var_40
int32_t __saved_edi
int32_t var_54 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1 + 0x10
void* var_38 = ebx
EnterCriticalSection(*(arg1 + 0x10))
char var_3c = 1
int32_t var_58_1 = arg2
int32_t var_4 = 0
sub_4104a0("CGTexture/%d")
var_4.b = 1
int32_t* var_2c
void** eax_7 = sub_429b30(arg1, &var_2c)
void** esi_1 = *(arg1 + 4)
void** var_30 = eax_7
int32_t var_18
int32_t eax_9

if (eax_7 != esi_1)
    int32_t ebx_1 = eax_7[7]
    void* eax_8 = &eax_7[3]
    
    if (*(eax_8 + 0x14) u>= 0x10)
        eax_8 = *eax_8
    
    int32_t var_1c
    int32_t ebp_1 = var_1c
    
    if (ebp_1 u>= ebx_1)
        ebp_1 = ebx_1
    
    int32_t* edx = var_2c
    
    if (var_18 u< 0x10)
        edx = &var_2c
    
    eax_9 = sub_402320(eax_8, edx, eax_8, ebp_1)
    bool cond:0_1 = eax_9 s< 0
    
    if (eax_9 == 0)
        if (var_1c u>= ebx_1)
            int32_t ecx_1
            ecx_1.b = var_1c != ebx_1
            eax_9 = ecx_1
        else
            eax_9 = 0xffffffff
        
        cond:0_1 = eax_9 s< 0
    
    ebx = var_38
    eax_9.b = cond:0_1

void*** eax_11

if (eax_7 == esi_1 || eax_9.b != 0)
    var_40 = esi_1
    eax_11 = &var_40
else
    eax_11 = &var_30

void** eax_12 = *eax_11
int32_t* result
int32_t* result_1

if (eax_12 == esi_1)
    void** eax_14 = operator new(0x40)
    var_40 = eax_14
    var_4.b = 2
    
    if (eax_14 == 0)
        result_1 = nullptr
    else
        result_1 = sub_4bf8f0(eax_14, 0xffffffff)
    
    var_4.b = 1
    result_1[0xf] = *(arg1 + 0x18)
    int32_t eax_17 = *(arg1 + 0x14)
    
    if (result_1[0xd] != eax_17)
        result_1[0xd] = eax_17
        int32_t* eax_18 = result_1[2]
        
        if (eax_18 != 0)
            sub_4bfef0(result_1, eax_18)
    
    if (sub_4bfde0(result_1, arg2) != 0)
        EnterCriticalSection(result_1[1])
        *result_1 += 1
        LeaveCriticalSection(result_1[1])
        *sub_513fa0(arg1, &var_2c) = result_1
        
        if (var_18 u>= 0x10)
            int32_t* var_58_15 = var_2c
            sub_6b4d5b()
        
        int32_t var_18_3 = 0xf
        int32_t var_1c_3 = 0
        var_2c.b = 0
        LeaveCriticalSection(*var_38)
        result = result_1
    else
        sub_4bf9f0(result_1)
        
        if (var_18 u>= 0x10)
            int32_t* var_58_10 = var_2c
            sub_6b4d5b()
        
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c.b = 0
        LeaveCriticalSection(*ebx)
        result = nullptr
else
    result_1 = eax_12[0xa]
    
    if (result_1 != 0)
        EnterCriticalSection(result_1[1])
        *result_1 += 1
        LeaveCriticalSection(result_1[1])
    
    if (var_18 u>= 0x10)
        int32_t* var_58_6 = var_2c
        sub_6b4d5b()
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c.b = 0
    LeaveCriticalSection(*ebx)
    result = result_1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_40)
return result
