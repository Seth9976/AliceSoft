// 函数: sub_571ef0
// 地址: 0x571ef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_711f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[7]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[7] = 0

uint32_t var_3c
sub_5721b0(&arg1[3], &var_3c, arg1[3], arg1[4])
HANDLE hObject = *arg1

if (hObject != 0xffffffff && CloseHandle(hObject) != 0)
    *arg1 = 0xffffffff

BOOL eax_6

if (sub_601f00(arg1, arg2).b != 0)
    int32_t* ecx_2 = arg1[7]
    
    if (ecx_2 != 0)
        (*(*ecx_2 + 4))(eax_2)
        arg1[7] = 0
    
    eax_6 = sub_59e250(0x74b398)
    arg1[7] = eax_6
    
    if (eax_6 != 0)
        BOOL var_38 = 0
        int32_t var_34_1 = 0
        int32_t var_30_1 = 0
        sub_404f60(0x10, &var_38)
        int32_t var_c_1 = 0
        BOOL eax_8 = var_38
        
        if (sub_6021f0(arg1, var_34_1 - eax_8, eax_8) != 0)
            if (sub_571b70(&var_38, &var_3c) != 0)
                uint32_t var_28 = 0
                int32_t var_24_1 = 0
                int32_t var_20_1 = 0
                sub_404f60(var_3c, &var_28)
                var_c_1.b = 1
                uint32_t eax_12 = var_28
                uint32_t* esi_5
                
                if (sub_6021f0(arg1, var_24_1 - eax_12, eax_12) != 0)
                    esi_5 = &var_28
                    
                    if (sub_571cd0(&var_28, arg1) != 0)
                        sub_65ab60(esi_5)
                        sub_65ab60(&var_38)
                        int32_t eax_16
                        eax_16.b = 1
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_16
                else
                    esi_5 = &var_28
                
                sub_65ab60(esi_5)
            
            sub_65ab60(&var_38)
            int32_t eax_14
            eax_14.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_14
        
        eax_6 = var_38
        
        if (eax_6 != 0)
            BOOL var_50_3 = eax_6
            sub_6b4d5b()

eax_6.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_6
