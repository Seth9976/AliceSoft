// 函数: sub_58ab30
// 地址: 0x58ab30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result

for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[1])
    int32_t* esi_1 = *i
    (*(*esi_1 + 0x18))()
    int32_t* ecx_2 = esi_1[9]
    
    if (ecx_2 != 0)
        (*(*ecx_2 + 4))()
        esi_1[9] = 0
    
    int32_t* eax_2 = esi_1[7]
    
    if (eax_2 != 0)
        (*(*eax_2 + 8))(eax_2)
        esi_1[7] = 0
    
    int32_t* eax_3 = esi_1[5]
    
    if (eax_3 != 0)
        (*(*eax_3 + 8))(eax_3)
        esi_1[5] = 0
    
    result = esi_1[4]
    
    if (result != 0)
        (*(*result + 8))(result)
        esi_1[4] = 0

result.b = 1
return result
