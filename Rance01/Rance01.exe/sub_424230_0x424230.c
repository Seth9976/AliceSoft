// 函数: sub_424230
// 地址: 0x424230
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71e428
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t edi
int32_t var_48 = edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax_4 = (**arg1)(data_78c474 ^ &var_48)
char* ebx = eax_4
char* var_34 = ebx
char i

do
    i = *eax_4
    eax_4 = &eax_4[1]
while (i != 0)
void* result = eax_4 - &eax_4[1]

if (result s> 0)
    int32_t edi_2 = 0
    char* esi_1 = nullptr
    char* ecx_1 = nullptr
    char* var_28 = nullptr
    char* var_24_1 = nullptr
    int32_t var_20_1 = 0
    void* edx_2 = nullptr
    int32_t var_c_1 = 0
    void* var_38_1 = nullptr
    char var_39
    
    if (result s> 0)
        while (true)
            int32_t eax_6
            int32_t edx_3
            edx_3:eax_6 = sx.q(zx.d(*(edx_2 + ebx)))
            var_39 = (divs.dp.d(edx_3:eax_6, 0x1a) + 0x41).b
            void* ebx_1
            
            if (&var_39 u>= ecx_1 || esi_1 u> &var_39)
                if (ecx_1 == edi_2)
                    void* eax_12 = ecx_1 - esi_1
                    
                    if (eax_12 u> 0xfffffffe)
                        goto label_424482
                    
                    void* edx_9 = edi_2 - esi_1
                    
                    if (eax_12 + 1 u> edx_9)
                        uint32_t edx_10 = edx_9 u>> 1
                        void* ecx_5
                        
                        if (0xffffffff - edx_10 u>= edx_9)
                            ecx_5 = edx_9 + edx_10
                        else
                            ecx_5 = nullptr
                        
                        if (ecx_5 u< eax_12 + 1)
                            ecx_5 = eax_12 + 1
                        
                        sub_424860(&var_28, ecx_5)
                        edi_2 = var_20_1
                        ecx_1 = var_24_1
                        esi_1 = var_28
                
                if (ecx_1 != 0)
                    *ecx_1 = (divs.dp.d(edx_3:eax_6, 0x1a) + 0x41).b
            else
                ebx_1 = &var_39 - esi_1
                
                if (ecx_1 == edi_2)
                    void* eax_10 = ecx_1 - esi_1
                    
                    if (eax_10 u> 0xfffffffe)
                        goto label_424482
                    
                    void* edx_6 = edi_2 - esi_1
                    
                    if (eax_10 + 1 u> edx_6)
                        uint32_t edx_7 = edx_6 u>> 1
                        char* ecx_3
                        
                        if (0xffffffff - edx_7 u>= edx_6)
                            ecx_3 = edx_6 + edx_7
                        else
                            ecx_3 = nullptr
                        
                        if (ecx_3 u< eax_10 + 1)
                            ecx_3 = eax_10 + 1
                        
                        sub_424860(&var_28, ecx_3)
                        edi_2 = var_20_1
                        ecx_1 = var_24_1
                        esi_1 = var_28
                
                if (ecx_1 != 0)
                    char* eax_8
                    eax_8.b = *(esi_1 + ebx_1)
                    *ecx_1 = eax_8.b
            
            ebx_1.b = (mods.dp.d(edx_3:eax_6, 0x1a)).b
            char* ecx_6 = &ecx_1[1]
            ebx_1.b += 0x41
            var_39 = ebx_1.b
            
            if (&var_39 u>= ecx_6 || esi_1 u> &var_39)
                if (ecx_6 == edi_2)
                    void* eax_18 = ecx_6 - esi_1
                    
                    if (eax_18 u> 0xfffffffe)
                        goto label_424482
                    
                    void* edx_15 = edi_2 - esi_1
                    
                    if (eax_18 + 1 u> edx_15)
                        uint32_t edx_16 = edx_15 u>> 1
                        void* ecx_10
                        
                        if (0xffffffff - edx_16 u>= edx_15)
                            ecx_10 = edx_15 + edx_16
                        else
                            ecx_10 = nullptr
                        
                        if (ecx_10 u< eax_18 + 1)
                            ecx_10 = eax_18 + 1
                        
                        sub_424860(&var_28, ecx_10)
                        edi_2 = var_20_1
                        esi_1 = var_28
                
                if (ecx_6 != 0)
                    *ecx_6 = ebx_1.b
            else
                char* ebx_2 = &var_39 - esi_1
                void* edx_11
                
                if (ecx_6 == edi_2)
                    void* eax_15 = ecx_6 - esi_1
                    
                    if (eax_15 u> 0xfffffffe)
                        goto label_424482
                    
                    edx_11 = edi_2 - esi_1
                    
                    if (eax_15 + 1 u> edx_11)
                        uint32_t edx_13 = edx_11 u>> 1
                        void* ecx_8
                        
                        if (0xffffffff - edx_13 u>= edx_11)
                            ecx_8 = edx_11 + edx_13
                        else
                            ecx_8 = nullptr
                        
                        if (ecx_8 u< eax_15 + 1)
                            ecx_8 = eax_15 + 1
                        
                        sub_424860(&var_28, ecx_8)
                        edi_2 = var_20_1
                        esi_1 = var_28
                
                if (ecx_6 != 0)
                    edx_11.b = *(ebx_2 + esi_1)
                    *ecx_6 = edx_11.b
            
            edx_2 = var_38_1 + 1
            ecx_1 = &ecx_6[1]
            var_24_1 = ecx_1
            var_38_1 = edx_2
            
            if (edx_2 s>= result)
                break
            
            ebx = var_34
    
    var_39 = 0
    
    if (&var_39 u>= ecx_1 || esi_1 u> &var_39)
        if (ecx_1 == edi_2)
            void* eax_24 = ecx_1 - esi_1
            
            if (eax_24 u> 0xfffffffe)
                sub_6b47bf("vector<T> too long")
                noreturn
            
            void* edi_4 = edi_2 - esi_1
            
            if (eax_24 + 1 u> edi_4)
                uint32_t edx_21 = edi_4 u>> 1
                void* ecx_14
                
                if (0xffffffff - edx_21 u>= edi_4)
                    ecx_14 = edi_4 + edx_21
                else
                    ecx_14 = nullptr
                
                if (ecx_14 u< eax_24 + 1)
                    ecx_14 = eax_24 + 1
                
                sub_424860(&var_28, ecx_14)
                ecx_1 = var_24_1
                esi_1 = var_28
        
        if (ecx_1 != 0)
            *ecx_1 = 0
    else
        char* ebx_3 = &var_39 - esi_1
        
        if (ecx_1 == edi_2)
            void* eax_21 = ecx_1 - esi_1
            
            if (eax_21 u> 0xfffffffe)
            label_424482:
                sub_6b47bf("vector<T> too long")
                noreturn
            
            void* edi_3 = edi_2 - esi_1
            
            if (eax_21 + 1 u> edi_3)
                uint32_t edx_19 = edi_3 u>> 1
                char* ecx_12
                
                if (0xffffffff - edx_19 u>= edi_3)
                    ecx_12 = edi_3 + edx_19
                else
                    ecx_12 = nullptr
                
                if (ecx_12 u< eax_21 + 1)
                    ecx_12 = eax_21 + 1
                
                sub_424860(&var_28, ecx_12)
                ecx_1 = var_24_1
                esi_1 = var_28
        
        if (ecx_1 != 0)
            char* eax_22
            eax_22.b = *(ebx_3 + esi_1)
            *ecx_1 = eax_22.b
    
    void* var_24_3 = &ecx_1[1]
    (*(*arg1 + 4))(esi_1)
    
    if (esi_1 != 0)
        char* var_50_8 = esi_1
        sub_6b4d5b()

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
