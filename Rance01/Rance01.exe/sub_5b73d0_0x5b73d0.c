// 函数: sub_5b73d0
// 地址: 0x5b73d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg1
int32_t esi = ebp[0xd2]
int32_t var_c = 0
int32_t var_4 = esi
int32_t var_10 = 0xffffffff
sub_5b4af0(arg2, *ebp, 5)

if (*ebp s> 0)
    void* esi_1 = &ebp[1]
    int32_t i = 0
    
    do
        sub_5b4af0(arg2, *esi_1, 4)
        int32_t eax_1 = *esi_1
        
        if (var_10 s< eax_1)
            var_10 = eax_1
        
        i += 1
        esi_1 += 4
    while (i s< *ebp)
    
    esi = var_4

if (var_10 + 1 s> 0)
    void* var_10_1 = &ebp[0x50]
    void* esi_2 = &ebp[0x30]
    int32_t i_5 = var_10 + 1
    int32_t i_1
    
    do
        sub_5b4af0(arg2, *(esi_2 - 0x40) - 1, 3)
        sub_5b4af0(arg2, *esi_2, 2)
        
        if (*esi_2 != 0)
            sub_5b4af0(arg2, *(esi_2 + 0x40), 8)
        
        int32_t j = 0
        
        if (1 << (*esi_2).b s> 0)
            void* ebp_1 = var_10_1
            
            do
                sub_5b4af0(arg2, *ebp_1 + 1, 8)
                j += 1
                ebp_1 += 4
            while (j s< 1 << (*esi_2).b)
            
            ebp = arg1
        
        var_10_1 += 0x20
        esi_2 += 4
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)
    esi = var_4

sub_5b4af0(arg2, ebp[0xd0] - 1, 2)
int32_t eax_9 = 0

if (esi != 0)
    for (uint32_t i_2 = esi - 1; i_2 != 0; i_2 u>>= 1)
        eax_9 += 1

sub_5b4af0(arg2, eax_9, 4)
int32_t ecx_7 = 0
int32_t var_4_1 = 0

if (esi != 0)
    uint32_t i_3 = esi - 1
    
    if (i_3 != 0)
        do
            ecx_7 += 1
            i_3 u>>= 1
        while (i_3 != 0)
        
        var_4_1 = ecx_7

int32_t result = 0
int32_t i_6 = 0

if (*ebp s> 0)
    arg1 = &ebp[1]
    int32_t i_4
    
    do
        int32_t ecx_10 = var_c + ebp[*arg1 + 0x20]
        var_c = ecx_10
        
        if (result s< ecx_10)
            int32_t j_2 = ecx_10 - result
            void* edi_1 = &ebp[result + 0xd3]
            int32_t result_1 = result + j_2
            int32_t j_1
            
            do
                sub_5b4af0(arg2, *edi_1, var_4_1)
                edi_1 += 4
                j_1 = j_2
                j_2 -= 1
            while (j_1 != 1)
            result = result_1
        
        arg1 = &arg1[1]
        i_4 = i_6 + 1
        i_6 = i_4
    while (i_4 s< *ebp)

return result
