// 函数: sub_4fa0d0
// 地址: 0x4fa0d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71fb4a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_48 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* arg_4
void* ebp = arg_4
int32_t var_4c = arg2
int32_t* ecx
void* eax_3 = sub_501550(ecx, ebp + 0x2c, arg3)

if (eax_3 == 0)
    eax_3.b = 0
else
    eax_3.b = *(eax_3 + 0x48)

char var_2c = eax_3.b
char* eax_4 = operator new(0x84)
char* esi_1

if (eax_4 == 0)
    esi_1 = nullptr
else
    sub_501980(arg4, arg2, eax_4, arg3, arg4.b, arg5, var_2c)
    esi_1 = eax_4

char* edi_1 = esi_1
char* var_34 = edi_1
sub_501a10(arg1, esi_1)
int32_t var_18 = 0
int32_t* eax_6 = sub_416b10(1)
*eax_6 = eax_6
eax_6[1] = eax_6
eax_6[2] = eax_6
eax_6[4].b = 1
*(eax_6 + 0x11) = 1
int32_t var_4 = 0
void* ebx_1 = *arg6
void* var_30 = ebx_1
void var_20
int32_t result

if (ebx_1 != arg6[1])
    while (true)
        int32_t ebp_1 = 0
        int32_t* ebx_2 = ebx_1 + 4
        
        while (true)
            int32_t ecx_4 = *ebx_2
            
            if (ecx_4 s>= 0)
                void* eax_16 = arg_4
                int32_t esi_3 = *(eax_16 + 0x60)
                int32_t eax_17
                int32_t edx_7
                edx_7:eax_17 = muls.dp.d(0x2e8ba2e9, *(eax_16 + 0x64) - esi_3)
                int32_t edx_8 = edx_7 s>> 3
                
                if (ecx_4 s< (edx_8 u>> 0x1f) + edx_8)
                    for (int32_t* i = *(ecx_4 * 0x2c + esi_3 + 0xc); 
                            i != *(ecx_4 * 0x2c + esi_3 + 0x10); i = &i[1])
                        int32_t* var_28
                        sub_416880(&var_20, i, &var_28)
                    
                    ebp_1 += 1
                    ebx_2 = &ebx_2[0xf]
                    
                    if (ebp_1 s>= 3)
                        break
                    
                    continue
            
            int32_t* eax_39 = arg1
            
            if (eax_39[5] u>= 0x10)
                eax_39 = *eax_39
            
            int32_t* var_4c_10 = eax_39
            sub_51ddc0(0x754c08)
            int32_t var_4_1 = 1
            sub_58bc40(&var_20, &arg_4, *eax_6, eax_6)
            int32_t* var_4c_12 = eax_6
            sub_6b4d5b()
            result.b = 0
            goto label_4fa50a
        
        void* esi_4 = arg_4
        char* edi_5 = var_34
        
        if (var_18 s<= *(esi_4 + 0x28))
            sub_4fc3f0(var_30, &edi_5[0x28])
            var_30 += 0xb4
        else
            void* var_4c_4 = esi_4 + 0x60
            sub_501ae0(edi_5)
            int32_t eax_23 = *(esi_4 + 0x54)
            int32_t edx_10
            
            if (&var_34 u< eax_23)
                edx_10 = *(esi_4 + 0x50)
            
            if (&var_34 u>= eax_23 || edx_10 u> &var_34)
                int32_t ecx_13 = *(esi_4 + 0x58)
                
                if (eax_23 == ecx_13)
                    int32_t edx_14 = *(esi_4 + 0x50)
                    int32_t eax_29 = (eax_23 - edx_14) s>> 2
                    
                    if (eax_29 u> 0x3ffffffe)
                        goto label_4fa1ec
                    
                    int32_t ecx_15 = (ecx_13 - edx_14) s>> 2
                    
                    if (eax_29 + 1 u> ecx_15)
                        uint32_t edx_16 = ecx_15 u>> 1
                        int32_t ecx_16
                        
                        if (0x3fffffff - edx_16 u>= ecx_15)
                            ecx_16 = ecx_15 + edx_16
                        else
                            ecx_16 = 0
                        
                        if (ecx_16 u< eax_29 + 1)
                            ecx_16 = eax_29 + 1
                        
                        sub_6b0560(esi_4 + 0x50, ecx_16)
                
                char** eax_31 = *(esi_4 + 0x54)
                
                if (eax_31 != 0)
                    *eax_31 = edi_5
            else
                int32_t ecx_7 = *(esi_4 + 0x58)
                
                if (eax_23 == ecx_7)
                    int32_t eax_25 = (eax_23 - edx_10) s>> 2
                    
                    if (eax_25 u> 0x3ffffffe)
                        goto label_4fa1ec
                    
                    int32_t ecx_9 = (ecx_7 - edx_10) s>> 2
                    
                    if (eax_25 + 1 u> ecx_9)
                        uint32_t edx_12 = ecx_9 u>> 1
                        int32_t ecx_10
                        
                        if (0x3fffffff - edx_12 u>= ecx_9)
                            ecx_10 = ecx_9 + edx_12
                        else
                            ecx_10 = 0
                        
                        if (ecx_10 u< eax_25 + 1)
                            ecx_10 = eax_25 + 1
                        
                        sub_6b0560(esi_4 + 0x50, ecx_10)
                
                int32_t* eax_27 = *(esi_4 + 0x54)
                
                if (eax_27 != 0)
                    *eax_27 = *(*(esi_4 + 0x50) + ((&var_34 - edx_10) s>> 2 << 2))
            
            *(esi_4 + 0x54) += 4
            char* eax_32 = operator new(0x84)
            int32_t* esi_6
            
            if (eax_32 == 0)
                esi_6 = nullptr
            else
                sub_501980(arg3, arg2, eax_32, arg3, arg4.b, arg5, var_2c)
                esi_6 = eax_32
            
            var_34 = esi_6
            sub_501a10(arg1, esi_6)
            int32_t* eax_34 = eax_6
            void** edi_8 = eax_34[1]
            void** esi_7 = edi_8
            
            if (*(edi_8 + 0x11) == 0)
                do
                    sub_4fdc60(esi_7[2])
                    esi_7 = *esi_7
                    void** var_4c_9 = edi_8
                    sub_6b4d5b()
                    edi_8 = esi_7
                while (*(esi_7 + 0x11) == 0)
                
                eax_34 = eax_6
            
            eax_34[1] = eax_34
            *eax_6 = eax_6
            eax_6[2] = eax_6
            var_18 = 0
        
        if (var_30 == arg6[1])
            edi_1 = var_34
            ebp = arg_4
            break
        
        ebx_1 = var_30

