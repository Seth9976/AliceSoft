// 函数: sub_687050
// 地址: 0x687050
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

bool eax = *(arg1 + 0x2c) != 0xffffffff
bool cond:0 = *(arg1 + 0x30) != 0xffffffff
bool cond:1 = *(arg1 + 0x34) != 0xffffffff
int32_t ebx
ebx.b = *(arg1 + 0x38) != 0xffffffff
bool var_11_1

if (eax == 0 && cond:0 == 0 && cond:1 == 0)
    var_11_1 = cond:1

if (eax != 0 || cond:0 != 0 || cond:1 != 0 || ebx.b != 0)
    var_11_1 = true

char* eax_1 = data_797d44
int32_t var_8 = 0
int32_t var_c = 0
char result = sub_424db0(eax_1)

if (result != 0)
    result = (***(eax_1 + 8))(&var_8, &var_c)

if (var_11_1 != 0)
    if (*(arg1 + 0x28) == 0xffffffff)
        int32_t ebp_1 = var_c
        *(arg1 + 0x28) = 0
        int32_t* i = *(arg1 + 0xa8)
        int32_t ebx_1 = var_8
        
        for (; i != *(arg1 + 0xac); i = &i[1])
            result = (***i)(*(arg1 + 0xb8), ebx_1, ebp_1)
    
    int32_t ebp_2 = *(arg1 + 0x28)
    
    if (eax != 0)
        ebp_2 += *(arg1 + 0x2c)
    
    if (cond:0 != 0)
        ebp_2 += *(arg1 + 0x30)
    
    if (cond:1 != 0)
        ebp_2 += *(arg1 + 0x34)
    
    if (ebx.b != 0)
        ebp_2 += *(arg1 + 0x38)
    
    int32_t* i_1 = *(arg1 + 0xa8)
    int32_t edx_3 = var_8
    int32_t ebx_2 = var_c
    
    for (; i_1 != *(arg1 + 0xac); i_1 = &i_1[1])
        result = (*(**i_1 + 0x14))(*(arg1 + 0xb8), edx_3, ebx_2, ebp_2)
else if (*(arg1 + 0x28) != 0xffffffff)
    int32_t eax_7 = var_c
    int32_t ecx_4 = var_8
    *(arg1 + 0x28) = 0xffffffff
    return sub_41d620(arg1 + 0xa8, ecx_4, eax_7)

return result
