// 函数: sub_4c4680
// 地址: 0x4c4680
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_715100
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_38 = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = *(arg1 + 0x15c)

if (ecx != 0 && *(arg1 + 0xb4) != 0)
    int32_t var_20
    
    if (*(arg1 + 0x124) == 0)
        var_20 = 0
        int32_t var_1c_1 = 0
        int32_t var_18_1 = 0
        int32_t var_4 = 0
        void* esi_1 = *(ecx + 8)
        
        if (esi_1 != 0)
            void* var_3c_1 = ecx
            sub_4d1470(esi_1, &var_20, fconvert.s(float.t(0)))
            sub_517df0(arg1 + 0xc8, &var_20)
        
        sub_517df0(arg1 + 0xc8, &var_20)
        int32_t var_4_1 = 0xffffffff
        ecx = sub_4c86f0(&var_20)
    
    if (*(arg1 + 0x1a4) == 0)
    label_4c47a9:
        var_20 = 0
        int32_t var_1c_2 = 0
        int32_t var_18_2 = 0
        int32_t var_4_2 = 1
        void* esi_6 = *(*(arg1 + 0x15c) + 8)
        
        if (esi_6 != 0)
            void* var_3c_7 = ecx
            int32_t ecx_4
            int80_t st0_2
            st0_2, ecx_4 = sub_4d1470(esi_6, &var_20, 
                fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0x130))))))
            int32_t var_3c_9 = ecx_4
            sub_518120(arg1 + 0xc8, &var_20, 
                fconvert.s(fconvert.t(fconvert.s(float.t(arg2) / fconvert.t(1000.0)))))
        
        sub_517ea0(arg1 + 0xc8, arg1 + 0x1ac)
        int32_t var_4_3 = 0xffffffff
        sub_4c86f0(&var_20)
    else
        void* esi_4 = *(arg1 + 0x164)
        
        if (esi_4 == 0)
            goto label_4c47a9
        
        void* ebp_1 = *(arg1 + 0x15c)
        int32_t eax_4 = sub_4d0950(esi_4)
        int32_t eax_6
        eax_6, ecx = sub_4d0950(ebp_1)
        
        if (eax_6 != eax_4)
            goto label_4c47a9
        
        void* ebp_2 = *(ebp_1 + 8)
        
        if (ebp_2 != 0)
            void* esi_5 = *(esi_4 + 8)
            
            if (esi_5 != 0)
                int32_t* var_48 = arg1 + 0x1ac
                sub_4d16c0(arg1 + 0x1ac, ebp_2, fconvert.s(fconvert.t(*(arg1 + 0x130))), esi_5, 
                    fconvert.s(fconvert.t(*(arg1 + 0x148))), 
                    fconvert.s(fconvert.t(*(arg1 + 0x1a8))))
                fsbase->NtTib.ExceptionList = ExceptionList
                return 

fsbase->NtTib.ExceptionList = ExceptionList
