// 函数: sub_401650
// 地址: 0x401650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7181e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t var_44 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg3[4]
int32_t eax_5 = 0
int32_t edi = 0xffffffff
var_30 = 0

if (ebp s> 0)
    int32_t esi_1 = arg3[5]
    
    do
        char* edx
        
        if (esi_1 u< 0x10)
            edx = arg3
        else
            edx = *arg3
        
        char* edx_1
        
        if (edx[eax_5] u>= 0x81)
            if (esi_1 u< 0x10)
                edx_1 = arg3
            else
                edx_1 = *arg3
        
        char* edx_2
        
        if (edx[eax_5] u< 0x81 || edx_1[eax_5] u> 0x9f)
            if (esi_1 u< 0x10)
                edx_2 = arg3
            else
                edx_2 = *arg3
        
        if ((edx[eax_5] u< 0x81 || edx_1[eax_5] u> 0x9f) && edx_2[eax_5] u< 0xe0)
            int32_t* edx_3
            
            if (esi_1 u< 0x10)
                edx_3 = arg3
            else
                edx_3 = *arg3
            
            if (*(edx_3 + eax_5) == 0x2e)
                edi = eax_5
            
            int32_t* edx_4
            
            if (esi_1 u< 0x10)
                edx_4 = arg3
            else
                edx_4 = *arg3
            
            if (*(edx_4 + eax_5) == 0x5c)
                edi = 0xffffffff
            
            eax_5 += 1
        else
            eax_5 += 2
    while (eax_5 s< ebp)

if (ebp s<= 0 || edi == 0xffffffff)
    arg4[5] = 0xf
    arg4[4] = 0
    *arg4 = 0
else
    int32_t var_4 = 0
    int32_t var_2c
    sub_401c00(arg4, sub_401ec0(arg3, &var_2c, edi + 1, ebp))
    int32_t var_18
    
    if (var_18 u>= 0x10)
        int32_t var_48_3 = var_2c
        sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return arg4
