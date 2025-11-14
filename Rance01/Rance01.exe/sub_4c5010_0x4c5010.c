// 函数: sub_4c5010
// 地址: 0x4c5010
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b318
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_2c = data_78c474 ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** eax_3

if (arg2[4] != 0 && arg1[2] == 4)
    eax_3 = arg1[0x99]
    
    if (eax_3 != 0)
    label_4c5061:
        struct fileimage::CFileImageMaker::VTable* var_20 = &fileimage::CFileImageMaker::`vftable'
        int32_t var_1c = 0
        int32_t var_18_1 = 0
        int32_t var_14_1 = 0
        int32_t var_4 = 0
        struct fileimage::CFileImageMaker::VTable** ecx
        
        if (sub_4cb8a0(eax_3, &var_20) != 0)
            ecx = &var_20
            
            if (sub_602070(arg2, &var_1c) != 0)
                sub_4101c0(ecx)
                int32_t eax_7
                eax_7.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_7
        else
            ecx = &var_20
        
        sub_4101c0(ecx)
    else if (sub_4c4100(arg1, arg1).b != 0)
        eax_3 = arg1[0x99]
        
        if (eax_3 != 0)
            goto label_4c5061

eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
