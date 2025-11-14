// 函数: sub_425240
// 地址: 0x425240
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711ebb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp = arg1

for (void** i = ebp[4]; i != ebp[5]; i = &i[1])
    int32_t* esi_1 = *i
    arg1 = esi_1
    
    if (esi_1 != 0)
        int32_t var_4 = 0
        int32_t* eax_3 = *esi_1
        
        if (eax_3 != 0)
            (*(*eax_3 + 0x20))(eax_3)
            int32_t* eax_4 = *esi_1
            (*(*eax_4 + 8))(eax_4)
            *esi_1 = 0
        
        int32_t ecx_3 = esi_1[2]
        
        for (int32_t* j = esi_1[1]; j != ecx_3; j = &j[1])
            *j = 0
        
        int32_t var_4_1 = 0xffffffff
        int32_t eax_5 = esi_1[1]
        
        if (eax_5 != 0)
            int32_t var_24_3 = eax_5
            sub_6b4d5b()
        
        int32_t* var_24_4 = esi_1
        esi_1[1] = 0
        esi_1[2] = 0
        esi_1[3] = 0
        result = sub_6b4d5b()

int128_t* ecx_4 = ebp[5]
int128_t* esi_2 = ebp[4]

if (esi_2 != ecx_4)
    int32_t edi_1 = 0 s>> 2 << 2
    result = sub_6b49d0(esi_2, ecx_4, edi_1, eax_2)
    ebp[5] = edi_1 + esi_2

fsbase->NtTib.ExceptionList = ExceptionList
return result
