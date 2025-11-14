// 函数: sub_42f6d0
// 地址: 0x42f6d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72831b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_42f670(arg1)
int32_t* esi = arg2
int32_t** result = *esi

if (&result[1] u> esi[1])
    result.b = 0
else
    int32_t ebp_7 =
        ((zx.d(*(result + 3)) << 8 | zx.d(*(result + 2))) << 8 | zx.d(*(result + 1))) << 8
        | zx.d(*result)
    *esi = &result[1]
    int32_t** result_1 = nullptr
    
    if (ebp_7 s> 0)
        while (true)
            struct IInterface::partsengine::CFlatLayerData::VTable** eax_3
            uint32_t ecx_3
            eax_3, ecx_3 = operator new(0x5c)
            struct IInterface::partsengine::CFlatLayerData::VTable** var_14 = eax_3
            int32_t var_4 = 0
            struct IInterface::partsengine::CFlatLayerData::VTable** edi_1
            
            if (eax_3 == 0)
                edi_1 = nullptr
            else
                struct IInterface::partsengine::CFlatLayerData::VTable** eax_4
                eax_4, ecx_3 = sub_42d9b0(eax_3)
                edi_1 = eax_4
            
            int32_t var_4_1 = 0xffffffff
            var_14 = edi_1
            
            if (sub_42dc20(ecx_3, esi, edi_1).b == 0)
                if (edi_1 != 0)
                    sub_42da70(edi_1)
                    struct IInterface::partsengine::CFlatLayerData::VTable** var_30_3 = edi_1
                    sub_6b4d5b()
                
                break
            
            int32_t eax_5 = *(arg1 + 0xc)
            int32_t ecx_4
            
            if (&var_14 u< eax_5)
                ecx_4 = *(arg1 + 8)
            
            if (&var_14 u>= eax_5 || ecx_4 u> &var_14)
                if (eax_5 == *(arg1 + 0x10))
                    sub_4307a0(arg1 + 8)
                
                void** eax_9 = *(arg1 + 0xc)
                
                if (eax_9 != 0)
                    *eax_9 = edi_1
            else
                if (eax_5 == *(arg1 + 0x10))
                    sub_4307a0(arg1 + 8)
                
                int32_t* eax_7 = *(arg1 + 0xc)
                
                if (eax_7 != 0)
                    *eax_7 = *(*(arg1 + 8) + ((&var_14 - ecx_4) s>> 2 << 2))
            
            *(arg1 + 0xc) += 4
            struct IInterface::partsengine::CFlatLayerData::VTable** ecx_7 =
                edi_1[0x12] + edi_1[0x11] - 1
            bool cond:0_1 = *(arg1 + 0x18) s< ecx_7
            var_14 = ecx_7
            void* ecx_8 = &var_14
            
            if (not(cond:0_1))
                ecx_8 = arg1 + 0x18
            
            *(arg1 + 0x18) = *ecx_8
            result = result_1 + 1
            result_1 = result
            
            if (result s>= ebp_7)
                goto label_42f73e
            
            esi = arg2
        
        result.b = 0
    else
    label_42f73e:
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
