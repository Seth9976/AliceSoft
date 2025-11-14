// 函数: sub_5f5130
// 地址: 0x5f5130
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_c = ecx
sub_5f55f0(arg1)
int32_t edi = *(*(arg1 + 0xc) + 0x50)
int32_t ebx

if (edi == 0)
label_5f5167:
    void* eax_3 = *(arg1 + 0xc)
    
    if (*(eax_3 + 0x24) == 0)
        ebx.b = 0
    else if (*(eax_3 + 0x6d) == 0)
        if (*(eax_3 + 0x58) != 0)
            ebx.b = 0
        else
            ebx.b = 1
    else if (arg2.b == 0 || *(eax_3 + 0x58) != 0)
        ebx.b = 0
    else
        ebx.b = 1
else
    void* eax_1 = sub_5f7370(*(arg1 + 0x48), edi)
    
    if (eax_1 == 0)
        goto label_5f5167
    
    if (sub_5f2ab0(eax_1, arg2) != 0)
        goto label_5f5167
    
    ebx.b = 0

for (int32_t i = 1; i s< 4; i += 1)
    int32_t eax_4
    
    if (sub_5f3f50(arg1) != i || ebx.b == 0)
        eax_4.b = 0
    else
        eax_4.b = 1
    
    (*(**(*(arg1 + 0xb4) + (i << 2)) + 0x1c))(eax_4)

void* eax_6 = *(arg1 + 0xc)

if (*(eax_6 + 0xc) == 0 && *(arg1 + 0x10) == 0)
    int32_t edi_1 = *(eax_6 + 0x50)
    
    if (edi_1 == 0)
    label_5f51ed:
        
        for (int32_t* i_1 = *(arg1 + 0xb4) + 4; i_1 != *(arg1 + 0xb8); i_1 = &i_1[1])
            if ((*(**i_1 + 0xc))() != 0)
                goto label_5f523b
        
        int32_t eax_12
        
        for (int32_t* i_2 = 4; i_2 s< 0x10; i_2 = &i_2[1])
            eax_12 = (*(**(i_2 + *(arg1 + 0xb4)) + 0x10))()
        
        return eax_12
    
    void* eax_7 = sub_5f7370(*(arg1 + 0x48), edi_1)
    
    if (eax_7 == 0)
        goto label_5f51ed
    
    if (sub_5f2900(eax_7) == 0)
        goto label_5f51ed

label_5f523b:
sub_5f5290(1, arg1)

if (ebx.b != 0)
    int32_t eax_16
    
    for (int32_t i_3 = 2; i_3 s< 4; i_3 += 1)
        eax_16 = sub_5f5290(i_3, arg1)
    
    return eax_16

int32_t eax_14

for (int32_t* i_4 = 4; i_4 s< 0x10; i_4 = &i_4[1])
    eax_14 = (*(**(i_4 + *(arg1 + 0xb4)) + 0x10))()

return eax_14
