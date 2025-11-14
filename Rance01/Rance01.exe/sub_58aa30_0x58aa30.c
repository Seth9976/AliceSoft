// 函数: sub_58aa30
// 地址: 0x58aa30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[1])
    int32_t* ecx_1 = *i
    int32_t* esi_1 = ecx_1[4]
    
    if (esi_1 != 0)
        uint32_t edx_1 = zx.d(*(ecx_1 + 0x26))
        int32_t eax_2 = *(*ecx_1 + 8)
        ecx_1[4] = 0
        char eax_3 = eax_2(esi_1, edx_1)
        int32_t eax_4 = *(*esi_1 + 4)
        
        if (eax_3 == 0)
            eax_4()
            int32_t eax_5
            eax_5.b = 0
            return eax_5
        
        eax_4()

int32_t eax
eax.b = 1
return eax
