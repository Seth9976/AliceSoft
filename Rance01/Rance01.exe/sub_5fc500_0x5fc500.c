// 函数: sub_5fc500
// 地址: 0x5fc500
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_1 = *(arg1 + 0x40)
void** i = *eax_1

if (i != eax_1)
    do
        void* esi_1 = i[2]
        
        if (esi_1 != 0)
            if (*(esi_1 + 0x4c) u>= 0x10)
                int32_t var_10_1 = *(esi_1 + 0x38)
                sub_6b4d5b()
            
            *(esi_1 + 0x4c) = 0xf
            *(esi_1 + 0x48) = 0
            void* var_10_2 = esi_1
            *(esi_1 + 0x38) = 0
            sub_6b4d5b()
        
        i = *i
    while (i != *(arg1 + 0x40))

int32_t* ecx = *(arg1 + 0x40)
int32_t* result = *ecx
*ecx = ecx
void* ecx_1 = *(arg1 + 0x40)
*(ecx_1 + 4) = ecx_1
*(arg1 + 0x44) = 0

if (result != *(arg1 + 0x40))
    int32_t* i_1
    
    do
        i_1 = *result
        int32_t* result_1 = result
        sub_6b4d5b()
        result = i_1
    while (i_1 != *(arg1 + 0x40))

return result
