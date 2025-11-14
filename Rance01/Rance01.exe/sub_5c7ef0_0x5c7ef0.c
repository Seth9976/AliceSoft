// 函数: sub_5c7ef0
// 地址: 0x5c7ef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712728
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = data_78c474 ^ &var_4c
int32_t __saved_edi
int32_t var_60 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL hObject_1 = 0xffffffff
int32_t var_3c = 0
int32_t var_38 = 0
int32_t var_4 = 0
BOOL hObject

if (sub_601f00(&hObject_1, arg1).b != 0)
    BOOL hObject_2 = hObject_1
    
    if (hObject_2 == 0xffffffff)
        hObject.b = 0
    else
        uint32_t numberOfBytesRead
        uint8_t buffer
        
        if (var_3c + 6 u> var_38)
            CloseHandle(hObject_2)
            hObject.b = 0
        else if (ReadFile(hObject_2, &buffer, 6, &numberOfBytesRead, nullptr) == 0
                || numberOfBytesRead != 6)
            CloseHandle(hObject_2)
            hObject.b = 0
        else
            int32_t var_3c_1 = var_3c + 6
            char var_1b
            char var_1a
            uint32_t lDistanceToMove =
                ((((zx.d(var_1a) << 8) + zx.d(var_1b)) << 8) + zx.d(buffer)) << 8
            char var_19
            char var_18
            char var_17
            *(arg2 + 0x24) = ((((((zx.d(var_17) << 8) + zx.d(var_18)) << 8) + zx.d(var_19)) << 8)
                - lDistanceToMove) u/ 3 + 1
            int32_t* ecx_7 = *(arg2 + 0x18)
            int32_t* eax_9 = *(arg2 + 0x14)
            
            if (eax_9 != ecx_7)
                *(arg2 + 0x18) = sub_5c9170(eax_9, ecx_7, ecx_7, eax_9)
            
            sub_5c8d80(*(arg2 + 0x24), arg2 + 0x14)
            char* eax_12 = *(arg2 + 0x14)
            *eax_12 = 0
            *(eax_12 + 2) = 0
            
            if (lDistanceToMove u>= var_38)
                CloseHandle(hObject_1)
                hObject.b = 0
            else
                SetFilePointer(hObject_1, lDistanceToMove, nullptr, FILE_BEGIN)
                int32_t eax_13 = *(arg2 + 0x24)
                uint32_t lDistanceToMove_1 = lDistanceToMove
                uint32_t var_30
                uint32_t* esi_8 = &var_30
                var_30 = 0
                int32_t var_2c_1 = 0
                int32_t var_28_1 = 0
                sub_404f60(eax_13 * 3 - 3, esi_8)
                uint32_t eax_15 = var_30
                
                if (eax_15 != var_2c_1)
                    if (sub_6021f0(&hObject_1, var_2c_1 - eax_15, eax_15) != 0)
                        uint32_t ecx_9 = var_30
                        numberOfBytesRead = 1
                        
                        if (*(arg2 + 0x24) s> 1)
                            int32_t edi_4 = 0x10
                            char* esi_12 = ecx_9 + 1
                            uint32_t var_44_1 = ecx_9 + 2
                            uint32_t i
                            
                            do
                                char var_45
                                uint32_t edx_8
                                
                                if (esi_12 u<= var_2c_1)
                                    edx_8.b = *ecx_9
                                    var_44_1 += 1
                                    ecx_9 += 1
                                    var_45 = edx_8.b
                                    esi_12 = &esi_12[1]
                                
                                int16_t var_20
                                
                                if (var_44_1 u<= var_2c_1)
                                    var_44_1 += 2
                                    uint32_t eax_20 = zx.d(zx.w(*esi_12) << 8) | zx.d(*ecx_9)
                                    ecx_9 += 2
                                    var_20.d = eax_20
                                    esi_12 = &esi_12[2]
                                
                                char* eax_21 = *(arg2 + 0x14)
                                edx_8.b = var_45
                                eax_21[edi_4] = edx_8.b
                                edx_8.w = var_20
                                *(eax_21 + edi_4 + 2) = edx_8.w
                                i = numberOfBytesRead + 1
                                edi_4 += 0x10
                                numberOfBytesRead = i
                            while (i s< *(arg2 + 0x24))
                            ecx_9 = var_30
                        
                        if (ecx_9 != 0)
                            uint32_t var_64_7 = ecx_9
                            sub_6b4d5b()
                        
                        hObject = hObject_1
                        
                        if (hObject == 0xffffffff)
                            hObject.b = 1
                        else
                            CloseHandle(hObject)
                            hObject.b = 1
                    else
                        sub_65ab60(&var_30)
                        sub_601e80(&hObject_1)
                        hObject.b = 0
                else
                    sub_65ab60(esi_8)
                    CloseHandle(hObject_1)
                    hObject.b = 1
else
    hObject = hObject_1
    
    if (hObject != 0xffffffff)
        CloseHandle(hObject)
    
    hObject.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_4c)
return hObject
