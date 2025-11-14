// 函数: sub_5f2ab0
// 地址: 0x5f2ab0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_c = arg1
int32_t edi = *(*(arg1 + 0xc) + 0x50)

if (edi == 0)
label_5f2ae1:
    void* esi_1 = *(arg1 + 0xc)
    
    if (*(esi_1 + 0x24) != 0 && (*(esi_1 + 0x6d) == 0 || arg2.b != 0))
        return 1
else
    if (sub_5f7370(*(arg1 + 0x48), edi) == 0)
        goto label_5f2ae1
    
    if (sub_5f2ab0(arg2) != 0)
        goto label_5f2ae1

return 0
