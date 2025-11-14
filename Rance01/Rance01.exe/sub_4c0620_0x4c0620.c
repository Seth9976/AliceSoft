// 函数: sub_4c0620
// 地址: 0x4c0620
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_724170
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_58
int32_t eax_2 = data_78c474 ^ &var_58
int32_t __saved_edi
int32_t var_6c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebx = arg3
void** edi = arg2
void** var_54 = edi
sub_4c09d0(arg1)
int32_t eax_5 = ebx[4]

if (eax_5 == 0)
    goto label_4c0701

int32_t* result
int32_t* eax_6

if (edi[4] == 0)
    if (eax_5 == 0 || edi[4] != 0)
        goto label_4c0701
    
    eax_6 = sub_4c0fd0(arg4, ebx, 1)
    
    if (eax_6 != 0)
        goto label_4c06e9
    
    if (ebx[5] u>= 0x10)
        ebx = *ebx
    
    void** var_70_3 = ebx
    sub_51ddc0(0x75631c)
    result.b = 0
else
    eax_6 = sub_4c1230(arg4, ebx, edi)
    
    if (eax_6 != 0)
    label_4c06e9:
        var_58 = eax_6
        sub_61b5a0(&var_58, arg1)
        edi = var_54
    label_4c0701:
        var_58 = 1
        
        while (true)
            void* var_2c
            sub_4c0a30(ebx, &var_2c)
            int32_t var_4 = 0
            char var_48
            sub_4c0a30(edi, &var_48)
            var_4.b = 1
            int32_t var_34
            int32_t var_18
            
            if (ebx[4] == 0)
            label_4c07ba:
                
                if (var_34 u>= 0x10)
                    int32_t var_70_9 = var_48.d
                    sub_6b4d5b()
                
                var_48 = 0
                int32_t var_38_1 = 0
                int32_t var_34_1 = 0xf
                
                if (var_18 u< 0x10)
                    break
                
                void* var_70_10 = var_2c
                sub_6b4d5b()
                break
            
            void* esi_2 = *(arg4 + 0x18)
            
            if (edi[4] == 0)
                char eax_9
                
                if (esi_2 != 0)
                    eax_9 = sub_50d0f0(&var_2c, esi_2)
                    
                    if (eax_9 == 0)
                        result = sub_4ae840(&var_2c, esi_2 + 0x30)
                
                if (esi_2 == 0 || (eax_9 == 0 && result.b == 0))
                    if (var_34 u>= 0x10)
                        int32_t var_70_18 = var_48.d
                        sub_6b4d5b()
                    
                    int32_t var_34_4 = 0xf
                    int32_t var_38_5 = 0
                    var_48 = 0
                    
                    if (var_18 u< 0x10)
                        break
                    
                    void* var_70_19 = var_2c
                    sub_6b4d5b()
                    break
                
                result = sub_4c0fd0(arg4, &var_2c, 1)
                
                if (result == 0)
                    if (var_34 u>= 0x10)
                        int32_t var_70_20 = var_48.d
                        sub_6b4d5b()
                    
                    int32_t var_34_5 = 0xf
                    int32_t var_38_6 = 0
                    var_48 = 0
                    
                    if (var_18 u< 0x10)
                        break
                    
                    void* var_70_21 = var_2c
                    sub_6b4d5b()
                    break
            else
                if (esi_2 == 0)
                label_4c08c7:
                    
                    if (var_34 u>= 0x10)
                        int32_t var_70_14 = var_48.d
                        sub_6b4d5b()
                    
                    int32_t var_34_2 = 0xf
                    int32_t var_38_3 = 0
                    var_48 = 0
                    
                    if (var_18 u< 0x10)
                        break
                    
                    void* var_70_15 = var_2c
                    sub_6b4d5b()
                    break
                
                result = sub_50d0f0(&var_2c, esi_2)
                
                if (result.b == 0)
                    result = sub_4ae840(&var_2c, esi_2 + 0x30)
                    
                    if (result.b == 0)
                        goto label_4c08c7
                    
                    goto label_4c076c
                
            label_4c076c:
                void* esi_4 = *(arg4 + 0x18)
                char eax_8
                
                if (esi_4 != 0)
                    eax_8 = sub_50d0f0(&var_48, esi_4)
                    
                    if (eax_8 == 0)
                        result = sub_4ae840(&var_48, esi_4 + 0x30)
                
                if (esi_4 == 0 || (eax_8 == 0 && result.b == 0))
                    if (var_34 u>= 0x10)
                        int32_t var_70_16 = var_48.d
                        sub_6b4d5b()
                    
                    int32_t var_34_3 = 0xf
                    int32_t var_38_4 = 0
                    var_48 = 0
                    
                    if (var_18 u< 0x10)
                        break
                    
                    void* var_70_17 = var_2c
                    sub_6b4d5b()
                    break
                
                result = sub_4c1230(arg4, &var_2c, &var_48)
                
                if (result == 0)
                    goto label_4c07ba
            
            int32_t* result_1 = result
            sub_61b5a0(&result_1, arg1)
            
            if (var_34 u>= 0x10)
                int32_t var_70_12 = var_48.d
                sub_6b4d5b()
            
            int32_t var_4_1 = 0xffffffff
            var_34 = 0xf
            int32_t var_38_2 = 0
            var_48 = 0
            
            if (var_18 u>= 0x10)
                void* var_70_13 = var_2c
                sub_6b4d5b()
            
            var_58 += 1
            edi = var_54
        
        result.b = 1
    else
        if (edi[5] u>= 0x10)
            edi = *edi
        
        if (ebx[5] u>= 0x10)
            ebx = *ebx
        
        void** var_70_2 = edi
        void** var_74_1 = ebx
        sub_51ddc0(0x7562e4)
        result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_58)
return result
