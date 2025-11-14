// 函数: sub_57da80
// 地址: 0x57da80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_30 = ebx
int32_t* ebx_1 = arg2
int32_t ebp
int32_t var_34 = ebp
int32_t esi
int32_t var_38 = esi
int32_t edi
int32_t var_3c = edi
int32_t ecx
int32_t var_40 = ecx
arg2 = fconvert.s(fconvert.t(arg7) * fconvert.t(3.1415927410125732) / fconvert.t(180.0))
int32_t eax = sub_70c710(sub_42a880(fconvert.s(fconvert.t(arg2))) * float.t(arg5))
int32_t esi_2 = arg6 * 2
int32_t ebp_1 = eax
arg7 = eax
int32_t eax_1 = sub_70c710(fconvert.t(fconvert.s(float.t(esi_2)))
    / (sub_4ed890(fconvert.s(fconvert.t(arg2))) + fconvert.t(2.0)))
int32_t esi_3 = esi_2 - eax_1
arg2 = eax_1
int32_t var_2c = esi_3
int32_t* edi_1

if (ebp_1 s< 0)
    edi_1 = arg4
    ebp_1 = neg.d(ebp_1)
    arg7 = ebp_1
    var_2c = eax_1
    arg2 = esi_3
else
    edi_1 = arg3

int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(arg5 - ebp_1)
int32_t var_40_3 = 0
int32_t var_44 = 0
int32_t var_48 = 0
int32_t esi_5 = (eax_4 - edx) s>> 1
int32_t var_54 = 0
int32_t var_58 = 0
int32_t var_4 = esi_5
(*(**arg1 + 0x2c))(ebx_1, 0, 0, esi_5, arg6, 0, 0, 0)
int32_t var_40_4 = 0
int32_t var_44_1 = 0
int32_t* esp_1 = &var_3c
int32_t var_10 = (*(*edi_1 + 8))(0, 0)
int32_t var_20 = (*(*edi_1 + 0x1c))()
int32_t eax_12 = esi_5 + ebp_1
arg3 = esi_5
int32_t var_14_2 = eax_12

