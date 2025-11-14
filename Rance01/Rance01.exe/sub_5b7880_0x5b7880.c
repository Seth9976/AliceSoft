// 函数: sub_5b7880
// 地址: 0x5b7880
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = 0
int32_t edi = 0
int32_t eax
int32_t ecx
int32_t edx
void* result = _calloc(eax, edx, ecx, 1, 0x520)
*(result + 0x508) = arg1[0xd2]
int32_t ecx_2 = *arg1
int32_t eax_2 = 0
int32_t edx_1 = 0
*(result + 0x510) = arg1

if (ecx_2 s>= 2)
    int32_t i_7 = ((ecx_2 - 2) u>> 1) + 1
    int32_t edx_2 = i_7 * 2
    void* eax_3 = &arg1[2]
    int32_t i
    
    do
        esi += arg1[*(eax_3 - 4) + 0x20]
        edi += arg1[*eax_3 + 0x20]
        eax_3 += 8
        i = i_7
        i_7 -= 1
    while (i != 1)
    edx_1 = edx_2
    eax_2 = 0

if (edx_1 s< *arg1)
    eax_2 = arg1[arg1[edx_1 + 1] + 0x20]

int32_t i_1 = 0
*(result + 0x504) = eax_2 + edi + esi + 2
int32_t var_104[0x41]

if (eax_2 + edi + esi + 2 s> 0)
    void* ecx_5 = &arg1[0xd1]
    
    do
        var_104[i_1] = ecx_5
        i_1 += 1
        ecx_5 += 4
    while (i_1 s< eax_2 + edi + esi + 2)

sub_6b6b50(&var_104, eax_2 + edi + esi + 2, 4, sub_5b75b0)
int32_t i_2 = 0

if (eax_2 + edi + esi + 2 s> 0)
    int32_t* ecx_6 = result + 0x104
    
    do
        *ecx_6 = (var_104[i_2] - arg1 - 0x344) s>> 2
        i_2 += 1
        ecx_6 = &ecx_6[1]
    while (i_2 s< eax_2 + edi + esi + 2)

int32_t i_3 = 0

if (eax_2 + edi + esi + 2 s> 0)
    void* ecx_7 = result + 0x104
    
    do
        *(result + (*ecx_7 << 2) + 0x208) = i_3
        i_3 += 1
        ecx_7 += 4
    while (i_3 s< eax_2 + edi + esi + 2)

int32_t i_4 = 0

if (eax_2 + edi + esi + 2 s> 0)
    do
        *(result + (i_4 << 2)) = arg1[*(result + (i_4 << 2) + 0x104) + 0xd1]
        i_4 += 1
    while (i_4 s< eax_2 + edi + esi + 2)

switch (arg1[0xd0] - 1)
    case 0
        *(result + 0x50c) = 0x100
    case 1
        *(result + 0x50c) = 0x80
    case 2
        *(result + 0x50c) = 0x56
    case 3
        *(result + 0x50c) = 0x40

if (eax_2 + edi + esi s> 0)
    void* eax_7 = result + 0x30c
    int32_t edx_11 = 2
    void* var_124_1 = eax_7
    void* var_11c_1 = &arg1[0xd3]
    int32_t i_6 = eax_2 + edi + esi
    int32_t i_5
    
    do
        int32_t var_110_1 = *(result + 0x508)
        int32_t ecx_12 = *var_11c_1
        int32_t esi_3 = 0
        int32_t ecx_13 = 0
        int32_t var_114_1 = 0
        int32_t var_108_1 = 1
        
        if (edx_11 s> 0)
            void* var_118_1 = &arg1[0xd1]
            
            do
                int32_t eax_10 = *var_118_1
                
                if (eax_10 s> esi_3 && eax_10 s< ecx_12)
                    var_114_1 = ecx_13
                    esi_3 = eax_10
                
                if (eax_10 s< var_110_1 && eax_10 s> ecx_12)
                    var_108_1 = ecx_13
                    var_110_1 = eax_10
                
                var_118_1 += 4
                ecx_13 += 1
            while (ecx_13 s< edx_11)
            
            eax_7 = var_124_1
        
        var_11c_1 += 4
        *(eax_7 + 0xfc) = var_114_1
        *eax_7 = var_108_1
        eax_7 += 4
        edx_11 += 1
        i_5 = i_6
        i_6 -= 1
        var_124_1 = eax_7
    while (i_5 != 1)

return result
