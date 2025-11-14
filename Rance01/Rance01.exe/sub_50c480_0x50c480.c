// 函数: sub_50c480
// 地址: 0x50c480
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if ((*(*arg3 + 0x24))() != 0)
    int32_t eax_3 = (*(*arg3 + 0x10))()
    int32_t eax_5 = (*(*arg1 + 0x10))()
    int32_t eax_7
    int32_t eax_9
    
    if (eax_3 == eax_5)
        eax_7 = (*(*arg3 + 0x14))()
        eax_9 = (*(*arg1 + 0x14))()
    
    if (eax_3 != eax_5 || eax_7 != eax_9)
        int32_t var_24_1 =
            (*(*arg3 + 0x10))((*(*arg3 + 0x14))((*(*arg1 + 0x10))((*(*arg1 + 0x14))())))
        sub_51ddc0(0x754320)
    else
        void* esi_3 = **(arg2 + 0x20)
        int32_t eax_14 = (*(*arg3 + 0x10))((*(*arg3 + 0x14))(0x20))
        *(arg2 + 0x20)
        int32_t* result = (*(esi_3 + 8))(eax_14)
        
        if (result != 0)
            if (sub_50c6c0(result, arg3) != 0 && sub_50c940(result, arg1) != 0)
                return result
            
            (*(*result + 4))()

return 0
