// 函数: sub_5f1f40
// 地址: 0x5f1f40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7275a3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_cc
int32_t eax_2 = data_78c474 ^ &var_cc
int32_t __saved_edi
int32_t var_dc = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result_4 = nullptr
int32_t var_24 = 0xf
int32_t var_28 = 0
char var_38 = 0
int32_t var_c_1 = 0
void* result_3 = nullptr
int32_t var_bc = 0
int32_t var_b8 = 0
var_c_1.b = 1

if (sub_410070(arg2, &var_38).b == 0)
    goto label_5f2113

char* ecx = *arg2
void* result

if (&ecx[4] u<= arg2[1])
    uint32_t eax_11 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
    *arg2 = &ecx[4]
    uint32_t var_b0
    
    if (sub_5546f0(arg2, &var_b0).b == 0)
        goto label_5f2113
    
    int32_t ebx_3 = 0
    uint32_t var_ac
    
    if (var_b0 s> 0)
        do
            char* eax_12 = *arg2
            
            if (&eax_12[4] u> arg2[1])
                result = result_3
                
                if (result == 0)
                    goto label_5f2113
                
                void* result_1 = result
                goto label_5f210b
            
            var_ac = ((zx.d(eax_12[3]) << 8 | zx.d(eax_12[2])) << 8 | zx.d(eax_12[1])) << 8
                | zx.d(*eax_12)
            *arg2 = &eax_12[4]
            sub_416780(&var_ac, &result_3)
            ebx_3 += 1
        while (ebx_3 s< var_b0)
        
        result_4 = result_3
    
    result = *arg2
    int32_t edx_9 = arg2[1]
    
    if (result + 4 u> edx_9)
        if (result_4 == 0)
            goto label_5f2113
        
        void* result_5 = result_4
    label_5f210b:
        sub_6b4d5b()
    label_5f2113:
        
        if (var_24 u< 0x10)
            result.b = 0
        else
            int32_t var_e0_4 = var_38.d
            sub_6b4d5b()
            result.b = 0
    else
        uint32_t ebx_10 =
            ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8 | zx.d(*(result + 1))) << 8
            | zx.d(*result)
        *arg2 = result + 4
        
        if (result + 5 u> edx_9)
            result = result_3
            
            if (result != 0)
                void* result_2 = result
                sub_6b4d5b()
            
            if (var_24 u< 0x10)
                result.b = 0
            else
                int32_t var_e0_5 = var_38.d
                sub_6b4d5b()
                result.b = 0
        else
            bool cond:0_1 = *(result + 4) == 1
            *arg2 = result + 5
            uint32_t var_84
            
            if (sub_5546f0(arg2, &var_84) != 0)
                uint32_t var_6c
                
                if (sub_5546f0(arg2, &var_6c) == 0)
                    goto label_5f20c9
                
                uint32_t var_88
                
                if (sub_5546f0(arg2, &var_88) == 0)
                    goto label_5f20c9
                
                uint32_t var_9c
                
                if (sub_5546f0(arg2, &var_9c) == 0)
                    goto label_5f20c9
                
                uint32_t var_94
                
                if (sub_5546f0(arg2, &var_94) == 0)
                    goto label_5f20c9
                
                uint32_t var_8c
                
                if (sub_5546f0(arg2, &var_8c) == 0)
                    goto label_5f20c9
                
                float var_a8
                
                if (sub_40ff40(arg2, arg2, &var_a8) == 0)
                    goto label_5f20c9
                
                float var_90
                
                if (sub_40ff40(&var_90, arg2, &var_90) == 0)
                    goto label_5f20c9
                
                uint32_t var_98
                
                if (sub_5546f0(arg2, &var_98) == 0)
                    goto label_5f20c9
                
                uint32_t var_70
                
                if (sub_5546f0(arg2, &var_70) == 0)
                    goto label_5f20c9
                
                uint32_t var_a4
                
                if (sub_5546f0(arg2, &var_a4) == 0)
                    goto label_5f20c9
                
                int32_t var_80
                
                if (sub_40fea0(arg2, &var_80) == 0)
                    goto label_5f20c9
                
                uint32_t var_7c
                sub_5546f0(arg2, &var_7c)
                uint32_t var_74
                
                if (sub_5546f0(arg2, &var_74) == 0)
                    goto label_5f20c9
                
                uint32_t var_78
                
                if (sub_5546f0(arg2, &var_78) == 0)
                    goto label_5f20c9
                
                if (sub_5546f0(arg2, &var_b0) == 0)
                    goto label_5f20c9
                
                if (sub_5546f0(arg2, &var_ac) == 0)
                    goto label_5f20c9
                
                sub_5f0360(var_74, var_ac, var_b0, var_78, arg1)
                void* esi_4
                
                if (eax_11 == 0)
                    esi_4 = arg1
                    sub_5f0c20(esi_4, &var_38)
                else if (eax_11 == 1)
                    esi_4 = arg1
                    sub_5f0c90(esi_4, &var_38, &result_3)
                else
                    if (eax_11 != 2)
                        goto label_5f20c9
                    
                    esi_4 = arg1
                    void var_68
                    sub_5f0ce0(esi_4, 
                        sub_5e0090(var_8c, var_94, var_9c, var_a4, &var_68, var_6c, var_88, 
                            fconvert.s(fconvert.t(var_a8)), fconvert.s(fconvert.t(var_90)), var_70, 
                            var_98), 
                        var_80.b)
                
                *(esi_4 + 0x314) = ebx_10
                int32_t edx_18 = sub_5f0de0(esi_4)
                
                if (*(esi_4 + 0x318) != cond:0_1)
                    *(esi_4 + 0x318) = cond:0_1
                    *(esi_4 + 0x350) = 1
                
                uint32_t eax_42 = var_84
                
                if (*(esi_4 + 0x31c) != eax_42)
                    *(esi_4 + 0x31c) = eax_42
                    *(esi_4 + 0x350) = 1
                
                sub_5f0d90(esi_4, edx_18, var_7c)
                sub_65ab60(&result_3)
                sub_401110(&var_38)
                result.b = 1
            else
            label_5f20c9:
                sub_65ab60(&result_3)
                sub_401110(&var_38)
                result.b = 0
else if (var_24 u< 0x10)
    result.b = 0
else
    int32_t var_e0_3 = var_38.d
    sub_6b4d5b()
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_cc)
return result
