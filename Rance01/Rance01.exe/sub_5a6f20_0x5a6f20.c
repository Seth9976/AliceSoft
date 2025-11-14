// 函数: sub_5a6f20
// 地址: 0x5a6f20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == 0)
    return 

sub_5ab650(arg1, 0)

if (*(arg1 + 0x13b) == 3 && *(arg1 + 0x130) s> zx.d(*(arg1 + 0x12c)))
    if ((*(arg1 + 0x70) & 0x800000) == 0)
        sub_5a5c60(arg1, "Read palette index exceeding num_palette")
        noreturn
    
    sub_5a5de0("Read palette index exceeding num_palette", arg1)

do
    uint32_t eax_1
    int32_t ecx_1
    eax_1, ecx_1 = sub_5ab490(arg1)
    int32_t edi_1 = *(arg1 + 0x100)
    
    if (edi_1 == 0x49484452)
        sub_5abb70(arg1, arg2, eax_1)
    else if (edi_1 != 0x49454e44)
        int32_t var_14_4 = edi_1
        uint32_t eax_5
        int32_t ecx_2
        uint32_t edx_2
        eax_5, ecx_2, edx_2 = sub_5a48b0(eax_1, arg1, ecx_1)
        
        if (eax_5 != 0)
            if (edi_1 == 0x49444154 && (eax_1 != 0 || (*(arg1 + 0x6c) & 0x2000) != 0))
                if ((*(arg1 + 0x70) & 0x800000) == 0)
                    sub_5a5c60(arg1, "Too many IDATs found")
                    noreturn
                
                ecx_2, edx_2 = sub_5a5de0("Too many IDATs found", arg1)
            
            uint32_t var_14_5 = eax_1
            int32_t* var_18_4 = arg2
            sub_5aeb10(arg1, edx_2, ecx_2)
            
            if (edi_1 == 0x504c5445)
                *(arg1 + 0x6c) |= 2
        else if (edi_1 == 0x49444154)
            if (eax_1 != 0 || (*(arg1 + 0x6c) & 0x2000) != 0)
                if ((*(arg1 + 0x70) & 0x800000) == 0)
                    sub_5a5c60(arg1, "Too many IDATs found")
                    noreturn
                
                sub_5a5de0("Too many IDATs found", arg1)
            
            sub_5ab650(arg1, eax_1)
        else if (edi_1 == 0x504c5445)
            sub_5abda0(eax_5, arg1, eax_1, arg2)
        else if (edi_1 == 0x624b4744)
            sub_5ad3b0(eax_5, edx_2, arg1, arg2, eax_1)
        else if (edi_1 == 0x6348524d)
            sub_5ac340(eax_5, edx_2, arg2, arg1, eax_1)
        else if (edi_1 == 0x67414d41)
            sub_5ac020(eax_5, arg2, arg1, eax_1)
        else if (edi_1 == 0x68495354)
            sub_5ad5b0(eax_5, arg1, eax_1, arg2)
        else if (edi_1 == 0x6f464673)
            sub_5ad960(eax_5, arg2, arg1, eax_1)
        else if (edi_1 == 0x7043414c)
            uint32_t var_14_13 = eax_1
            int32_t* var_18_8 = arg2
            sub_5adb20(arg1, edx_2, ecx_2)
        else if (edi_1 == 0x7343414c)
            sub_5adef0(eax_1, edx_2, arg1, arg2)
        else if (edi_1 == 0x70485973)
            sub_5ad7d0(eax_5, arg2, arg1, eax_1)
        else if (edi_1 == 0x73424954)
            sub_5ac210(arg2, edx_2, arg1, eax_1)
        else if (edi_1 == 0x73524742)
            sub_5ac900(eax_5, arg2, arg1, eax_1)
        else if (edi_1 == 0x69434350)
            sub_5acbb0(eax_5, edx_2, arg1, arg2, eax_1)
        else if (edi_1 == 0x73504c54)
            uint32_t var_14_19 = eax_1
            int32_t* var_18_10 = arg2
            sub_5ace60(arg1, edx_2, ecx_2)
        else if (edi_1 == 0x74455874)
            uint32_t var_14_20 = eax_1
            int32_t* var_18_11 = arg2
            sub_5ae290(arg1, edx_2, ecx_2)
        else if (edi_1 == 0x74494d45)
            sub_5ae100(eax_5, arg2, arg1, eax_1)
        else if (edi_1 == 0x74524e53)
            sub_5ad180(eax_5, arg1, eax_1, arg2)
        else if (edi_1 == 0x7a545874)
            uint32_t var_14_23 = eax_1
            int32_t* var_18_12 = arg2
            sub_5ae4e0(arg1, edx_2, ecx_2)
        else if (edi_1 != 0x69545874)
            uint32_t var_14_25 = eax_1
            int32_t* var_18_13 = arg2
            sub_5aeb10(arg1, edx_2, ecx_2)
        else
            sub_5ae7d0(eax_1, edx_2, arg1, arg2)
    else
        int32_t eax_3 = *(arg1 + 0x6c)
        
        if ((eax_3.b & 1) == 0 || (eax_3.b & 4) == 0)
            sub_5a5c60(arg1, "No image in file")
            noreturn
        
        *(arg1 + 0x6c) = eax_3 | 0x18
        
        if (eax_1 != 0)
            sub_5a5de0("Incorrect IEND chunk length", arg1)
        
        sub_5ab650(arg1, eax_1)
while ((*(arg1 + 0x6c) & 0x10) == 0)
