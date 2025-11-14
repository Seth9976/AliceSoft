// 函数: sub_403e90
// 地址: 0x403e90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7209b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL var_3c = 0
int32_t var_38 = 0
int32_t var_34 = 0
int32_t var_4 = 0
sub_404f60(*(arg1 + 0x40), &var_3c)
uint32_t numberOfBytesRead_1
uint32_t numberOfBytesRead_8 = numberOfBytesRead_1
BOOL hFile = *numberOfBytesRead_8
uint32_t nNumberOfBytesToRead = *(arg1 + 0x40)
BOOL lpBuffer_2

if (hFile == 0xffffffff
        || *(numberOfBytesRead_8 + 4) + nNumberOfBytesToRead u> *(numberOfBytesRead_8 + 8))
    lpBuffer_2 = var_3c
label_403f80:
    
    if (lpBuffer_2 == 0)
        hFile.b = 0
    else
        BOOL lpBuffer_3 = lpBuffer_2
        sub_6b4d5b()
        hFile.b = 0
else
    lpBuffer_2 = var_3c
    uint32_t numberOfBytesRead
    int32_t edx_1
    hFile, edx_1 = ReadFile(hFile, lpBuffer_2, nNumberOfBytesToRead, &numberOfBytesRead, nullptr)
    
    if (hFile == 0 || nNumberOfBytesToRead != numberOfBytesRead)
        goto label_403f80
    
    *(numberOfBytesRead_8 + 4) += nNumberOfBytesToRead
    int32_t i = *(arg1 + 0x30)
    void* esi_1 = arg1 + 0x20
    
    if (*(arg1 + 0x34) u>= 0x10)
        esi_1 = *esi_1
    
    hFile = *(arg1 + 0x4c) + lpBuffer_2
    
    while (i u>= 4)
        if (*hFile != *esi_1)
            goto label_403f80
        
        i -= 4
        esi_1 += 4
        hFile += 4
    
    if (i != 0)
        edx_1.b = *esi_1
        
        if (edx_1.b != *hFile)
            goto label_403f80
        
        if (i u<= 1)
            goto label_403f68
        
        edx_1.b = *(esi_1 + 1)
        
        if (edx_1.b != *(hFile + 1))
            goto label_403f80
        
        if (i u<= 2)
            goto label_403f68
        
        i.b = *(esi_1 + 2)
        
        if (i.b != *(hFile + 2))
            goto label_403f80
        
        goto label_403f68
    
