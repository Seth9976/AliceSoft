// 函数: sub_5d03c0
// 地址: 0x5d03c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
void** esi = arg1
int32_t var_4 = ecx
void** edi = esi

if (*(esi + 0x59) != 0)
    return 

do
    sub_5d03c0(edi[2])
    edi = *edi
    esi[0xa] = &commonsystemdata::CProperty::`vftable'
    
    if (esi[0x13] u>= 0x10)
        int32_t var_18_2 = esi[0xe]
        sub_6b4d5b()
    
    esi[0x13] = 0xf
    esi[0x12] = 0
    esi[0xe].b = 0
    
    if (esi[8] u>= 0x10)
        int32_t var_18_3 = esi[3]
        sub_6b4d5b()
    
    esi[8] = 0xf
    esi[7] = 0
    void** var_18_4 = esi
    esi[3].b = 0
    sub_6b4d5b()
    esi = edi
while (*(edi + 0x59) == 0)
