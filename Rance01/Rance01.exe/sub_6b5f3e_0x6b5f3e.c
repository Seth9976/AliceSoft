// 函数: sub_6b5f3e
// 地址: 0x6b5f3e
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = data_799240

if (eax == 0)
    eax = 0x200
    data_799240 = eax
else if (eax s< 0x14)
    eax = 0x14
    data_799240 = eax

int32_t eax_1 = __calloc_crt(eax, 4)
data_798228 = eax_1

if (eax_1 == 0)
    data_799240 = 0x14
    eax_1 = __calloc_crt(0x14, 4)
    data_798228 = eax_1
    
    if (eax_1 == 0)
        return 0x1a

int32_t* edx = nullptr
int32_t ecx_2 = 0x78c1f0

while (true)
    *(edx + eax_1) = ecx_2
    ecx_2 += 0x20
    edx = &edx[1]
    
    if (ecx_2 s>= &data_78c470)
        break
    
    eax_1 = data_798228

int32_t edx_1 = 0

for (void* i = &data_78c200; i s< 0x78c260; )
    int32_t eax_6 = *(((edx_1 & 0x1f) << 6) + (&data_798100)[edx_1 s>> 5])
    
    if (eax_6 == 0xffffffff || eax_6 == 0xfffffffe || eax_6 == 0)
        *i = 0xfffffffe
    
    i += 0x20
    edx_1 += 1

return 0
