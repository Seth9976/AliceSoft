// 函数: sub_5b3680
// 地址: 0x5b3680
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx_3 = *(arg1 + 0xc)

if (ecx_3 == 0x20)
    int32_t* ecx = data_797d74
    
    if (ecx != 0)
        arg1 = (*(*ecx + 8))(*(arg1 + 4), *(arg1 + 8), 0x20)
        
        if (arg1 != 0)
        label_5b36d6:
            *(arg2 + 0x10) = arg1
            arg1.b = 1
            return arg1
else if (ecx_3 == 0x18)
    int32_t* ecx_1 = data_797d74
    
    if (ecx_1 != 0)
        arg1 = (*(*ecx_1 + 0xc))(*(arg1 + 4), *(arg1 + 8), 0x20)
        
        if (arg1 != 0)
            goto label_5b36d6

arg1.b = 0
return arg1
