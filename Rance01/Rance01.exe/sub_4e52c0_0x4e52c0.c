// 函数: sub_4e52c0
// 地址: 0x4e52c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_7 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ffb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_68
int32_t eax_2 = data_78c474 ^ &var_68
int32_t __saved_edi
int32_t var_7c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_3c = 0xf
void* var_40 = nullptr
char var_50 = 0
sub_401270(&var_50, 0xf, 0x7558e8)
int32_t var_4 = 0
char* ecx = var_50.d
int128_t* eax_5 = *(arg1 + 8)
char* edi = ecx

if (var_3c u< 0x10)
    edi = &var_50
    ecx = &var_50

var_68 = arg1 + 4
void* var_80 = var_68
sub_4102d0(arg1 + 4, eax_5, ecx, var_40 + edi)
int32_t var_4_1 = 0xffffffff

if (var_3c u>= 0x10)
    int32_t var_80_1 = var_50.d
    sub_6b4d5b()

int32_t eax_7
int32_t edx_4
edx_4:eax_7 = muls.dp.d(0x38e38e39, *(arg2 + 0xd0) - *(arg2 + 0xcc))
int32_t edx_5 = edx_4 s>> 3
int32_t eax_10 = (edx_5 u>> 0x1f) + edx_5
int32_t esi_2 = 0
bool result
int128_t* var_34

if (eax_10 s> 0)
    int32_t var_60_1 = 0
    
    if (eax_10 s<= 0)
    label_4e5530:
        int32_t var_20_2 = 0xf
        int32_t var_24_2 = 0
        var_34.b = 0
        sub_401270(&var_34, 4, "\r\n\r\n")
        int32_t var_4_6 = 4
        int128_t* eax_20 = var_34
        int128_t* edx_13 = eax_20
        
        if (var_20_2 u< 0x10)
            edx_13 = &var_34
            eax_20 = &var_34
        
        void* var_80_6 = var_68
        sub_4102d0(var_68, *(arg1 + 8), eax_20, edx_13 + var_24_2)
        
        if (var_20_2 u>= 0x10)
            int128_t* var_80_7 = var_34
            sub_6b4d5b()
        
        result = true
    else
        int32_t var_64_1 = 0
        
        while (sub_4e55b0(arg1, *(arg2 + 0xcc) + var_64_1) != 0)
            int32_t eax_14
            int32_t edx_7
            edx_7:eax_14 = muls.dp.d(0x38e38e39, *(arg2 + 0xd0) - *(arg2 + 0xcc))
            int32_t edx_8 = edx_7 s>> 3
            
            if (esi_2 s< edx_8 + (edx_8 u>> 0x1f) - 1)
                int32_t var_3c_2 = 0xf
                int32_t var_40_2 = 0
                var_50 = 0
                sub_401270(&var_50, 3, 0x7558f8)
                int32_t var_4_4 = 3
                char* ecx_7 = var_50.d
                char* esi_4 = ecx_7
                
                if (var_3c_2 u< 0x10)
                    esi_4 = &var_50
                    ecx_7 = &var_50
                
                void* var_80_4 = var_68
                sub_4102d0(var_68, *(arg1 + 8), ecx_7, &esi_4[var_40_2])
                int32_t var_4_5 = 0xffffffff
                
                if (var_3c_2 u>= 0x10)
                    int32_t var_80_5 = var_50.d
                    sub_6b4d5b()
            
            var_64_1 += 0x24
            int32_t eax_19
            int32_t edx_11
            edx_11:eax_19 = muls.dp.d(0x38e38e39, *(arg2 + 0xd0) - *(arg2 + 0xcc))
            int32_t edx_12 = edx_11 s>> 3
            esi_2 = var_60_1 + 1
            var_60_1 = esi_2
            
            if (esi_2 s>= (edx_12 u>> 0x1f) + edx_12)
                goto label_4e5530
        
        result = false
else
    long double x87_r7_1 = float.t(0)
    float var_5c_1 = fconvert.s(x87_r7_1)
    var_50.d = &sealengine::CEmitterPos::`vftable'
    float var_58_1 = fconvert.s(x87_r7_1)
    float var_54_1 = fconvert.s(x87_r7_1)
    float var_40_1 = fconvert.s(x87_r7_1)
    float var_3c_1 = fconvert.s(x87_r7_1)
    float var_4c_1 = var_5c_1
    float var_48_1 = var_58_1
    float var_44_1 = var_54_1
    int32_t var_4_2 = 1
    float var_1c_1 = fconvert.s(x87_r7_1)
    float var_18_1 = fconvert.s(x87_r7_1)
    var_34 = nullptr
    int32_t var_30_1 = 1
    struct sealengine::CEmitterPos::VTable* const var_2c_1 = &sealengine::CEmitterPos::`vftable'
    float var_28_1 = var_5c_1
    float var_24_1 = var_58_1
    float var_20_1 = var_54_1
    char var_14_1 = 0
    var_4_2.b = 2
    int32_t var_4_3 = 0xffffffff
    
    if (sub_4e55b0(arg1, &var_34) != 0)
        goto label_4e5530
    
    result = false
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_68)
return result
