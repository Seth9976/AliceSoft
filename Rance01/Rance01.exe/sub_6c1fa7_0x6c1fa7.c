// 函数: sub_6c1fa7
// 地址: 0x6c1fa7
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi
int32_t var_c = edi
void* eax = *(arg1 + 4)

if (eax != 0 && *(eax + 8) != 0)
    void* ecx_1 = *(arg2 + 4)
    
    if (eax != ecx_1)
        if (sub_6b7db0(eax + 8, ecx_1 + 8) != 0 || ((*arg2 & 2) != 0 && (*arg1 & 8) == 0))
            return 0
    else if ((*arg2 & 2) != 0 && (*arg1 & 8) == 0)
        return 0
    
    char eax_3 = (*arg3).b
    
    if ((eax_3 & 1) != 0 && (*arg1 & 1) == 0)
        return 0
    
    if ((eax_3 & 2) != 0 && (*arg1 & 2) == 0)
        return 0

return 1
