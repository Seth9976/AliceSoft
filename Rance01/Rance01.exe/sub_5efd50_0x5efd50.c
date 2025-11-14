// 函数: sub_5efd50
// 地址: 0x5efd50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_72831b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg1
sub_5efce0(edi)
int32_t* i = *arg3
int32_t* i_1 = i

while (i != arg3[1])
    int32_t ebp_1 = i[2]
    void* ebx_1 = *i
    
    if (ebp_1 s>= arg2)
        int32_t* esi_1 = operator new(0x10)
        int32_t* var_14 = esi_1
        int32_t var_4 = 0
        
        if (esi_1 == 0)
            esi_1 = nullptr
        else
            esi_1[1] = ebp_1
            esi_1[2] = 0
            esi_1[3].b = 0
            *esi_1 = ebx_1
            void* eax_5
            struct partsengine::ISound::partsengine::CSound::VTable** ecx_2
            eax_5, ecx_2 = sub_5f9980(arg4, arg4 + 0xc, ebx_1)
            void* edi_1 = eax_5
            
            if (edi_1 != 0)
            label_5efdfe:
                uint32_t eax_10 = zx.d(sub_5f9790(edi_1, ebx_1))
                int32_t eax_11 = neg.d(eax_10)
                edi = arg1
                esi_1[2] = sbb.d(eax_11, eax_11, eax_10 != 0) & edi_1
            else
                void* eax_7 = sub_5f99d0(ecx_2, arg4, arg4 + 0xc)
                edi_1 = eax_7
                
                if (edi_1 != 0)
                    goto label_5efdfe
                
                edi = arg1
                esi_1[2] = eax_7
        
        int32_t var_4_1 = 0xffffffff
        int32_t eax_14 = edi[1]
        var_14 = esi_1
        int32_t ecx_3
        
        if (&var_14 u< eax_14)
            ecx_3 = *edi
        
        if (&var_14 u>= eax_14 || ecx_3 u> &var_14)
            if (eax_14 == edi[2])
                sub_4307a0(edi)
            
            void** eax_18 = edi[1]
            
            if (eax_18 != 0)
                *eax_18 = esi_1
        else
            if (eax_14 == edi[2])
                sub_4307a0(edi)
            
            int32_t* eax_16 = edi[1]
            
            if (eax_16 != 0)
                *eax_16 = *(*edi + ((&var_14 - ecx_3) s>> 2 << 2))
        
        i = i_1
        edi[1] += 4
    
    i = &i[0x1b]
    i_1 = i

i.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return i
