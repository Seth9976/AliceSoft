// 函数: sub_50c620
// 地址: 0x50c620
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if ((*(*arg1 + 0x24))() == 0)
    return 0

void* esi = **(arg2 + 0x20)
int32_t eax_7 = (*(*arg1 + 0x10))((*(*arg1 + 0x14))(0x20))
*(arg2 + 0x20)
int32_t* result = (*(esi + 0xc))(eax_7)

if (result != 0)
    if (sub_50c6c0(result, arg1) != 0)
        if ((*(*arg1 + 0x28))() == 0)
            if ((*(*result + 0x24))() != 0)
                sub_50ce40(result, 0)
            
            return result
        
        if (sub_50cba0(result, arg1) != 0)
            return result
    
    (*(*result + 4))()

return 0
