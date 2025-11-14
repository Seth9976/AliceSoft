// 函数: sub_4c0fd0
// 地址: 0x4c0fd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72297b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_40
int32_t eax_2 = data_78c474 ^ &var_40
int32_t __saved_edi
int32_t var_54 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
EnterCriticalSection(*(arg1 + 0x10))
char var_34 = 1
int32_t var_4 = 0
int32_t var_18 = 0xf
void** var_1c = nullptr
char var_2c = 0
sub_401180(&var_2c, 0xffffffff, arg2, 0)
var_4.b = 1
void** eax_8 = sub_429b30(arg1, &var_2c)
void** esi = *(arg1 + 4)
void** var_38 = eax_8
void** var_3c
int32_t eax_10

if (eax_8 != esi)
    void** ecx_1 = eax_8[7]
    void* eax_9 = &eax_8[3]
    bool cond:0_1 = *(eax_9 + 0x14) u< 0x10
    var_3c = ecx_1
    
    if (not(cond:0_1))
        eax_9 = *eax_9
    
    if (var_1c u< ecx_1)
        ecx_1 = var_1c
    
    int32_t* edx_2 = var_2c.d
    
    if (var_18 u< 0x10)
        edx_2 = &var_2c
    
    eax_10 = sub_402320(eax_9, edx_2, eax_9, ecx_1)
    bool cond:2_1 = eax_10 s< 0
    
    if (eax_10 == 0)
        void** ecx_3 = var_3c
        
        if (var_1c u>= ecx_3)
            int32_t edx_3
            edx_3.b = var_1c != ecx_3
            eax_10 = edx_3
        else
            eax_10 = 0xffffffff
        
        cond:2_1 = eax_10 s< 0
    
    eax_10.b = cond:2_1

void*** eax_12

if (eax_8 == esi || eax_10.b != 0)
    var_3c = esi
    eax_12 = &var_3c
else
    eax_12 = &var_38

void** eax_13 = *eax_12
int32_t* result
int32_t* result_1

if (eax_13 == esi)
    void** eax_16 = operator new(0x40)
    var_38 = eax_16
    var_4.b = 2
    
    if (eax_16 == 0)
        result_1 = nullptr
    else
        result_1 = sub_4bf8f0(eax_16, 0)
    
    var_4.b = 1
    result_1[0xf] = *(arg1 + 0x18)
    int32_t eax_18 = *(arg1 + 0x14)
    
    if (result_1[0xd] != eax_18)
        result_1[0xd] = eax_18
        int32_t* eax_19 = result_1[2]
        
        if (eax_19 != 0)
            sub_4bfef0(result_1, eax_19)
    
    if (sub_4bfb10(result_1, arg2, arg3) != 0)
        EnterCriticalSection(result_1[1])
        *result_1 += 1
        LeaveCriticalSection(result_1[1])
        *sub_513fa0(arg1, &var_2c) = result_1
        
        if (var_18 u>= 0x10)
            int32_t var_58_14 = var_2c.d
            sub_6b4d5b()
        
        int32_t var_18_3 = 0xf
        int32_t var_1c_3 = 0
        var_2c = 0
        LeaveCriticalSection(*(arg1 + 0x10))
        result = result_1
    else
        sub_4bf9f0(result_1)
        
        if (var_18 u>= 0x10)
            int32_t var_58_9 = var_2c.d
            sub_6b4d5b()
        
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        LeaveCriticalSection(*(arg1 + 0x10))
        result = nullptr
else
    result_1 = eax_13[0xa]
    
    if (result_1 != 0)
        EnterCriticalSection(result_1[1])
        *result_1 += 1
        LeaveCriticalSection(result_1[1])
    
    if (var_18 u>= 0x10)
        int32_t var_58_5 = var_2c.d
        sub_6b4d5b()
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    LeaveCriticalSection(*(arg1 + 0x10))
    result = result_1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_40)
return result
