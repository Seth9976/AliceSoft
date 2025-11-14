// 函数: sub_40efb0
// 地址: 0x40efb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

for (int32_t* i = *(arg1 + 0x10); i != *(arg1 + 0x14); i = &i[1])
    void* esi_1 = *i
    int32_t* ecx_1 = *(esi_1 + 0x20)
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))()
        *(esi_1 + 0x20) = 0
    
    void* esi_2 = *i
    
    if (esi_2 != 0)
        if (*(esi_2 + 0x18) u>= 0x10)
            int32_t var_14_1 = *(esi_2 + 4)
            sub_6b4d5b()
        
        *(esi_2 + 0x18) = 0xf
        *(esi_2 + 0x14) = 0
        void* var_14_2 = esi_2
        *(esi_2 + 4) = 0
        sub_6b4d5b()

int128_t* ecx_2 = *(arg1 + 0x14)
int128_t* esi_3 = *(arg1 + 0x10)

if (esi_3 == ecx_2)
    return 

int32_t edi = 0 s>> 2 << 2
sub_6b49d0(esi_3, ecx_2, edi)
*(arg1 + 0x14) = edi + esi_3
