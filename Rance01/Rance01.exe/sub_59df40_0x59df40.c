// 函数: sub_59df40
// 地址: 0x59df40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e3a6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IXXILoader::xxi::CApp::VTable** var_10 = arg1
int32_t var_14 = data_78c474 ^ &var_10
fsbase->NtTib.ExceptionList = &ExceptionList

if (sub_4022d0(arg2, 0x74a2b8) == 0)
    if (sub_4022d0(arg2, 0x74a2c8) != 0)
        struct IXXILoader::xxi::CApp::VTable** eax_7 = operator new(0x38)
        var_10 = eax_7
        int32_t var_4_1 = 1
        
        if (eax_7 != 0)
            struct IXXILoader::xxi::CApp2::VTable** eax_8 = sub_59cf10(eax_7)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_8
else
    struct IXXILoader::xxi::CApp::VTable** eax_4 = operator new(0x58)
    var_10 = eax_4
    int32_t var_4 = 0
    
    if (eax_4 != 0)
        struct IXXILoader::xxi::CApp::VTable** eax_5 = sub_59bb10(eax_4)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_5

fsbase->NtTib.ExceptionList = ExceptionList
return 0
