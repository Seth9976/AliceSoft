// 函数: sub_5ac020
// 地址: 0x5ac020
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_10c
int32_t eax_1 = data_78c474 ^ &var_10c
char eax_2 = (*(arg3 + 0x6c)).b

if ((eax_2 & 1) == 0)
    sub_5a5c60(arg3, "Missing IHDR before gAMA")
    noreturn

int32_t eax_4

if ((eax_2 & 4) == 0)
    if ((eax_2 & 2) != 0)
        sub_5a5de0("Out of place gAMA chunk", arg3)
    
    int32_t eax_5
    
    if (arg2 != 0)
        eax_5 = *(arg2 + 8)
    
    if (arg2 != 0 && (eax_5.b & 1) != 0 && (eax_5 & 0x800) == 0)
        sub_5a5de0("Duplicate gAMA chunk", arg3)
        eax_4 = sub_5ab650(arg3, arg4)
    else if (arg4 == 4)
        int32_t eax_6 = *(arg3 + 0x54)
        
        if (eax_6 == 0)
            sub_5a5c60(arg3, "Call to NULL read function")
            noreturn
        
        int32_t edx = eax_6(arg3, &var_10c, 4)
        int32_t ebp_1 = 4
        void* ebx_1 = &var_10c
        
        if ((*(arg3 + 0x100) & 0x20000000) != 0)
            edx = *(arg3 + 0x70) & 0x300
            
            if (edx != 0x300)
                goto label_5ac106
        else if ((*(arg3 + 0x70) & 0x800) == 0)
        label_5ac106:
            int32_t eax_7 = *(arg3 + 0x124)
            int32_t edi_1
            int32_t temp0_1
            
            do
                edi_1 = ebp_1
                
                if (ebp_1 == 0)
                    edi_1 = 0xffffffff
                
                if (ebx_1 != 0)
                    eax_7, edx = sub_59e5d0(eax_7, edx, ebx_1, edi_1)
                else
                    eax_7 = 0
                
                ebx_1 += edi_1
                temp0_1 = ebp_1
                ebp_1 -= edi_1
            while (temp0_1 != edi_1)
            *(arg3 + 0x124) = eax_7
        
        eax_4 = sub_5ab650(arg3, 0)
        
        if (eax_4 == 0)
            uint32_t eax_8
            int32_t edx_2
            eax_8, edx_2 = sub_5ab3b0(&var_10c)
            
            if (eax_8 s<= 0)
                uint32_t eax_9 = sub_5a5de0("Ignoring gAMA chunk with out of range gamma", arg3)
                sub_6b4885(eax_1 ^ &var_10c)
                return eax_9
            
            if (arg2 != 0 && (*(arg2 + 8) & 0x800) != 0 && (eax_8 s< 0xafc8 || eax_8 s> 0xb3b0))
                void var_104
                sub_5a5eb0(eax_8, eax_8, 5, &var_104, 1)
                uint32_t eax_10 = sub_5a5f20(arg3, &var_104, 
                    "Ignoring incorrect gAMA value @1 when sRGB is also present")
                sub_6b4885(eax_1 ^ &var_10c)
                return eax_10
            
            *(arg3 + 0x178) = eax_8
            int32_t eax_12 = sub_5afeb0(arg2, edx_2, eax_8, arg3)
            sub_6b4885(eax_1 ^ &var_10c)
            return eax_12
    else
        sub_5a5de0("Incorrect gAMA chunk length", arg3)
        eax_4 = sub_5ab650(arg3, arg4)
else
    sub_5a5de0("Invalid gAMA after IDAT", arg3)
    eax_4 = sub_5ab650(arg3, arg4)

sub_6b4885(eax_1 ^ &var_10c)
return eax_4
