// 函数: sub_68b2d0
// 地址: 0x68b2d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

bool eax = *(arg1 + 0x40) != 0xffffffff
bool cond:0 = *(arg1 + 0x44) != 0xffffffff
bool cond:1 = *(arg1 + 0x48) != 0xffffffff
int32_t ebx
ebx.b = *(arg1 + 0x4c) != 0xffffffff
char var_d = ebx.b

if (eax != 0 || cond:0 != 0 || cond:1 != 0 || ebx.b != 0)
    ebx.b = 1
else
    for (int32_t* i = *(arg1 + 0x50); i != *(arg1 + 0x54); i = &i[1])
        if (ebx.b != 0 || *i != 0xffffffff)
            ebx.b = 1

int32_t var_8 = 0
int32_t var_c = 0
char* eax_1 = data_797d44
int32_t* eax_2 = sub_424db0(eax_1)

if (eax_2.b != 0)
    eax_2 = (***(eax_1 + 8))(&var_8, &var_c)

if (ebx.b != 0)
    if (*(arg1 + 0x3c) == 0xffffffff)
        int32_t ebp_1 = var_c
        int32_t ebx_1 = var_8
        *(arg1 + 0x3c) = 0
        
        for (int32_t* i_1 = *(arg1 + 0x78); i_1 != *(arg1 + 0x7c); i_1 = &i_1[1])
            (***i_1)(*(arg1 + 0x88), ebx_1, ebp_1)
    
    int32_t ebp_2 = *(arg1 + 0x3c)
    
    if (eax != 0)
        ebp_2 += *(arg1 + 0x40)
    
    if (cond:0 != 0)
        ebp_2 += *(arg1 + 0x44)
    
    if (cond:1 != 0)
        ebp_2 += *(arg1 + 0x48)
    
    if (var_d != 0)
        ebp_2 += *(arg1 + 0x4c)
    
    eax_2 = *(arg1 + 0x50)
    int32_t var_4
    
    if (eax_2 != *(arg1 + 0x54))
        int32_t edx_3 = *(arg1 + 0x54)
        var_4 = 0
        
        do
            int32_t* ecx_4 = eax_2
            
            if (*eax_2 s<= 0)
                ecx_4 = &var_4
            
            ebp_2 += *ecx_4
            eax_2 = &eax_2[1]
        while (eax_2 != edx_3)
    
    int32_t* i_2 = *(arg1 + 0x78)
    int32_t ebx_2 = var_c
    var_4 = var_8
    
    for (; i_2 != *(arg1 + 0x7c); i_2 = &i_2[1])
        eax_2 = (*(**i_2 + 0x14))(*(arg1 + 0x88), var_4, ebx_2, ebp_2)
else if (*(arg1 + 0x3c) != 0xffffffff)
    int32_t ebx_3 = var_c
    int32_t ebp_3 = var_8
    *(arg1 + 0x10) = 0xffffffff
    *(arg1 + 0x3c) = 0xffffffff
    int32_t* i_3 = *(arg1 + 0x78)
    
    if (i_3 != *(arg1 + 0x7c))
        int32_t eax_10
        
        do
            eax_10 = (*(**i_3 + 8))(*(arg1 + 0x88), ebp_3, ebx_3)
            i_3 = &i_3[1]
        while (i_3 != *(arg1 + 0x7c))
        
        return eax_10

return eax_2
