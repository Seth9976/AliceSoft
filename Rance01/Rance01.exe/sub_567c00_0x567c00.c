// 函数: sub_567c00
// 地址: 0x567c00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_723670
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_84
int32_t eax_2 = data_78c474 ^ &var_84
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = *(arg1 + 0x1d4) != 0
uint32_t numberOfBytesWritten = arg2
BOOL hObject

if (cond:0)
label_567c9f:
    
    if (arg3 != 2)
        int32_t j_2 = (*(*(arg1 + 0x128) + 0x10))(eax_4)
        uint32_t numberOfBytesWritten_2 = (*(*(arg1 + 0x128) + 0x14))()
        uint32_t nNumberOfBytesToWrite_1 = (j_2 * 3 + 3) & 0xfffffffc
        int32_t eax_11 = nNumberOfBytesToWrite_1 * numberOfBytesWritten_2
        int32_t var_46_1 = 0
        int16_t buffer = 0x4d42
        int32_t var_4a_1 = eax_11 + 0x36
        int32_t var_42_1 = 0x36
        int32_t var_3c = 0x28
        int32_t j_3 = j_2
        uint32_t numberOfBytesWritten_3 = numberOfBytesWritten_2
        int32_t var_30_1 = 0x180001
        int32_t var_2c_1 = 0
        int32_t var_28_1 = eax_11
        int32_t var_24_1 = 0
        int32_t var_20_1 = 0
        int32_t var_1c_1 = 0
        int32_t var_18_1 = 0
        BOOL hObject_1 = 0xffffffff
        int32_t var_78_1 = 0
        int32_t var_74_1 = 0
        int32_t var_4 = 0
        
        if (sub_601ea0(&hObject_1, numberOfBytesWritten).b != 0)
            BOOL hObject_3 = hObject_1
            
            if (hObject_3 == 0xffffffff)
                hObject.b = 0
            else
                BOOL eax_12
                uint32_t ecx_3
                eax_12, ecx_3 = WriteFile(hObject_3, &buffer, 0xe, &numberOfBytesWritten, nullptr)
                
                if (eax_12 == 0 || numberOfBytesWritten != 0xe)
                    CloseHandle(hObject_3)
                    hObject.b = 0
                else
                    int32_t var_78_2 = var_78_1 + 0xe
                    
                    if (sub_602180(ecx_3, &var_3c, 0x28, &hObject_1) == 0)
                    label_567f54:
                        sub_601e80(&hObject_1)
                        hObject.b = 0
                    else
                        uint8_t* var_70_1 = (*(*(arg1 + 0x128) + 8))(0, numberOfBytesWritten_2 - 1)
                        uint32_t nNumberOfBytesToWrite = nNumberOfBytesToWrite_1
                        int32_t eax_18 = neg.d((*(*(arg1 + 0x128) + 0x1c))())
                        int128_t* lpBuffer_2
                        sub_413150(&lpBuffer_2, nNumberOfBytesToWrite)
                        var_4.b = 1
                        int128_t* lpBuffer = lpBuffer_2
                        int32_t var_58
                        sub_6bc670(lpBuffer, 0, var_58 - lpBuffer)
                        numberOfBytesWritten = numberOfBytesWritten_2
                        HANDLE hObject_2 = hObject_1
                        
                        if (numberOfBytesWritten_2 s> 0)
                            uint32_t i
                            
                            do
                                int32_t eax_23
                                uint32_t ecx_7
                                eax_23, ecx_7 = (*(*(arg1 + 0x128) + 0x18))()
                                
                                if (eax_23 != 0x18)
                                    hObject = (*(*(arg1 + 0x128) + 0x18))()
                                    
                                    if (hObject == 0x20)
                                        if (j_2 s> 0)
                                            void* ecx_9 = lpBuffer + 2
                                            hObject = &var_70_1[2]
                                            int32_t j_1 = j_2
                                            int32_t j
                                            
                                            do
                                                *(ecx_9 - 2) = *(hObject - 2)
                                                *(ecx_9 - 1) = *(hObject - 1)
                                                *ecx_9 = *hObject
                                                hObject += 4
                                                ecx_9 += 3
                                                j = j_1
                                                j_1 -= 1
                                            while (j != 1)
                                            nNumberOfBytesToWrite = nNumberOfBytesToWrite_1
                                        
                                        uint32_t numberOfBytesWritten_1
                                        
                                        if (hObject_2 != 0xffffffff)
                                            hObject = WriteFile(hObject_2, lpBuffer, 
                                                nNumberOfBytesToWrite, &numberOfBytesWritten_1, 
                                                nullptr)
                                        
                                        if (hObject_2 == 0xffffffff || hObject == 0
                                                || nNumberOfBytesToWrite != numberOfBytesWritten_1)
                                            if (lpBuffer != 0)
                                                int128_t* lpBuffer_1 = lpBuffer
                                                sub_6b4d5b()
                                            
                                            if (hObject_2 != 0xffffffff)
                                                CloseHandle(hObject_2)
                                            
                                            hObject.b = 0
                                            goto label_567f27
                                        
                                        var_78_2 += nNumberOfBytesToWrite
                                else
                                    if (sub_602180(ecx_7, var_70_1, nNumberOfBytesToWrite, 
                                            &hObject_1) == 0)
                                        sub_65ab60(&lpBuffer_2)
                                        goto label_567f54
                                    
                                    hObject_2 = hObject_1
                                    lpBuffer = lpBuffer_2
                                    nNumberOfBytesToWrite = nNumberOfBytesToWrite_1
                                
                                var_70_1 = &var_70_1[eax_18]
                                i = numberOfBytesWritten - 1
                                numberOfBytesWritten = i
                            while (i s> 0)
                        
                        if (hObject_2 == 0xffffffff)
                            goto label_567f11
                        
                        if (CloseHandle(hObject_2) == 0)
                            sub_65ab60(&lpBuffer_2)
                            CloseHandle(hObject_2)
                            hObject.b = 0
                        else
                            hObject_2 = 0xffffffff
                        label_567f11:
                            sub_65ab60(&lpBuffer_2)
                            
                            if (hObject_2 != 0xffffffff)
                                CloseHandle(hObject_2)
                            
                            hObject.b = 1
        else
            hObject = hObject_1
            
            if (hObject != 0xffffffff)
                CloseHandle(hObject)
            
            hObject.b = 0
    else
        hObject = sub_563af0(arg1 + 0x128, arg2)
else
    void* eax_5 = *(arg1 + 0x1bc)
    
    if (eax_5 == 0)
        goto label_567c9f
    
    eax_5.b = *(eax_5 + 0x18) != 0
    
    if (eax_5.b == 0)
        goto label_567c9f
    
    void* edi_1 = *(arg1 + 0x1bc)
    
    if (edi_1 == 0)
        goto label_567c9f
    
    if (sub_58a6f0(edi_1) == 0)
        goto label_567c9f
    
    if (sub_56e710(arg1 + 0x128).b == 0)
        hObject.b = 0
    else
        if (sub_56df80(arg1 + 0x160).b != 0)
            goto label_567c9f
        
        hObject.b = 0

label_567f27:
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_84)
return hObject
