// 函数: sub_426810
// 地址: 0x426810
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* esi = data_797d44

if (sub_424db0(esi) != 0)
    int32_t* ecx_1 = *(esi + 4)
    
    if (ecx_1 != 0)
        if (esi[0x20] != 0)
            return (*(**(esi + 4) + 0x10))(arg1, arg2)
        
        if ((*(*ecx_1 + 8))() != 0)
            esi[0x20] = 1
            return (*(**(esi + 4) + 0x10))(arg1, arg2)

return 0
