// 函数: sub_568cb0
// 地址: 0x568cb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t ecx = arg1 u>> 0x10

if (ecx s> 0 && (*(arg3 + 0xdc) != arg2 || *(arg3 + 0xe0) != ecx))
    *(arg3 + 0xdc) = arg2
    *(arg3 + 0xe0) = ecx
    *(arg3 + 0x1d8) = arg2
    *(arg3 + 0x1dc) = ecx
    
    if (*(arg3 + 0x2a0) != 0)
    label_568d1a:
        void* esi_1 = *(arg3 + 0x1bc)
        
        if (esi_1 != 0)
            ecx.b = *(esi_1 + 0x18) != 0
        
        if (esi_1 == 0 || ecx.b == 0)
            sub_56e790(arg3 + 0x128, *(arg3 + 0x98), *(arg3 + 0xe8))
        else
            if (sub_58a120(esi_1) == 0)
                sub_604c90(0x74b880)
            
            int32_t* edi_1 = *(arg3 + 0x1bc)
            
            if (edi_1 != 0 && sub_58a1b0(edi_1) == 0)
                sub_604c90(0x74b8bc)
    else if (*(arg3 + 0xa4) != 0)
        ecx = *(arg3 + 0x1bc)
        
        if (ecx != 0)
            ecx.b = *(ecx + 0x18) != 0
            
            if (ecx.b != 0)
                goto label_568d1a

return 0
