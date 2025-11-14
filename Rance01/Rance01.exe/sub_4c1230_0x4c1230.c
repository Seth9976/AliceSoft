// 函数: sub_4c1230
// 地址: 0x4c1230
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_722933
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = data_78c474 ^ &var_64
int32_t __saved_edi
int32_t var_78 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
EnterCriticalSection(*(arg1 + 0x10))
char var_5c = 1
int32_t var_4 = 0
var_4.b = 1
int32_t* var_48
char var_2c
sub_4c1d70(arg3, &var_48, sub_405c90(&var_2c, arg2, U"++"), &var_48)
var_4.b = 3
int32_t var_18

if (var_18 u>= 0x10)
    int32_t var_7c_2 = var_2c.d
    sub_6b4d5b()

int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0
void** eax_11 = sub_429b30(arg1, &var_48)
void** var_4c = eax_11
int32_t var_34
int32_t eax_13

if (eax_11 != *(arg1 + 4))
    int32_t ebp_1 = eax_11[7]
    void* eax_12 = &eax_11[3]
    
    if (*(eax_12 + 0x14) u>= 0x10)
        eax_12 = *eax_12
    
    int32_t var_38
    int32_t esi_1 = var_38
    
    if (var_38 u>= ebp_1)
        esi_1 = ebp_1
    
    int32_t* edx_1 = var_48
    
    if (var_34 u< 0x10)
        edx_1 = &var_48
    
    eax_13 = sub_402320(eax_12, edx_1, eax_12, esi_1)
    bool cond:1_1 = eax_13 s< 0
    
    if (eax_13 == 0)
        if (var_38 u>= ebp_1)
            eax_13.b = var_38 != ebp_1
        else
            eax_13 = 0xffffffff
        
        cond:1_1 = eax_13 s< 0
    
    eax_13.b = cond:1_1

void** var_60
void*** eax_14

if (eax_11 == *(arg1 + 4) || eax_13.b != 0)
    var_60 = *(arg1 + 4)
    eax_14 = &var_60
else
    eax_14 = &var_4c

void** eax_16 = *eax_14
int32_t* result
int32_t* result_1

if (eax_16 == *(arg1 + 4))
    void** eax_19 = operator new(0x40)
    var_60 = eax_19
    var_4.b = 4
    
    if (eax_19 == 0)
        result_1 = nullptr
    else
        result_1 = sub_4bf8f0(eax_19, 0)
    
    var_4.b = 3
    result_1[0xf] = *(arg1 + 0x18)
    int32_t eax_21 = *(arg1 + 0x14)
    
    if (result_1[0xd] != eax_21)
        result_1[0xd] = eax_21
        int32_t* eax_22 = result_1[2]
        
        if (eax_22 != 0)
            sub_4bfef0(result_1, eax_22)
    
    if (sub_4bfbd0(result_1, arg2, arg3) != 0)
        EnterCriticalSection(result_1[1])
        *result_1 += 1
        LeaveCriticalSection(result_1[1])
        *sub_513fa0(arg1, &var_48) = result_1
        
        if (var_34 u>= 0x10)
            int32_t* var_7c_16 = var_48
            sub_6b4d5b()
        
        int32_t var_34_3 = 0xf
        int32_t var_38_3 = 0
        var_48.b = 0
        LeaveCriticalSection(*(arg1 + 0x10))
        result = result_1
    else
        sub_4bf9f0(result_1)
        
        if (var_34 u>= 0x10)
            int32_t* var_7c_11 = var_48
            sub_6b4d5b()
        
        int32_t var_34_2 = 0xf
        int32_t var_38_2 = 0
        var_48.b = 0
        LeaveCriticalSection(*(arg1 + 0x10))
        result = nullptr
else
    result_1 = eax_16[0xa]
    
    if (result_1 != 0)
        EnterCriticalSection(result_1[1])
        *result_1 += 1
        LeaveCriticalSection(result_1[1])
    
    if (var_34 u>= 0x10)
        int32_t* var_7c_7 = var_48
        sub_6b4d5b()
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48.b = 0
    LeaveCriticalSection(*(arg1 + 0x10))
    result = result_1
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_64)
return result
