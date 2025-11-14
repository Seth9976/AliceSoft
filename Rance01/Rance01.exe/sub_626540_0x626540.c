// 函数: sub_626540
// 地址: 0x626540
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_721651
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_48c
int32_t eax_2 = data_78c474 ^ &var_48c
int32_t __saved_edi
int32_t var_4a0 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t lprc_2
int32_t lprc_1 = lprc_2
void* edi = *(arg1 + 0xdc)
int32_t var_484 = 0
int32_t esi

if (arg3 s< 0 || arg3 s>= (*(edi + 0x38) - *(edi + 0x34)) s>> 2)
    var_48c = 0xffffffff
    esi = var_48c
else
    esi = *(*(edi + 0x34) + (arg3 << 2))
    var_48c = esi

int32_t var_42c = 0xf
int32_t var_430 = 0
char var_440 = 0
int32_t var_4 = 0
int32_t result

if (*(arg1 + 0x179) == 0)
label_6266b4:
    int32_t var_464_1 = 0xf
    int32_t var_468_1 = 0
    char var_478 = 0
    var_4.b = 1
    int128_t* edi_3 = (*(**(edi + 8) + 0x1c))(esi)
    
    if (edi_3 == 0)
        if (var_464_1 u>= 0x10)
            int32_t var_4a4_18 = var_478.d
            sub_6b4d5b()
        
        int32_t var_464_2 = 0xf
        int32_t var_468_2 = 0
        var_478 = 0
        
        if (var_42c u< 0x10)
            result = 0
        else
            int32_t var_4a4_19 = var_440.d
            sub_6b4d5b()
            result = 0
    else
        char* ecx_8 = edi_3
        int128_t* eax_19
        
        do
            eax_19.b = *ecx_8
            ecx_8 = &ecx_8[1]
        while (eax_19.b != 0)
        sub_401270(&var_478, ecx_8 - &ecx_8[1], edi_3)
        char* eax_20 = var_478.d
        
        if (var_464_1 u< 0x10)
            eax_20 = &var_478
        
        char* var_4a4_9 = eax_20
        char var_414
        _swprintf(&var_414, 0x400, &data_733cf0)
        SetTextColor(arg2, *(arg1 + 0x14c))
        sub_6220e0(arg2, arg1, lprc_2, arg4, &var_414)
        char* eax_22 = &var_414
        char i
        
        do
            i = *eax_22
            eax_22 = &eax_22[1]
        while (i != 0)
        void var_413
        float eax_23 = eax_22 - &var_413
        lprc_2 += (*(arg1 + 0xcc) i* eax_23) u>> 1
        void* eax_29 = *(*(arg1 + 0xdc) + 0x10) - var_468_1
        float var_488 = eax_23
        sub_628030(eax_29 + 1, arg2, arg1, &lprc_2, arg4)
        int32_t esi_4 = *(*(arg1 + 0xdc) + 0x10)
        sub_6220e0(arg2, arg1, lprc_2, arg4, " : ")
        int32_t var_448_1 = 0xf
        int32_t esi_7 = var_484 + esi_4 - var_468_1 i+ var_488 + 4
        int32_t eax_35
        int32_t edx_16
        edx_16:eax_35 = sx.q(*(arg1 + 0xcc) * 3)
        lprc_2 += (eax_35 - edx_16) s>> 1
        int32_t var_44c_1 = 0
        char var_45c = 0
        var_4.b = 2
        void* edi_7 = *(arg1 + 0xdc)
        
        if (sub_622e30(edi_7, var_48c, &var_488) == 0)
            if (var_448_1 u>= 0x10)
                int32_t var_4a4_20 = var_45c.d
                sub_6b4d5b()
            
            int32_t var_448_2 = 0xf
            int32_t var_44c_2 = 0
            var_45c = 0
            
            if (var_464_1 u>= 0x10)
                int32_t var_4a4_21 = var_478.d
                sub_6b4d5b()
            
            int32_t var_464_3 = 0xf
            int32_t var_468_3 = 0
            var_478 = 0
            
            if (var_42c u< 0x10)
                result = 0
            else
                int32_t var_4a4_22 = var_440.d
                sub_6b4d5b()
                result = 0
        else
            sub_622f00((*(**(edi_7 + 8) + 0x18))(var_48c), edi_7, var_488, &var_45c)
            float eax_47 = (*(**(*(arg1 + 0xdc) + 8) + 0x18))(var_48c) - 0xa
            var_488 = eax_47
            
            switch (eax_47)
                case 0, 1, 0x25
                    nop
                case 2
                    SetTextColor(arg2, *(arg1 + 0x158))
                case 0x11
                    SetTextColor(arg2, *(arg1 + 0x154))
                default
                    SetTextColor(arg2, *(arg1 + 0x164))
            
            char* eax_52 = var_45c.d
            
            if (var_448_1 u< 0x10)
                eax_52 = &var_45c
            
            sub_6220e0(arg2, arg1, lprc_2, arg4, eax_52)
            int32_t result_1 = esi_7 + var_44c_1
            int32_t eax_54 = *(arg1 + 0xcc)
            int32_t ecx_20 = arg4 + eax_54
            int32_t var_420_1 = ecx_20 - 1
            int32_t eax_56
            int32_t edx_26
            edx_26:eax_56 = sx.q(eax_54 * result_1)
            int32_t var_41c_1 = ((eax_56 - edx_26) s>> 1) + lprc_1
            int32_t lprc = lprc_1
            int32_t var_418_1 = ecx_20
            
            if (*(arg1 + 0x134) == arg3)
                FillRect(arg2, &lprc, *(arg1 + 0x174))
            else if (*(arg1 + 0xfc) == arg3)
                float eax_62 = var_488
                char eax_63
                
                if (eax_62 u<= 0x25)
                    eax_63 = sub_629b10(eax_62)
                
                HBRUSH hbr
                
                if (eax_62 u<= 0x25 && eax_63 == 0)
                    hbr = *(arg1 + 0x170)
                else
                    hbr = *(arg1 + 0x16c)
                
                FillRect(arg2, &lprc, hbr)
            
            if (var_448_1 u>= 0x10)
                int32_t var_4a4_26 = var_45c.d
                sub_6b4d5b()
            
            int32_t var_448_3 = 0xf
            int32_t var_44c_3 = 0
            var_45c = 0
            
            if (var_464_1 u>= 0x10)
                int32_t var_4a4_27 = var_478.d
                sub_6b4d5b()
            
            int32_t var_464_4 = 0xf
            int32_t var_468_4 = 0
            var_478 = 0
            
            if (var_42c u>= 0x10)
                int32_t var_4a4_28 = var_440.d
                sub_6b4d5b()
            
            result = result_1
else
    void* eax_7 = (*(**(edi + 8) + 0x18))(esi)
    
    if (sub_622e30(edi, esi, &var_484) != 0)
        sub_623f50(&var_440, edi, eax_7, var_484)
        SetTextColor(arg2, *(arg1 + 0x148))
        char* eax_10 = var_440.d
        
        if (var_42c u< 0x10)
            eax_10 = &var_440
        
        sub_6220e0(arg2, arg1, lprc_2, arg4, eax_10)
        int32_t eax_13 = *(*(arg1 + 0xdc) + 0xc)
        lprc_2 += (var_430 * *(arg1 + 0xcc)) u>> 1
        sub_628030(eax_13 - var_430, arg2, arg1, &lprc_2, arg4)
        edi = *(arg1 + 0xdc)
        esi = var_48c
        var_484 = *(edi + 0xc)
        goto label_6266b4
    
    if (var_42c u>= 0x10)
        int32_t var_4a4_17 = var_440.d
        sub_6b4d5b()
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_48c)
return result
