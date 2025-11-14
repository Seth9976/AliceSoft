// 函数: sub_40bf30
// 地址: 0x40bf30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = data_797d60
void** result_2 = *(ebx + 4)
void** result_3 = result_2[1]
void** result_1 = result_2

while (*(result_3 + 0x21) == 0)
    if (sub_40f4a0(&result_3[3], 0x757718) == 0)
        result_1 = result_3
        result_3 = *result_3
    else
        result_3 = result_3[2]

void** result = result_1
void** esi = *(ebx + 4)
char eax_1

if (result_1 != esi)
    eax_1 = sub_40f4a0(0x757718, &result_1[3])

void*** eax_2

if (result_1 == esi || eax_1 != 0)
    void** var_4 = esi
    eax_2 = &var_4
else
    eax_2 = &result

void** eax_3 = *eax_2

if (eax_3 != esi)
    int32_t* ecx_2 = eax_3[7]
    
    if (ecx_2 != 0)
        int32_t* eax_6 = (**ecx_2)(0x757738)
        
        if (eax_6 != 0)
            result = nullptr
            (*(*eax_6 + 4))(0, &result)
            return result

return 0
