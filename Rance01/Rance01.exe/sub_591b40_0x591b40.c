// 函数: sub_591b40
// 地址: 0x591b40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x3d) == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t ebp = *(arg1 + 0x10)
int32_t* edi = *(*(arg1 + 8) + 0x1c)
void* eax_3

if (ebp == 0)
    int32_t ebp_1 = *(arg1 + 0x24)
    
    if (edi[0x13] == ebp_1)
        goto label_591ba3
    
    int32_t* eax_4 = *edi
    
    if ((*(*eax_4 + 0x164))(eax_4, ebp_1) s>= 0)
        edi[0x13] = ebp_1
        edi[0x18] = 0
    label_591ba3:
        int32_t edi_1 = *(arg1 + 0xc)
        int32_t ebp_2 = *(arg1 + 0x28)
        int32_t* esi_1 = *(*(arg1 + 8) + 0x1c)
        
        if (esi_1[0x11] == edi_1 && esi_1[0x12] == ebp_2)
            eax_3.b = 1
            return eax_3
        
        int32_t* eax_5 = *esi_1
        
        if ((*(*eax_5 + 0x190))(eax_5, 0, edi_1, 0, ebp_2) s>= 0)
            esi_1[0x11] = edi_1
            esi_1[0x12] = ebp_2
            eax_3.b = 1
            return eax_3
else
    if (edi[0x18] == ebp)
        goto label_591ba3
    
    int32_t* eax_2 = *edi
    
    if ((*(*eax_2 + 0x15c))(eax_2, ebp) s>= 0)
        edi[0x18] = ebp
        edi[0x13] = 0
        goto label_591ba3

eax_3.b = 0
return eax_3
