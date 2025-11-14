// 函数: sub_5e8050
// 地址: 0x5e8050
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 8) == 0)
    return 0

char eax_2 = (*(*arg2 + 0x24))()
char eax_4

if (eax_2 != 0)
    eax_4 = (*(*arg2 + 0x28))()

if (eax_2 == 0 || eax_4 == 0)
    char eax_14 = (*(*arg2 + 0x24))()
    char eax_16
    
    if (eax_14 != 0)
        eax_16 = (*(*arg2 + 0x28))()
    
    if (eax_14 == 0 || eax_16 != 0)
        if ((*(*arg2 + 0x24))() == 0 && (*(*arg2 + 0x28))() != 0)
            int32_t eax_30 = (*(*arg2 + 0x14))()
            int32_t eax_32 = (*(*arg2 + 0x10))()
            int32_t* ecx_16 = **(arg1 + 8)
            
            if (ecx_16 != 0)
                return (*(*ecx_16 + 0x10))(eax_32, eax_30)
    else
        int32_t eax_18 = (*(*arg2 + 0x18))()
        int32_t eax_20 = (*(*arg2 + 0x14))()
        int32_t eax_22 = (*(*arg2 + 0x10))()
        int32_t* ecx_11 = **(arg1 + 8)
        
        if (ecx_11 != 0)
            return (*(*ecx_11 + 0xc))(eax_22, eax_20, eax_18)
else
    int32_t eax_6 = (*(*arg2 + 0x18))()
    int32_t eax_8 = (*(*arg2 + 0x14))()
    int32_t eax_10 = (*(*arg2 + 0x10))()
    int32_t* ecx_5 = **(arg1 + 8)
    
    if (ecx_5 != 0)
        return (*(*ecx_5 + 8))(eax_10, eax_8, eax_6)

return 0
