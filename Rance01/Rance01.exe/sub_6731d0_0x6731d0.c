// 函数: sub_6731d0
// 地址: 0x6731d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7122e3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_10_1 = arg1
int32_t var_4 = 1
int32_t edi_2 = (arg1[9] - arg1[8]) s>> 2
int32_t ebp = 0

if (edi_2 s> 0)
    do
        int32_t eax_3 = arg1[8]
        
        if (*(eax_3 + (ebp << 2)) != 0)
            int32_t ebx_1 = *(eax_3 + (ebp << 2))
            
            if (ebx_1 != 0)
                sub_6731d0(eax_2)
                int32_t var_28_1 = ebx_1
                sub_6b4d5b()
        
        ebp += 1
    while (ebp s< edi_2)

int128_t* ecx_1 = arg1[9]
int128_t* edi_3 = arg1[8]

if (edi_3 != ecx_1)
    int32_t ebp_1 = 0 s>> 2 << 2
    sub_6b49d0(edi_3, ecx_1, ebp_1, eax_2)
    arg1[9] = ebp_1 + edi_3

arg1[0xc] = 0
arg1[7] = 0
int32_t result = arg1[8]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[8] = 0
arg1[9] = 0
arg1[0xa] = 0

if (arg1[5] u>= 0x10)
    int32_t var_28_3 = *arg1
    result = sub_6b4d5b()

arg1[5] = 0xf
arg1[4] = 0
*arg1 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
