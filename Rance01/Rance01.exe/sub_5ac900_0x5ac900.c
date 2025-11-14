// 函数: sub_5ac900
// 地址: 0x5ac900
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_10c
int32_t eax_1 = data_78c474 ^ &var_10c
char eax_2 = (*(arg3 + 0x6c)).b
void* edi = arg2
void* var_108 = edi

if ((eax_2 & 1) == 0)
    sub_5a5c60(arg3, "Missing IHDR before sRGB")
    noreturn

int32_t eax_4

if ((eax_2 & 4) == 0)
    if ((eax_2 & 2) != 0)
        sub_5a5de0("Out of place sRGB chunk", arg3)
    
    if (edi != 0 && (*(edi + 8) & 0x800) != 0)
        sub_5a5de0("Duplicate sRGB chunk", arg3)
        eax_4 = sub_5ab650(arg3, arg4)
    else if (arg4 == 1)
        int32_t eax_5 = *(arg3 + 0x54)
        
        if (eax_5 == 0)
            sub_5a5c60(arg3, "Call to NULL read function")
            noreturn
        
        char var_109
        int32_t edx = eax_5(arg3, &var_109, 1)
        int32_t ebx_1 = 1
        char* ebp_1 = &var_109
        
        if ((*(arg3 + 0x100) & 0x20000000) != 0)
            edx = *(arg3 + 0x70) & 0x300
            
            if (edx != 0x300)
                goto label_5ac9e1
        else if ((*(arg3 + 0x70) & 0x800) == 0)
        label_5ac9e1:
            int32_t eax_6 = *(arg3 + 0x124)
            int32_t edi_1
            int32_t temp0_1
            
            do
                edi_1 = ebx_1
                
                if (ebx_1 == 0)
                    edi_1 = 0xffffffff
                
                if (ebp_1 != 0)
                    eax_6, edx = sub_59e5d0(eax_6, edx, ebp_1, edi_1)
                else
                    eax_6 = 0
                
                ebp_1 = &ebp_1[edi_1]
                temp0_1 = ebx_1
                ebx_1 -= edi_1
            while (temp0_1 != edi_1)
            edi = var_108
            *(arg3 + 0x124) = eax_6
        
        uint32_t edx_2
        eax_4, edx_2 = sub_5ab650(arg3, 0)
        
        if (eax_4 == 0)
            uint32_t ebx_2 = zx.d(var_109)
            
            if (ebx_2 s>= 4)
                uint32_t eax_7 = sub_5a5de0("Unknown sRGB intent", arg3)
                sub_6b4885(eax_1 ^ &var_10c)
                return eax_7
            
            if (edi != 0)
                if ((*(edi + 8) & 1) != 0)
                    edx_2 = *(edi + 0x28)
                    
                    if (edx_2 s< 0xafc8 || edx_2 s> 0xb3b0)
                        void var_104
                        sub_5a5eb0(eax_4, edx_2, 5, &var_104, 1)
                        edx_2 = sub_5a5f20(arg3, &var_104, 
                            "Ignoring incorrect gAMA value @1 when sRGB is also present")
                        edi = var_108
                
                if ((*(edi + 8) & 4) != 0)
                    int32_t eax_8 = *(edi + 0x80)
                    
                    if (eax_8 s< 0x763e || eax_8 s> 0x7e0e)
                        edx_2 = sub_5a5de0(
                            "Ignoring incorrect cHRM value when sRGB is also present", arg3)
                    else
                        int32_t eax_9 = *(edi + 0x84)
                        
                        if (eax_9 s< 0x7c9c || eax_9 s> 0x846c)
                            edx_2 = sub_5a5de0(
                                "Ignoring incorrect cHRM value when sRGB is also present", arg3)
                        else
                            int32_t eax_10 = *(edi + 0x88)
                            
                            if (eax_10 s< 0xf618 || eax_10 s> 0xfde8)
                                edx_2 = sub_5a5de0(
                                    "Ignoring incorrect cHRM value when sRGB is also present", arg3)
                            else
                                int32_t eax_11 = *(edi + 0x8c)
                                
                                if (eax_11 s< 0x7d00 || eax_11 s> 0x84d0)
                                    edx_2 = sub_5a5de0(
                                        "Ignoring incorrect cHRM value when sRGB is also present", 
                                        arg3)
                                else
                                    int32_t eax_12 = *(edi + 0x90)
                                    
                                    if (eax_12 s< 0x7148 || eax_12 s> 0x7918)
                                        edx_2 = sub_5a5de0(
                                            "Ignoring incorrect cHRM value when sRGB is also present", 
                                            arg3)
                                    else
                                        int32_t eax_13 = *(edi + 0x94)
                                        
                                        if (eax_13 s< 0xe678 || eax_13 s> 0xee48)
                                            edx_2 = sub_5a5de0(
                                                "Ignoring incorrect cHRM value when sRGB is also present", 
                                                arg3)
                                        else
                                            int32_t eax_14 = *(edi + 0x98)
                                            
                                            if (eax_14 s< 0x36b0 || eax_14 s> 0x3e80)
                                                edx_2 = sub_5a5de0(
                                                    "Ignoring incorrect cHRM value when sRGB is also 
                                                        present", 
                                                    arg3)
                                            else
                                                int32_t eax_15 = *(edi + 0x9c)
                                                
                                                if (eax_15 s< 0x1388 || eax_15 s> 0x1b58)
                                                    edx_2 = sub_5a5de0(
                                                        "Ignoring incorrect cHRM value when sRGB is also 
                                                            present", 
                                                        arg3)
            
            bool cond:1 = *(arg3 + 0x252) != 0
            *(arg3 + 0x250) = 1
            
            if (not(cond:1))
                *(arg3 + 0x254) = 0x5b8a1b38
                *(arg3 + 0x252) = 1
            
            int32_t eax_17 = sub_5b0420(arg3, edx_2, edi, ebx_2.b)
            sub_6b4885(eax_1 ^ &var_10c)
            return eax_17
    else
        sub_5a5de0("Incorrect sRGB chunk length", arg3)
        eax_4 = sub_5ab650(arg3, arg4)
else
    sub_5a5de0("Invalid sRGB after IDAT", arg3)
    eax_4 = sub_5ab650(arg3, arg4)

sub_6b4885(eax_1 ^ &var_10c)
return eax_4
