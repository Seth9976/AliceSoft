// 函数: sub_10001a60
// 地址: 0x10001a60
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??_U@YAPAXIW4align_val_t@std@@ABUnothrow_t@1@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
char* esi = arg1
char* var_18 = esi
int32_t edi_1 = arg2 | 0xf

if (edi_1 u<= 0xfffffffe)
    int32_t ebx_1 = *(esi + 0x14)
    uint32_t ecx_1 = ebx_1 u>> 1
    
    if (ecx_1 u> edi_1 u/ 3)
        edi_1 = ecx_1 + ebx_1
        
        if (ebx_1 u> 0xfffffffe - ecx_1)
            edi_1 = 0xfffffffe
else
    edi_1 = arg2

int32_t var_8_1 = 0
char* ebx_2

if (edi_1 == 0xffffffff)
    ebx_2 = nullptr
else if (edi_1 + 1 u< 0x1000)
    ebx_2 = sub_10002147(edi_1 + 1)
else
    if (edi_1 + 0x24 u<= edi_1 + 1)
        sub_1000250e()
        noreturn
    
    int32_t eax_7 = sub_10002147(edi_1 + 0x24)
    ebx_2 = (eax_7 + 0x23) & 0xffffffe0
    *(ebx_2 - 4) = eax_7

if (arg3 != 0)
    char* ecx_3
    
    if (*(esi + 0x14) u< 0x10)
        ecx_3 = esi
    else
        ecx_3 = *esi
    
    if (arg3 != 0)
        sub_1000cc10(ebx_2, ecx_3, arg3)

int32_t eax_10 = *(esi + 0x14)

if (eax_10 u>= 0x10)
    void* ecx_4 = *esi
    
    if (eax_10 + 1 u>= 0x1000)
        if ((ecx_4.b & 0x1f) != 0)
            __invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* eax_12 = *(ecx_4 - 4)
        
        if (eax_12 u>= ecx_4)
            __invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* ecx_5 = ecx_4 - eax_12
        
        if (ecx_5 u< 4)
            __invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (ecx_5 u> 0x23)
            __invalid_parameter_noinfo_noreturn()
            noreturn
        
        ecx_4 = eax_12
    
    _free(ecx_4)

*(esi + 0x14) = 0xf
bool cond:0 = *(esi + 0x14) u< 0x10
*(esi + 0x10) = 0
char* eax_13

if (cond:0)
    eax_13 = esi
else
    eax_13 = *esi

*eax_13 = 0
*esi = ebx_2
*(esi + 0x14) = edi_1
bool cond:1 = *(esi + 0x14) u< 0x10
*(esi + 0x10) = arg3

if (not(cond:1))
    esi = ebx_2

*(esi + arg3) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
