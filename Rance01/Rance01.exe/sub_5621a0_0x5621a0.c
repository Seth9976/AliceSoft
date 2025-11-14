// 函数: sub_5621a0
// 地址: 0x5621a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_9 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ec48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = data_78c474 ^ &var_50
int32_t __saved_edi
int32_t var_64 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edx = arg1[1]
int32_t* ecx = *arg1
arg1[5] = arg2

if (ecx != edx)
    int32_t* eax_6 = edx
    
    if (edx != edx)
        do
            *ecx = *eax_6
            ecx[1] = eax_6[1]
            eax_6 = &eax_6[2]
            ecx = &ecx[2]
        while (eax_6 != edx)
    
    arg1[1] = ecx

sub_562770(arg1)
arg1[4] = 0
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_401270(&var_48, 0xa, "DPAnalysis")
int32_t var_4 = 0
bool var_49 = sub_562420(&var_48, arg1) == 0
int32_t var_4_1 = 0xffffffff

if (var_34 u>= 0x10)
    int32_t var_68_1 = var_48.d
    sub_6b4d5b()

bool result

if (var_49 == 0)
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0
    sub_401270(&var_48, 0xa, "DPVariable")
    int32_t var_4_2 = 1
    bool var_49_1 = sub_562420(&var_48, arg1) == 0
    int32_t var_4_3 = 0xffffffff
    
    if (var_34_1 u>= 0x10)
        int32_t var_68_3 = var_48.d
        sub_6b4d5b()
    
    if (var_49_1 != 0)
        result = false
    else
        int32_t var_34_2 = 0xf
        int32_t var_38_2 = 0
        var_48 = 0
        sub_401270(&var_48, 0xb, "DPLogViewer")
        int32_t var_4_4 = 2
        bool var_49_2 = sub_562420(&var_48, arg1) == 0
        int32_t var_4_5 = 0xffffffff
        
        if (var_34_2 u>= 0x10)
            int32_t var_68_5 = var_48.d
            sub_6b4d5b()
        
        if (var_49_2 != 0)
            result = false
        else
            sub_402be0(&var_48, "DPParts")
            int32_t var_4_6 = 3
            bool var_49_3 = sub_562420(&var_48, arg1) == 0
            int32_t var_4_7 = 0xffffffff
            
            if (var_34_2 u>= 0x10)
                int32_t var_68_7 = var_48.d
                sub_6b4d5b()
            
            if (var_49_3 != 0)
                result = false
            else
                void var_2c
                sub_402be0(&var_2c, "DPSound")
                int32_t var_4_8 = 4
                bool cond:0_1 = sub_562420(&var_2c, arg1) == 0
                sub_401110(&var_2c)
                result = cond:0_1 == 0
else
    result = false

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_50)
return result
