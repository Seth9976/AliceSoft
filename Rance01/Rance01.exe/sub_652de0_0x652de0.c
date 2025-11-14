// 函数: sub_652de0
// 地址: 0x652de0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_728ca8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = data_78c474 ^ &var_5c
int32_t __saved_edi
int32_t var_70 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_40 = nullptr
int32_t var_3c = 0
int32_t var_38 = 0
int32_t var_4 = 0

if (arg1 s> 0)
    void* edi_1 = data_797ddc
    int32_t* var_74_1 = arg1
    char eax_7
    int32_t* ecx
    int32_t edx
    int32_t edx_1
    eax_7, ecx, edx_1 = sub_418b70(edi_1 + 0xa8, edx, arg1)
    
    if (eax_7 != 0)
        int32_t* var_74_2 = arg1
        
        if (sub_418b70(edi_1 + 0xa8, edx_1, ecx) != 0)
            int32_t eax_10
            eax_10.b = sub_6841d0(arg1, arg3) == 2
            
            if (eax_10.b != 0)
                sub_67f900(arg1, &var_40, arg3)

int32_t eax_11
int32_t* ecx_3
int32_t edx_2
eax_11, ecx_3, edx_2 = sub_650670(arg1, arg3)
int32_t* result_2 = nullptr
int32_t var_4c = 0
int32_t var_48 = 0
var_4.b = 1

if (arg1 s> 0)
    int32_t* var_74_6 = arg1
    
    if (sub_418b70(data_797ddc + 0xa8, edx_2, ecx_3) != 0)
        sub_685320(arg1, &result_2, arg3)

int32_t var_20 = 0
int32_t var_1c = 0xf
char var_30 = 0
sub_401270(&var_30, 0x1e, 0x731b20)
var_4.b = 2
sub_405220(&var_30, arg4)
var_4.b = 1

if (var_1c u>= 0x10)
    int32_t var_74_8 = var_30.d
    sub_6b4d5b()

int32_t var_74_9 = eax_11
var_4.b = 3
sub_405150(sub_4104a0(0x731b40), arg4)
var_4.b = 1

if (var_1c u>= 0x10)
    int32_t var_74_11 = var_30.d
    sub_6b4d5b()

int32_t esi_4 = (var_3c - var_40) s/ 0x1c
int32_t var_74_12 = esi_4
var_4.b = 4
sub_405150(sub_4104a0(0x731b60), arg4)
var_4.b = 1

if (var_1c u>= 0x10)
    int32_t var_74_14 = var_30.d
    sub_6b4d5b()

int32_t ecx_11 = esi_4
int32_t eax_22 = (var_4c - result_2) s>> 2

if (esi_4 u>= eax_22)
    ecx_11 = eax_22

*(arg2 + 0x68) = ecx_11
int32_t* result_3 = result_2
int32_t ecx_12

if (result_3 != var_4c)
    ecx_12 = *result_3
else
    ecx_12 = 0

int32_t edi_4 = 0
*(arg2 + 0x204) = ecx_12
int32_t var_54_1 = esi_4

if (esi_4 u>= eax_22)
    var_54_1 = eax_22

if (var_54_1 s> 0)
    void** var_58_1 = var_40
    
    do
        var_4.b = 5
        sub_405150(sub_4104a0(0x731b78), arg4)
        var_4.b = 1
        
        if (var_1c u>= 0x10)
            int32_t var_74_16 = var_30.d
            sub_6b4d5b()
        
        int32_t var_74_17 = edi_4 + 1
        var_4.b = 6
        sub_405150(sub_4104a0("----- %3d "), arg4)
        var_4.b = 1
        
        if (var_1c u>= 0x10)
            int32_t var_74_19 = var_30.d
            sub_6b4d5b()
        
        void** eax_26 = var_58_1
        
        if (eax_26[5] u>= 0x10)
            eax_26 = *eax_26
        
        void** var_74_20 = eax_26
        var_4.b = 7
        sub_405150(sub_4104a0(0x731b94), arg4)
        var_4.b = 1
        
        if (var_1c u>= 0x10)
            int32_t var_74_22 = var_30.d
            sub_6b4d5b()
        
        int32_t var_74_23 = result_2[edi_4]
        var_4.b = 8
        sub_405150(sub_4104a0(0x731bac), arg4)
        var_4.b = 1
        
        if (var_1c u>= 0x10)
            int32_t var_74_25 = var_30.d
            sub_6b4d5b()
        
        var_58_1 = &var_58_1[7]
        edi_4 += 1
    while (edi_4 s< var_54_1)

int32_t* result = result_2

if (result != 0)
    int32_t* result_1 = result
    result = sub_6b4d5b()

void** ebp_1 = var_40
result_2 = nullptr
int32_t var_4c_1 = 0
int32_t var_48_1 = 0

if (ebp_1 != 0)
    void** esi_6 = ebp_1
    
    if (ebp_1 != var_3c)
        do
            if (esi_6[5] u>= 0x10)
                void* var_74_26 = *esi_6
                sub_6b4d5b()
            
            esi_6[5] = 0xf
            esi_6[4] = 0
            *esi_6 = nullptr
            esi_6 = &esi_6[7]
        while (esi_6 != var_3c)
    
    void** var_74_27 = ebp_1
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_5c)
return result
