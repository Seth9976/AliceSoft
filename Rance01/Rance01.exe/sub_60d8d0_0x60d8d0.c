// 函数: sub_60d8d0
// 地址: 0x60d8d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_718b90
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
BOOL hdc
int32_t eax_2 = data_78c474 ^ &hdc
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
hdc = arg2
int32_t result

if (arg3 s< 0)
    result = 0
else if (arg3 s>= (*(*arg1 + 0x8c))(eax_4))
    result = 0
else
    int32_t* ebx_1 = arg1[0x30] + arg3 * 0x24
    int32_t var_34_1 = 0xf
    int32_t result_1 = 0
    char var_48 = 0
    int32_t var_4 = 0
    int32_t eax_8 = *ebx_1
    
    if (eax_8 == 0)
        int32_t eax_9 = ebx_1[8]
        int32_t ecx_2
        
        if (eax_9 s< 0)
            ecx_2 = 0x7351f4
        else
            int32_t ecx_1 = data_797e1c
            
            if (eax_9 s>= (data_797e20 - ecx_1) s>> 2)
                ecx_2 = 0x7351f4
            else
                ecx_2 = 0x7351f0
                eax_9.b = *(ecx_1 + (eax_9 << 2)) != 0
                
                if (eax_9.b == 0)
                    ecx_2 = 0x7351f4
        
        void* eax_10 = &ebx_1[1]
        
        if (ebx_1[6] u>= 0x10)
            eax_10 = *eax_10
        
        void* var_68_1 = eax_10
        int32_t var_6c_1 = ecx_2
        var_4.b = 1
        sub_401ef0(&var_48, sub_4104a0("%s %s"))
        var_4.b = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            int32_t var_2c
            int32_t var_68_2 = var_2c
            sub_6b4d5b()
        
        int32_t eax_12 = ebx_1[8]
        int32_t ecx_3 = data_797dac
        
        if (arg1[0x3b] == eax_12)
            SetBkColor(hdc, arg1[0x37])
            sub_616380(arg1[0x38], arg1)
        else if (ecx_3 != eax_12)
            SetBkColor(hdc, 0xffffff)
        else
            SetBkColor(hdc, arg1[0x35])
            sub_616380(arg1[0x36], arg1)
        
        char* edx_4 = var_48.d
        
        if (var_34_1 u< 0x10)
            edx_4 = &var_48
        
        BOOL hdc_1 = hdc
        sub_616930(arg4, edx_4, arg1, hdc_1, arg4, arg5)
        int32_t ebx_2 = ebx_1[8]
        
        if (ecx_3 == ebx_2 || arg1[0x3b] == ebx_2)
            SetBkColor(hdc_1, 0xffffff)
            
            if (arg1[0x2c] != 0)
                SetTextColor(arg1[0x29], 0)
                arg1[0x2c] = 0
    else if (eax_8 == 1)
        void* esi_7 = &ebx_1[1]
        sub_401180(&var_48, 0xffffffff, esi_7, 0)
        SetBkColor(arg2, arg1[0x39])
        
        if (*(esi_7 + 0x14) u>= 0x10)
            esi_7 = *esi_7
        
        sub_616930(arg5, esi_7, arg1, arg2, arg4, arg5)
        SetBkColor(arg2, 0xffffff)
    
    if (var_34_1 u>= 0x10)
        int32_t var_68_8 = var_48.d
        sub_6b4d5b()
    
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &hdc)
return result
