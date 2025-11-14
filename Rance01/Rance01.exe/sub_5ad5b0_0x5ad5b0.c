// 函数: sub_5ad5b0
// 地址: 0x5ad5b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t var_214
int32_t eax_1 = data_78c474 ^ &var_214
char eax_2 = (*(arg2 + 0x6c)).b

if ((eax_2 & 1) == 0)
    sub_5a5c60(arg2, "Missing IHDR before hIST")
    noreturn

if ((eax_2 & 4) != 0)
    sub_5a5de0("Invalid hIST after IDAT", arg2)
    int32_t eax_4 = sub_5ab650(arg2, arg3)
    sub_6b4885(eax_1 ^ &var_214)
    return eax_4

if ((eax_2 & 2) == 0)
    sub_5a5de0("Missing PLTE before hIST", arg2)
    int32_t eax_5 = sub_5ab650(arg2, arg3)
    sub_6b4885(eax_1 ^ &var_214)
    return eax_5

if (arg4 != 0 && (*(arg4 + 8) & 0x40) != 0)
    sub_5a5de0("Duplicate hIST chunk", arg2)
    int32_t eax_6 = sub_5ab650(arg2, arg3)
    sub_6b4885(eax_1 ^ &var_214)
    return eax_6

if (arg3 u<= 0x200 && arg3 == zx.d(*(arg2 + 0x12c)) * 2)
    uint32_t edi_1 = arg3 u>> 1
    int32_t ebx = 0
    int32_t var_210 = 0
    int16_t var_204[0x100]
    
    if (edi_1 != 0)
        do
            int32_t eax_9 = *(arg2 + 0x54)
            
            if (eax_9 == 0)
                sub_5a5c60(arg2, "Call to NULL read function")
                noreturn
            
            int32_t eax_10
            int32_t edx
            eax_10, edx = eax_9(arg2, &var_214, 2)
            int32_t edi_2 = 2
            int16_t* ebp_1 = &var_214
            
            if ((*(arg2 + 0x100) & 0x20000000) != 0)
                edx = *(arg2 + 0x70) & 0x300
                
                if (edx != 0x300)
                    goto label_5ad6fb
            else if ((*(arg2 + 0x70) & 0x800) == 0)
            label_5ad6fb:
                eax_10 = *(arg2 + 0x124)
                int32_t ebx_1
                int32_t temp0_1
                
                do
                    ebx_1 = edi_2
                    
                    if (edi_2 == 0)
                        ebx_1 = 0xffffffff
                    
                    if (ebp_1 != 0)
                        eax_10, edx = sub_59e5d0(eax_10, edx, ebp_1, ebx_1)
                    else
                        eax_10 = 0
                    
                    ebp_1 += ebx_1
                    temp0_1 = edi_2
                    edi_2 -= ebx_1
                while (temp0_1 != ebx_1)
                ebx = var_210
                *(arg2 + 0x124) = eax_10
            
            eax_10.w = var_214
            var_204[ebx] = zx.w(eax_10.b) * 0x100 + zx.w(eax_10:1.b)
            ebx += 1
            var_210 = ebx
        while (ebx u< edi_1)
    
    int32_t eax_12
    int32_t edx_2
    eax_12, edx_2 = sub_5ab650(arg2, 0)
    
    if (eax_12 == 0)
        int16_t (* var_228_5)[0x100] = &var_204
        eax_12 = sub_5afee0(arg2, arg4, edx_2)
    
    sub_6b4885(eax_1 ^ &var_214)
    return eax_12

sub_5a5de0("Incorrect hIST chunk length", arg2)
int32_t eax_15 = sub_5ab650(arg2, arg3)
sub_6b4885(eax_1 ^ &var_214)
return eax_15
