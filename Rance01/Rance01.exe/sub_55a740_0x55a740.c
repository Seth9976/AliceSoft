// 函数: sub_55a740
// 地址: 0x55a740
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** esi = arg1
void** edi = esi

if (*(esi + 0x39) != 0)
    return 

do
    sub_55a740(edi[2])
    int32_t eax_2 = esi[0xa]
    edi = *edi
    
    if (eax_2 != 0)
        int32_t var_14_2 = eax_2
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
