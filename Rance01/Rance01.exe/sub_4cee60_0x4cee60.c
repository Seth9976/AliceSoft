// 函数: sub_4cee60
// 地址: 0x4cee60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg1[1]
int32_t* esi = *arg1
int32_t result = 0

if (esi != ebx)
    result = 0
    
    do
        void* eax = *esi
        int32_t eax_1
        int32_t edx_1
        edx_1:eax_1 = muls.dp.d(0x76b981db, *(eax + 0x2c) - *(eax + 0x28))
        int32_t edx_2 = edx_1 s>> 7
        esi = &esi[1]
        result += ((edx_2 u>> 0x1f) + edx_2) * 3
    while (esi != ebx)

return result
