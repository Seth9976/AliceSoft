// 函数: sub_509df0
// 地址: 0x509df0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = *(arg1 + 0xe8)

if (esi != 0)
    int32_t* ecx_1 = *(esi + 0x34)
    
    if (ecx_1 != 0)
        if ((*(*ecx_1 + 0x14))().b == 0)
            arg1.b = 0
            return arg1
        
        *(esi + 0x34) = 0
        *(esi + 0x3c) = 0
        *(esi + 0x38) = 0
    
    int32_t* ecx_2 = *(esi + 0x28)
    
    if (ecx_2 != 0)
        if ((*(*ecx_2 + 0x14))().b == 0)
            arg1.b = 0
            return arg1
        
        *(esi + 0x28) = 0
        *(esi + 0x30) = 0
        *(esi + 0x2c) = 0

arg1.b = 1
return arg1
