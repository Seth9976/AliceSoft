// 函数: sub_613860
// 地址: 0x613860
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7234cb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_a8
int32_t eax_2 = data_78c474 ^ &var_a8
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* const var_c4 = &data_7350f0
sub_402cb0(arg4, &data_7350f0, 2)
int32_t* edi_1 = *(*(arg1 + 0xd0) + 0xc)
int32_t* var_98 = edi_1
int32_t* eax_8 = (*(*edi_1 + 4))(arg2)
int32_t* esi_1 = nullptr
int32_t* result

if (eax_8 != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** var_90 = nullptr
    int32_t var_8c_1 = 0
    int32_t var_88_1 = 0
    int32_t var_4 = 0
    int32_t var_a4_1 = 0
    int32_t ebx_1 = 0
    int32_t eax_12
    int32_t edx_2
    edx_2:eax_12 = sx.q((*(*eax_8 + 0x14))(eax_4))
    
    if ((eax_12 + (edx_2 & 3)) s>> 2 s> 0)
        int32_t eax_16 = arg3 - 0xe
        int32_t var_94_1 = eax_16
        
        while (true)
            int32_t var_6c_1 = 0xf
            int32_t var_70_1 = 0
            char var_80 = 0
            var_4.b = 1
            
            switch (eax_16)
                case 0
                    int32_t var_c0_1 = *((*(*eax_8 + 0x18))() + (ebx_1 << 2))
                    var_c4 = &data_7350f8
                    var_4.b = 2
                    sub_401ef0(&var_80, sub_4104a0(&data_7350f8))
                    var_4.b = 1
                    int32_t var_34
                    
                    if (var_34 u>= 0x10)
                        int32_t var_48
                        int32_t var_c0_2 = var_48
                        sub_6b4d5b()
                case 1
                    var_c4.q = fconvert.d(fconvert.t(*((*(*eax_8 + 0x18))() + (ebx_1 << 2))))
                    var_4.b = 3
                    sub_401ef0(&var_80, sub_4104a0(0x7350fc))
                    var_4.b = 1
                    int32_t var_50
                    
                    if (var_50 u>= 0x10)
                        int32_t var_64
                        int32_t var_c0_3 = var_64
                        sub_6b4d5b()
                case 2
                    int32_t* eax_28 = (*(*edi_1 + 4))(*((*(*eax_8 + 0x18))() + (ebx_1 << 2)))
                    
                    if (eax_28 != 0)
                        int32_t var_c0_5 = (*(*eax_28 + 0x18))()
                        var_c4 = ""%s""
                        var_4.b = 4
                        sub_401ef0(&var_80, sub_4104a0(""%s""))
                        var_4.b = 1
                        int32_t var_18
                        
                        if (var_18 u>= 0x10)
                            int32_t var_2c
                            int32_t var_c0_6 = var_2c
                            sub_6b4d5b()
                case 3
                    sub_6133d0(arg1, &var_80, *((*(*eax_8 + 0x18))() + (ebx_1 << 2)))
            
            if (var_a4_1 s< var_70_1)
                var_a4_1 = var_70_1
            
            sub_405220(&var_80, &var_90)
            var_4.b = 0
            
            if (var_6c_1 u>= 0x10)
                int32_t var_c0_8 = var_80.d
                sub_6b4d5b()
            
            ebx_1 += 1
            int32_t eax_38
            int32_t edx_12
            edx_12:eax_38 = sx.q((*(*eax_8 + 0x14))())
            
            if (ebx_1 s>= (eax_38 + (edx_12 & 3)) s>> 2)
                break
            
            edi_1 = var_98
            eax_16 = var_94_1
        
        esi_1 = var_90
    
    int32_t i = 0
    int32_t eax_43
    int32_t edx_15
    edx_15:eax_43 = sx.q((*(*eax_8 + 0x14))())
    
    if ((eax_43 + (edx_15 & 3)) s>> 2 s> 0)
        int32_t* edi_6 = &esi_1[4]
        int32_t eax_57
        int32_t edx_24
        
        do
            sub_402000(arg4, &edi_6[-4], 0, 0xffffffff)
            int32_t j = 0
            
            if (var_a4_1 - *edi_6 s> 0)
                do
                    sub_402cb0(arg4, 0x735108, 1)
                    j += 1
                while (j s< var_a4_1 - *edi_6)
            
            sub_402cb0(arg4, 0x73510c, 1)
            
            if (i s% 0xa == 9)
                sub_402cb0(arg4, 0x735110, 1)
            
            i += 1
            edi_6 = &edi_6[7]
            edx_24:eax_57 = sx.q((*(*eax_8 + 0x14))())
        while (i s< (eax_57 + (edx_24 & 3)) s>> 2)
        esi_1 = var_90
    
    int32_t ecx_19
    result, ecx_19 = sub_402cb0(arg4, 0x735114, 2)
    
    if (esi_1 != 0)
        struct _EXCEPTION_REGISTRATION_RECORD** ebx_2 = var_90
        
        if (ebx_2 != var_8c_1)
            do
                if (esi_1[5] u>= 0x10)
                    int32_t var_c0_9 = *esi_1
                    sub_6b4d5b()
                
                esi_1[5] = 0xf
                esi_1[4] = 0
                *esi_1 = 0
                esi_1 = &esi_1[7]
            while (esi_1 != var_8c_1)
        
        struct _EXCEPTION_REGISTRATION_RECORD** var_c0_10 = ebx_2
        result = sub_6b4d5b()
else
    result = sub_402cb0(arg4, 0x7350f4, 1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_a8)
return result
