// 函数: sub_437370
// 地址: 0x437370
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
uint32_t ecx_1
int32_t edx
ecx_1, edx = sub_404f60(0x10000, arg1 + 0x20)
void* i = nullptr
int32_t var_4 = 0
int32_t j

do
    ecx_1.b = var_4.b
    ecx_1.b = not.b(ecx_1.b)
    
    for (j = 0; j s< 0x100; )
        edx.b = j.b
        edx.b = not.b(edx.b)
        char* ebx_2 = i + j
        edx.b = *(zx.d(edx.b) + *(arg1 + 0x10) + (zx.d(ecx_1.b) << 8))
        j += 1
        edx.b = not.b(edx.b)
        ebx_2[*(arg1 + 0x20)] = edx.b
    
    var_4 += 1
    i += 0x100
while (i s< 0x10000)

return j
