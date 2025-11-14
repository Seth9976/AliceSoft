// 函数: sub_5f3f50
// 地址: 0x5f3f50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_c = arg1
void* eax = *(arg1 + 0xc)
int32_t edi = *(eax + 0x50)

if (edi != 0 && *(eax + 0x4c) == 0)
    if (sub_5f7370(*(arg1 + 0x48), edi) != 0)
        return sub_5f3ff0(sub_5f3f50(), arg1)
    
    return sub_5f3ff0(1, arg1)

int32_t result = *(arg1 + 0x24)

if ((*(**(*(arg1 + 0xb4) + (result << 2)) + 0x34))() != 0)
    return result

if (result == 3 && (*(**(*(arg1 + 0xb4) + 8) + 0x34))() != 0)
    return result - 1

return 1
