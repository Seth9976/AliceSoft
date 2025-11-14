// 函数: sub_42fb90
// 地址: 0x42fb90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4_1 = arg1
int32_t* i = *(arg1 + 0x24)
void* var_4 = arg1

for (; i != *(arg1 + 0x28); i = &i[1])
    void* esi_1 = *i
    int32_t* eax = *(esi_1 + 0x24)
    
    if (eax != 0)
        sub_42e480(arg1, arg2, eax)
    
    int32_t ecx = *(esi_1 + 0x28)
    
    if (ecx != 0)
        eax, ecx = sub_42fb90(arg2)
    
    void* edi_1 = *(esi_1 + 0x2c)
    
    if (edi_1 != 0)
        for (int32_t** j = *(edi_1 + 0x24); j != *(edi_1 + 0x28); j = &j[1])
            eax, ecx = sub_42e480(ecx, arg2, *j)
        
        if (*(edi_1 + 0x34) != 0)
            sub_42fb90(arg2)
    
    arg1 = var_4
