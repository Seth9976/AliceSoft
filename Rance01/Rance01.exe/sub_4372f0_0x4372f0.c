// 函数: sub_4372f0
// 地址: 0x4372f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t ebx
int32_t var_8 = ebx
sub_404f60(0x10000, arg1 + 0x10)
int32_t esi_1 = 0
char result

for (int32_t i = 0; i s< 0x10000; )
    void* j = nullptr
    int32_t edi_1 = 1
    
    do
        result = (edi_1 s/ 0x1fe).b
        char* edx_4 = j + i
        j += 1
        edi_1 += esi_1
        edx_4[*(arg1 + 0x10)] = result
    while (j s< 0x100)
    
    i += 0x100
    esi_1 += 2

return result
