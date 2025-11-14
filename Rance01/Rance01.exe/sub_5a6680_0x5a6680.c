// 函数: sub_5a6680
// 地址: 0x5a6680
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t esi = arg1

if (esi == 0 || arg2 == 0)
    return 

sub_5ab3e0(esi, arg2)

while (true)
    uint32_t eax
    int32_t ecx_1
    eax, ecx_1 = sub_5ab490(esi)
    int32_t edi_1 = *(esi + 0x100)
    uint32_t ebp_1 = eax
    
    if (edi_1 == 0x49444154)
        eax = *(esi + 0x6c)
        
        if ((eax.b & 8) != 0)
            eax |= 0x2000
            *(esi + 0x6c) = eax
    else if (edi_1 == 0x49484452)
        sub_5abb70(esi, arg2, ebp_1)
        continue
    else if (edi_1 == 0x49454e44)
        int32_t eax_3 = *(esi + 0x6c)
        
        if ((eax_3.b & 1) == 0 || (eax_3.b & 4) == 0)
            sub_5a5c60(esi, "No image in file")
            noreturn
        
        *(esi + 0x6c) = eax_3 | 0x18
        
        if (ebp_1 != 0)
            sub_5a5de0("Incorrect IEND chunk length", esi)
        
        sub_5ab650(esi, ebp_1)
        continue
    
    int32_t var_14_3 = edi_1
    uint32_t eax_1
    int32_t ecx_2
    uint32_t edx_2
    eax_1, ecx_2, edx_2 = sub_5a48b0(eax, esi, ecx_1)
    
    if (eax_1 != 0)
        if (edi_1 == 0x49444154)
            *(esi + 0x6c) |= 4
        
        uint32_t var_14_4 = ebp_1
        uint32_t var_18_2 = arg2
        sub_5aeb10(esi, edx_2, ecx_2)
        
        if (edi_1 != 0x504c5445)
            if (edi_1 == 0x49444154)
                arg1 = *(esi + 0x6c)
                
                if ((arg1.b & 1) == 0)
                    sub_5a5c60(esi, "Missing IHDR before IDAT")
                    noreturn
                
                if (*(esi + 0x13b) != 3 || (arg1.b & 2) != 0)
                    break
                
                sub_5a5c60(esi, "Missing PLTE before IDAT")
                noreturn
        else
            *(esi + 0x6c) |= 2
    else if (edi_1 != 0x504c5445)
        if (edi_1 == 0x49444154)
            int32_t eax_16 = *(esi + 0x6c)
            
            if ((eax_16.b & 1) == 0)
                sub_5a5c60(esi, "Missing IHDR before IDAT")
                noreturn
            
            if (*(esi + 0x13b) == 3 && (eax_16.b & 2) == 0)
                sub_5a5c60(esi, "Missing PLTE before IDAT")
                noreturn
            
            *(esi + 0x120) = ebp_1
            *(esi + 0x6c) = eax_16 | 4
            break
        
        if (edi_1 == 0x624b4744)
            sub_5ad3b0(eax_1, edx_2, esi, arg2, ebp_1)
        else if (edi_1 == 0x6348524d)
            sub_5ac340(eax_1, edx_2, arg2, esi, ebp_1)
        else if (edi_1 == 0x67414d41)
            sub_5ac020(eax_1, arg2, esi, ebp_1)
        else if (edi_1 == 0x68495354)
            sub_5ad5b0(eax_1, esi, ebp_1, arg2)
        else if (edi_1 == 0x6f464673)
            sub_5ad960(eax_1, arg2, esi, ebp_1)
        else if (edi_1 == 0x7043414c)
            uint32_t var_14_13 = ebp_1
            uint32_t var_18_7 = arg2
            sub_5adb20(esi, edx_2, ecx_2)
        else if (edi_1 == 0x7343414c)
            sub_5adef0(ebp_1, edx_2, esi, arg2)
        else if (edi_1 == 0x70485973)
            sub_5ad7d0(eax_1, arg2, esi, ebp_1)
        else if (edi_1 == 0x73424954)
            sub_5ac210(arg2, edx_2, esi, ebp_1)
        else if (edi_1 == 0x73524742)
            sub_5ac900(eax_1, arg2, esi, ebp_1)
        else if (edi_1 == 0x69434350)
            sub_5acbb0(eax_1, edx_2, esi, arg2, ebp_1)
        else if (edi_1 == 0x73504c54)
            uint32_t var_14_19 = ebp_1
            uint32_t var_18_9 = arg2
            sub_5ace60(esi, edx_2, ecx_2)
        else if (edi_1 == 0x74455874)
            uint32_t var_14_20 = ebp_1
            uint32_t var_18_10 = arg2
            sub_5ae290(esi, edx_2, ecx_2)
        else if (edi_1 == 0x74494d45)
            sub_5ae100(eax_1, arg2, esi, ebp_1)
        else if (edi_1 == 0x74524e53)
            sub_5ad180(eax_1, esi, ebp_1, arg2)
        else if (edi_1 == 0x7a545874)
            uint32_t var_14_23 = ebp_1
            uint32_t var_18_11 = arg2
            sub_5ae4e0(esi, edx_2, ecx_2)
        else if (edi_1 != 0x69545874)
            uint32_t var_14_25 = ebp_1
            uint32_t var_18_12 = arg2
            sub_5aeb10(esi, edx_2, ecx_2)
        else
            sub_5ae7d0(ebp_1, edx_2, esi, arg2)
    else
        sub_5abda0(eax_1, esi, ebp_1, arg2)
