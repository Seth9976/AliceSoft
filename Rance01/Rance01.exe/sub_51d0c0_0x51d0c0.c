// 函数: sub_51d0c0
// 地址: 0x51d0c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** esi = arg1
void** edi = esi

if (*(esi + 0x69) != 0)
    return 

do
    sub_51d0c0(edi[2])
    int32_t eax_2 = esi[0x15]
    edi = *edi
    
    if (eax_2 != 0)
        int32_t var_14_2 = eax_2
        sub_6b4d5b()
    
    esi[0x15] = 0
    esi[0x16] = 0
    esi[0x17] = 0
    int32_t eax_3 = esi[0x11]
    
    if (eax_3 != 0)
        int32_t var_14_3 = eax_3
        sub_6b4d5b()
    
    void** var_14_4 = esi
    esi[0x11] = 0
    esi[0x12] = 0
    esi[0x13] = 0
    sub_6b4d5b()
    esi = edi
while (*(edi + 0x69) == 0)
