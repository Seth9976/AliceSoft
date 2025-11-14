// 函数: sub_60b8a0
// 地址: 0x60b8a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct _EXCEPTION_REGISTRATION_RECORD* var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d976
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ecx = __chkstk(0x4044)
int32_t eax_2 = data_78c474 ^ &ExceptionList
int32_t __saved_edi
int32_t var_20 = data_78c474 ^ &__saved_edi
int32_t arg_4038
fsbase->NtTib.ExceptionList = &arg_4038
sub_405410(ecx + 0x68, &ExceptionList, *(ecx + 0x68), *(ecx + 0x6c))
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1

if (*(ecx + 0x60) u< 0x10)
    ExceptionList = ecx + 0x4c
    ExceptionList_1 = ecx + 0x4c
else
    ExceptionList_1 = *(ecx + 0x4c)
    ExceptionList = ExceptionList_1

int32_t ebp = 0

while (true)
    void arg_34
    void* eax_6 = &arg_34
    
    while (true)
        char edx_1 = *(ExceptionList_1 + ebp)
        void arg_35
        int32_t arg_4040
        struct _EXCEPTION_REGISTRATION_RECORD* ecx_2
        
        if (edx_1 == 0xa)
            *eax_6 = 0
            void* eax_7 = &arg_34
            int32_t arg_10 = 0xf
            int32_t arg_c = 0
            var_4.b = 0
            
            do
                ecx_2.b = *eax_7
                eax_7 += 1
            while (ecx_2.b != 0)
            
            sub_401270(&var_4, eax_7 - &arg_35, &arg_34)
            arg_4040 = 0
            sub_405220(&var_4, ecx + 0x68)
            arg_4040 = 0xffffffff
            ExceptionList_1 = ExceptionList
            ebp += 1
            break
        
        if (edx_1 != 0)
            int32_t esi_3 = *(ecx + 0x60)
            struct _EXCEPTION_REGISTRATION_RECORD* ecx_8
            
            if (esi_3 u< 0x10)
                ecx_8 = ecx + 0x4c
            else
                ecx_8 = *(ecx + 0x4c)
            
            if (*(ecx_8 + ebp) u>= 0x81)
                if (esi_3 u< 0x10)
                    ecx_2 = ecx + 0x4c
                else
                    ecx_2 = *(ecx + 0x4c)
            
            if (*(ecx_8 + ebp) u< 0x81 || *(ecx_2 + ebp) u> 0x9f)
                if (esi_3 u< 0x10)
                    ecx_2 = ecx + 0x4c
                else
                    ecx_2 = *(ecx + 0x4c)
                
                if (*(ecx_2 + ebp) u< 0xe0)
                    *eax_6 = edx_1
                    eax_6 += 1
                    ebp += 1
                    continue
            
            *eax_6 = edx_1
            *(eax_6 + 1) = *(ExceptionList_1 + ebp + 1)
            eax_6 += 2
            ebp += 2
        else
            if (eax_6 u> &arg_34)
                *eax_6 = edx_1
                void* eax_9 = &arg_34
                char arg_18 = edx_1
                int32_t arg_2c = 0xf
                int32_t arg_28 = 0
                
                do
                    ecx_2.b = *eax_9
                    eax_9 += 1
                while (ecx_2.b != 0)
                
                sub_401270(&arg_18, eax_9 - &arg_35, &arg_34)
                arg_4040 = 1
                struct _EXCEPTION_REGISTRATION_RECORD** result = sub_405220(&arg_18, ecx + 0x68)
                
                if (arg_2c u>= 0x10)
                    int32_t var_24_4 = arg_18.d
                    result = sub_6b4d5b()
                
                fsbase->NtTib.ExceptionList = arg_4038
                sub_6b4885(eax_2 ^ &ExceptionList)
                return result
