// 函数: sub_6d0190
// 地址: 0x6d0190
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi
int32_t var_8 = esi
void var_c5c
data_797c48(&var_c5c, arg1, 0x404)
void var_84c
data_797c44(&var_84c, 0x404)
void var_38
data_797c44(&var_38, 0x21)
void var_43c
int32_t i

for (i = 0; i s< 0xfb; i += 6)
    __builtin_memset(&var_43c + (i << 2), 0xff, 0x18)

__builtin_memset(&var_43c + (i << 2), 0xff, 0x14)
int32_t var_85c = 1
int32_t i_2
int32_t i_7

while (true)
    i_7 = 0xffffffff
    int32_t eax = 0x3b9aca00
    void var_c58
    int32_t i_1
    
    for (i_1 = 0; i_1 s<= 0xfd; i_1 += 3)
        int32_t ecx_1 = *(&var_c5c + (i_1 << 2))
        
        if (ecx_1 != 0 && ecx_1 s<= eax)
            eax = ecx_1
            i_7 = i_1
        
        int32_t ecx_2 = *(&var_c58 + (i_1 << 2))
        
        if (ecx_2 != 0 && ecx_2 s<= eax)
            eax = ecx_2
            i_7 = i_1 + 1
        
        int32_t var_c54[0xfe]
        int32_t ecx_3 = var_c54[i_1]
        
        if (ecx_3 != 0 && ecx_3 s<= eax)
            eax = ecx_3
            i_7 = i_1 + 2
    
    int32_t esi_3 = *(&var_c5c + (i_1 << 2))
    
    if (esi_3 != 0 && esi_3 s<= eax)
        eax = esi_3
        i_7 = i_1
    
    int32_t ecx_5 = *(&var_c58 + i_1 * 4)
    
    if (ecx_5 != 0 && ecx_5 s<= eax)
        i_7 = i_1 + 1
    
    int32_t i_6 = 0xffffffff
    int32_t edx_1 = 0x3b9aca00
    
    for (i_2 = 0; i_2 s<= 0xfe; i_2 += 2)
        int32_t esi_5 = *(&var_c5c + (i_2 << 2))
        
        if (esi_5 != 0 && esi_5 s<= edx_1 && i_2 != i_7)
            edx_1 = esi_5
            i_6 = i_2
        
        int32_t esi_6 = *(&var_c58 + (i_2 << 2))
        
        if (esi_6 != 0 && esi_6 s<= edx_1 && i_2 + 1 != i_7)
            edx_1 = esi_6
            i_6 = i_2 + 1
    
    int32_t esi_7 = *(&var_c5c + (i_2 << 2))
    
    if (esi_7 != 0 && esi_7 s<= edx_1 && i_2 != i_7)
        i_6 = i_2
    
    if (i_6 == 0xffffffff)
        break
    
    int32_t edx_3 = i_7 * 4
    int32_t eax_2 = i_6 * 4
    *(&var_c5c + (i_7 << 2)) += *(&var_c5c + (i_6 << 2))
    *(&var_c5c + (i_6 << 2)) = 0
    
    while (true)
        *(&var_84c + edx_3) += 1
        int32_t ebx_2 = *(&var_43c + edx_3)
        
        if (ebx_2 == 0xffffffff)
            break
        
        edx_3 = ebx_2 * 4
    
    *(&var_43c + edx_3) = i_6
    
    while (true)
        *(&var_84c + eax_2) += 1
        int32_t eax_4 = *(&var_43c + eax_2)
        
        if (eax_4 == 0xffffffff)
            break
        
        eax_2 = eax_4 * 4

void var_848
int32_t i_3

for (i_3 = 0; i_3 s<= 0xfd; i_3 += 3)
    int32_t edx_4 = *(&var_84c + (i_3 << 2))
    
    if (edx_4 != 0)
        i_2.b = *(&var_38 + edx_4)
        i_2.b += 1
        *(&var_38 + edx_4) = i_2.b
    
    int32_t edx_5 = *(&var_848 + (i_3 << 2))
    
    if (edx_5 != 0)
        i_2.b = *(&var_38 + edx_5)
        i_2.b += 1
        *(&var_38 + edx_5) = i_2.b
    
    int32_t var_844[0x102]
    int32_t edx_6 = var_844[i_3]
    
    if (edx_6 != 0)
        i_2.b = *(&var_38 + edx_6)
        i_2.b += 1
        *(&var_38 + edx_6) = i_2.b

int32_t ecx_6 = *(&var_84c + (i_3 << 2))

if (ecx_6 != 0)
    i_2.b = *(&var_38 + ecx_6)
    i_2.b += 1
    *(&var_38 + ecx_6) = i_2.b

int32_t edx_8 = *(&var_848 + i_3 * 4)

if (edx_8 != 0)
    i_2.b = *(&var_38 + edx_8)
    i_2.b += 1
    *(&var_38 + edx_8) = i_2.b

int32_t ecx_7 = 0x20
int32_t eax_5 = 0x1f

while (true)
    edx_8.b = *(&var_38 + ecx_7)
    
    if (edx_8.b u<= 0)
        ecx_7 = eax_5
        
        if (eax_5 == 0xf)
            break
        
        eax_5 -= 1
    else
        int32_t ebp_1 = eax_5
        
        do
            void var_39
            i_7.b = *(&var_39 + ebp_1)
            ebp_1 -= 1
        while (i_7.b u<= 0)
        
        edx_8.b -= 2
        *(&var_38 + ecx_7) = edx_8.b
        i_7.b = *(&var_38 + eax_5)
        i_7.b += 1
        *(&var_38 + eax_5) = i_7.b
        char var_37[0x27]
        edx_8.b = var_37[ebp_1]
        edx_8.b += 2
        var_37[ebp_1] = edx_8.b
        edx_8.b = *(&var_38 + ebp_1)
        edx_8.b -= 1
        *(&var_38 + ebp_1) = edx_8.b

void* edx_9 = &var_38 + eax_5
uint32_t i_4

for (i_4 = zx.d(*(&var_38 + eax_5)); i_4 == 0; i_4 = zx.d(*(&var_38 + ecx_7)))
    ecx_7 -= 1
    edx_9 = &var_38 + ecx_7

i_4.b -= 1
*edx_9 = i_4.b
data_797c48(arg2, &var_38, 0x10)
int32_t i_5 = 1
char* result = nullptr

do
    int32_t j = 0
    char ecx_8 = 1
    
    do
        if (i_5 == *(&var_84c + (j << 2)))
            result[arg3] = j.b
            result = &result[1]
        
        if (i_5 == *(&var_848 + (j << 2)))
            result[arg3] = ecx_8
            result = &result[1]
        
        ecx_8 += 2
        j += 2
    while (j s<= 0xff)
    
    i_5 += 1
while (i_5 s<= 0x20)

return result
