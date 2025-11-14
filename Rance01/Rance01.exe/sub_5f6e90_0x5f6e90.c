// 函数: sub_5f6e90
// 地址: 0x5f6e90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = sub_5f7370(*data_797da0, arg1)

if (result == 0)
    result.b = 0
    return result

int32_t edi_1 = *(*(result + 0xc) + 0x50)

if (edi_1 == 0)
label_5f6eda:
    
    if (*(*(result + 0xc) + 0x24) != 0)
        return 1
else
    void* eax_2 = sub_5f7370(*(result + 0x48), edi_1)
    
    if (eax_2 == 0)
        goto label_5f6eda
    
    if (sub_5f2ab0(eax_2, 1) != 0)
        goto label_5f6eda

return 0
