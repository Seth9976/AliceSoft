// 函数: sub_5ad3b0
// 地址: 0x5ad3b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char var_18
int32_t eax_1 = data_78c474 ^ &var_18
void* esi = arg3
char eax_2 = (*(esi + 0x6c)).b

if ((eax_2 & 1) == 0)
    sub_5a5c60(esi, "Missing IHDR before bKGD")
    noreturn

uint32_t eax_4

if ((eax_2 & 4) == 0)
    arg3.b = *(esi + 0x13b)
    
    if (arg3.b == 3 && (eax_2 & 2) == 0)
        sub_5a5de0("Missing PLTE before bKGD", esi)
        eax_4 = sub_5ab650(esi, arg5)
    else if (arg4 == 0 || (*(arg4 + 8) & 0x20) == 0)
        int32_t edi_1
        
        if (arg3.b != 3)
            edi_1 = ((zx.d(arg3.b) & 2) | 1) * 2
        else
            edi_1 = 1
        
        if (arg5 == edi_1)
            int32_t eax_5 = *(esi + 0x54)
            
            if (eax_5 == 0)
                sub_5a5c60(esi, "Call to NULL read function")
                noreturn
            
            char var_c
            char* ecx_3
            void* edx
            edx, ecx_3 = eax_5(esi, &var_c, edi_1)
            char* var_38_1 = &var_c
            void* var_3c_1 = esi
            sub_5a3fe0(edi_1, edx, ecx_3)
            eax_4 = sub_5ab650(esi, 0)
            
            if (eax_4 == 0)
                eax_4.b = *(esi + 0x13b)
                uint16_t var_14
                
                if (eax_4.b != 3)
                    char var_b
                    uint16_t edx_4 = zx.w(var_b)
                    bool cond:0_1 = (eax_4.b & 2) != 0
                    eax_4 = zx.d(var_c)
                    var_18 = 0
                    
                    if (cond:0_1)
                        eax_4.w *= 0x100
                        eax_4.w += edx_4
                        int16_t var_16_4 = eax_4.w
                        char var_a
                        char var_9
                        var_14 = zx.w(var_a) * 0x100 + zx.w(var_9)
                        char var_8
                        char var_7
                        uint16_t var_12_3 = zx.w(var_8) * 0x100 + zx.w(var_7)
                        eax_4 = 0
                    else
                        eax_4.w *= 0x100
                        eax_4.w += edx_4
                        int16_t var_12_2 = eax_4.w
                        var_14 = eax_4.w
                        int16_t var_16_3 = eax_4.w
                else
                    char ecx_4 = var_c
                    var_18 = ecx_4
                    int16_t eax_7
                    
                    if (arg4 != 0)
                        eax_7 = *(arg4 + 0x14)
                    
                    if (arg4 == 0 || eax_7 == 0)
                        var_14.d = 0
                        int16_t var_16_2 = 0
                    else
                        if (zx.w(ecx_4) u>= eax_7)
                            uint32_t eax_8 = sub_5a5de0("Incorrect bKGD chunk index value", esi)
                            sub_6b4885(eax_1 ^ &var_18)
                            return eax_8
                        
                        char* eax_11 = zx.d(ecx_4) * 3 + *(esi + 0x128)
                        uint16_t var_16_1 = zx.w(*eax_11)
                        var_14 = zx.w(eax_11[1])
                        uint16_t var_12_1 = zx.w(eax_11[2])
                    
                    eax_4 = 0
                
                if (arg4 != 0)
                    int32_t ecx_8 = var_18.d
                    *(arg4 + 8) |= 0x20
                    *(arg4 + 0x5a) = ecx_8
                    *(arg4 + 0x5e) = var_14.d
                    *(arg4 + 0x62) = eax_4.w
                    sub_6b4885(eax_1 ^ &var_18)
                    return eax_4
        else
            sub_5a5de0("Incorrect bKGD chunk length", esi)
            eax_4 = sub_5ab650(esi, arg5)
    else
        sub_5a5de0("Duplicate bKGD chunk", esi)
        eax_4 = sub_5ab650(esi, arg5)
else
    sub_5a5de0("Invalid bKGD after IDAT", esi)
    eax_4 = sub_5ab650(esi, arg5)

sub_6b4885(eax_1 ^ &var_18)
return eax_4
