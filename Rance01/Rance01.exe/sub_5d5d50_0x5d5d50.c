// 函数: sub_5d5d50
// 地址: 0x5d5d50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725f26
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* ebx = arg1
struct ISoundDevice::kiwi::CDummySoundDevice::VTable** eax_3 = operator new(0x5c)
arg1 = eax_3
int32_t var_4 = 0
struct ISoundDevice::kiwi::CDirectSound::VTable** esi

if (eax_3 == 0)
    esi = nullptr
else
    esi = sub_5d3b90(eax_3)

int32_t var_4_1 = 0xffffffff

if (sub_5d3cc0(*(ebx + 0x18), esi, *(ebx + 0x1c), *(ebx + 0x20), *(ebx + 0x24), *(ebx + 8)) == 0)
    (*esi)->vFunc_1(eax_2)
    struct ISoundDevice::kiwi::CDummySoundDevice::VTable** eax_10 = operator new(0x44)
    arg1 = eax_10
    int32_t var_4_2 = 1
    
    if (eax_10 == 0)
        esi = nullptr
    else
        esi = sub_594b40(eax_10)
    
    int32_t var_4_3 = 0xffffffff
    
    if (sub_594c50(*(ebx + 0x18), esi, *(ebx + 0x1c), *(ebx + 0x20), *(ebx + 0x24), *(ebx + 8))
            == 0)
        (*esi)->vFunc_1()
        sub_5d5880(ebx)
        int32_t result
        result.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

*(ebx + 0x34) = esi
fsbase->NtTib.ExceptionList = ExceptionList
return 1
