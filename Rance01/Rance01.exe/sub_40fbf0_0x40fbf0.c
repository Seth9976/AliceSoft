// 函数: sub_40fbf0
// 地址: 0x40fbf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71ae18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax_5 = arg2
int32_t var_18 = 0xf
int32_t var_1c = 0
var_2c = 0
char i

do
    i = *eax_5
    eax_5 = &eax_5[1]
while (i != 0)
sub_401270(&var_2c, eax_5 - &eax_5[1], arg2)
int32_t var_4 = 0
int32_t* hModule

if (sub_402680("DrawGraph", &var_2c) == 0)
    hModule = GetModuleHandleA(arg2)
    *arg1 = hModule
    
    if (hModule != 0)
        int32_t eax_13 = GetProcAddress(hModule, "CreateInterface")
        
        if (eax_13 != 0)
            hModule = eax_13(0x7575b8, eax_4)
            goto label_40fcf7
        
        int128_t* var_44_3 = arg2
        sub_604c90("DrawPluginDLL")
        
        if (var_18 u< 0x10)
            hModule.b = 0
        else
            int32_t var_44_4 = var_2c.d
            sub_6b4d5b()
            hModule.b = 0
    else
        if (var_18 u>= 0x10)
            int32_t var_44_2 = var_2c.d
            sub_6b4d5b()
        
        hModule.b = 0
else
    uint32_t eax_9 = zx.d(sub_4022d0(0x7575b8, 0x757640))
    int32_t eax_10 = neg.d(eax_9)
    hModule = sbb.d(eax_10, eax_10, eax_9 != 0) & data_797d34
label_40fcf7:
    arg1[8] = hModule
    
    if (hModule != 0)
        int128_t* eax_14 = arg2
        void* edx_2 = eax_14 + 1
        char i_1
        
        do
            i_1 = *eax_14
            eax_14 += 1
        while (i_1 != 0)
        sub_401270(&arg1[1], eax_14 - edx_2, arg2)
        
        if (var_18 u>= 0x10)
            int32_t var_44_7 = var_2c.d
            sub_6b4d5b()
        
        hModule.b = 1
    else if (var_18 u< 0x10)
        hModule.b = 0
    else
        int32_t var_44_5 = var_2c.d
        sub_6b4d5b()
        hModule.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return hModule
