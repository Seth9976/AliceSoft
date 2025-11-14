// 函数: sub_4f8740
// 地址: 0x4f8740
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712c78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp = arg1

for (int32_t** i = ebp[0x14]; i != ebp[0x15]; i = &i[1])
    int32_t* esi_1 = *i
    arg1 = esi_1
    
    if (esi_1 != 0)
        int32_t var_4 = 0
        int32_t eax_3 = esi_1[0xe]
        
        if (eax_3 != 0)
            int32_t var_24_1 = eax_3
            sub_6b4d5b()
        
        esi_1[0xe] = 0
        esi_1[0xf] = 0
        esi_1[0x10] = 0
        sub_4fd080(&esi_1[0xa])
        int32_t var_4_1 = 0xffffffff
        
        if (esi_1[5] u>= 0x10)
            int32_t var_24_3 = *esi_1
            sub_6b4d5b()
        
        esi_1[5] = 0xf
        esi_1[4] = 0
        int32_t* var_24_4 = esi_1
        *esi_1 = 0
        result = sub_6b4d5b()

int128_t* ecx_2 = ebp[0x15]
int128_t* esi_2 = ebp[0x14]

if (esi_2 != ecx_2)
    int32_t edi = 0 s>> 2 << 2
    result = sub_6b49d0(esi_2, ecx_2, edi, eax_2)
    ebp[0x15] = edi + esi_2

fsbase->NtTib.ExceptionList = ExceptionList
return result
