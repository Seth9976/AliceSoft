// 函数: sub_684bc0
// 地址: 0x684bc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7285bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* arg_4
void* ebx = arg_4
int32_t esi = *(ebx + 0x1c)
int32_t edi = *(ebx + 0x18)
sub_5ee6d0(edi, esi, (esi - edi) s/ 0x6c)
int32_t esi_1 = *(ebx + 0x2c)
int32_t edi_1 = *(ebx + 0x28)
sub_5ee6d0(edi_1, esi_1, (esi_1 - edi_1) s/ 0x6c)
void* i = *(ebx + 0x18)
int32_t ecx_7 = *(ebx + 0x1c)
int32_t* edx_4 = nullptr
arg_4 = nullptr

for (; i != ecx_7; i += 0x6c)
    int32_t* esi_2 = *(i + 0xc)
    
    if (edx_4 s< esi_2)
        edx_4 = esi_2

int32_t* var_14 = edx_4
int32_t* eax_8 = &var_14

if (edx_4 s<= 0)
    eax_8 = &arg_4

void* edi_2 = *eax_8
void* i_1 = *(ebx + 0x28)
int32_t esi_3 = *(ebx + 0x2c)
int32_t* ecx_8 = nullptr
arg_4 = edi_2

for (; i_1 != esi_3; i_1 += 0x6c)
    int32_t* edx_5 = *(i_1 + 0xc)
    
    if (ecx_8 s< edx_5)
        ecx_8 = edx_5

var_14 = ecx_8
int32_t* eax_9 = &var_14

if (edi_2 s>= ecx_8)
    eax_9 = &arg_4

int32_t esi_4 = *(ebx + 0x5c)
int32_t ebp = *(ebx + 0x58)
arg_4 = *eax_9
sub_5ee6d0(ebp, esi_4, (esi_4 - ebp) s/ 0x6c)
sub_5efce0(ebx + 0x68)
int32_t* eax_15 = *(ebx + 0x58)
var_14 = eax_15

if (eax_15 != *(ebx + 0x5c))
    while (true)
        int32_t* esi_5 = *eax_15
        int32_t edi_3 = eax_15[2]
        int32_t* var_18 = esi_5
        int32_t* ebp_1 = operator new(0x10)
        int32_t* var_10_1 = ebp_1
        int32_t var_4 = 0
        
        if (ebp_1 == 0)
            ebp_1 = nullptr
        else
            *ebp_1 = esi_5
            ebp_1[1] = edi_3
            ebp_1[2] = 0
            ebp_1[3].b = 0
            sub_5f9b30(ebx + 0x174)
            sub_5f9b30(ebx + 0x184)
            int32_t* edi_4 = *(ebx + 0x174)
            struct partsengine::ISound::partsengine::CSound::VTable** ecx_15 = *(ebx + 0x178)
            void* edi_5
            
            if (edi_4 != ecx_15)
                int32_t* eax_20
                
                while (true)
                    eax_20 = *edi_4
                    
                    if (eax_20 != 0 && eax_20[9] == var_18)
                        break
                    
                    edi_4 = &edi_4[1]
                    
                    if (edi_4 == ecx_15)
                        goto label_684db5
                
                ecx_15 = (**eax_20)(eax_2)
                edi_5 = *edi_4
                
                if (edi_5 != 0)
                    goto label_684dd1
                
                goto label_684db5
            
        label_684db5:
            void* eax_23 = sub_5f99d0(ecx_15, ebx + 0x168, ebx + 0x174)
            edi_5 = eax_23
            
            if (edi_5 != 0)
            label_684dd1:
                uint32_t eax_27 = zx.d(sub_5f9790(edi_5, var_18))
                int32_t eax_28 = neg.d(eax_27)
                ebp_1[2] = sbb.d(eax_28, eax_28, eax_27 != 0) & edi_5
            else
                ebp_1[2] = eax_23
        
        int32_t var_4_1 = 0xffffffff
        int32_t eax_31 = *(ebx + 0x6c)
        var_18 = ebp_1
        int32_t edx_12
        
        if (&var_18 u< eax_31)
            edx_12 = *(ebx + 0x68)
        
        if (&var_18 u>= eax_31 || edx_12 u> &var_18)
            int32_t ecx_22 = *(ebx + 0x70)
            
            if (eax_31 == ecx_22)
                int32_t edx_16 = *(ebx + 0x68)
                int32_t eax_37 = (eax_31 - edx_16) s>> 2
                
                if (eax_37 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_24 = (ecx_22 - edx_16) s>> 2
                
                if (eax_37 + 1 u> ecx_24)
                    uint32_t edx_18 = ecx_24 u>> 1
                    int32_t ecx_25
                    
                    if (0x3fffffff - edx_18 u>= ecx_24)
                        ecx_25 = ecx_24 + edx_18
                    else
                        ecx_25 = 0
                    
                    if (ecx_25 u< eax_37 + 1)
                        ecx_25 = eax_37 + 1
                    
                    sub_6b0560(ebx + 0x68, ecx_25)
            
            int32_t** eax_39 = *(ebx + 0x6c)
            
            if (eax_39 != 0)
                *eax_39 = ebp_1
        else
            int32_t ecx_17 = *(ebx + 0x70)
            
            if (eax_31 == ecx_17)
                int32_t eax_33 = (eax_31 - edx_12) s>> 2
                
                if (eax_33 u> 0x3ffffffe)
                    sub_6b47bf("vector<T> too long")
                    noreturn
                
                int32_t ecx_19 = (ecx_17 - edx_12) s>> 2
                
                if (eax_33 + 1 u> ecx_19)
                    uint32_t edx_14 = ecx_19 u>> 1
                    int32_t ecx_20
                    
                    if (0x3fffffff - edx_14 u>= ecx_19)
                        ecx_20 = ecx_19 + edx_14
                    else
                        ecx_20 = 0
                    
                    if (ecx_20 u< eax_33 + 1)
                        ecx_20 = eax_33 + 1
                    
                    sub_6b0560(ebx + 0x68, ecx_20)
            
            int32_t* eax_35 = *(ebx + 0x6c)
            
            if (eax_35 != 0)
                *eax_35 = *(*(ebx + 0x68) + ((&var_18 - edx_12) s>> 2 << 2))
        
        int32_t* eax_40 = var_14
        *(ebx + 0x6c) += 4
        var_14 = &eax_40[0x1b]
        
        if (&eax_40[0x1b] == *(ebx + 0x5c))
            break
        
        eax_15 = var_14

void* eax_16 = *(ebx + 0x58)
int32_t ebx_1 = *(ebx + 0x5c)
int32_t* ecx_11 = nullptr

if (eax_16 != ebx_1)
    ecx_11 = nullptr
    
    do
        int32_t* edx_9 = *(eax_16 + 0xc)
        
        if (ecx_11 s< edx_9)
            ecx_11 = edx_9
        
        eax_16 += 0x6c
    while (eax_16 != ebx_1)

var_14 = ecx_11
int32_t* eax_17 = &var_14

if (arg_4 s>= ecx_11)
    eax_17 = &arg_4

fsbase->NtTib.ExceptionList = ExceptionList
return *eax_17
