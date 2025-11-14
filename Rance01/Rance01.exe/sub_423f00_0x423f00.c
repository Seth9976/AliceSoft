// 函数: sub_423f00
// 地址: 0x423f00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_711f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
char* eax_4 = (**arg1)(data_78c474 ^ &__saved_edi)
char i

do
    i = *eax_4
    eax_4 = &eax_4[1]
while (i != 0)

if (eax_4 != &eax_4[1])
    int32_t edi_1 = MultiByteToWideChar(0xfde9, 0, (**arg1)(0xffffffff, 0, 0))
    
    if (edi_1 s<= 0)
    label_423fc0:
        int32_t eax_8
        eax_8.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_8
    
    wchar16* lpWideCharStr = nullptr
    int32_t var_34_1 = 0
    int32_t var_30_1 = 0
    sub_424720(&lpWideCharStr, edi_1 + 1)
    int32_t var_c_1 = 0
    wchar16* lpWideCharStr_1 = lpWideCharStr
    
    if (MultiByteToWideChar(0xfde9, 0, (**arg1)(0xffffffff, lpWideCharStr_1, edi_1)) s<= 0)
        if (lpWideCharStr_1 != 0)
            wchar16* lpWideCharStr_2 = lpWideCharStr_1
            sub_6b4d5b()
        
        goto label_423fc0
    
    lpWideCharStr_1[edi_1] = 0
    int32_t cbMultiByte =
        WideCharToMultiByte(0, 0, lpWideCharStr_1, 0xffffffff, nullptr, 0, &data_7570a4, nullptr)
    
    if (cbMultiByte s<= 0)
        goto label_424044
    
    char* lpMultiByteStr_1 = nullptr
    int32_t var_24_1 = 0
    int32_t var_20_1 = 0
    sub_404f60(cbMultiByte + 1, &lpMultiByteStr_1)
    var_c_1.b = 1
    char* lpMultiByteStr = lpMultiByteStr_1
    
    if (WideCharToMultiByte(0, 0, lpWideCharStr, 0xffffffff, lpMultiByteStr, cbMultiByte, 
            &data_7570a8, nullptr) s<= 0)
        sub_65ab60(&lpMultiByteStr_1)
    label_424044:
        sub_65ab60(&lpWideCharStr)
        int32_t eax_14
        eax_14.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_14
    
    lpMultiByteStr[cbMultiByte] = 0
    (*(*arg1 + 4))(lpMultiByteStr)
    sub_65ab60(&lpMultiByteStr_1)
    sub_65ab60(&lpWideCharStr)

void* eax_5
eax_5.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_5
