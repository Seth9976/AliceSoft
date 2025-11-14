// 函数: sub_4f1bb0
// 地址: 0x4f1bb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s>= 0 && arg1 s< (*(arg3 + 0x54) - *(arg3 + 0x50)) s>> 2)
    void* edi_1 = *(*(arg3 + 0x50) + (arg1 << 2))
    
    if (edi_1 != 0)
        if (*(edi_1 + 0x71) != 0)
            int32_t esi_3 = (*(edi_1 + 0x2c) - *(edi_1 + 0x28)) s/ 0xb4
            int32_t ebx_1 = 0
            
            if (esi_3 s> 0)
                do
                    if (sub_4f1c30(ebx_1, arg2, arg3, edi_1).b == 0)
                        goto label_4f1bd4
                    
                    ebx_1 += 1
                while (ebx_1 s< esi_3)
        
        arg1.b = 1
        return arg1

label_4f1bd4:
arg1.b = 0
return arg1
