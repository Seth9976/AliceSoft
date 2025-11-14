// 函数: sub_4d1180
// 地址: 0x4d1180
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b668
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = data_78c474 ^ &var_50
int32_t __saved_edi
int32_t var_64 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg2
void* ebx = arg1
*(ebx + 8) = *(ebp + 8)
int32_t eax_6
int32_t edx
edx:eax_6 = muls.dp.d(0x4ec4ec4f, *(ebp + 0x10) - *(ebp + 0xc))
int32_t edx_1 = edx s>> 4
int32_t esi_2 = (edx_1 u>> 0x1f) + edx_1
void* var_44 = ebx
void* var_3c = ebp
sub_4d2b10(esi_2, ebx + 0xc)
int32_t var_4c = 0
void** eax_8

if (esi_2 s> 0)
    int32_t var_48_1 = 0
    int32_t var_40_1 = 0
    
    while (true)
        int32_t* ebx_2 = *(ebx + 0xc) + var_40_1
        int32_t var_4 = 0
        int32_t var_2c
        sub_401ef0(ebx_2, sub_4cfaf0(var_4c, &var_2c, ebp))
        int32_t var_4_1 = 0xffffffff
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_68_1 = var_2c
            sub_6b4d5b()
        
        int32_t edi_3 = var_4c
        int32_t edx_3
        int32_t esi_5
        
        if (edi_3 s>= 0)
            esi_5 = *(ebp + 0xc)
            int32_t eax_11
            int32_t edx_2
            edx_2:eax_11 = muls.dp.d(0x4ec4ec4f, *(ebp + 0x10) - esi_5)
            edx_3 = edx_2 s>> 4
        
        int32_t esi_6
        
        if (edi_3 s< 0 || edi_3 s>= (edx_3 u>> 0x1f) + edx_3)
            esi_6 = 0xffffffff
        else
            esi_6 = *(esi_5 + var_48_1 + 0x1c)
        
        ebx_2[7] = esi_6
        int32_t edx_6
        int32_t esi_7
        
        if (edi_3 s>= 0)
            esi_7 = *(ebp + 0xc)
            int32_t eax_12
            int32_t edx_5
            edx_5:eax_12 = muls.dp.d(0x4ec4ec4f, *(ebp + 0x10) - esi_7)
            edx_6 = edx_5 s>> 4
        
        int32_t esi_8
        
        if (edi_3 s< 0 || edi_3 s>= (edx_6 u>> 0x1f) + edx_6)
            esi_8 = 0xffffffff
        else
            esi_8 = *(esi_7 + var_48_1 + 0x20)
        
        ebx_2[8] = esi_8
        int32_t esi_9 = *(var_44 + 8)
        void* ecx_11 = ebx_2[0xb]
        int32_t edx_8 = ebx_2[0xa]
        eax_8 = (ecx_11 - edx_8) s>> 5
        void* var_30
        
        if (eax_8 u> esi_9)
            sub_4cfc90(&ebx_2[0xa], &var_30, (esi_9 << 5) + edx_8, ecx_11)
        else if (eax_8 u< esi_9)
            void* ecx_13 = esi_9 - eax_8
            
            if (0x7ffffff - ecx_13 u< eax_8)
                sub_6b47bf("vector<T> too long")
                noreturn
            
            void* edi_5 = eax_8 + ecx_13
            int32_t ecx_16 = (ebx_2[0xc] - edx_8) s>> 5
            
            if (edi_5 u> ecx_16)
                uint32_t eax_20 = ecx_16 u>> 1
                void* ecx_17
                
                if (0x7ffffff - eax_20 u>= ecx_16)
                    ecx_17 = ecx_16 + eax_20
                else
                    ecx_17 = nullptr
                
                if (ecx_17 u< edi_5)
                    ecx_17 = edi_5
                
                sub_4cfde0(&ebx_2[0xa], ecx_17)
            
            struct sealengine::CSQT::VTable** eax_21 = ebx_2[0xb]
            void* var_68_4 = var_30
            int32_t edx_12 = (eax_21 - ebx_2[0xa]) s>> 5
            sub_4d0030(eax_21, edx_12, esi_9 - edx_12)
            eax_8 = ebx_2[0xb]
            edi_3 = var_4c
            ebx_2[0xb] = &eax_8[(esi_9 - ((eax_8 - ebx_2[0xa]) s>> 5)) * 8]
        int32_t esi_15 = 0
        
        if (*(var_44 + 8) s> 0)
            int32_t edi_6 = 0
            
            while (true)
                void* ecx_26 = ebx_2[0xa] + edi_6
                
                if (var_4c s>= 0)
                    int32_t ebp_1 = *(ebp + 0xc)
                    int32_t eax_23
                    int32_t edx_16
                    edx_16:eax_23 = muls.dp.d(0x4ec4ec4f, *(var_3c + 0x10) - ebp_1)
                    int32_t edx_17 = edx_16 s>> 4
                    
                    if (var_4c s< (edx_17 u>> 0x1f) + edx_17 && esi_15 s>= 0 && esi_15
                            s< (*(var_48_1 + ebp_1 + 0x28) - *(var_48_1 + ebp_1 + 0x24)) s>> 5)
                        void* eax_26 = *(var_48_1 + ebp_1 + 0x24)
                        void* eax_27 = eax_26 + edi_6
                        *(ecx_26 + 4) = *(eax_26 + edi_6 + 4)
                        ebp = var_3c
                        *(ecx_26 + 8) = *(eax_27 + 8)
                        *(ecx_26 + 0xc) = *(eax_27 + 0xc)
                        *(ecx_26 + 0x10) = *(eax_27 + 0x10)
                        *(ecx_26 + 0x14) = *(eax_27 + 0x14)
                        *(ecx_26 + 0x18) = *(eax_27 + 0x18)
                        *(ecx_26 + 0x1c) = *(eax_27 + 0x1c)
                        esi_15 += 1
                        edi_6 += 0x20
                        
                        if (esi_15 s< *(var_44 + 8))
                            continue
                        
                        edi_3 = var_4c
                        break
                
                eax_8.b = 0
                goto label_4d1445
        
        var_40_1 += 0x9c
        var_48_1 += 0x34
        var_4c = edi_3 + 1
        
        if (edi_3 + 1 s>= esi_2)
            break
        
        ebx = var_44

eax_8.b = 1
label_4d1445:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_50)
