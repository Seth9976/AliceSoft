// 函数: sub_4afed0
// 地址: 0x4afed0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = data_797d4c

if (arg1 s>= 0)
    int32_t ecx_1 = *(esi + 0x40)
    
    if (arg1 s< (*(esi + 0x44) - ecx_1) s>> 2)
        void* edi_1 = *(ecx_1 + (arg1 << 2))
        
        if (edi_1 != 0)
            if (*(esi + 0x50) != 0)
                (*(**(esi + 0x50) + 0xc))(*(edi_1 + 8))
                (*(**(esi + 0x50) + 8))(arg2, edi_1)
            
            *(edi_1 + 8) = arg2
            arg1.b = 1
            return arg1

arg1.b = 0
return arg1
