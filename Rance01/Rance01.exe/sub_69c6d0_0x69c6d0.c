// 函数: sub_69c6d0
// 地址: 0x69c6d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = data_797ddc
int32_t* i = *(result + 0x174)
void* edi = result + 0x178

if (i != *(result + 0x178))
    do
        int32_t* ecx_1 = *i
        
        if (ecx_1 != 0)
            result = (*(*ecx_1 + 0x14))()
        
        i = &i[1]
    while (i != *edi)

return result
