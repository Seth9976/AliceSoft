// 函数: sub_5dbfe0
// 地址: 0x5dbfe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719893
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_8c
int32_t eax_2 = data_78c474 ^ &var_8c
int32_t __saved_edi
int32_t var_a0 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL hObject

if (*(arg1 + 0x140) == 0)
    hObject.b = 0
else
    WINDOWPLACEMENT lpwndpl
    lpwndpl.length = 0x2c
    
    if (GetWindowPlacement(arg2, &lpwndpl) == 0)
        hObject.b = 0
    else
        int32_t left = lpwndpl.rcNormalPosition.left
        int32_t top = lpwndpl.rcNormalPosition.top
        int32_t ebp_2 = lpwndpl.rcNormalPosition.right - left
        int32_t ebx_2 = lpwndpl.rcNormalPosition.bottom - top
        BOOL hObject_1 = 0xffffffff
        int32_t var_84_1 = 0
        int32_t var_80_1 = 0
        int32_t var_4 = 0
        int32_t var_2c
        int32_t* var_a4_2 = sub_401800(top, arg1 + 0x130, &var_2c)
        var_4.b = 1
        char var_74
        sub_402c60(&var_74, "LogViewerWindowPos.sav", nullptr)
        bool cond:0_1 = sub_601ea0(&hObject_1, &var_74) == 0
        int32_t var_60
        
        if (var_60 u>= 0x10)
            int32_t var_a4_3 = var_74.d
            sub_6b4d5b()
        
        var_4.b = 0
        int32_t var_60_1 = 0xf
        int32_t var_64_1 = 0
        var_74 = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_a4_4 = var_2c
            sub_6b4d5b()
        
        bool var_89_2
        uint32_t ecx_1
        
        if (cond:0_1 == 0)
            uint32_t ecx
            int32_t edx_3
            ecx, edx_3 = sub_402be0(&var_74, 0x736570)
            int32_t var_a4_6 = 1
            char eax_11
            eax_11, ecx_1 = sub_6026f0(&var_74, edx_3, ecx, &hObject_1)
            var_89_2 = eax_11 == 0
            
            if (var_60_1 u>= 0x10)
                int32_t var_a4_7 = var_74.d
                ecx_1 = sub_6b4d5b()
        
        if (cond:0_1 != 0 || var_89_2 != 0)
            hObject = hObject_1
            
            if (hObject != 0xffffffff)
                CloseHandle(hObject)
            
            hObject.b = 0
        else
            int32_t var_a4_8 = 0
            BOOL* esi_2 = &hObject_1
            char eax_12
            uint32_t ecx_3
            eax_12, ecx_3 = sub_6021b0(ecx_1, esi_2)
            
            if (eax_12 != 0)
                int32_t left_1 = left
                char eax_13
                uint32_t ecx_4
                eax_13, ecx_4 = sub_6021b0(ecx_3, esi_2)
                esi_2 = &hObject_1
                
                if (eax_13 == 0)
                    sub_601e80(esi_2)
                    hObject.b = 0
                else
                    int32_t top_1 = top
                    char eax_15
                    uint32_t ecx_5
                    eax_15, ecx_5 = sub_6021b0(ecx_4, esi_2)
                    
                    if (eax_15 == 0)
                        sub_601e80(esi_2)
                        hObject.b = 0
                    else
                        int32_t var_a4_9 = ebp_2
                        char eax_16
                        uint32_t ecx_6
                        eax_16, ecx_6 = sub_6021b0(ecx_5, esi_2)
                        
                        if (eax_16 == 0)
                            sub_601e80(esi_2)
                            hObject.b = 0
                        else
                            int32_t var_a4_10 = ebx_2
                            
                            if (sub_6021b0(ecx_6, esi_2) == 0)
                                sub_601e80(esi_2)
                                hObject.b = 0
                            else if (sub_601f60(esi_2) == 0)
                                sub_601e80(esi_2)
                                hObject.b = 0
                            else
                                sub_601e80(esi_2)
                                hObject.b = 1
            else
                sub_601e80(esi_2)
                hObject.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_8c)
return hObject
