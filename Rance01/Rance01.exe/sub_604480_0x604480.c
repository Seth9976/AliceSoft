// 函数: sub_604480
// 地址: 0x604480
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* esi = arg3
int32_t* edi = arg1

if (arg4 == esi)
    return 

do
    esi -= 0x1c
    edi -= 0x1c
    
    if (edi != esi)
        if (edi[5] u>= 0x10)
            int32_t var_14_1 = *edi
            sub_6b4d5b()
        
        edi[5] = 0xf
        edi[4] = 0
        *edi = 0
        
        if (*(esi + 0x14) u>= 0x10)
            *edi = *esi
            *esi = 0
        else
            sub_6b49d0(edi, esi, *(esi + 0x10) + 1)
        
        edi[4] = *(esi + 0x10)
        edi[5] = *(esi + 0x14)
        *(esi + 0x14) = 0xf
        *(esi + 0x10) = 0
        *esi = 0
while (esi != arg4)
