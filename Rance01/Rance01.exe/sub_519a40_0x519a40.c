// 函数: sub_519a40
// 地址: 0x519a40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712afe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp = arg1

for (int32_t** i = *ebp; i != ebp[1]; i = &i[1])
    int32_t* esi_1 = *i
    arg1 = esi_1
    
    if (esi_1 != 0)
        int32_t var_4 = 0
        sub_514b80(esi_1)
        int32_t var_4_1 = 0xffffffff
        int32_t* ecx_1 = esi_1[0x9f]
        
        if (ecx_1 != 0)
            (*(*ecx_1 + 4))(eax_2)
            esi_1[0x9f] = 0
        
        int32_t* var_24_1 = esi_1
        esi_1[0xa7].b = 0
        result = sub_6b4d5b()

int128_t* ecx_2 = ebp[1]
int128_t* esi_2 = *ebp

if (esi_2 != ecx_2)
    void* edi = 0 s>> 2 << 2
    result = sub_6b49d0(esi_2, ecx_2, edi, eax_2)
    ebp[1] = edi + esi_2

fsbase->NtTib.ExceptionList = ExceptionList
return result
