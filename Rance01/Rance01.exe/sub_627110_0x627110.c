// 函数: sub_627110
// 地址: 0x627110
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723471
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_480
int32_t eax_2 = data_78c474 ^ &var_480
int32_t __saved_edi
int32_t var_494 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t lprc_2
int32_t lprc_1 = lprc_2
int32_t var_444 = 0xf
int32_t var_448 = 0
char var_458 = 0
int32_t var_4 = 0
int32_t result

if (sub_623940(arg5, *(arg1 + 0xdc), arg3, &var_458) != 0)
    SetTextColor(arg2, *(arg1 + 0x148))
    char* eax_8 = var_458.d
    
    if (var_444 u< 0x10)
        eax_8 = &var_458
    
    sub_6220e0(arg2, arg1, lprc_1, arg4, eax_8)
    int32_t eax_9 = *(arg1 + 0x118)
    lprc_2 += (var_448 * *(arg1 + 0xcc)) u>> 1
    sub_628030(eax_9 - var_448, arg2, arg1, &lprc_2, arg4)
    int32_t var_460_1 = 0xf
    int32_t eax_13 = *(arg1 + 0x118)
    int32_t var_464_1 = 0
    char var_474 = 0
    var_4.b = 1
    void* edi_1 = *(arg1 + 0xdc)
    int128_t* eax_18 = (*(**(edi_1 + 8) + 0x10))((*(**(edi_1 + 4) + 0x18))(arg5), arg3)
    
    if (eax_18 == 0)
        if (var_460_1 u>= 0x10)
            int32_t var_498_16 = var_474.d
            sub_6b4d5b()
        
        int32_t var_460_3 = 0xf
        int32_t var_464_3 = 0
        var_474 = 0
        
        if (var_444 u< 0x10)
            result = 0
        else
            int32_t var_498_17 = var_458.d
            sub_6b4d5b()
            result = 0
    else
        char* esi_2 = eax_18
        char i
        
        do
            i = *esi_2
            esi_2 = &esi_2[1]
        while (i != 0)
        sub_401270(&var_474, esi_2 - &esi_2[1], eax_18)
        char* eax_19 = var_474.d
        
        if (var_460_1 u< 0x10)
            eax_19 = &var_474
        
        char* var_498_8 = eax_19
        char var_410
        _swprintf(&var_410, 0x400, &data_733d00)
        SetTextColor(arg2, *(arg1 + 0x14c))
        sub_6220e0(arg2, arg1, lprc_2, arg4, &var_410)
        char* eax_21 = &var_410
        char i_1
        
        do
            i_1 = *eax_21
            eax_21 = &eax_21[1]
        while (i_1 != 0)
        void var_40f
        int32_t eax_22 = eax_21 - &var_40f
        void* eax_24 = *(arg1 + 0x11c) - var_464_1
        lprc_2 += (eax_22 * *(arg1 + 0xcc)) u>> 1
        sub_628030(eax_24 + 1, arg2, arg1, &lprc_2, arg4)
        int32_t esi_6 = eax_13 + *(arg1 + 0x11c) - var_464_1 + eax_22 + 4
        sub_6220e0(arg2, arg1, lprc_2, arg4, " : ")
        int32_t eax_32
        int32_t edx_12
        edx_12:eax_32 = sx.q(*(arg1 + 0xcc) * 3)
        lprc_2 += (eax_32 - edx_12) s>> 1
        int32_t var_428_1 = 0xf
        int32_t var_42c_1 = 0
        char var_43c = 0
        var_4.b = 2
        
        if (sub_623a10(*(arg1 + 0xdc), arg5, arg3, &var_43c) != 0)
            void* esi_8 = *(arg1 + 0xdc)
            
            switch ((*(**(esi_8 + 8) + 0xc))((*(**(esi_8 + 4) + 0x18))(arg5), arg3) - 0xa)
                case 0, 1, 0x25
                    nop
                case 2
                    SetTextColor(arg2, *(arg1 + 0x158))
                case 0x11
                    SetTextColor(arg2, *(arg1 + 0x154))
                default
                    SetTextColor(arg2, *(arg1 + 0x164))
            
            char* eax_43 = var_43c.d
            
            if (var_428_1 u< 0x10)
                eax_43 = &var_43c
            
            sub_6220e0(arg2, arg1, lprc_2, arg4, eax_43)
            int32_t result_1 = esi_6 + var_42c_1
            int32_t lprc = lprc_1
            int32_t eax_45 = *(arg1 + 0xcc)
            int32_t ecx_16 = eax_45 + arg4
            int32_t var_41c_1 = ecx_16 - 1
            int32_t eax_47
            int32_t edx_21
            edx_21:eax_47 = sx.q(eax_45 * result_1)
            int32_t var_414_1 = ecx_16
            int32_t var_418_1 = ((eax_47 - edx_21) s>> 1) + lprc_1
            
            if (*(arg1 + 0x134) == arg3)
                FillRect(arg2, &lprc, *(arg1 + 0x174))
            else if (*(arg1 + 0xfc) == arg3)
                FillRect(arg2, &lprc, *(arg1 + 0x16c))
            
            sub_401110(&var_43c)
            sub_401110(&var_474)
            sub_401110(&var_458)
            result = result_1
        else
            if (var_428_1 u>= 0x10)
                int32_t var_498_13 = var_43c.d
                sub_6b4d5b()
            
            int32_t var_428_2 = 0xf
            int32_t var_42c_2 = 0
            var_43c = 0
            
            if (var_460_1 u>= 0x10)
                int32_t var_498_14 = var_474.d
                sub_6b4d5b()
            
            int32_t var_460_2 = 0xf
            int32_t var_464_2 = 0
            var_474 = 0
            
            if (var_444 u< 0x10)
                result = 0
            else
                int32_t var_498_15 = var_458.d
                sub_6b4d5b()
                result = 0
else
    if (var_444 u>= 0x10)
        int32_t var_498_1 = var_458.d
        sub_6b4d5b()
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_480)
return result
