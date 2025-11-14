// 函数: sub_58ec70
// 地址: 0x58ec70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71e568
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t numberOfBytesRead
uint32_t numberOfBytesRead_1 = numberOfBytesRead
int128_t* eax_3 = *(numberOfBytesRead_1 + 0x28)
int128_t* edi = *(numberOfBytesRead_1 + 0x24)

if (edi != eax_3)
    void* esi_2 = 0
    sub_6b49d0(edi, eax_3, esi_2, eax_2)
    *(numberOfBytesRead_1 + 0x28) = esi_2 + edi

void** eax_4 = numberOfBytesRead_1 + 8
bool cond:0 = eax_4[5] u< 0x10
void** var_3c = eax_4
eax_4[4] = 0

if (not(cond:0))
    eax_4 = *eax_4

*eax_4 = nullptr
sub_58f670(numberOfBytesRead_1 + 0x34)
int32_t* ecx = *(numberOfBytesRead_1 + 0x44)

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    *(numberOfBytesRead_1 + 0x44) = 0

*(numberOfBytesRead_1 + 4) = 0
BOOL hObject = 0xffffffff
int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_4 = 0

if (sub_601f00(&hObject, arg1) == 0)
    goto label_58edc0

uint32_t lpBuffer_4 = 0
int32_t var_28_1 = 0
int32_t var_24_1 = 0
sub_404f60(8, &lpBuffer_4)
var_4.b = 1
uint32_t lpBuffer = lpBuffer_4
BOOL result = hObject
uint32_t nNumberOfBytesToRead = var_28_1 - lpBuffer

if (result == 0xffffffff)
    goto label_58edb5

uint32_t lpBuffer_7 = var_34 + nNumberOfBytesToRead
uint32_t lpBuffer_3 = lpBuffer_7

if (lpBuffer_7 u> var_30)
    goto label_58edb5

if (ReadFile(result, lpBuffer, nNumberOfBytesToRead, &numberOfBytesRead, nullptr) == 0
        || nNumberOfBytesToRead != numberOfBytesRead)
    result = hObject
label_58edb5:
    
    if (lpBuffer != 0)
        uint32_t lpBuffer_2 = lpBuffer
        sub_6b4d5b()
    label_58edc0:
        result = hObject
    
    if (result != 0xffffffff)
        CloseHandle(result)
    
    result.b = 0
else
    uint32_t lpBuffer_5 = lpBuffer_3
    lpBuffer_3 = lpBuffer
    int32_t var_44_1 = var_28_1
    
    if (sub_58efd0(&lpBuffer_3) != 0)
        int32_t var_40
        
        if (sub_602230(&hObject, &var_40) == 0)
            sub_65ab60(&lpBuffer_4)
            goto label_58edc0
        
        int32_t eax_11 = var_40
        
        if (eax_11 s<= 0)
            goto label_58ee9c
        
        uint32_t lpBuffer_6
        sub_413150(&lpBuffer_6, eax_11)
        var_4.b = 2
        uint32_t lpBuffer_8 = lpBuffer_6
        int32_t var_18
        
        if (sub_6021f0(&hObject, var_18 - lpBuffer_8, lpBuffer_8) != 0)
            lpBuffer_3 = lpBuffer_6
            int32_t var_44_2 = var_18
            
            if (sub_58f0b0(numberOfBytesRead_1, &lpBuffer_3) == 0)
                goto label_58ee2b
            
            struct IDecompressor::nutria::CZlibDecompressor::VTable** eax_15 = sub_59e250(0x74b274)
            *(numberOfBytesRead_1 + 0x44) = eax_15
            
            if (eax_15 == 0)
                goto label_58ee2b
            
            *(numberOfBytesRead_1 + 4) = 1
            sub_401180(var_3c, 0xffffffff, arg1, 0)
            sub_65ab60(&lpBuffer_6)
        label_58ee9c:
            sub_65ab60(&lpBuffer_4)
            sub_601e80(&hObject)
            result.b = 1
        else
        label_58ee2b:
            sub_65ab60(&lpBuffer_6)
            sub_65ab60(&lpBuffer_4)
            sub_601e80(&hObject)
            result.b = 0
    else
        if (lpBuffer != 0)
            uint32_t lpBuffer_1 = lpBuffer
            sub_6b4d5b()
        
        CloseHandle(hObject)
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
