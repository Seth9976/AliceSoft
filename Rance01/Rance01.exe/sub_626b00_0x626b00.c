// 函数: sub_626b00
// 地址: 0x626b00
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
void* var_448 = nullptr
char var_458 = 0
int32_t var_4 = 0
void* result

if (sub_623570(*(arg2 + 0xdc), arg3, &var_458) != 0)
    SetTextColor(arg1, *(arg2 + 0x148))
    char* eax_7 = var_458.d
    
    if (var_444 u< 0x10)
        eax_7 = &var_458
    
    sub_6220e0(arg1, arg2, lprc_1, arg4, eax_7)
    int32_t eax_8 = *(arg2 + 0x108)
    int32_t edx_3 = var_448 * *(arg2 + 0xcc)
    void* var_47c = var_448
    lprc_2 = lprc_1 + (edx_3 u>> 1)
    sub_628030(eax_8 - var_448, arg1, arg2, &lprc_2, arg4)
    int32_t var_460_1 = 0xf
    void* ebx_3 = *(arg2 + 0x108) - var_448 + var_47c
    int32_t var_464_1 = 0
    char var_474 = 0
    var_4.b = 1
    
    if (sub_6235f0(*(arg2 + 0xdc), arg3, &var_474) != 0)
        char* eax_13 = var_474.d
        
        if (var_460_1 u< 0x10)
            eax_13 = &var_474
        
        char* var_498_8 = eax_13
        char var_410
        _swprintf(&var_410, 0x400, &data_733cf8)
        SetTextColor(arg1, *(arg2 + 0x14c))
        sub_6220e0(arg1, arg2, lprc_2, arg4, &var_410)
        char* esi_2 = &var_410
        char i
        
        do
            i = *esi_2
            esi_2 = &esi_2[1]
        while (i != 0)
        void var_40f
        int32_t esi_3 = esi_2 - &var_40f
        lprc_2 += (*(arg2 + 0xcc) * esi_3) u>> 1
        sub_628030(*(arg2 + 0x10c) - var_464_1 + 1, arg1, arg2, &lprc_2, arg4)
        void* ebx_5 = ebx_3 + esi_3 - var_464_1 + *(arg2 + 0x10c) + 4
        int32_t lprc_3 = lprc_2
        sub_6220e0(arg1, arg2, lprc_3, arg4, " : ")
        int32_t eax_24
        int32_t edx_6
        edx_6:eax_24 = sx.q(*(arg2 + 0xcc) * 3)
        lprc_2 = lprc_3 + ((eax_24 - edx_6) s>> 1)
        int32_t var_428_1 = 0xf
        int32_t var_42c_1 = 0
        char var_43c = 0
        var_4.b = 2
        
        if (sub_623890(&var_43c, arg3, *(arg2 + 0xdc), &var_43c) != 0)
            if (sub_623530(*(arg2 + 0xdc), arg3, &var_47c) != 0)
                void* eax_34 = var_47c - 0xa
                var_47c = eax_34
                
                switch (eax_34)
                    case nullptr, 1, 0x25
                        nop
                    case 2
                        SetTextColor(arg1, *(arg2 + 0x158))
                    case 0x11
                        SetTextColor(arg1, *(arg2 + 0x154))
                    default
                        SetTextColor(arg1, *(arg2 + 0x164))
                
                char* eax_36 = var_43c.d
                
                if (var_428_1 u< 0x10)
                    eax_36 = &var_43c
                
                sub_6220e0(arg1, arg2, lprc_2, arg4, eax_36)
                void* result_1 = ebx_5 + var_42c_1
                int32_t eax_38 = *(arg2 + 0xcc)
                int32_t ecx_13 = arg4 + eax_38
                int32_t var_41c_1 = ecx_13 - 1
                int32_t eax_40
                int32_t edx_11
                edx_11:eax_40 = sx.q(eax_38 * result_1)
                int32_t var_418_1 = ((eax_40 - edx_11) s>> 1) + lprc_1
                int32_t lprc = lprc_1
                int32_t var_414_1 = ecx_13
                
                if (*(arg2 + 0x134) == arg3)
                    FillRect(arg1, &lprc, *(arg2 + 0x174))
                else if (*(arg2 + 0xfc) == arg3)
                    void* eax_46 = var_47c
                    char eax_47
                    
                    if (eax_46 u<= 0x25)
                        eax_47 = sub_629b10(eax_46)
                    
                    HBRUSH hbr
                    
                    if (eax_46 u<= 0x25 && eax_47 == 0)
                        hbr = *(arg2 + 0x170)
                    else
                        hbr = *(arg2 + 0x16c)
                    
                    FillRect(arg1, &lprc, hbr)
                
                sub_401110(&var_43c)
                sub_401110(&var_474)
                sub_401110(&var_458)
                result = result_1
            else
                sub_401110(&var_43c)
                sub_401110(&var_474)
                sub_401110(&var_458)
                result = nullptr
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
            
            int32_t var_460_3 = 0xf
            int32_t var_464_3 = 0
            var_474 = 0
            
            if (var_444 u< 0x10)
                result = nullptr
            else
                int32_t var_498_15 = var_458.d
                sub_6b4d5b()
                result = nullptr
    else
        if (var_460_1 u>= 0x10)
            int32_t var_498_6 = var_474.d
            sub_6b4d5b()
        
        int32_t var_460_2 = 0xf
        int32_t var_464_2 = 0
        var_474 = 0
        
        if (var_444 u< 0x10)
            result = nullptr
        else
            int32_t var_498_7 = var_458.d
            sub_6b4d5b()
            result = nullptr
else
    if (var_444 u>= 0x10)
        int32_t var_498_1 = var_458.d
        sub_6b4d5b()
    
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_480)
return result
