// 函数: sub_60d260
// 地址: 0x60d260
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7161a9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_a8
int32_t eax_2 = data_78c474 ^ &var_a8
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
int32_t edx = *(*esi + 0x88)
var_a8 = esi
edx(eax_4)
char result = sub_615f00(esi, arg2)

if (result != 0)
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    char var_64 = 0
    int32_t var_4 = 0
    int32_t i = 0
    int32_t* lpsi
    
    if ((data_797e10 - data_797e0c) s/ 0x1c s> 0)
        do
            int32_t var_48
            char* eax_11
            int32_t edx_4
            eax_11, edx_4 = sub_61ac30(&var_48, i)
            var_4.b = 1
            sub_4018a0(eax_11, edx_4, &var_48, &lpsi)
            var_4.b = 2
            int32_t* lpsi_2 = lpsi
            int32_t var_90
            
            if (var_90 u< 0x10)
                lpsi_2 = &lpsi
            
            int32_t eax_12 = var_54_1
            int32_t var_94
            
            if (var_54_1 u>= var_94)
                eax_12 = var_94
            
            int32_t* edx_5 = var_64.d
            
            if (var_50_1 u< 0x10)
                edx_5 = &var_64
            
            int32_t eax_13
            int32_t edx_6
            eax_13, edx_6 = sub_402320(eax_12, edx_5, lpsi_2, eax_12)
            bool cond:1_1 = eax_13 == 0
            
            if (eax_13 == 0)
                if (var_54_1 u>= var_94)
                    eax_13.b = var_54_1 != var_94
                else
                    eax_13 = 0xffffffff
                
                cond:1_1 = eax_13 == 0
            
            eax_13.b = cond:1_1
            eax_13.b = eax_13.b == 0
            int32_t var_88
            char var_84
            
            if (eax_13.b != 0)
                var_88 = 1
                int32_t var_70_1 = 0xf
                int32_t var_74_1 = 0
                var_84 = 0
                sub_401180(&var_84, 0xffffffff, &lpsi, 0)
                int32_t var_68_1 = 0xffffffff
                var_4.b = 3
                sub_60dc20(&var_88, &var_a8[0x30])
                var_4.b = 2
                
                if (var_70_1 u>= 0x10)
                    int32_t var_c0_3 = var_84.d
                    sub_6b4d5b()
                
                edx_6 = sub_401180(&var_64, 0xffffffff, &lpsi, 0)
            
            int32_t var_2c
            sub_401ab0(&var_2c, edx_6, &var_48)
            var_4.b = 4
            var_88 = 0
            int32_t var_70_2 = 0xf
            int32_t var_74_2 = 0
            var_84 = 0
            sub_401180(&var_84, 0xffffffff, &var_2c, 0)
            int32_t i_1 = i
            var_4.b = 5
            sub_60dc20(&var_88, &var_a8[0x30])
            
            if (var_70_2 u>= 0x10)
                int32_t var_c0_4 = var_84.d
                sub_6b4d5b()
            
            int32_t var_70_3 = 0xf
            int32_t var_74_3 = 0
            var_84 = 0
            int32_t var_18
            
            if (var_18 u>= 0x10)
                int32_t var_c0_5 = var_2c
                sub_6b4d5b()
            
            if (var_90 u>= 0x10)
                int32_t* lpsi_1 = lpsi
                sub_6b4d5b()
            
            var_4.b = 0
            var_90 = 0xf
            var_94 = 0
            lpsi.b = 0
            int32_t var_34
            
            if (var_34 u>= 0x10)
                int32_t var_c0_6 = var_48
                sub_6b4d5b()
            
            i += 1
        while (i s< (data_797e10 - data_797e0c) s/ 0x1c)
        
        esi = var_a8
    
    HWND esi_3 = esi[0x22]
    int32_t eax_21 = GetScrollPos(esi_3, SB_HORZ)
    int32_t eax_22 = *(*var_a8 + 0x90)
    lpsi = 0x1c
    int32_t var_a0_1 = 7
    int32_t var_9c_1 = 0
    int32_t var_98_1 = eax_22() - 1
    int32_t var_94_1 = 0
    int32_t var_90_1 = eax_21
    SetScrollInfo(esi_3, SB_HORZ, &lpsi, 1)
    int32_t* ebp_2 = var_a8
    HWND esi_4 = ebp_2[0x22]
    int32_t eax_25 = GetScrollPos(esi_4, SB_VERT)
    int32_t eax_26 = *(*ebp_2 + 0x8c)
    lpsi = 0x1c
    int32_t var_a0_2 = 7
    int32_t var_9c_2 = 0
    int32_t var_98_2 = eax_26() - 1
    int32_t var_94_2 = 0
    int32_t var_90_2 = eax_25
    SetScrollInfo(esi_4, SB_VERT, &lpsi, 1)
    
    if (var_50_1 u>= 0x10)
        int32_t var_c0_7 = var_64.d
        sub_6b4d5b()
    
    result = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_a8)
return result
