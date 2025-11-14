// 函数: sub_595d80
// 地址: 0x595d80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71e4b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_8c
int32_t eax_2 = data_78c474 ^ &var_8c
int32_t __saved_edi
int32_t var_9c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** lpPathName = arg1
void** result_3 = nullptr
int32_t var_80 = 0
int32_t var_7c = 0
int32_t var_c_1 = 0
int32_t ecx_1 = sub_602e20(lpPathName, &result_3)
void** result_6 = result_3
void** result
int32_t* var_70
int32_t* lpFileName_1
int32_t var_40

if (result_6 == var_80)
label_595e8b:
    var_70 = nullptr
    int32_t var_6c_1 = 0
    int32_t var_68_1 = 0
    var_c_1.b = 3
    int32_t ecx_5 = sub_602980(lpPathName, &var_70)
    int32_t* esi = var_70
    
    if (esi != var_6c_1)
        do
            int32_t var_38
            int32_t* eax_8 = sub_401800(ecx_5, lpPathName, &var_38)
            var_c_1.b = 4
            int128_t* edx_6
            
            if (esi[5] u< 0x10)
                edx_6 = esi
            else
                edx_6 = *esi
            
            int32_t* var_a0_4 = eax_8
            int32_t* lpFileName = &lpFileName_1
            sub_402c60(lpFileName, edx_6, nullptr)
            
            if (var_40 u>= 0x10)
                lpFileName = lpFileName_1
            
            result, ecx_5 = DeleteFileA(lpFileName)
            bool var_85_2 = result == 0
            
            if (var_40 u>= 0x10)
                int32_t* lpFileName_3 = lpFileName_1
                result, ecx_5 = sub_6b4d5b()
            
            var_c_1.b = 3
            var_40 = 0xf
            int32_t var_44_1 = 0
            lpFileName_1.b = 0
            int32_t var_24
            
            if (var_24 u>= 0x10)
                int32_t var_a0_6 = var_38
                result, ecx_5 = sub_6b4d5b()
            
            if (var_85_2 != 0)
                int32_t* esi_1 = var_70
                
                if (esi_1 != 0)
                    do
                        if (esi_1[5] u>= 0x10)
                            int32_t var_a0_11 = *esi_1
                            sub_6b4d5b()
                        
                        esi_1[5] = 0xf
                        esi_1[4] = 0
                        *esi_1 = 0
                        esi_1 = &esi_1[7]
                    while (esi_1 != var_6c_1)
                    
                    int32_t* var_a0_12 = var_70
                    sub_6b4d5b()
                
                void** result_8 = result_3
                
                if (result_8 == 0)
                    goto label_595efd_1
                
                void** result_11 = result_8
                
                if (result_8 != var_80)
                    do
                        if (result_11[5] u>= 0x10)
                            void* var_a0_13 = *result_11
                            sub_6b4d5b()
                        
                        result_11[5] = 0xf
                        result_11[4] = 0
                        *result_11 = nullptr
                        result_11 = &result_11[7]
                    while (result_11 != var_80)
                
                void** result_10 = result_8
                sub_6b4d5b()
                result.b = 0
                goto label_59615b
            
            esi = &esi[7]
        while (esi != var_6c_1)
        
        esi = var_70
    
    if (lpPathName[5] u>= 0x10)
        lpPathName = *lpPathName
    
    BOOL eax_11
    int32_t ecx_7
    eax_11, ecx_7 = RemoveDirectoryA(lpPathName)
    
    if (eax_11 != 0)
        if (esi != 0)
            if (var_70 != var_6c_1)
                do
                    if (esi[5] u>= 0x10)
                        int32_t var_a0_14 = *esi
                        sub_6b4d5b()
                    
                    esi[5] = 0xf
                    esi[4] = 0
                    *esi = 0
                    esi = &esi[7]
                while (esi != var_6c_1)
            
            int32_t* var_a0_15 = var_70
            sub_6b4d5b()
        
        result = result_3
        
        if (result != 0)
            void** result_5 = result
            
            if (result != var_80)
                do
                    if (result_5[5] u>= 0x10)
                        void* var_a0_16 = *result_5
                        sub_6b4d5b()
                        result = result_3
                    
                    result_5[5] = 0xf
                    result_5[4] = 0
                    *result_5 = nullptr
                    result_5 = &result_5[7]
                while (result_5 != var_80)
            
            void** result_2 = result
            sub_6b4d5b()
        
        result.b = 1
    else
        if (esi != 0)
            if (var_70 != var_6c_1)
                do
                    if (esi[5] u>= 0x10)
                        int32_t var_a0_8 = *esi
                        sub_6b4d5b()
                    
                    esi[5] = 0xf
                    esi[4] = 0
                    *esi = 0
                    esi = &esi[7]
                while (esi != var_6c_1)
            
            int32_t* var_a0_9 = var_70
            sub_6b4d5b()
        
        result = result_3
        
        if (result == 0)
        label_595efd:
            result.b = 0
        else
            void** result_4 = result
            
            if (result != var_80)
                do
                    if (result_4[5] u>= 0x10)
                        void* var_a0_10 = *result_4
                        sub_6b4d5b()
                        result = result_3
                    
                    result_4[5] = 0xf
                    result_4[4] = 0
                    *result_4 = nullptr
                    result_4 = &result_4[7]
                while (result_4 != var_80)
            
            void** result_1 = result
            sub_6b4d5b()
            result.b = 0
else
    while (true)
        int32_t* eax_5
        int32_t edx_2
        eax_5, edx_2 = sub_401800(ecx_1, lpPathName, &lpFileName_1)
        var_c_1.b = 1
        var_c_1.b = 2
        result, ecx_1 = sub_595d80(sub_4c1d70(result_6, edx_2, eax_5, &var_70))
        bool cond:0_1 = result.b == 0
        int32_t var_5c
        
        if (var_5c u>= 0x10)
            int32_t* var_a0_3 = var_70
            result, ecx_1 = sub_6b4d5b()
        
        var_c_1.b = 0
        var_5c = 0xf
        int32_t var_60_1 = 0
        var_70.b = 0
        
        if (var_40 u>= 0x10)
            int32_t* lpFileName_2 = lpFileName_1
            result, ecx_1 = sub_6b4d5b()
        
        if (cond:0_1 != 0)
            void** result_7 = result_3
            
            if (result_7 != 0)
                sub_405780(result_7, var_80)
                void** result_9 = result_7
                sub_6b4d5b()
            
            break
        
        result_6 = &result_6[7]
        
        if (result_6 == var_80)
            goto label_595e8b
    
label_595efd_1:
    result.b = 0
label_59615b:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_8c)
return result
