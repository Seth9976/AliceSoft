// 函数: sub_622920
// 地址: 0x622920
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_7216d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_3c
int32_t eax_2 = data_78c474 ^ &var_3c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL result

if (*(arg1 + 0x90) != 0)
label_6229b4:
    int128_t* ecx_7 = *(arg1 + 0x38)
    int128_t* esi_2 = *(arg1 + 0x34)
    
    if (esi_2 != ecx_7)
        int32_t edi_1 = 0 s>> 2 << 2
        sub_6b49d0(esi_2, ecx_7, edi_1, eax_4)
        *(arg1 + 0x38) = edi_1 + esi_2
    
    int32_t esi_3 = 0
    
    if ((*(**(arg1 + 8) + 0x14))(eax_4) s> 0)
        int32_t eax_13
        
        do
            int32_t var_50_4 = esi_3
            sub_625060(arg1)
            esi_3 += 1
            eax_13 = (*(**(arg1 + 8) + 0x14))()
        while (esi_3 s< eax_13)
    
    int32_t esi_4 = 0
    char var_38
    
    if ((*(**(arg1 + 8) + 0x14))() s> 0)
        int32_t eax_31
        
        do
            int32_t var_24_1 = 0xf
            int32_t var_28_1 = 0
            var_38 = 0
            int32_t var_c_1 = 0
            void* eax_17 = (*(**(arg1 + 8) + 0x18))(esi_4)
            void* edi_3 = **(arg1 + 4)
            int32_t edx_8 = *(edi_3 + 0x20)
            var_3c = eax_17
            int32_t eax_18 = edx_8()
            *(arg1 + 4)
            int32_t* eax_20 = (*(edi_3 + 4))(eax_18)
            
            if (eax_20 != 0 && esi_4 s>= 0)
                int32_t eax_23
                int32_t edx_10
                edx_10:eax_23 = sx.q((*(*eax_20 + 0x14))())
                
                if (esi_4 s< (eax_23 + (edx_10 & 3)) s>> 2)
                    int32_t eax_28 = *((*(*eax_20 + 0x18))() + (esi_4 << 2))
                    sub_623f50(&var_38, arg1, var_3c, eax_28)
            
            if (*(arg1 + 0xc) s< var_28_1)
                *(arg1 + 0xc) = var_28_1
            
            int32_t var_c_2 = 0xffffffff
            
            if (var_24_1 u>= 0x10)
                int32_t var_50_8 = var_38.d
                sub_6b4d5b()
            
            esi_4 += 1
            eax_31 = (*(**(arg1 + 8) + 0x14))()
        while (esi_4 s< eax_31)
    
    int32_t edx_15 = *(**(arg1 + 8) + 0x14)
    void* esi_5 = nullptr
    var_3c = nullptr
    
    if (edx_15() s> 0)
        do
            int32_t var_24_2 = 0xf
            int32_t var_28_2 = 0
            var_38 = 0
            int32_t var_c_3 = 1
            int128_t* edi_5 = (*(**(arg1 + 8) + 0x1c))(esi_5)
            
            if (edi_5 != 0)
                char* ecx_21 = edi_5
                int128_t* eax_34
                
                do
                    eax_34.b = *ecx_21
                    ecx_21 = &ecx_21[1]
                while (eax_34.b != 0)
                sub_401270(&var_38, ecx_21 - &ecx_21[1], edi_5)
                esi_5 = var_3c
            
            *sub_513fa0(arg1 + 0x24, &var_38) = esi_5
            
            if (*(arg1 + 0x10) s< var_28_2)
                *(arg1 + 0x10) = var_28_2
            
            int32_t var_c_4 = 0xffffffff
            
            if (var_24_2 u>= 0x10)
                int32_t var_50_12 = var_38.d
                sub_6b4d5b()
            
            int32_t eax_37 = *(**(arg1 + 8) + 0x14)
            esi_5 += 1
            int32_t var_24_3 = 0xf
            int32_t var_28_3 = 0
            var_38 = 0
            var_3c = esi_5
            result = eax_37()
        while (esi_5 s< result)
    
    result.b = 1
else
    result = sub_61e2d0(arg1 + 0x44)
    
    if (result.b != 0)
        sub_65a090(arg1 + 0x64, (*(arg1 + 0x58) - *(arg1 + 0x54)) s/ 0x1c)
        int32_t ecx_6 = *(arg1 + 0x68)
        
        for (int32_t* i = *(arg1 + 0x64); i != ecx_6; i = &i[1])
            *i = 1
        
        *(arg1 + 0x90) = 1
        goto label_6229b4

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_3c)
return result
