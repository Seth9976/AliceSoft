// 函数: sub_695c80
// 地址: 0x695c80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_720288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebx = arg2
int32_t ecx = ebx[4]
var_34 = 0
int32_t edi = 0
void** var_30 = ebx
var_34 = ecx
int32_t var_18 = 0xf
void* var_1c = nullptr
char var_2c = 0
int32_t edx = sub_401270(&var_2c, nullptr, 0x72ce76)
int32_t var_4 = 0

if (var_34 s<= 0)
label_695da0:
    sub_401350(var_1c, edx, ebx[4] - var_1c, ebx)
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
    
    if (arg1 != &var_2c)
        if (*(arg1 + 0x14) u>= 0x10)
            int32_t var_4c_3 = *arg1
            sub_6b4d5b()
        
        *(arg1 + 0x14) = 0xf
        *(arg1 + 0x10) = 0
        *arg1 = 0
        
        if (var_18 u>= 0x10)
            *arg1 = var_2c.d
            *(arg1 + 0x10) = var_1c
            *(arg1 + 0x14) = var_18
        else
            sub_6b49d0(arg1, &var_2c, var_1c + 1, eax_4)
            *(arg1 + 0x10) = var_1c
            *(arg1 + 0x14) = var_18
    else if (var_18 u>= 0x10)
        int32_t var_4c_6 = var_2c.d
        sub_6b4d5b()
else
    while (true)
        if (ebx[5] u>= 0x10)
            ebx = *ebx
        
        ebx.b = *(ebx + edi)
        
        if (var_18 u< 1)
            edx = sub_401470(&var_2c, 1, var_1c)
        
        char* eax_5 = var_2c.d
        
        if (var_18 u< 0x10)
            eax_5 = &var_2c
        
        *eax_5 = ebx.b
        char* eax_6 = var_2c.d
        var_1c = 1
        
        if (var_18 u< 0x10)
            eax_6 = &var_2c
        
        eax_6[1] = 0
        
        if ((ebx.b u>= 0x81 && ebx.b u<= 0x9f) || ebx.b u>= 0xe0)
            edi += 1
            
            if (var_34 s<= edi)
                break
            
            void** eax_7 = var_30
            
            if (eax_7[5] u>= 0x10)
                eax_7 = *eax_7
            
            edx = sub_401f60(&var_2c, *(eax_7 + edi))
        
        ebx = var_30
        edi += 1
        
        if (edi s>= var_34)
            goto label_695da0
    
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
    sub_401270(arg1, nullptr, 0x72ce77)
    
    if (var_18 u>= 0x10)
        int32_t var_4c_5 = var_2c.d
        sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return arg1
