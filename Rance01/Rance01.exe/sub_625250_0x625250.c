// 函数: sub_625250
// 地址: 0x625250
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71d110
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_48
int32_t var_10 = data_78c474 ^ &var_48
int32_t ebx
int32_t var_4c = ebx
int32_t ebp
int32_t var_50 = ebp
int32_t esi
int32_t var_54 = esi
int32_t edi
int32_t var_58 = edi
int32_t var_5c = data_78c474 ^ &var_58
int32_t* esp_1 = &var_5c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = 0
var_48 = arg2
int32_t* result

if (*(arg1 + 4) == 0 || *(arg1 + 8) == 0)
    result.b = 0
else
    int32_t eax_6 = (***(arg1 + 4))()
    int32_t* result_1 = nullptr
    int32_t var_3c_1 = 0
    int32_t var_38_1 = 0
    int32_t var_30 = 0
    sub_4257e0(&result_1, eax_6, &var_30)
    int32_t var_4 = 0
    bool cond:0_1
    
    if (sub_625410(arg1, (*(**(arg1 + 4) + 0x20))(), &result_1) != 0)
        esp_1 = &var_5c
        
        if (sub_6258a0(arg1, &result_1) != 0)
            int32_t edi_2 = 0
            
            if (eax_6 s> 0)
                do
                    int32_t edx_3 = *(**(arg1 + 4) + 0x14)
                    *(esp_1 - 4) = i
                    
                    if (edx_3() != 0xffffffff)
                        int32_t* esi_5 = esp_1[7] + (i << 2)
                        int32_t eax_14 = *(**(arg1 + 4) + 0x38)
                        *(esp_1 - 4) = i
                        
                        if (eax_14() != *esi_5)
                            void* edx_6 = **(arg1 + 4)
                            *(esp_1 - 4) = *(esp_1[7] + (i << 2))
                            int32_t eax_17 = *(edx_6 + 0x38)
                            *(esp_1 - 8) = i
                            *(esp_1 - 4) = eax_17()
                            *(esp_1 - 8) = i
                            *(esp_1 - 0xc) = "Page %d : Ref %d != %d\r\n"
                            int32_t eax_19 = sub_4104a0()
                            int32_t esi_6 = esp_1[6]
                            *esp_1 = 0xffffffff
                            *(esp_1 - 4) = 0
                            *(esp_1 - 8) = eax_19
                            esp_1[0x17].b = 1
                            sub_402000(esi_6)
                            esp_1 = &esp_1[1]
                            esp_1[0x16].b = 0
                            sub_401110(&esp_1[0xc])
                            edi_2 += 1
                    
                    i += 1
                while (i s< esp_1[6])
            
            if (eax_6 s> 0 && edi_2 s> 0)
                result = esp_1[7]
                cond:0_1 = result == 0
                goto label_6252fb
            
            result = esp_1[7]
            
            if (result != 0)
                *(esp_1 - 4) = result
                sub_6b4d5b()
            
            result.b = 1
        else
            int32_t var_60_5 = 0x734004
            sub_401270(var_48, 0x24, 0x734004)
            esp_1 = &var_5c
            sub_65ab60(&result_1)
            result.b = 0
    else
        int32_t var_60_3 = 0x733fe4
        sub_401270(var_48, 0x1c, 0x733fe4)
        esp_1 = &var_5c
        result = result_1
        cond:0_1 = result == 0
    label_6252fb:
        
        if (cond:0_1)
            result.b = 0
        else
            *(esp_1 - 4) = result
            sub_6b4d5b()
            result.b = 0

fsbase->NtTib.ExceptionList = esp_1[0x14]
esp_1[1]
esp_1[2]
esp_1[3]
esp_1[4]
sub_6b4885(esp_1[0x13] ^ &esp_1[5])
return result
