// 函数: sub_5c7c40
// 地址: 0x5c7c40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b69b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_edi
int32_t var_18 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (sub_4022d0(0x7577dc, 0x737a4c) != 0)
    struct IEncodeCG::encodecg::CApp::VTable** eax_4 = operator new(0xc)
    struct IEncodeCG::encodecg::CApp::VTable** var_10_1 = eax_4
    int32_t var_4 = 0
    
    if (eax_4 != 0)
        struct IEncodeCG::encodecg::CApp::VTable** result = sub_5c7040(eax_4)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

fsbase->NtTib.ExceptionList = ExceptionList
return 0
