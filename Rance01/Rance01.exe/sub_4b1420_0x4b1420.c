// 函数: sub_4b1420
// 地址: 0x4b1420
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_c = ecx
int32_t* ebx = arg1

for (int32_t* i = *ebx; i != ebx[1]; i = &i[1])
    int32_t* esi_1 = *i
    
    if (esi_1 != 0)
        sub_4bf9f0(esi_1)

int128_t* ecx_1 = ebx[1]
int128_t* esi_2 = *ebx

if (esi_2 != ecx_1)
    int32_t edi = 0 s>> 2 << 2
    sub_6b49d0(esi_2, ecx_1, edi)
    ebx[1] = edi + esi_2

char* result = ebx[5]
int32_t* esi_3 = ebx[4]
char* result_1 = result

if (esi_3 != result)
    if (result != result)
        int32_t ebx_2 = result - esi_3
        char* result_3 = result
        
        do
            if (esi_3 != result_3)
                if (esi_3[5] u>= 0x10)
                    int32_t var_1c_2 = *esi_3
                    sub_6b4d5b()
                    result = result_1
                
                esi_3[5] = 0xf
                esi_3[4] = 0
                *esi_3 = 0
                
                if (*(ebx_2 + esi_3 + 0x14) u>= 0x10)
                    *esi_3 = *result_3
                    *result_3 = 0
                else
                    sub_6b49d0(esi_3, result_3, *(result_3 + 0x10) + 1)
                    result = result_1
                
                esi_3[4] = *(result_3 + 0x10)
                esi_3[5] = *(ebx_2 + esi_3 + 0x14)
                *(ebx_2 + esi_3 + 0x14) = 0xf
                *(result_3 + 0x10) = 0
                *result_3 = 0
            
            result_3 = &result_3[0x1c]
            esi_3 = &esi_3[7]
        while (result_3 != result)
        
        ebx = arg1
    
    result = ebx[5]
    char* result_2 = result
    int32_t* edi_3 = esi_3
    
    if (esi_3 != result)
        do
            if (edi_3[5] u>= 0x10)
                int32_t var_1c_4 = *edi_3
                sub_6b4d5b()
                result = result_2
            
            edi_3[5] = 0xf
            edi_3[4] = 0
            *edi_3 = 0
            edi_3 = &edi_3[7]
        while (edi_3 != result)
    
    ebx[5] = esi_3

int128_t* ecx_5 = ebx[9]
int128_t* esi_4 = ebx[8]

if (esi_4 != ecx_5)
    void* edi_4 = 0 s>> 2 << 2
    result = sub_6b49d0(esi_4, ecx_5, edi_4)
    ebx[9] = esi_4 + edi_4

return result