label_403f68:
    void* ecx_2 = *(arg1 + 0x50)
    int32_t esi_3 = var_38 - lpBuffer_2
    
    if (esi_3 s>= ecx_2 + 4)
        hFile = ((zx.d(*(ecx_2 + lpBuffer_2 + 3)) << 8 | zx.d(*(ecx_2 + lpBuffer_2 + 2))) << 8
            | zx.d(*(ecx_2 + lpBuffer_2 + 1))) << 8 | zx.d(*(ecx_2 + lpBuffer_2))
    else
        hFile = 0
    
    if (hFile != *(arg1 + 0x44))
        goto label_403f80
    
    void* ecx_4 = *(arg1 + 0x54)
    uint32_t eax_11
    
    if (esi_3 s>= ecx_4 + 4)
        eax_11 = ((zx.d(*(ecx_4 + lpBuffer_2 + 3)) << 8 | zx.d(*(ecx_4 + lpBuffer_2 + 2))) << 8
            | zx.d(*(ecx_4 + lpBuffer_2 + 1))) << 8 | zx.d(*(ecx_4 + lpBuffer_2))
    else
        eax_11 = 0
    
    eax_11.b = eax_11 == 1
    uint32_t numberOfBytesRead_2
    
    if (eax_11.b == 0 && numberOfBytesRead_2.b == eax_11.b)
        sub_604c90(0x7580b0)
    
    void* ecx_6 = *(arg1 + 0x58)
    uint32_t eax_18
    
    if (esi_3 s>= ecx_6 + 4)
        eax_18 = ((zx.d(*(ecx_6 + lpBuffer_2 + 3)) << 8 | zx.d(*(ecx_6 + lpBuffer_2 + 2))) << 8
            | zx.d(*(ecx_6 + lpBuffer_2 + 1))) << 8 | zx.d(*(ecx_6 + lpBuffer_2))
    else
        eax_18 = 0
    
    *arg5 = eax_18
    uint8_t* lpBuffer_7 = nullptr
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0
    var_4.b = 1
    sub_404f60(*(arg1 + 0x5c), &lpBuffer_7)
    HANDLE hFile_1 = *numberOfBytesRead_8
    int32_t lDistanceToMove = *(arg1 + 0x40)
    
    if (hFile_1 != 0xffffffff && lDistanceToMove u< *(numberOfBytesRead_8 + 8))
        SetFilePointer(hFile_1, lDistanceToMove, nullptr, FILE_BEGIN)
        *(numberOfBytesRead_8 + 4) = lDistanceToMove
    
    hFile = *numberOfBytesRead_8
    uint32_t nNumberOfBytesToRead_1 = *(arg1 + 0x5c)
    uint8_t* lpBuffer_1 = lpBuffer_7
    
    if (hFile == 0xffffffff)
    label_4040ce:
        
        if (lpBuffer_1 == 0)
            goto label_403f80
        
        uint8_t* lpBuffer_4 = lpBuffer_1
        sub_6b4d5b()
        goto label_403f80
    
    uint32_t numberOfBytesRead_6 = numberOfBytesRead_1
    
    if (*(numberOfBytesRead_6 + 4) + nNumberOfBytesToRead_1 u> *(numberOfBytesRead_6 + 8))
        goto label_4040ce
    
    if (ReadFile(hFile, lpBuffer_1, nNumberOfBytesToRead_1, &numberOfBytesRead_2, nullptr) == 0
            || nNumberOfBytesToRead_1 != numberOfBytesRead_2)
        goto label_4040ce
    
    uint32_t numberOfBytesRead_3 = numberOfBytesRead_1
    *(numberOfBytesRead_3 + 4) += nNumberOfBytesToRead_1
    void* ecx_8 = *(arg1 + 0x60)
    void* edx_15 = var_18_1 - lpBuffer_1
    uint32_t eax_27
    
    if (edx_15 s>= ecx_8 + 4)
        eax_27 = ((zx.d(*(ecx_8 + lpBuffer_1 + 3)) << 8 | zx.d(*(ecx_8 + lpBuffer_1 + 2))) << 8
            | zx.d(*(ecx_8 + lpBuffer_1 + 1))) << 8 | zx.d(*(ecx_8 + lpBuffer_1))
    else
        eax_27 = 0
    
    int32_t numberOfBytesRead_4 = eax_27 - *(arg1 + 0x5c)
    void* eax_34 = *(arg1 + 0x64)
    numberOfBytesRead_2 = numberOfBytesRead_4
    uint32_t ebp
    
    if (edx_15 s>= eax_34 + 4)
        ebp = ((zx.d(*(eax_34 + lpBuffer_1 + 3)) << 8 | zx.d(*(eax_34 + lpBuffer_1 + 2))) << 8
            | zx.d(*(eax_34 + lpBuffer_1 + 1))) << 8 | zx.d(*(eax_34 + lpBuffer_1))
    else
        ebp = 0
    
    int32_t edi_1 = *(arg1 + 0x68)
    uint32_t eax_37
    
    if (edx_15 s>= edi_1 + 4)
        eax_37 = ((zx.d(lpBuffer_1[edi_1 + 3]) << 8 | zx.d(lpBuffer_1[edi_1 + 2])) << 8
            | zx.d(lpBuffer_1[edi_1 + 1])) << 8 | zx.d(lpBuffer_1[edi_1])
    else
        eax_37 = 0
    
    *arg3 = eax_37
    uint8_t* lpBuffer = nullptr
    int32_t var_28_1 = 0
    int32_t var_24_1 = 0
    var_4.b = 2
    sub_404f60(numberOfBytesRead_4, &lpBuffer)
    uint32_t numberOfBytesRead_9 = numberOfBytesRead_1
    HANDLE hFile_2 = *numberOfBytesRead_9
    
    if (hFile_2 == 0xffffffff)
    label_4042a0:
        uint8_t* lpBuffer_8 = lpBuffer
        
        if (lpBuffer_8 != 0)
            uint8_t* lpBuffer_11 = lpBuffer_8
            sub_6b4d5b()
        
        if (lpBuffer_1 != 0)
            uint8_t* lpBuffer_6 = lpBuffer_1
            sub_6b4d5b()
        
        hFile = var_3c
        
        if (hFile == 0)
            hFile.b = 0
        else
            BOOL hFile_4 = hFile
            sub_6b4d5b()
            hFile.b = 0
    else
        uint32_t nNumberOfBytesToRead_2 = numberOfBytesRead_2
        
        if (*(numberOfBytesRead_9 + 4) + nNumberOfBytesToRead_2 u> *(numberOfBytesRead_9 + 8))
            goto label_4042a0
        
        if (ReadFile(hFile_2, lpBuffer, nNumberOfBytesToRead_2, &numberOfBytesRead_1, nullptr) == 0
                || nNumberOfBytesToRead_2 != numberOfBytesRead_1)
            goto label_4042a0
        
        *(numberOfBytesRead_9 + 4) += nNumberOfBytesToRead_2
        uint32_t numberOfBytesRead_7 = *arg2
        int128_t* eax_46 = arg2[1]
        numberOfBytesRead_1 = numberOfBytesRead_7
        
        if (numberOfBytesRead_7 != eax_46)
            void* esi_12 = 0
            sub_6b49d0(numberOfBytesRead_7, eax_46, esi_12, eax_2)
            arg2[1] = esi_12 + numberOfBytesRead_1
        
        sub_404f60(ebp, arg2)
        numberOfBytesRead_1 = 0
        var_4.b = 3
        struct IDecompressor::nutria::CZlibDecompressor::VTable** numberOfBytesRead_5 =
            sub_59e250(0x737334)
        int32_t eax_48 = *arg2
        uint8_t* lpBuffer_9 = lpBuffer
        numberOfBytesRead_1 = numberOfBytesRead_5
        
        if (numberOfBytesRead_5 != 0)
            (*numberOfBytesRead_5)->vFunc_2(eax_48, ebp, lpBuffer_9, numberOfBytesRead_2)
        
        *arg4 = ebp
        var_4.b = 2
        
        if (numberOfBytesRead_5 != 0)
            (*numberOfBytesRead_5)->vFunc_1(eax_2)
        
        if (lpBuffer_9 != 0)
            uint8_t* lpBuffer_10 = lpBuffer_9
            sub_6b4d5b()
        
        if (lpBuffer_1 != 0)
            uint8_t* lpBuffer_5 = lpBuffer_1
            sub_6b4d5b()
        
        hFile = var_3c
        
        if (hFile != 0)
            BOOL hFile_3 = hFile
            sub_6b4d5b()
        
        hFile.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return hFile
