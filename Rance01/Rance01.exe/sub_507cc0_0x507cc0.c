// 函数: sub_507cc0
// 地址: 0x507cc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_727a4b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_507e40(arg2)
arg2[1] = arg1
(**arg1)(eax_2)
int32_t* ecx_1 = arg2[1]

if (ecx_1 != 0)
    char eax_6 = (*(*ecx_1 + 0x64))()
    int32_t* ecx_2 = arg2[1]
    *(arg2 + 0x102) = eax_6
    char eax_8 = (*(*ecx_2 + 0x68))()
    int32_t* ecx_3 = arg2[1]
    *(arg2 + 0x103) = eax_8
    
    if (ecx_3 != 0)
        char eax_10 = (*(*ecx_3 + 0x58))(2)
        int32_t* ecx_4 = arg2[1]
        *(arg2 + 0x101) = eax_10
        arg2[0x40].b = (*(*ecx_4 + 0x58))(3)
    
    int32_t* edi_1 = operator new(0x50)
    int32_t* var_1c_1 = edi_1
    int32_t var_c_1 = 0
    
    if (edi_1 == 0)
        edi_1 = nullptr
    else
        *edi_1 = arg2[1]
        edi_1[1].b = 1
        sub_58ea30(&edi_1[2])
    
    int32_t var_c_2 = 0xffffffff
    arg2[0x1a6] = edi_1
    
    if (sub_510000(edi_1) != 0)
        if (sub_509cf0(arg2[1], &arg2[2], arg2[0x1a6], arg2[0x1a4]) == 0)
            sub_51ddc0(0x7543e8)
            enum MESSAGEBOX_RESULT eax_18
            eax_18.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_18
        
        int32_t eax_19 = arg2[0x1a5]
        int32_t edx_6 = arg2[0x1a4]
        arg2[0x48] = eax_19
        arg2[0x1a2] = eax_19
        *arg2 = arg3
        arg2[0x47] = edx_6
        int32_t eax_20
        eax_20.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_20
    
    sub_51ddc0(0x7543bc)

enum MESSAGEBOX_RESULT eax_4
eax_4.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_4
