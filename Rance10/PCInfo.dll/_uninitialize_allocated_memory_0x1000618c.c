// 函数: _uninitialize_allocated_memory
// 地址: 0x1000618c
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

void* eax_1 = data_10016570
bool cond:0 = *eax_1 != 1
*eax_1
*eax_1 -= 1

if (not(cond:0))
    void* eax = data_10016570
    
    if (eax != &data_10016350)
        __free_base(eax)
        data_10016570 = &data_10016350

__free_base(data_10017244)
int32_t var_c = data_10017248
data_10017244 = 0
__free_base(var_c)
int32_t var_10 = data_10017010
data_10017248 = 0
__free_base(var_10)
int32_t var_14 = data_10017014
data_10017010 = 0
__free_base(var_14)
data_10017014 = 0
int32_t result
result.b = 1
return result
