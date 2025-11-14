// 函数: sub_56e590
// 地址: 0x56e590
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg3
int32_t* esi = arg1

if (esi[0x2b].b == 0)
    arg1 = esi[0x25]
    
    if (arg1 == 0)
    label_56e5bb:
        
        if (*(esi + 0xae) != 0)
        label_56e5e6:
            void* edi_1 = esi[0x25]
            
            if (edi_1 != 0)
                arg1 = sub_58a6f0(edi_1)
            
            if ((edi_1 == 0 || arg1.b == 0) && sub_56e6e0(esi).b == 0)
                arg1.b = 1
                return arg1
        else
            arg1 = (*(*esi + 0x10))()
            
            if (esi[0x2c] s<= arg1)
                arg1 = (*(*esi + 0x14))()
                
                if (esi[0x2d] s<= arg1)
                    goto label_56e5e6
    else
        arg1.b = arg1[6] != 0
        
        if (arg1.b == 0)
            goto label_56e5bb
    
    void* edi_2 = esi[0x25]
    
    if (edi_2 == 0)
        arg1.b = 0
    else
        arg1.b = *(edi_2 + 0x18) != 0
        
        if (arg1.b == 0)
            arg1.b = 0
        else if (sub_58a6f0(edi_2).b == 0)
            arg1.b = 0
        else if (sub_56e940(esi).b == 0)
            arg1.b = 0
        else
            arg1.b = 1
    
    arg3.b = arg1.b
    int32_t ecx_4
    
    if (esi[0x10] != 0)
        ecx_4.b = esi[0x11] != 0
    
    if (esi[0x10] != 0 && zx.d(arg1.b) == ecx_4 && esi[0x2c] == esi[0x19] && esi[0x2d] == esi[0x1a]
            && ebx == esi[0x21])
        arg1.b = 1
        return arg1
    
    if (sub_56d240(&esi[0xe], esi, arg3.b, esi[0x2c], esi[0x2d], arg2, ebx, *(esi + 0xae)).b != 0)
        arg1.b = 1
        return arg1
    
    esi[0x2b].b = 1

arg1.b = 0
return arg1
