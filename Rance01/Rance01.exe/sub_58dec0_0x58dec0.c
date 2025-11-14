// 函数: sub_58dec0
// 地址: 0x58dec0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** esi = arg1
void** edi = esi

if (*(esi + 0x21) != 0)
    return 

do
    sub_58dec0(edi[2])
    int32_t eax_2 = esi[4]
    edi = *edi
    
    if (eax_2 != 0)
        int32_t var_14_2 = eax_2
        sub_6b4d5b()
    
    void** var_14_3 = esi
    esi[4] = 0
    esi[5] = 0
    esi[6] = 0
    sub_6b4d5b()
    esi = edi
while (*(edi + 0x21) == 0)
