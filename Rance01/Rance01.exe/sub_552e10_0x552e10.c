// 函数: sub_552e10
// 地址: 0x552e10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 u< (*(arg2 + 0xc) - *(arg2 + 8)) s>> 2)
    int32_t* edi_1 = *(*(arg2 + 8) + (arg1 << 2))
    
    if (edi_1 != 0)
        int32_t esi = edi_1[9]
        int32_t esi_1 = esi - 1
        
        if (esi - 1 s>= 0)
            while (true)
                switch (*(edi_1[8] + (esi_1 << 2)))
                    case 0, 0xa, 0xb, 0x1b, 0x2f
                    label_552e87:
                        int32_t temp2_1 = esi_1
                        esi_1 -= 1
                        
                        if (temp2_1 - 1 s< 0)
                            break
                        
                        continue
                    case 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 
                            0x19, 0x1e, 0x1f, 0x20, 0x32, 0x33, 0x34, 0x3f, 0x42, 0x43, 0x44
                        int32_t ecx_4 = edi_1[1]
                        int32_t eax_1
                        
                        if (ecx_4 != 0)
                            eax_1 = *edi_1
                        else
                            eax_1 = 0
                        
                        arg1 = *(eax_1 + (esi_1 << 2))
                        
                        if (arg1 == 0xffffffff)
                            goto label_552e87
                        
                        if (ecx_4 != 0)
                            ecx_4 = *edi_1
                        
                        *(ecx_4 + (esi_1 << 2)) = 0xffffffff
                        
                        if (sub_552880(arg2, arg1).b != 0)
                            goto label_552e87
                
                arg1.b = 0
                return arg1
        
        arg1.b = 1
        return arg1

arg1.b = 0
return arg1
