// 函数: sub_6bbe54
// 地址: 0x6bbe54
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_1 = 0x2c
int32_t var_8 = 0x771148
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_42 = data_78c474
int32_t var_8_3 = 0x771148 ^ eax_42
int32_t __saved_ebp
int32_t var_50 = eax_42 ^ &__saved_ebp
int32_t* var_1c = &var_50
void* const var_54_13 = &data_6bbe60
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_3c = 0
int32_t var_30_1
__builtin_memset(&var_30_1, 0, 0x14)
sub_6bf5de(7)
int32_t var_8_1 = 0
void* var_24 = &data_78c558
int32_t var_2c
int32_t var_28
int32_t var_20

if (sub_6bc61f(&var_20) == 0 && _rand_s(&var_28) == 0 && sub_6bc5f2(&var_2c) == 0)
    uint32_t CodePage = sub_6c2d39()
    data_797924 = 0
    data_78c4bc = 0xffffffff
    data_78c4b0 = 0xffffffff
    void* eax_3 = __getenv_helper_nolock("TZ")
    void* var_40_1 = eax_3
    
    if (eax_3 == 0 || *eax_3 == 0)
        int32_t eax_13 = data_797928
        
        if (eax_13 != 0)
            __free_base(eax_13)
            data_797928 = 0
        
        if (GetTimeZoneInformation(&data_797878) != 0xffffffff)
            data_797924 = 1
            int32_t eax_16 = data_797878 * 0x3c
            var_20 = eax_16
            
            if (data_7978be != 0)
                var_20 = eax_16 + data_7978cc * 0x3c
            
            int32_t eax_18
            
            if (data_797912 != 0)
                eax_18 = data_797920
            
            if (data_797912 == 0 || eax_18 == 0)
                var_28 = 0
                var_2c = 0
            else
                var_28 = 1
                var_2c = (eax_18 - data_7978cc) * 0x3c
            
            BOOL usedDefaultChar
            
            if (WideCharToMultiByte(CodePage, 0, &data_79787c, 0xffffffff, *var_24, 0x3f, nullptr, 
                    &usedDefaultChar) == 0 || usedDefaultChar != 0)
                **var_24 = 0
            else
                *(*var_24 + 0x3f) = 0
            
            if (WideCharToMultiByte(CodePage, 0, &data_7978d0, 0xffffffff, *(var_24 + 4), 0x3f, 
                    nullptr, &usedDefaultChar) == 0 || usedDefaultChar != 0)
                **(var_24 + 4) = 0
            else
                *(*(var_24 + 4) + 0x3f) = 0
        
        goto label_6bc04d
    
    char* eax_4 = data_797928
    
    if (eax_4 == 0)
    label_6bbf24:
        int32_t eax_9 = sub_6b8223(_strlen(eax_3) + 1)
        data_797928 = eax_9
        
        if (eax_9 == 0)
            goto label_6bc04d
        
        void* eax_11 = _strlen(eax_3) + 1
        
        if (sub_6b5353(data_797928, eax_11, eax_3) == 0)
            goto label_6bc05c
    else
        if (sub_6b7db0(eax_3, eax_4) != 0)
            int32_t eax_6 = data_797928
            
            if (eax_6 != 0)
                __free_base(eax_6)
            
            goto label_6bbf24
        
    label_6bc04d:
        var_30_1 = 1
    label_6bc05c:
        data_78c4c8 = var_20
        data_78c4cc = var_28
        data_78c4d0 = var_2c
        int32_t var_8_2 = 0xfffffffe
        int32_t result = sub_6bc0d7()
        
        if (var_30_1 != 0)
            goto label_6b83d8
        
        if (sub_6be6db(*var_24, 0x40, eax_3, 3) == 0)
            void* esi_2 = eax_3 + 3
            
            if (*esi_2 == 0x2d)
                var_3c = 1
                esi_2 += 1
            
            var_20 = sub_6c2c9c(esi_2) * 0xe10
            
            while (true)
                int32_t eax_35
                eax_35.b = *esi_2
                
                if (eax_35.b != 0x2b)
                    if (eax_35.b s< 0x30)
                        break
                    
                    if (eax_35.b s> 0x39)
                        break
                
                esi_2 += 1
            
            if (*esi_2 == 0x3a)
                esi_2 += 1
                int32_t eax_37 = sub_6c2c9c(esi_2) * 0x3c
                var_20 += eax_37
                
                while (true)
                    eax_37.b = *esi_2
                    
                    if (eax_37.b s< 0x30)
                        break
                    
                    if (eax_37.b s> 0x39)
                        break
                    
                    esi_2 += 1
                
                if (*esi_2 == 0x3a)
                    esi_2 += 1
                    int32_t eax_38 = sub_6c2c9c(esi_2)
                    var_20 += eax_38
                    
                    while (true)
                        eax_38.b = *esi_2
                        
                        if (eax_38.b s< 0x30)
                            break
                        
                        if (eax_38.b s> 0x39)
                            break
                        
                        esi_2 += 1
            
            if (var_3c != 0)
                var_20 = neg.d(var_20)
            
            int32_t eax_39 = sx.d(*esi_2)
            var_28 = eax_39
            
            if (eax_39 == 0)
                **(var_24 + 4) = 0
            label_6bc155:
                data_78c4c8 = var_20
                int32_t esi_4 = var_28
                result = sub_6bc64c()
                data_78c4cc = esi_4
            label_6b83d8:
                fsbase->NtTib.ExceptionList = ExceptionList
                void* const __saved_ebp_2 = &data_6bc166
                return result
            
            if (sub_6be6db(*(var_24 + 4), 0x40, esi_2, 3) == 0)
                goto label_6bc155

int32_t var_64
__builtin_memset(&var_64, 0, 0x14)
sub_6b86b7()
noreturn
