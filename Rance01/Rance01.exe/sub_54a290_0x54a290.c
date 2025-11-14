// 函数: sub_54a290
// 地址: 0x54a290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723ae6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_ac
int32_t eax_2 = data_78c474 ^ &var_ac
int32_t __saved_edi
int32_t var_c0 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[0xac] -= 4
int32_t edi = *arg1[0xac]
int32_t eax_8 = (arg1[0x7a] - arg1[0x79]) s>> 2
int32_t* result
int32_t var_c4
int32_t edx

if (edi u>= eax_8)
    var_c4 = edi
    result = sub_53d1c0(eax_8, edx, arg1, 0x750810)
else
    eax_8 = *(arg1[0x79] + (edi << 2))
    
    if (eax_8 != 0)
        int32_t* var_a8_1
        int32_t* esi_1
        
        if (*(eax_8 + 4) != 0)
            int32_t* edx_1 = *eax_8
            var_a8_1 = edx_1
            esi_1 = edx_1
        else
            esi_1 = nullptr
            var_a8_1 = nullptr
        
        if (sub_54a560(arg1, esi_1) == 0)
            int32_t var_78_1 = 0
            struct usernotice::CDialog::usernotice::CVMErrorDialog::VTable* dwInitParam =
                &usernotice::CVMErrorDialog::`vftable'{for `usernotice::CDialog'}
            int32_t var_74_1 = 0
            int32_t var_5c_1 = 0xf
            int32_t var_60_1 = 0
            char var_70 = 0
            int32_t var_54 = 0
            int32_t var_50_1 = 0
            int32_t var_4c_1 = 0
            char var_44_1 = 1
            int32_t var_40_1 = 0
            int32_t var_3c_1 = 0
            char var_38_1 = 0
            int32_t var_4 = 0
            int32_t var_84_1 = 0xf
            int32_t* eax_11 = esi_1
            int32_t var_88_1 = 0
            char var_98 = 0
            void* edx_2 = eax_11 + 1
            char i
            
            do
                i = *eax_11
                eax_11 += 1
            while (i != 0)
            sub_401270(&var_98, eax_11 - edx_2, esi_1)
            var_4.b = 1
            sub_401180(&var_70, 0xffffffff, &var_98, 0)
            
            if (var_84_1 u>= 0x10)
                int32_t var_c4_3 = var_98.d
                sub_6b4d5b()
            
            var_98.d = 0
            int32_t var_94_1 = 0
            int32_t var_90_1 = 0
            var_4.b = 2
            sub_53cea0(arg1, &var_98)
            HINSTANCE hInstance = arg1[4]
            HWND hWndParent = arg1[3]
            HINSTANCE hInstance_1 = hInstance
            sub_4ea570(&var_54, &var_98)
            char var_38_2 = 0
            int32_t eax_14 = DialogBoxParamA(hInstance, 0x6c, hWndParent, sub_6046a0, &dwInitParam)
            int32_t var_78_2 = eax_14
            
            if (eax_14 == 0)
                arg1[0xa6].b = 0
                arg1[0x8f] = 0
                
                if (arg1[0xa7] == 0)
                    arg1[0xa7] = 1
            else if (var_38_2 != 0)
                void* var_a4 = arg1[0xa3] - arg1[0xa4]
                sub_416b60(&var_a4, &arg1[0x4b5], sub_416d20(&arg1[0x4b5], &var_a4))
                void var_30
                char* ecx_4 = sub_402be0(&var_30, var_a8_1)
                var_4.b = 3
                var_a4 = arg1[0xa3] - arg1[0xa4]
                void* var_c4_9 = &arg1[0x4b9]
                sub_405220(&var_30, sub_54e460(ecx_4, &var_a4))
                sub_401110(&var_30)
            
            int32_t* esi_5 = var_98.d
            *arg1[0xac] = edi
            arg1[0xac] += 4
            
            if (esi_5 != 0)
                sub_405780(esi_5, var_94_1)
                int32_t* var_c4_10 = esi_5
                sub_6b4d5b()
            
            sub_604910(&dwInitParam)
        else
            *arg1[0xac] = edi
            arg1[0xac] += 4
        
        result.b = 1
    else
        var_c4 = edi
        result = sub_53d1c0(eax_8, edx, arg1, 0x750810)
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_ac)
return result
