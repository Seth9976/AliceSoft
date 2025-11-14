// 函数: sub_5b4a00
// 地址: 0x5b4a00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719cbb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (sub_4022d0(arg1, 0x745ea8) == 0)
    if (sub_4022d0(arg1, 0x745eb8) != 0)
        struct ISoundDecoder::decodeogg::COGGDecoder::VTable** eax_7 = operator new(8)
        
        if (eax_7 != 0)
            *eax_7 = &decodeogg::COGGDecoder::`vftable'{for `ISoundDecoder'}
            eax_7[1] = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_7
else
    struct ISoundData::decodeogg::CSoundDataOgg::VTable** eax_4 = operator new(0x60)
    struct ISoundData::decodeogg::CSoundDataOgg::VTable** var_10_1 = eax_4
    int32_t var_4 = 0
    
    if (eax_4 != 0)
        *eax_4 = &decodeogg::CSoundDataOgg::`vftable'{for `ISoundData'}
        eax_4[1] = 1
        sub_5b3ea0(&eax_4[2])
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_4

fsbase->NtTib.ExceptionList = ExceptionList
return 0
