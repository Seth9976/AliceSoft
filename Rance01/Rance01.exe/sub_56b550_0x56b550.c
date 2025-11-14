// 函数: sub_56b550
// 地址: 0x56b550
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* esi = *(arg1 + 4)

if (esi == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t eax_2
int32_t ebx

if (arg2 == 0)
    ebx.b = arg3 != 0
    
    if (*esi != ebx.b)
        if (ebx.b != 0)
            sub_425ba0(esi)
        else if (esi[0x3a] == 0)
            if (esi[0x3b] == 0)
                ShowCursor(1)
                esi[0x3b] = 1
            
            sub_425ba0(esi)
        
        *esi = ebx.b
else if (arg2 == 1)
    ebx.b = arg3 != 0
    
    if (esi[1] != ebx.b)
        if (ebx.b == 0 && esi[0x38] != 0)
            esi[0x38] = 0
            
            if (esi[0x3b] == 0)
                ShowCursor(1)
                esi[0x3b] = 1
        
        esi[1] = ebx.b
        eax_2.b = 1
        return eax_2
else
    if (arg2 != 2)
        eax_2.b = 0
        return eax_2
    
    ebx.b = arg3 != 0
    
    if (esi[2] != ebx.b)
        if (ebx.b == 0 && esi[0x39] != 0)
            esi[0x39] = 0
            
            if (esi[0x3b] == 0)
                ShowCursor(1)
                esi[0x3b] = 1
        
        esi[2] = ebx.b
        eax_2.b = 1
        return eax_2
eax_2.b = 1
return eax_2
