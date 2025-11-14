// 函数: sub_4f93a0
// 地址: 0x4f93a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_717660
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_68
int32_t eax_2 = data_78c474 ^ &var_68
int32_t __saved_edi
int32_t var_78 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = *(arg1 + 0x24)
int32_t eax_6
int32_t edx_2
edx_2:eax_6 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0x28) - ecx)
int32_t edx_3 = edx_2 s>> 3
int32_t result = (edx_3 u>> 0x1f) + edx_3
var_68 = 0

if (result s> 0)
    void* edi_1 = nullptr
    int32_t ebp_3
    
    do
        int32_t var_44_1 = 0xf
        int32_t var_48_1 = 0
        char var_58 = 0
        sub_401180(&var_58, 0xffffffff, edi_1 + ecx + 4, 0)
        int32_t var_4 = 0
        int32_t edx_4 = *(arg1 + 0x24)
        int32_t ecx_3 = *(edi_1 + edx_4 + 0x24)
        int32_t ebp_1 = *(edi_1 + edx_4 + 0x20)
        int32_t edx_5 = *(edi_1 + edx_4 + 0x28)
        bool cond:0_1
        
        if (var_48_1 != 0)
            struct sealengine::CPolyTexture::VTable* const var_3c =
                &sealengine::CPolyTexture::`vftable'
            int32_t var_24_1 = 0xf
            int32_t var_28_1 = 0
            char var_38 = 0
            sub_401180(&var_38, 0xffffffff, &var_58, 0)
            int32_t var_1c_1 = ebp_1
            int32_t var_18_1 = ecx_3
            int32_t var_14_1 = edx_5
            var_4.b = 1
            sub_4fc470(&var_3c, arg2)
            var_3c = &sealengine::CPolyTexture::`vftable'
            
            if (var_24_1 u>= 0x10)
                int32_t var_7c_2 = var_38.d
                sub_6b4d5b()
            
            int32_t var_4_2 = 0xffffffff
            cond:0_1 = var_44_1 u< 0x10
            int32_t var_24_2 = 0xf
            int32_t var_28_2 = 0
            var_38 = 0
        else
            int32_t var_4_1 = 0xffffffff
            cond:0_1 = var_44_1 u< 0x10
        
        if (not(cond:0_1))
            int32_t var_7c_3 = var_58.d
            sub_6b4d5b()
        
        ecx = *(arg1 + 0x24)
        int32_t eax_12
        int32_t edx_10
        edx_10:eax_12 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0x28) - ecx)
        int32_t edx_11 = edx_10 s>> 3
        ebp_3 = var_68 + 1
        result = (edx_11 u>> 0x1f) + edx_11
        edi_1 += 0x2c
        var_68 = ebp_3
    while (ebp_3 s< result)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_68)
return result
