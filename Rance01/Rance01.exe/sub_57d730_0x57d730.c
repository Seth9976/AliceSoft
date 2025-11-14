// 函数: sub_57d730
// 地址: 0x57d730
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_2c = ebx
int32_t ebp
int32_t var_30 = ebp
int32_t esi
int32_t var_34 = esi
int32_t edi
int32_t var_38 = edi
int32_t ecx
int32_t var_3c = ecx
arg7 = fconvert.s(fconvert.t(arg7) * fconvert.t(3.1415927410125732) / fconvert.t(180.0))
int32_t eax = sub_70c710(sub_42a880(fconvert.s(fconvert.t(arg7))) * float.t(arg6))
int32_t edi_1 = arg5
int32_t esi_1 = edi_1 * 2
int32_t ebx_1 = eax
int32_t var_28 = eax
int32_t eax_1 = sub_70c710(fconvert.t(fconvert.s(float.t(esi_1)))
    / (sub_4ed890(fconvert.s(fconvert.t(arg7))) + fconvert.t(2.0)))
int32_t esi_2 = esi_1 - eax_1
arg7 = eax_1
int32_t var_24 = esi_2
int32_t* esi_3

if (ebx_1 s< 0)
    esi_3 = arg4
    ebx_1 = neg.d(ebx_1)
    int32_t var_28_1 = ebx_1
    var_24 = eax_1
    arg7 = esi_2
else
    esi_3 = arg3

int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(arg6 - ebx_1)
int32_t var_3c_3 = 0
int32_t var_40 = 0
int32_t var_44 = 0
int32_t ebp_2 = (eax_4 - edx) s>> 1
int32_t var_50 = 0
int32_t var_54 = 0
int32_t var_4 = ebp_2
(*(**arg1 + 0x2c))(arg2, 0, 0, edi_1, ebp_2, 0, 0, 0)
int32_t var_3c_4 = 0
int32_t var_40_1 = 0
int32_t* esp_1 = &var_38
int32_t var_10 = (*(*esi_3 + 8))(0, 0)
int32_t var_14 = (*(*esi_3 + 0x1c))()
int32_t eax_12 = ebx_1 + ebp_2
int32_t ecx_5 = ebp_2
arg3 = ecx_5
int32_t var_18_2 = eax_12

