// 函数: sub_5191e0
// 地址: 0x5191e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x10) == 0)
    int32_t eax
    eax.b = 0
    return eax

int16_t* esi = (*(**(arg1 + 0x10) + 0x14))()

if (esi == 0)
    int16_t* eax_2
    eax_2.b = 0
    return eax_2

int32_t edi = *(arg1 + 8)

if (edi s> 0)
    int32_t ecx_1 = 0
    
    do
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(ecx_1 + 1)
        esi[1] = ecx_1.w + 1
        *esi = 0
        ecx_1 += 1
        esi = &esi[3]
        esi[-1] = (mods.dp.d(edx_1:eax_4, edi)).w + 1
        edi = *(arg1 + 8)
    while (ecx_1 s< edi)

int32_t i = 0
int32_t i_1 = 0

if (*(arg1 + 4) - 3 s> 0)
    int32_t ebx_2 = *(arg1 + 8)
    
    do
        int16_t eax_5 = (*(arg1 + 8)).w
        int16_t eax_6 = eax_5 + eax_5 * i.w + 1
        void* ecx_5 = nullptr
        
        if (ebx_2 s> 0)
            do
                int16_t temp1_2 = (mods.dp.d(sx.q(ecx_5 + 1), ebx_2)).w
                int16_t eax_9 = ecx_5.w
                int16_t ecx_6 = eax_9 + eax_5 * i.w + 1
                esi[1] = eax_9 + eax_6
                *esi = ecx_6
                esi[3] = ecx_6
                ecx_5 += 1
                esi = &esi[6]
                int16_t eax_11 = temp1_2 + eax_6
                esi[-4] = eax_11
                esi[-2] = eax_11
                esi[-1] = temp1_2 + eax_5 * i.w + 1
                ebx_2 = *(arg1 + 8)
            while (ecx_5 s< ebx_2)
            
            i = i_1
        
        i += 1
        i_1 = i
    while (i s< *(arg1 + 4) - 3)

int32_t edi_4 = *(arg1 + 8)
int16_t ebx_6 = (*(**(arg1 + 0xc) + 0x1c))() - edi_4.w - 1
void* ecx_8 = nullptr

if (edi_4 s> 0)
    void* esi_1 = &esi[2]
    int32_t edi_5 = edi_4
    
    do
        *(esi_1 - 2) = ecx_8.w + ebx_6
        *(esi_1 - 4) = (mods.dp.d(sx.q(ecx_8 + 1), edi_5)).w + ebx_6
        ecx_8 += 1
        *esi_1 = (*(**(arg1 + 0xc) + 0x1c))() - 1
        edi_5 = *(arg1 + 8)
        esi_1 += 6
    while (ecx_8 s< edi_5)

return (*(**(arg1 + 0x10) + 0x18))() != 0
