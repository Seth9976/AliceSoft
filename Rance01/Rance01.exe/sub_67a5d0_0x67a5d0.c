// 函数: sub_67a5d0
// 地址: 0x67a5d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x28) == 0)
    return 

int32_t edi_1 = arg2

if (edi_1 == 1 && (*(arg1 + 0x1c) != 0xffffffff || *(arg1 + 0x20) != 0xffffffff))
    void* eax_2 = sub_413650(*(arg1 + 0x10))[2]
    void* eax_3 = sub_5f7370(*data_797da0, *(eax_2 + 4))
    
    if (eax_3 != 0)
        int32_t edi_4 = 3
        
        if ((*(**(*(eax_3 + 0xb4) + 0xc) + 0x34))() == 0)
            int32_t ecx_4
            ecx_4.b = (*(**(*(eax_3 + 0xb4) + 8) + 0x34))() != 0
            edi_4 = ecx_4 + 1
        
        if (*(eax_3 + 0x24) != edi_4)
            if (edi_4 u<= 3)
                int32_t eax_9
                eax_9.b = *(*(*(eax_3 + 0xc) + 0x22c) + (edi_4 << 2)) == 1
                
                if (eax_9.b != 0)
                    (*(**(*(eax_3 + 0xb4) + (edi_4 << 2)) + 0x58))()
            
            *(eax_3 + 0x24) = edi_4
            *(eax_3 + 0x10) = 1
    
    void* ecx_7 = sub_413650(*(arg1 + 0x14))[2]
    void* esi_2 = sub_5f7370(*data_797da0, *(ecx_7 + 4))
    
    if (esi_2 != 0)
        int32_t edi_7 = 3
        
        if ((*(**(*(esi_2 + 0xb4) + 0xc) + 0x34))().b == 0)
            int32_t ecx_12
            ecx_12.b = (*(**(*(esi_2 + 0xb4) + 8) + 0x34))().b != 0
            edi_7 = ecx_12 + 1
        
        if (*(esi_2 + 0x24) != edi_7)
            if (edi_7 u<= 3)
                void* eax
                eax.b = *(*(*(esi_2 + 0xc) + 0x22c) + (edi_7 << 2)) == 1
                
                if (eax.b != 0)
                    (*(**(*(esi_2 + 0xb4) + (edi_7 << 2)) + 0x58))()
            
            *(esi_2 + 0x24) = edi_7
            *(esi_2 + 0x10) = 1
    
    edi_1 = arg2
    *(arg1 + 0x25) = 1

for (int32_t* i = *(arg1 + 0x34); i != *(arg1 + 0x38); i = &i[1])
    (*(**i + 0x34))(*(arg1 + 0x44), edi_1)
