// 函数: sub_6b0940
// 地址: 0x6b0940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** esi = arg1
void** edi = esi

if (*(esi + 0x31) != 0)
    return 

do
    sub_6b0940(edi[2])
    int32_t eax_2 = esi[8]
    edi = *edi
    
    if (eax_2 != 0)
        int32_t var_14_2 = eax_2
        sub_6b4d5b()
    
    esi[8] = 0
    esi[9] = 0
    esi[0xa] = 0
    int32_t eax_3 = esi[4]
    
    if (eax_3 != 0)
        int32_t var_14_3 = eax_3
        sub_6b4d5b()
    
    void** var_14_4 = esi
    esi[4] = 0
    esi[5] = 0
    esi[6] = 0
    sub_6b4d5b()
    esi = edi
while (*(edi + 0x31) == 0)
