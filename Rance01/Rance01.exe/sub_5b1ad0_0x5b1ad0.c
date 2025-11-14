// 函数: sub_5b1ad0
// 地址: 0x5b1ad0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71e36b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_40 = arg1

if (arg2 != 0 && arg3 s> 0)
    struct ICGSurface::decodecg::CCGSurface::VTable** eax_3 = operator new(0x1c)
    struct ICGSurface::decodecg::CCGSurface::VTable** var_44_1 = eax_3
    int32_t var_c_1 = 0
    struct ICGSurface::decodecg::CCGSurface::VTable** var_44_2
    struct ICGSurface::decodecg::CCGSurface::VTable** esi_2
    
    if (eax_3 == 0)
        var_44_2 = nullptr
        esi_2 = nullptr
    else
        esi_2 = sub_5b1110(eax_3)
        var_44_2 = esi_2
    
    int32_t var_c_2 = 0xffffffff
    int32_t eax_7 = (*(*var_40 + 0xc))(arg2, arg3)
    char eax_9
    char eax_11
    
    if (eax_7 u> 6)
        (*esi_2)->vFunc_1(eax_2)
    else
        switch (eax_7)
            case 0
                __builtin_memset(&var_40, 0, 0x25)
                eax_9 = sub_5b1ef0(&var_40, esi_2, arg3)
            label_5b1b9c:
                
                if (eax_9 != 0)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return var_44_2
                
                (*var_44_2)->vFunc_1(eax_2)
            case 1
                __builtin_memset(&var_40, 0, 0x18)
                eax_11 = sub_5b1660(&var_40, esi_2, arg3)
            label_5b1bd3:
                
                if (eax_11 != 0)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return esi_2
                
                (*esi_2)->vFunc_1(eax_2)
            case 2
                __builtin_memset(&var_40, 0, 0x26)
                eax_11 = sub_5b2f00(&var_40, esi_2, arg2)
                goto label_5b1bd3
            case 3
                eax_9 = sub_5b1ec0(0, 0, esi_2, arg2, arg3)
                goto label_5b1b9c
            case 4
                if (sub_5b12c0(arg3, esi_2, arg2, var_40) != 0)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return esi_2
                
                (*esi_2)->vFunc_1(eax_2)
            case 5
                var_40 = nullptr
                int32_t var_3c_1 = 0
                eax_11 = sub_5b28c0(arg2, arg3, &var_40, esi_2)
                goto label_5b1bd3
            case 6
                var_40 = nullptr
                int32_t var_3c_2 = 0
                int32_t var_38_1 = 0
                int32_t var_34_1 = 0
                eax_9 = sub_5b35b0(&var_40, arg2, esi_2, arg3)
                goto label_5b1b9c

fsbase->NtTib.ExceptionList = ExceptionList
return 0
