// 函数: sub_67c6d0
// 地址: 0x67c6d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax_7 = *(arg1 + 0x14)
void* eax_1

if (*(eax_7 + 0x2c) != 0)
    eax_1 = (*(**(eax_7 + 0x2c) + 0x10))()

int32_t ebx

if (*(eax_7 + 0x2c) != 0 && eax_1.b != 0)
    ebx.b = 1
else
    eax_1 = *(arg1 + 0x18)
    
    if (*(eax_1 + 0x2c) == 0)
        ebx.b = 0
    else if ((*(**(eax_1 + 0x2c) + 0x10))().b != 0)
        ebx.b = 1
    else
        ebx.b = 0

eax_1.b = *(arg1 + 0x28)

if (eax_1.b != 0)
label_67c73f:
    
    if (ebx.b == 0)
        for (int32_t* i = *(arg1 + 0x38); i != *(arg1 + 0x3c); i = &i[1])
            eax_1 = (*(**i + 0x44))(*(arg1 + 0x48))
else if (ebx.b != 0)
    int32_t* i_1 = *(arg1 + 0x38)
    
    if (i_1 != *(arg1 + 0x3c))
        int32_t eax_5
        
        do
            eax_5 = (*(**i_1 + 0x40))(*(arg1 + 0x48))
            i_1 = &i_1[1]
        while (i_1 != *(arg1 + 0x3c))
        
        *(arg1 + 0x28) = ebx.b
        return eax_5
else if (eax_1.b != 0)
    goto label_67c73f

*(arg1 + 0x28) = ebx.b
return eax_1
