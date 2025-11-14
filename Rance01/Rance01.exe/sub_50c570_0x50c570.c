// 函数: sub_50c570
// 地址: 0x50c570
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if ((*(*arg3 + 0x24))() == 0)
    return 0

if ((*(*arg3 + 0x10))() == (*(*arg1 + 0x10))() && (*(*arg3 + 0x14))() == (*(*arg1 + 0x14))())
    void* esi_2 = **(arg2 + 0x20)
    int32_t eax_15 = (*(*arg3 + 0x10))((*(*arg3 + 0x14))(0x20))
    *(arg2 + 0x20)
    int32_t* result = (*(esi_2 + 8))(eax_15)
    
    if (result != 0)
        if (sub_50c6c0(result, arg3) != 0 && sub_50cba0(result, arg1) != 0)
            return result
        
        (*(*result + 4))()

return 0
