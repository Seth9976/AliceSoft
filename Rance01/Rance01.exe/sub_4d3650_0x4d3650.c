// 函数: sub_4d3650
// 地址: 0x4d3650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** esi = arg1
void** edi = esi

if (*(esi + 0x39) != 0)
    return 

do
    sub_4d3650(edi[2])
    void* i = esi[0xa]
    edi = *edi
    
    if (i != 0)
        for (int32_t ecx_1 = esi[0xb]; i != ecx_1; i += 0x14)
            *(i + 8) = &sealengine::CFrameIndex::`vftable'
        
        int32_t var_14_2 = esi[0xa]
        sub_6b4d5b()
    
    esi[0xa] = 0
    esi[0xb] = 0
    esi[0xc] = 0
    
    if (esi[8] u>= 0x10)
        int32_t var_14_3 = esi[3]
        sub_6b4d5b()
    
    esi[8] = 0xf
    esi[7] = 0
    void** var_14_4 = esi
    esi[3].b = 0
    sub_6b4d5b()
    esi = edi
while (*(edi + 0x39) == 0)
