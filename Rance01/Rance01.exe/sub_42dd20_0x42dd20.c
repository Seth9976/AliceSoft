// 函数: sub_42dd20
// 地址: 0x42dd20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71b56b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t ExceptionRecord = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::IKeyData::partsengine::CFlatKeyDataGraphic::VTable** arg_c
struct partsengine::IKeyData::partsengine::CFlatKeyDataGraphic::VTable** ebp = arg_c
void* ebx = nullptr
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ebp s<= 0)
label_42dda3:
    result.b = 1
else
    while (true)
        struct partsengine::IKeyData::partsengine::CFlatKeyDataGraphic::VTable** eax_2 =
            operator new(0x7c)
        arg_c = eax_2
        struct _EXCEPTION_REGISTRATION_RECORD* edi_1 = nullptr
        int32_t var_4 = 0
        
        if (eax_2 != 0)
            edi_1 = sub_4307f0(eax_2)
        
        int32_t var_4_1 = 0xffffffff
        
        if (sub_430a40(arg1, edi_1) == 0)
            edi_1->Next->Handler(ExceptionRecord)
            result.b = 0
            break
        
        arg_c = ebx + arg3
        ebx += 1
        *sub_4ccf80(arg2 + 0x4c, &arg_c) = edi_1
        
        if (ebx s>= ebp)
            goto label_42dda3

fsbase->NtTib.ExceptionList = ExceptionList
return result
