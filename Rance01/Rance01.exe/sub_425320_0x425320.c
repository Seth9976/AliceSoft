// 函数: sub_425320
// 地址: 0x425320
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp
int32_t var_4 = ebp

if (*(arg1 + 0xc) != 0)
    int32_t* i = *(arg1 + 0x10)
    int32_t ebx
    ebx.b = 0
    
    for (; i != *(arg1 + 0x14); i = &i[1])
        int32_t* ecx = *i
        char var_9 = 0
        char eax
        int80_t st0_1
        st0_1, eax = sub_425510(ecx, &var_9)
        
        if (eax != 0 && var_9 != 0)
            ebx.b = 1
    
    if (*(arg1 + 0x20) != 0 && ebx.b != 0)
        (***(arg1 + 0x20))(1)
    
    void* esi_1 = *(arg1 + 0x24)
    
    if (esi_1 != 0 && ebx.b != 0)
        sub_425a60(esi_1)

var_4
