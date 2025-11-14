// 函数: sub_4cae40
// 地址: 0x4cae40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7276db
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp = arg1

for (int32_t** i = *ebp; i != ebp[1]; i = &i[1])
    int32_t* edi_1 = *i
    
    if (edi_1 != 0)
        arg1 = edi_1
        int32_t var_4 = 0
        sub_4c9210(edi_1)
        int32_t var_4_1 = 0xffffffff
        
        if (edi_1[0x11] u>= 0x10)
            int32_t var_24_1 = edi_1[0xc]
            sub_6b4d5b()
        
        edi_1[0x11] = 0xf
        edi_1[0x10] = 0
        int32_t* var_24_2 = edi_1
        edi_1[0xc].b = 0
        result = sub_6b4d5b()

int128_t* ecx = ebp[1]
int128_t* esi = *ebp

if (esi != ecx)
    void* edi_2 = 0 s>> 2 << 2
    result = sub_6b49d0(esi, ecx, edi_2, eax_2)
    ebp[1] = edi_2 + esi

fsbase->NtTib.ExceptionList = ExceptionList
return result
