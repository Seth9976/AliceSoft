// 函数: sub_625e30
// 地址: 0x625e30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

switch (*(arg1 + 0xd8))
    case 0
        jump(***(*(arg1 + 0xdc) + 4))
    case 1
        void* esi_2 = *(arg1 + 0xdc)
        return (*(esi_2 + 0x38) - *(esi_2 + 0x34)) s>> 2
    case 2
        return sub_6232a0(*(arg1 + 0xdc))
    case 3
        return (*(**(*(arg1 + 0xdc) + 4) + 0x2c))() - 1
    case 4
        int32_t ecx_2 = *(arg1 + 0xec)
        int32_t eax_9 = *(arg1 + 0xf0)
        
        if (ecx_2 != eax_9)
            int32_t edi_1 = *(ecx_2 + (eax_9 - ecx_2) s/ 0x28 * 0x28 - 0x28)
            int32_t eax_18
            int32_t ecx_4
            eax_18, ecx_4 = (*(**(*(arg1 + 0xdc) + 4) + 0x14))(edi_1)
            
            if (eax_18 - 1 u<= 4)
                switch (eax_18)
                    case 1
                        return sub_6238f0(ecx_4, edi_1, *(arg1 + 0xdc))
                    case 3
                        return sub_624990(*(arg1 + 0xdc), edi_1)
                    case 4
                        return sub_624620(ecx_4, edi_1, *(arg1 + 0xdc))
                    case 5
                        return sub_624c60(*(arg1 + 0xdc), edi_1)

return 0
