// 函数: sub_591680
// 地址: 0x591680
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7136b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
(*(*arg1 + 0xc))(data_78c474 ^ &__saved_edi)
int32_t ecx = 0
int32_t esi = 0
int32_t* edx_1 = nullptr
int32_t var_28 = 0
int32_t* var_24 = nullptr
int32_t var_20 = 0
int32_t var_c_1 = 0
int32_t var_2c = 0
void* var_30

if (arg4 s> 0)
    void* edi_1 = arg3
    var_30 = edi_1
    
    while (true)
        int32_t* edi_4
        
        if (edi_1 u>= edx_1 || esi u> edi_1)
            if (edx_1 == ecx)
                int32_t eax_16 = (edx_1 - esi) s>> 2
                
                if (eax_16 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_7 = (ecx - esi) s>> 2
                
                if (eax_16 + 1 u> ecx_7)
                    uint32_t edx_7 = ecx_7 u>> 1
                    int32_t ecx_8
                    
                    if (0x3fffffff - edx_7 u>= ecx_7)
                        ecx_8 = ecx_7 + edx_7
                    else
                        ecx_8 = 0
                    
                    if (ecx_8 u< eax_16 + 1)
                        ecx_8 = eax_16 + 1
                    
                    sub_6b0560(&var_28, ecx_8)
                    edx_1 = var_24
                    esi = var_28
            
            if (edx_1 == 0)
                edi_4 = var_30
            else
                edi_4 = var_30
                *edx_1 = *edi_4
        else
            int32_t edi_3 = (edi_1 - esi) s>> 2
            
            if (edx_1 == ecx)
                int32_t eax_6 = (edx_1 - esi) s>> 2
                
                if (eax_6 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_2 = (ecx - esi) s>> 2
                
                if (eax_6 + 1 u> ecx_2)
                    uint32_t edx_3 = ecx_2 u>> 1
                    int32_t ecx_3
                    
                    if (0x3fffffff - edx_3 u>= ecx_2)
                        ecx_3 = ecx_2 + edx_3
                    else
                        ecx_3 = 0
                    
                    if (ecx_3 u< eax_6 + 1)
                        ecx_3 = eax_6 + 1
                    
                    sub_6b0560(&var_28, ecx_3)
                    edx_1 = var_24
                    esi = var_28
            
            if (edx_1 == 0)
                edi_4 = var_30
            else
                *edx_1 = *(esi + (edi_3 << 2))
                edi_4 = var_30
        
        int32_t eax_10 = var_2c + 1
        edx_1 = &edx_1[1]
        edi_1 = &edi_4[1]
        var_24 = edx_1
        var_2c = eax_10
        var_30 = edi_1
        
        if (eax_10 s>= arg4)
            break
        
        ecx = var_20

char eax_11
int32_t edx_4
eax_11, edx_4 = sub_587f50(&var_28)
int32_t* eax_13

if (eax_11 == 0)
    if (sub_5915f0(&var_30, edx_4, &arg1[9], &var_28).b == 0)
    label_5917a6:
        
        if (esi != 0)
            int32_t var_48_3 = esi
            sub_6b4d5b()
        
        eax_13.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_13
else
    eax_13 = sub_588020(*(arg1[2] + 0x1c), &var_28, &var_30)
    arg1[4] = eax_13
    
    if (eax_13 == 0)
        goto label_5917a6
    
    arg1[9] = 0

if (arg2 s> 0)
    int32_t* eax_20 = **(arg1[2] + 0x1c)
    uint32_t ecx_14 = zx.d(arg5)
    int32_t ecx_15 = neg.d(ecx_14)
    
    if ((*(*eax_20 + 0x68))(eax_20, var_30 * arg2, 
            (sbb.d(ecx_15, ecx_15, ecx_14 != 0) & 0x200) | 8, arg1[9], 0, &arg1[3], 0) s< 0)
        goto label_5917a6

sub_4b55f0(&arg1[5], &var_28)
void* ecx_21 = var_30
arg1[0xc] = arg2 s/ 3
int32_t eax_27
int32_t edx_11
edx_11:eax_27 = sx.q(arg2)
int32_t eax_28 = eax_27 - edx_11
edx_11.b = arg5
arg1[0xa] = ecx_21
arg1[0xb] = arg2
arg1[0xd] = arg2 - 2
arg1[0xe] = eax_28 s>> 1
arg1[0xf].b = edx_11.b

if (esi != 0)
    int32_t var_48_6 = esi
    sub_6b4d5b()

int32_t eax_29
eax_29.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_29
