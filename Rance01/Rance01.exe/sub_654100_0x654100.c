// 函数: sub_654100
// 地址: 0x654100
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_728b3b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* result_1
int32_t eax_2 = data_78c474 ^ &result_1
int32_t __saved_edi
int32_t var_a8 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
result_1 = arg1
int32_t eax_6 = sub_650c80(arg3, arg1)
int32_t eax_7 = sub_650ce0(arg3, arg1)
int32_t eax_8 = sub_650d40(arg3, arg1)
int32_t eax_9 = sub_650da0(arg3, arg1)
int32_t eax_10 = sub_650e00(arg3, arg1)
int32_t* var_30
int32_t edx = sub_650e60(&var_30, arg3, arg1)
int32_t var_4 = 0
int32_t* var_90 = nullptr
int32_t var_8c = 0
int32_t var_88 = 0
var_4.b = 1

if (arg3 s> 0)
    int32_t* var_ac_6 = arg3
    
    if (sub_418b70(data_797ddc + 0xa8, edx, nullptr) != 0)
        sub_685320(arg3, &var_90, arg1)

int32_t var_58 = 0
int32_t var_54 = 0xf
char var_68 = 0
sub_401270(&var_68, 0x18, 0x731e9c)
var_4.b = 2
sub_405220(&var_68, arg4)
var_4.b = 1

if (var_54 u>= 0x10)
    int32_t var_ac_8 = var_68.d
    sub_6b4d5b()

int32_t var_ac_9 = eax_6
var_4.b = 3
sub_405150(sub_4104a0(0x731eb8), arg4)
var_4.b = 1

if (var_54 u>= 0x10)
    int32_t var_ac_11 = var_68.d
    sub_6b4d5b()

var_4.b = 4
sub_405150(sub_4104a0(0x731ed0), arg4)
var_4.b = 1

if (var_54 u>= 0x10)
    int32_t var_ac_13 = var_68.d
    sub_6b4d5b()

int32_t var_ac_14 = eax_8
var_4.b = 5
sub_405150(sub_4104a0(0x731eec), arg4)
var_4.b = 1

if (var_54 u>= 0x10)
    int32_t var_ac_16 = var_68.d
    sub_6b4d5b()

int32_t var_ac_17 = eax_8
var_4.b = 6
sub_405150(sub_4104a0(0x731f04), arg4)
var_4.b = 1

if (var_54 u>= 0x10)
    int32_t var_ac_19 = var_68.d
    sub_6b4d5b()

int32_t var_ac_20 = eax_10
int32_t var_b0_2 = eax_9
var_4.b = 7
sub_405150(sub_4104a0(0x731f1c), arg4)
var_4.b = 1

if (var_54 u>= 0x10)
    int32_t var_ac_22 = var_68.d
    sub_6b4d5b()

int32_t* eax_23 = var_30
int32_t var_1c

if (var_1c u< 0x10)
    eax_23 = &var_30

int32_t* var_ac_23 = eax_23
var_4.b = 8
sub_405150(sub_4104a0(0x731f38), arg4)
var_4.b = 1

if (var_54 u>= 0x10)
    int32_t var_ac_25 = var_68.d
    sub_6b4d5b()

int32_t var_4c
int32_t var_38

if (eax_7 == 0)
    var_4.b = 9
    sub_405150(sub_4104a0(0x731f50), arg4)
    var_4.b = 1
    
    if (var_54 u>= 0x10)
        int32_t var_ac_27 = var_68.d
        sub_6b4d5b()
else if (eax_7 == 1)
    var_4.b = 0xa
    sub_405150(sub_4104a0(0x731f6c), arg4)
    
    if (var_54 u>= 0x10)
        int32_t var_ac_29 = var_68.d
        sub_6b4d5b()
    
    var_68.d = 0
    int32_t var_64_1 = 0
    int32_t var_60_1 = 0
    var_4.b = 0xb
    char eax_29 = sub_650f10(arg3, &var_68, result_1)
    void* ebp_1 = var_68.d
    
    if (eax_29 != 0 && ((var_64_1 - ebp_1) & 0xfffffffc) == 0x30)
        var_4.b = 0xc
        sub_405150(sub_4104a0("===== "), arg4)
        var_4.b = 0xb
        sub_401110(&var_4c)
        
        for (int32_t i = 0; i s< 0xa; i += 1)
            int32_t var_ac_32 = *(ebp_1 + (i << 2))
            int32_t i_1 = i
            var_4.b = 0xd
            sub_405150(sub_4104a0("%d                : %d px1"), arg4)
            var_4.b = 0xb
            
            if (var_38 u>= 0x10)
                int32_t var_ac_34 = var_4c
                sub_6b4d5b()
        
        int32_t var_ac_35 = *(ebp_1 + 0x28)
        var_4.b = 0xe
        sub_405150(sub_4104a0("-                : %d px1"), arg4)
        var_4.b = 0xb
        
        if (var_38 u>= 0x10)
            int32_t var_ac_37 = var_4c
            sub_6b4d5b()
        
        int32_t var_ac_38 = *(ebp_1 + 0x2c)
        var_4.b = 0xf
        sub_405150(sub_4104a0(",                : %d px1"), arg4)
        
        if (var_38 u>= 0x10)
            int32_t var_ac_40 = var_4c
            sub_6b4d5b()
    
    var_4.b = 1
    
    if (ebp_1 != 0)
        void* var_ac_41 = ebp_1
        sub_6b4d5b()

int32_t* ecx_25 = var_90
int32_t* result = (var_8c - ecx_25) s>> 2
result_1 = result
*(arg2 + 0x68) = result
int32_t edx_9

if (ecx_25 != var_8c)
    edx_9 = *ecx_25
else
    edx_9 = 0

*(arg2 + 0x204) = edx_9
int32_t esi_5 = 0

if (result s> 0)
    do
        var_4.b = 0x10
        sub_405150(sub_4104a0(0x731ff4), arg4)
        var_4.b = 1
        
        if (var_38 u>= 0x10)
            int32_t var_ac_43 = var_4c
            sub_6b4d5b()
        
        int32_t var_ac_44 = esi_5 + 1
        var_4.b = 0x11
        sub_405150(sub_4104a0("----- %3d "), arg4)
        var_4.b = 1
        
        if (var_38 u>= 0x10)
            int32_t var_ac_46 = var_4c
            sub_6b4d5b()
        
        int32_t var_ac_47 = var_90[esi_5]
        var_4.b = 0x12
        result = sub_405150(sub_4104a0(0x732010), arg4)
        var_4.b = 1
        
        if (var_38 u>= 0x10)
            int32_t var_ac_49 = var_4c
            result = sub_6b4d5b()
        
        esi_5 += 1
    while (esi_5 s< result_1)
    
    ecx_25 = var_90

if (ecx_25 != 0)
    int32_t* var_ac_50 = ecx_25
    result = sub_6b4d5b()

var_90 = nullptr
int32_t var_8c_1 = 0
int32_t var_88_1 = 0

if (var_1c u>= 0x10)
    int32_t* var_ac_51 = var_30
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &result_1)
return result