if (esi_5 s< eax_12)
    int32_t var_8_1 = arg2 i- var_2c
    float var_24_1 = fconvert.s(float.t(arg6))
    int32_t var_28_1 = 0
    arg4 = nullptr
    
    while (true)
        int32_t eax_16
        int32_t edx_5
        edx_5:eax_16 = sx.q(esp_1[0x13])
        int32_t ecx_5 = esp_1[0xb]
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = esi_5
        esp_1 -= 8
        int32_t eax_19
        int32_t edx_6
        edx_6:eax_19 = sx.q(esp_1[7])
        int32_t edi_4 = (divs.dp.d(edx_5:eax_16, ebp_1) + esp_1[6]) & 0xfffffffe
        esp_1[0x13] = edi_4
        int32_t eax_21 = esp_1[0x17]
        esp_1[0xa] = ecx_5 + (divs.dp.d(edx_6:eax_19, ebp_1) << 2)
        
        if (edi_4 s<= eax_21)
            int32_t eax_41
            int32_t edx_13
            edx_13:eax_41 = sx.q(eax_21 - edi_4)
            void* edx_14 = *ebx_1
            esp_1[0xb] = (eax_41 - edx_13) s>> 1
            int16_t* esi_7 = (*(edx_14 + 8))()
            int32_t eax_47 = (*(*ebx_1 + 0x1c))()
            int32_t i_3 = esp_1[9]
            
            if (i_3 s> 0)
                int32_t i
                
                do
                    *esi_7 = 0
                    esi_7[1].b = 0
                    esi_7 += eax_47
                    i = i_3
                    i_3 -= 1
                while (i != 1)
            
            esp_1[0x11] = fconvert.s(fconvert.t(esp_1[6]) / float.t(esp_1[0x11]))
            long double x87_r7_21 = fconvert.t(esp_1[0x11])
            esp_1[0x11] = sub_70c710(x87_r7_21)
            int32_t eax_49 = sub_70c710((x87_r7_21 - float.t(esp_1[0x11])) * fconvert.t(-256.0))
            int32_t edx_18 = (esp_1[0x11] << 8) - eax_49
            int32_t ecx_12 = 0
            esp_1[0xc] = edx_18
            
            if (edi_4 s> 0)
                esp_1[0x11] = edi_4
                
                while (true)
                    char* eax_53 = (ecx_12 s>> 8) * esp_1[7] + esp_1[8]
                    ecx_12 += edx_18
                    *esi_7 = *eax_53
                    *(esi_7 + 1) = eax_53[1]
                    eax_53.b = eax_53[2]
                    esi_7[1].b = eax_53.b
                    esi_7 += eax_47
                    int32_t temp4_1 = esp_1[0x11]
                    esp_1[0x11] -= 1
                    
                    if (temp4_1 == 1)
                        break
                    
                    edx_18 = esp_1[0xc]
            
            int32_t i_4 = esp_1[0x15] - esp_1[9] - edi_4
            
            if (i_4 s> 0)
                int32_t i_1
                
                do
                    *esi_7 = 0
                    esi_7[1].b = 0
                    esi_7 += eax_47
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
        else
            char* esi_6 = (*(*ebx_1 + 8))()
            int32_t eax_25 = (*(*ebx_1 + 0x1c))()
            long double x87_r7_12 = float.t(esp_1[0x11])
            esp_1[9] = eax_25
            esp_1[0x11] = fconvert.s(x87_r7_12)
            esp_1[0x11] = fconvert.s(fconvert.t(esp_1[6]) / fconvert.t(esp_1[0x11]))
            long double x87_r6_3 = fconvert.t(esp_1[0x11])
            int32_t eax_26 = sub_70c710(x87_r6_3)
            esp_1[0x11] = eax_26
            long double x87_r5_3 = fconvert.t(-256.0)
            int32_t eax_27 = sub_70c710((x87_r6_3 - float.t(esp_1[0x11])) * x87_r5_3)
            int32_t ecx_8 = esp_1[0x15]
            int32_t eax_30
            int32_t edx_10
            edx_10:eax_30 = sx.q(edi_4 - ecx_8)
            esp_1[0x11] = ((eax_30 - edx_10) s>> 1) * ecx_8
            long double x87_r5_5 = float.t(esp_1[0x11])
            esp_1[0x11] = fconvert.s(x87_r5_5 / x87_r5_5)
            long double x87_r6_8 = fconvert.t(esp_1[0x11])
            int32_t eax_34 = sub_70c710(x87_r6_8)
            esp_1[0x11] = eax_34
            int32_t eax_35 = sub_70c710(x87_r5_3 * (x87_r6_8 - float.t(esp_1[0x11])))
            int32_t i_5 = esp_1[0x15]
            int32_t ecx_10 = (eax_34 << 8) - eax_35
            
            if (i_5 s> 0)
                int32_t i_2
                
                do
                    char* eax_39 = (ecx_10 s>> 8) * esp_1[7] + esp_1[8]
                    ecx_10 += (eax_26 << 8) - eax_27
                    *esi_6 = *eax_39
                    esi_6[1] = eax_39[1]
                    eax_39.b = eax_39[2]
                    esi_6[2] = eax_39.b
                    esi_6 = &esi_6[esp_1[9]]
                    i_2 = i_5
                    i_5 -= 1
                while (i_2 != 1)
        
        int32_t eax_56 = esp_1[0x12]
        int32_t edx_21 = esp_1[0x14]
        esp_1[0x13] += esp_1[0xd]
        esp_1[5] += edx_21
        ebp_1 = esp_1[0x16]
        esp_1[0x12] = eax_56 + 1
        
        if (eax_56 + 1 s>= esp_1[0xa])
            break
        
        esi_5 = esp_1[0x12]
    
    esi_5 = esp_1[0xe]
    eax_12 = esp_1[0xa]

int32_t edx_22 = esp_1[0x15]
void* edi_7 = **esp_1[0x10]
*(esp_1 - 4) = 0
*(esp_1 - 8) = 0
*(esp_1 - 0xc) = 0
*(esp_1 - 0x10) = edx_22
*(esp_1 - 0x14) = esp_1[0x14] - esi_5 - ebp_1
*(esp_1 - 0x18) = 0
*(esp_1 - 0x1c) = eax_12
int32_t eax_58 = *(edi_7 + 0x2c)
*(esp_1 - 0x20) = ebx_1
int32_t result = eax_58()
*esp_1
esp_1[1]
esp_1[2]
esp_1[3]
return result
