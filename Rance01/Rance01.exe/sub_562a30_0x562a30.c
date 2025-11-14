// 函数: sub_562a30
// 地址: 0x562a30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi

if (arg2 != 0)
    if (arg2 != 1)
        int32_t eax_3
        eax_3.b = 0
        return eax_3
    
    if (*(arg1 + 8) != arg3)
        int32_t var_4_1 = edi
        void* edi_3 = *(arg1 + 0xc)
        *(arg1 + 8) = arg3
        return sub_56ea40(edi_3) != 0
else if (*(arg1 + 4) != arg3)
    int32_t var_4 = edi
    void* edi_1 = *(arg1 + 0xc)
    *(arg1 + 4) = arg3
    return sub_56ea40(edi_1) != 0
int32_t eax
eax.b = 1
return eax
