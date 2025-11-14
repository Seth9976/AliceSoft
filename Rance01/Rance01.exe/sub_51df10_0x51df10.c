// 函数: sub_51df10
// 地址: 0x51df10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71f200
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_34
int32_t eax_2 = data_78c474 ^ &var_34
int32_t __saved_edi
int32_t var_48 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_30 = &data_797e08
EnterCriticalSection(data_797e08)
var_34 = 1
int32_t var_4 = 0
void** ebp = data_797df8
int32_t edi = data_797dfc
enum MESSAGEBOX_RESULT result

if (ebp != edi)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    var_4.b = 1
    
    if (ebp != edi)
        int32_t edi_1
        
        do
            sub_402000(&var_2c, ebp, 0, 0xffffffff)
            sub_402cb0(&var_2c, 0x753788, 1)
            edi_1 = data_797dfc
            ebp = &ebp[7]
        while (ebp != edi_1)
        
        int32_t* ebp_1 = data_797df8
        
        if (ebp_1 != edi_1)
            sub_405780(ebp_1, edi_1)
            data_797dfc = ebp_1
    
    CRITICAL_SECTION* lpCriticalSection = data_797e08
    var_34 = 0
    LeaveCriticalSection(lpCriticalSection)
    char* eax_8 = var_2c.d
    
    if (var_18_1 u< 0x10)
        eax_8 = &var_2c
    
    result = sub_604c90(eax_8)
    
    if (var_18_1 u>= 0x10)
        int32_t var_4c_4 = var_2c.d
        result = sub_6b4d5b()
else
    result = LeaveCriticalSection(data_797e08)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_34)
return result