if (ebp_2 s< eax_12)
    int32_t var_8_1 = arg7 i- var_24
    float var_1c_1 = fconvert.s(float.t(arg5))
    int32_t var_20_1 = 0
    arg4 = nullptr
    
    while (true)
        int32_t eax_16
        int32_t edx_5
        edx_5:eax_16 = sx.q(esp_1[0x12])
        *(esp_1 - 4) = ecx_5
        *(esp_1 - 8) = 0
        esp_1 -= 8
        int32_t eax_19
        int32_t edx_6
        edx_6:eax_19 = sx.q(esp_1[8])
        int32_t ebp_5 = (divs.dp.d(edx_5:eax_16, ebx_1) + esp_1[7]) & 0xfffffffe
        esp_1[0x17] = ebp_5
        int32_t esi_6 = divs.dp.d(edx_6:eax_19, ebx_1) * esp_1[0xb] + esp_1[0xc]
        
        if (ebp_5 s<= edi_1)
            int32_t eax_38
            int32_t edx_12
            edx_12:eax_38 = sx.q(edi_1 - ebp_5)
            int32_t eax_41 = *(*esp_1[0x12] + 8)
            int32_t i_7 = (eax_38 - edx_12) s>> 1
            esp_1[0xd] = i_7
            int16_t* edi_5 = eax_41()
            
            if (i_7 s> 0)
                int32_t i_4 = i_7
                int32_t i
                
                do
                    *edi_5 = 0
                    edi_5[1].b = 0
                    edi_5 = &edi_5[2]
                    i = i_4
                    i_4 -= 1
                while (i != 1)
            
            esp_1[0x15] = fconvert.s(fconvert.t(esp_1[7]) / float.t(esp_1[0x15]))
            long double x87_r7_21 = fconvert.t(esp_1[0x15])
            esp_1[0x15] = sub_70c710(x87_r7_21)
            int32_t eax_44 = sub_70c710((x87_r7_21 - float.t(esp_1[0x15])) * fconvert.t(-256.0))
            int32_t edx_16 = (esp_1[0x15] << 8) - eax_44
            int32_t ecx_10 = 0
            
            if (ebp_5 s> 0)
                esp_1[0x15] = ebp_5
                int32_t i_1
                
                do
                    int32_t eax_46 = ecx_10 s>> 8
                    *edi_5 = *(esi_6 + (eax_46 << 2))
                    *(edi_5 + 1) = *(esi_6 + (eax_46 << 2) + 1)
                    eax_46.b = *(esi_6 + (eax_46 << 2) + 2)
                    edi_5[1].b = eax_46.b
                    ecx_10 += edx_16
                    edi_5 = &edi_5[2]
                    i_1 = esp_1[0x15]
                    esp_1[0x15] -= 1
                while (i_1 != 1)
                i_7 = esp_1[0xb]
            
            int32_t i_5 = esp_1[0x13] - i_7 - ebp_5
            
            if (i_5 s> 0)
                void* eax_47 = &edi_5[1]
                int32_t i_2
                
                do
                    *(eax_47 - 2) = 0
                    *eax_47 = 0
                    eax_47 += 4
                    i_2 = i_5
                    i_5 -= 1
                while (i_2 != 1)
        else
            int32_t eax_23 = (*(*esp_1[0x12] + 8))()
            long double x87_r7_12 = float.t(esp_1[0x15])
            esp_1[0xb] = eax_23
            esp_1[0x15] = fconvert.s(x87_r7_12)
            esp_1[0x15] = fconvert.s(fconvert.t(esp_1[7]) / fconvert.t(esp_1[0x15]))
            long double x87_r6_3 = fconvert.t(esp_1[0x15])
            int32_t eax_24 = sub_70c710(x87_r6_3)
            esp_1[0x15] = eax_24
            long double x87_r5_3 = fconvert.t(-256.0)
            int32_t ebx_4 = (eax_24 << 8) - sub_70c710((x87_r6_3 - float.t(esp_1[0x15])) * x87_r5_3)
            int32_t eax_28
            int32_t edx_9
            edx_9:eax_28 = sx.q(ebp_5 - edi_1)
            esp_1[0x15] = ((eax_28 - edx_9) s>> 1) * edi_1
            long double x87_r5_5 = float.t(esp_1[0x15])
            esp_1[0x15] = fconvert.s(x87_r5_5 / x87_r5_5)
            long double x87_r6_8 = fconvert.t(esp_1[0x15])
            int32_t eax_32 = sub_70c710(x87_r6_8)
            esp_1[0x15] = eax_32
            int32_t eax_33 = sub_70c710(x87_r5_3 * (x87_r6_8 - float.t(esp_1[0x15])))
            int32_t i_6 = esp_1[0x13]
            int32_t edi_4 = (eax_32 << 8) - eax_33
            
            if (i_6 s> 0)
                char* ecx_8 = esp_1[0xb] + 2
                int32_t i_3
                
                do
                    int32_t eax_35 = edi_4 s>> 8
                    ecx_8[0xfffffffe] = *(esi_6 + (eax_35 << 2))
                    ecx_8[0xffffffff] = *(esi_6 + (eax_35 << 2) + 1)
                    eax_35.b = *(esi_6 + (eax_35 << 2) + 2)
                    *ecx_8 = eax_35.b
                    edi_4 += ebx_4
                    ecx_8 = &ecx_8[4]
                    i_3 = i_6
                    i_6 -= 1
                while (i_3 != 1)
        
        int32_t eax_48 = esp_1[0x11]
        int32_t edx_17 = esp_1[0x14]
        esp_1[0x12] += esp_1[0xc]
        esp_1[6] += edx_17
        edi_1 = esp_1[0x13]
        ebx_1 = esp_1[4]
        esp_1[0x11] = eax_48 + 1
        
        if (eax_48 + 1 s>= esp_1[8])
            break
        
        ecx_5 = esp_1[0x11]
    
    ebp_2 = esp_1[0xd]
    eax_12 = esp_1[8]

int32_t edx_18 = esp_1[0x14]
void* esi_7 = **esp_1[0xf]
*(esp_1 - 4) = 0
*(esp_1 - 8) = 0
*(esp_1 - 0xc) = 0
*(esp_1 - 0x10) = edx_18 - ebp_2 - ebx_1
int32_t edx_21 = esp_1[0x10]
*(esp_1 - 0x14) = edi_1
*(esp_1 - 0x18) = eax_12
int32_t eax_50 = *(esi_7 + 0x2c)
*(esp_1 - 0x1c) = 0
*(esp_1 - 0x20) = edx_21
int32_t result = eax_50()
*esp_1
esp_1[1]
esp_1[2]
esp_1[3]
return result
