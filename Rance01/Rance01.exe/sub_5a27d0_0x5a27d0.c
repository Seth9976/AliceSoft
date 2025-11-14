// 函数: sub_5a27d0
// 地址: 0x5a27d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx = arg3[1]
int32_t ebx = *arg3
int32_t* ecx = arg3[2]
int32_t edx_1 = ecx[1]
int32_t ebp = *ecx
int32_t edx_2 = ecx[2]
int32_t i_5 = ecx[4]
__builtin_memset(arg1 + 0xb3c, 0, 0x20)
*(ebx + (*(arg1 + (*(arg1 + 0x1454) << 2) + 0xb5c) << 2) + 2) = 0
int32_t edi_1 = *(arg1 + 0x1454) + 1
int32_t i_4 = i_5
int32_t i_2 = 0

if (edi_1 s>= 0x23d)
    return 

int32_t edi_2 = 0x23d + 0
void* var_1c_1 = arg1 + (edi_1 << 2) + 0xb5c
int32_t var_10_1 = 0x23d - edi_1
int32_t var_20_1 = edi_2

while (true)
    int32_t edx_5 = *var_1c_1
    int32_t i_6 = zx.d(*(ebx + (zx.d(*(ebx + (edx_5 << 2) + 2)) << 2) + 2)) + 1
    
    if (i_6 s> i_5)
        i_2 += 1
        i_6 = i_5
    
    *(ebx + (edx_5 << 2) + 2) = i_6.w
    
    if (edx_5 s<= edx)
        *(arg1 + (i_6 << 1) + 0xb3c) += 1
        int32_t esi = 0
        
        if (edx_5 s>= edx_2)
            esi = *(edx_1 + ((edx_5 - edx_2) << 2))
        
        uint32_t edi_5 = zx.d(*(ebx + (edx_5 << 2)))
        *(arg1 + 0x16a8) += (i_6 + esi) * edi_5
        
        if (ebp != 0)
            *(arg1 + 0x16ac) += (zx.d(*(ebp + (edx_5 << 2) + 2)) + esi) * edi_5
        
        edi_2 = var_20_1
    
    var_1c_1 += 4
    int32_t temp0_1 = var_10_1
    var_10_1 -= 1
    
    if (temp0_1 == 1)
        break
    
    i_5 = i_4

int32_t i = i_2

if (i == 0)
    return 

void* esi_3 = arg1 + (i_4 << 1) + 0xb3c

do
    int32_t ecx_9 = i_4 - 1
    void* edx_10 = arg1 + (ecx_9 << 1) + 0xb3c
    
    if (*(arg1 + (ecx_9 << 1) + 0xb3c) == 0)
        do
            edx_10 -= 2
            ecx_9 -= 1
        while (*edx_10 == 0)
    
    *(arg1 + (ecx_9 << 1) + 0xb3e) += 2
    *(arg1 + (ecx_9 << 1) + 0xb3c) -= 1
    *esi_3 -= 1
    i -= 2
while (i s> 0)

int32_t i_3 = i_4

if (i_3 == 0)
    return 

void* var_10_2 = esi_3
int32_t edi_6 = edi_2
int32_t i_1

do
    uint32_t j = zx.d(*esi_3)
    uint32_t j_1 = j
    
    if (j != 0)
        void* ebp_1 = arg1 + (edi_6 << 2) + 0xb5c
        
        do
            int32_t ecx_10 = *(ebp_1 - 4)
            var_20_1 -= 1
            ebp_1 -= 4
            
            if (ecx_10 s<= edx)
                uint32_t edi_7 = zx.d(*(ebx + (ecx_10 << 2) + 2))
                
                if (edi_7 != i_3)
                    *(arg1 + 0x16a8) += (i_3 - edi_7) * zx.d(*(ebx + (ecx_10 << 2)))
                    *(ebx + (ecx_10 << 2) + 2) = i_3.w
                
                j_1 -= 1
                j = j_1
        while (j != 0)
        
        edi_6 = var_20_1
    
    esi_3 = var_10_2 - 2
    i_1 = i_3
    i_3 -= 1
    var_10_2 = esi_3
while (i_1 != 1)