void* var_4c_2 = ebp + 0x60
sub_501ae0(edi_1)
int32_t eax_13 = *(ebp + 0x54)
int32_t edx_4

if (&var_34 u< eax_13)
    edx_4 = *(ebp + 0x50)

if (&var_34 u>= eax_13 || edx_4 u> &var_34)
    int32_t ecx_26 = *(ebp + 0x58)
    
    if (eax_13 == ecx_26)
        int32_t edx_25 = *(ebp + 0x50)
        int32_t eax_45 = (eax_13 - edx_25) s>> 2
        
        if (eax_45 u> 0x3ffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        int32_t ecx_28 = (ecx_26 - edx_25) s>> 2
        
        if (eax_45 + 1 u> ecx_28)
            uint32_t edx_27 = ecx_28 u>> 1
            int32_t ecx_29
            
            if (0x3fffffff - edx_27 u>= ecx_28)
                ecx_29 = ecx_28 + edx_27
            else
                ecx_29 = 0
            
            if (ecx_29 u< eax_45 + 1)
                ecx_29 = eax_45 + 1
            
            sub_6b0560(ebp + 0x50, ecx_29)
    
    char** eax_47 = *(ebp + 0x54)
    
    if (eax_47 != 0)
        *eax_47 = edi_1
else
    int32_t ecx_3 = *(ebp + 0x58)
    
    if (eax_13 == ecx_3)
        int32_t eax_15 = (eax_13 - edx_4) s>> 2
        
        if (eax_15 u> 0x3ffffffe)
        label_4fa1ec:
            sub_6b47bf("vector<T> too long")
            noreturn
        
        int32_t ecx_22 = (ecx_3 - edx_4) s>> 2
        
        if (eax_15 + 1 u> ecx_22)
            uint32_t edx_23 = ecx_22 u>> 1
            int32_t ecx_23
            
            if (0x3fffffff - edx_23 u>= ecx_22)
                ecx_23 = ecx_22 + edx_23
            else
                ecx_23 = 0
            
            if (ecx_23 u< eax_15 + 1)
                ecx_23 = eax_15 + 1
            
            sub_6b0560(ebp + 0x50, ecx_23)
    
    int32_t* eax_43 = *(ebp + 0x54)
    
    if (eax_43 != 0)
        *eax_43 = *(*(ebp + 0x50) + ((&var_34 - edx_4) s>> 2 << 2))

*(ebp + 0x54) += 4
int32_t var_4_2 = 2
sub_58bc40(&var_20, &arg_4, *eax_6, eax_6)
int32_t* var_4c_16 = eax_6
sub_6b4d5b()
result.b = 1
label_4fa50a:
fsbase->NtTib.ExceptionList = ExceptionList
return result
