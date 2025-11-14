// 函数: sub_5f55f0
// 地址: 0x5f55f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = *(arg1 + 0xc)
int32_t edi = *(result + 0x23c)

if (edi != 0)
    result = sub_5f7370(*(arg1 + 0x48), edi)
    void* const result_1
    
    if (result == 0)
        result_1 = 0xffffffff
    else
        result = (*(**(*(result + 0xb4) + 4) + 0x38))()
        result_1 = result
    
    for (int32_t* i = *(arg1 + 0xb4) + 4; i != *(arg1 + 0xb8); i = &i[1])
        result = (*(**i + 0x28))(result_1)

return result
