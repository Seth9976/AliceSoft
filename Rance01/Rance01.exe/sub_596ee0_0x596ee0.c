// 函数: sub_596ee0
// 地址: 0x596ee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71e460
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t esi
int32_t var_54 = esi
int32_t edi
int32_t var_58 = edi
int32_t eax_4 = data_78c474 ^ &var_58
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_48 = nullptr
int32_t var_44 = 0
int32_t var_40 = 0
int32_t var_c_1 = 0
int128_t* eax_6 = (**arg1)(eax_4)
char* ecx_1 = eax_6
int32_t var_28 = 0
int32_t var_24 = 0xf
char var_38 = 0
char i

do
    i = *ecx_1
    ecx_1 = &ecx_1[1]
while (i != 0)
sub_401270(&var_38, ecx_1 - &ecx_1[1], eax_6)
var_c_1.b = 1
sub_602980(&var_38, &var_48)
var_c_1.b = 0

if (var_24 u>= 0x10)
    int32_t var_60_1 = var_38.d
    sub_6b4d5b()

int32_t* edi_2 = var_48
int32_t edx_6 = *(*arg2 + 0x18)
var_4c = (var_44 - edi_2) s/ 0x1c
int32_t* result
int32_t* entry_ebx
int32_t* esi_4
int32_t edi_3

if (edx_6(&var_4c, 1).b != 0)
    int32_t esi_5 = 0
    
    if (var_54 s> 0)
        do
            result = (*(*arg2 + 0x10))(esi_5)
            
            if (result == 0)
                esi_4 = entry_ebx
                
                if (esi_4 == 0)
                    goto label_596fdf
                
                edi_3 = var_4c
                goto label_596fd1
            
            int32_t* ecx_11
            
            if (edi_2[5] u< 0x10)
                ecx_11 = edi_2
            else
                ecx_11 = *edi_2
            
            (*(*result + 4))(ecx_11)
            esi_5 += 1
            edi_2 = &edi_2[7]
        while (esi_5 s< var_54)
        
        edi_2 = entry_ebx
    
    if (edi_2 != 0)
        sub_405780(entry_ebx, var_4c)
        int32_t* var_68_4 = entry_ebx
        sub_6b4d5b()
    
    result.b = 1
else
    if (edi_2 != 0)
        edi_3 = var_44
        esi_4 = entry_ebx
    label_596fd1:
        sub_405780(esi_4, edi_3)
        int32_t* var_68_1 = esi_4
        sub_6b4d5b()
    
label_596fdf:
    result.b = 0
fsbase->NtTib.ExceptionList = eax_2
sub_6b4885(var_24 ^ &var_54)
return result
