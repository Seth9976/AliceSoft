// 函数: sub_424ec0
// 地址: 0x424ec0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b69b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_esi
int32_t var_18 = data_78c474 ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_797d44

if (*(esi + 0x1c) == 0)
    int16_t* eax_3 = operator new(0x40)
    int16_t* var_10_1 = eax_3
    int32_t var_4 = 0
    
    if (eax_3 == 0)
        result = nullptr
    else
        result = sub_425860(eax_3)
    
    int32_t var_4_1 = 0xffffffff
    *(esi + 0x1c) = result

void* esi_1 = *(esi + 0x1c)

if (esi_1 != 0)
    result = sub_425ac0(esi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
