// 函数: sub_5f2a10
// 地址: 0x5f2a10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_c = arg1
void* eax = *(arg1 + 0xc)
int32_t edi = *(eax + 0x50)

if (edi != 0)
    if (sub_5f7370(*(arg1 + 0x48), edi) != 0)
        int32_t eax_4 = sub_5f2a10()
        return *(*(arg1 + 0xc) + 0x1c) + eax_4
    
    return *(*(arg1 + 0xc) + 0x1c)

int32_t ebx_1 = *(eax + 0x20) * *(arg1 + 4)

if (*(eax + 0x50) != 0 && sub_5f7370(*(arg1 + 0x48), 0) != 0)
    int32_t eax_12 = sub_5f2a10()
    return *(*(arg1 + 0xc) + 0x1c) + eax_12 + ebx_1

return *(*(arg1 + 0xc) + 0x1c) + ebx_1
