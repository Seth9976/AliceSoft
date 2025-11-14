// 函数: sub_5fceb0
// 地址: 0x5fceb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = *(arg1 + 0x38)
int32_t* ebx = *(arg1 + 0x6c)
void* result = nullptr
int32_t eax_1 = *(arg1 + 0x70)
void* var_4 = arg1
void* result_2 = nullptr
void* var_14 = nullptr

if (ebx != eax_1)
    int32_t edi
    int32_t var_24_1 = edi
    void* result_1
    
    do
        int32_t* esi_1 = *ebx
        int32_t eax_3 = sub_5fb060(esi_1, eax)
        int32_t edi_2 = esi_1[4]
        int32_t eax_4 = edi_2
        
        if (edi_2 u>= 1)
            eax_4 = 1
        
        int32_t* edx
        
        if (esi_1[5] u< 0x10)
            edx = esi_1
        else
            edx = *esi_1
        
        if (sub_402320(eax_4, edx, &(*U"\\n\n\n\n\n\n\n\n")[4], eax_4) != 0 || edi_2 u< 1)
            var_14 += eax_3
        else
            void* eax_5
            eax_5.b = edi_2 != 1
            
            if (eax_5 != 0)
                var_14 += eax_3
            else
                var_14 = eax_5
        
        void** eax_6 = &var_14
        
        if (result_2 s>= var_14)
            eax_6 = &result_2
        
        result_1 = *eax_6
        ebx = &ebx[1]
        result_2 = result_1
    while (ebx != eax_1)
    
    arg1 = var_4
    result = result_1

void* eax_7 = *(arg1 + 0x8c)

if (eax_7 s<= 0 || *(arg1 + 0x90) s<= 0)
    return result

var_4 = eax_7
void** eax_8 = &var_4

if (eax_7 s>= result)
    eax_8 = &result_2

return *eax_8
