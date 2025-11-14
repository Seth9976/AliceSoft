// 函数: sub_564a30
// 地址: 0x564a30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_8 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_728277
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HINSTANCE var_c0
int32_t eax_2 = data_78c474 ^ &var_c0
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_c0 = arg2
arg1[4] = arg2
arg1[0x13a].b = 0
int128_t* ecx
sub_565350(ecx, arg1)
bool result

if (sub_565580(arg1) == 0)
    result = false
else
    int128_t* esi_1 = arg1[5]->vFunc_3(eax_4)
    char* ecx_2 = esi_1
    int32_t var_a4_1 = 0xf
    int32_t var_a8_1 = 0
    char var_b8 = 0
    int128_t* eax_7
    
    do
        eax_7.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_7.b != 0)
    sub_401270(&var_b8, ecx_2 - &ecx_2[1], esi_1)
    int32_t var_4 = 0
    sub_56eb60(&arg1[0x13f], &var_b8)
    int32_t var_4_1 = 0xffffffff
    
    if (var_a4_1 u>= 0x10)
        int32_t var_d8_4 = var_b8.d
        sub_6b4d5b()
    
    int128_t* esi_3 = arg1[5]->vFunc_7()
    char* ecx_5 = esi_3
    int32_t var_8c_1 = 0
    int32_t var_88_1 = 0xf
    char var_9c = 0
    int128_t* eax_10
    
    do
        eax_10.b = *ecx_5
        ecx_5 = &ecx_5[1]
    while (eax_10.b != 0)
    sub_401270(&var_9c, ecx_5 - &ecx_5[1], esi_3)
    int32_t var_4_2 = 1
    int128_t* esi_5 = arg1[0x13f]->vFunc_0()
    int32_t var_a4_2 = 0xf
    int32_t var_a8_2 = 0
    var_b8 = 0
    char* ecx_9 = esi_5
    int128_t* eax_12
    
    do
        eax_12.b = *ecx_9
        ecx_9 = &ecx_9[1]
    while (eax_12.b != 0)
    var_4_2.b = 2
    var_4_2.b = 3
    char var_80
    sub_401ef0(&arg1[0x180], 
        sub_4b3c20(&var_b8, sub_401270(&var_b8, ecx_9 - (esi_5 + 1), esi_5), &var_9c, &var_80))
    int32_t var_6c
    
    if (var_6c u>= 0x10)
        int32_t var_d8_8 = var_80.d
        sub_6b4d5b()
    
    int32_t var_6c_1 = 0xf
    int32_t var_70_1 = 0
    var_80 = 0
    
    if (var_a4_2 u>= 0x10)
        int32_t var_d8_9 = var_b8.d
        sub_6b4d5b()
    
    int32_t var_4_3 = 0xffffffff
    int32_t var_a4_3 = 0xf
    int32_t var_a8_3 = 0
    var_b8 = 0
    
    if (var_88_1 u>= 0x10)
        int32_t var_d8_10 = var_9c.d
        sub_6b4d5b()
    
    int128_t* edi_8 = arg1[5]->vFunc_3()
    char* ecx_14 = edi_8
    int128_t* eax_17
    
    do
        eax_17.b = *ecx_14
        ecx_14 = &ecx_14[1]
    while (eax_17.b != 0)
    sub_401270(&arg1[0x193], ecx_14 - &ecx_14[1], edi_8)
    sub_401180(&data_793518, 0xffffffff, &arg1[0x193], 0)
    
    if (arg1[0x13a].b != 0)
    label_564cc6:
        
        if (sub_565740(arg1, var_c0) == 0)
            result = false
        else
            int32_t eax_22 = arg1[0x46]
            void* edx_10 = arg1[5]
            data_797da4 = eax_22
            int32_t eax_24 = (*(edx_10 + 4))()
            HWND eax_26 = arg1[5]->vFunc_2()
            
            if (sub_56e450(&arg1[0x8e], arg1[0x46], eax_24, eax_26) == 0)
                result = false
            else if (sub_5656a0(arg1) == 0)
                result = false
            else if (sub_56aaa0(&arg1[0x44]) == 0)
                result = false
            else
                if (*(arg1 + 0x201) != 0)
                    sub_568350(&arg1[0x44])
                
                if (arg1[0x13a].b == 0)
                    sub_566c40()
                
                sub_570600(&arg1[0x13b])
                arg1[0x13d] = timeGetTime()
                int32_t eax_28 = arg1[0x43]
                arg1[0x173] = &arg1[0x13f]
                arg1[0x174] = &arg1[5]
                sub_56cc70(&arg1[0x162], &arg1[0x37], eax_28)
                sub_56c650(&arg1[0x162])
                arg1[0x162]->vFunc_0((arg1[0x38] - arg1[0x37]) s>> 5)
                
                if (sub_56f0f0(&arg1[0x18a], var_c0) == 0)
                    result = false
                else
                    arg1[0x19b] = eax_22
                    int32_t* ecx_26 = arg1[0x18a]
                    arg1[0x19c] = arg1
                    char eax_35
                    
                    if (ecx_26 != 0)
                        eax_35 = (*(*ecx_26 + 8))(arg1, &arg1[1])
                    
                    if (ecx_26 == 0 || eax_35 == 0)
                        sub_565940(arg1)
                        result = false
                    else
                        if (sub_56f160(&arg1[0x18a]) != 0)
                            void var_48
                            char* eax_36 = sub_566db0(&var_48, arg1)
                            int32_t var_4_4 = 4
                            void var_64
                            char* var_d8_24 = sub_567100(&var_64, arg1)
                            int32_t* eax_38 = &var_b8
                            var_4_4.b = 5
                            var_4_4.b = 6
                            int32_t* var_d8_26 = sub_4b3c20(eax_38, 
                                sub_402c60(eax_38, 0x74bbf8, nullptr), eax_36, &var_9c)
                            char* lpString = &var_80
                            var_4_4.b = 7
                            sub_402c60(lpString, 0x74bbf4, nullptr)
                            HWND hWnd = arg1[0x46]
                            
                            if (hWnd != 0)
                                if (var_6c_1 u>= 0x10)
                                    lpString = var_80.d
                                
                                SetWindowTextA(hWnd, lpString)
                            
                            sub_401110(&var_80)
                            sub_401110(&var_9c)
                            sub_401110(&var_b8)
                            sub_401110(&var_64)
                            int32_t var_4_5 = 0xffffffff
                            sub_401110(&var_48)
                        
                        if (arg1[0x13a].b == 0 && sub_56f160(&arg1[0x18a]) != 0)
                            void var_2c
                            sub_402be0(&var_2c, arg1[0x13f]->vFunc_0())
                            int32_t var_4_6 = 8
                            sub_5621a0(&arg1[0x19d], &arg1[0x19a])
                            int32_t var_4_7 = 0xffffffff
                            sub_401110(&var_2c)
                            sub_568640(&arg1[0x44], &arg1[0x19d])
                        
                        arg1[3].b = 1
                        result = true
    else
        void* lpName = &arg1[0x1e]
        
        if (arg1[0x23] u>= 0x10)
            lpName = *lpName
        
        HANDLE eax_18 = CreateMutexA(nullptr, 0, lpName)
        arg1[2] = eax_18
        enum WIN32_ERROR eax_19
        
        if (eax_18 != 0)
            eax_19 = GetLastError()
        
        if (eax_18 != 0 && eax_19 != ERROR_ALREADY_EXISTS)
            goto label_564cc6
        
        int32_t var_d8_13 = arg1[5]->vFunc_3()
        sub_604c90(0x74bbd4)
        result = false

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_c0)
return result
