// 函数: sub_428c60
// 地址: 0x428c60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t eax = *arg2

if (eax + 4 u<= arg2[1])
    int32_t* edi_1 = data_797d70
    uint32_t esi_7 =
        ((zx.d(*(eax + 3)) << 8 | zx.d(*(eax + 2))) << 8 | zx.d(*(eax + 1))) << 8 | zx.d(*eax)
    *arg2 = eax + 4
    
    if (edi_1 != 0)
        char eax_1 = sub_4022d0(0x756a44, 0x745ed8)
        
        if (eax_1 == 0)
            eax = sub_4022d0(0x756a44, 0x745ee8)
        
        if (eax_1 != 0 || eax.b != 0)
            (**edi_1)()
            int32_t* ebx_1 = data_797d70
            
            if (ebx_1 != 0)
                int32_t edi_2 = 0
                
                if (esi_7 s<= 0)
                label_428cfe:
                    (*(*ebx_1 + 4))()
                    int32_t eax_5
                    eax_5.b = 1
                    return eax_5
                
                while (true)
                    if (sub_428d20(arg2, arg1, ebx_1) == 0)
                        (*(*ebx_1 + 4))()
                        break
                    
                    edi_2 += 1
                    
                    if (edi_2 s>= esi_7)
                        goto label_428cfe

eax.b = 0
return eax
