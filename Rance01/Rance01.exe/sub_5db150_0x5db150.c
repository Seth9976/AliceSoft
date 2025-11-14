// 函数: sub_5db150
// 地址: 0x5db150
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_726e58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_44
int32_t eax_2 = data_78c474 ^ &var_44
int32_t __saved_edi
int32_t var_58 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (*(arg3 + 8) != 0)
    result.b = 1
else
    sub_401180(arg3 + 0x114, 0xffffffff, arg4, 0)
    sub_401180(arg3 + 0x130, 0xffffffff, arg2, 0)
    HMENU hMenu = *(arg3 + 4)
    
    if (hMenu != 0)
        DestroyMenu(hMenu)
        *(arg3 + 4) = 0
    
    result = LoadMenuA(arg1, 0x6d)
    *(arg3 + 4) = result
    
    if (result != 0)
        int32_t var_1c_1 = 0
        int32_t var_18_1 = 0xf
        char var_2c = 0
        sub_401270(&var_2c, 0x1c, "CrayfishLogViewerWindowClass")
        int32_t var_4 = 0
        sub_401180(arg3 + 0x38, 0xffffffff, &var_2c, 0)
        int32_t var_4_1 = 0xffffffff
        
        if (var_18_1 u>= 0x10)
            int32_t var_5c_2 = var_2c.d
            sub_6b4d5b()
        
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        sub_401180(arg3 + 0x54, 0xffffffff, arg4, 0)
        int32_t ecx_5 = *(arg3 + 4)
        *(arg3 + 0x70) = arg1
        *(arg3 + 0x78) = 0x10cf0000
        *(arg3 + 0x8c) = 0
        *(arg3 + 0x90) = ecx_5
        *(arg3 + 0x20) = LoadIconA(arg1, 0x66)
        int32_t var_3c
        int32_t var_38
        int32_t var_34
        
        if (sub_5dc1f0(&var_44, &var_3c, arg3, &var_38, &var_34) == 0)
            *(arg3 + 0x7c) = 0
            *(arg3 + 0x80) = 0
            *(arg3 + 0x84) = 0x280
            *(arg3 + 0x88) = 0x1e0
        else
            int32_t edx_2 = var_44
            int32_t eax_8 = var_3c
            *(arg3 + 0x7c) = var_38
            int32_t ecx_8 = var_34
            *(arg3 + 0x80) = edx_2
            *(arg3 + 0x84) = eax_8
            *(arg3 + 0x88) = ecx_8
        
        *(arg3 + 0x94) = arg3
        
        if (sub_6b3860(arg3 + 8).b == 0)
            result.b = 0
        else
            char* ebp_1 = *(arg3 + 0x110)
            
            if (ebp_1 != 0 && *ebp_1 != 0)
                sub_5dcf80(*(arg3 + 8))
            
            result.b = 1
    else
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_44)
return result
