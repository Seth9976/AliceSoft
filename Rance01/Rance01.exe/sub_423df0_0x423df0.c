// 函数: sub_423df0
// 地址: 0x423df0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b768
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t var_40 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = data_797d40
HANDLE hHandle = *esi
var_30 = arg1
enum WAIT_EVENT result

if (hHandle != 0)
    result = WaitForSingleObject(hHandle, 0)

if (hHandle != 0 && result == WAIT_TIMEOUT)
    result.b = 0
else
    sub_4234a0(esi)
    
    if (esi[0x26] != 0)
        bool cond:0_1 = esi[0x27] u< 0x10
        void* eax_6 = &esi[0x22]
        *(eax_6 + 0x10) = 0
        
        if (not(cond:0_1))
            eax_6 = *eax_6
        
        *eax_6 = 0
    
    int128_t* ecx = esi[0x1e]
    int32_t eax_7 = esi[0x1f]
    
    if (ecx != eax_7)
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        sub_401270(&var_2c, eax_7 - ecx, ecx)
        int32_t var_4 = 0
        char* eax_10 = var_2c.d
        
        if (var_18_1 u< 0x10)
            eax_10 = &var_2c
        
        (*(*var_30 + 4))(eax_10)
        
        if (var_18_1 u>= 0x10)
            int32_t var_44_3 = var_2c.d
            sub_6b4d5b()
    else
        (*(*arg1 + 4))(0x72db6e)
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
