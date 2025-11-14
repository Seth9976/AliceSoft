// 函数: sub_58ced0
// 地址: 0x58ced0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = arg1
void* eax = *(ecx + 4)
void* edi = *(eax + 4)
void* ebp = eax
eax.b = 1
char var_8 = 1
void* var_c

if (*(edi + 0x21) == 0)
    int32_t* eax_1 = arg3
    int32_t ebx_1 = eax_1[4]
    eax = eax_1[3]
    var_c = eax
    void* var_4_1
    
    while (true)
        int32_t ebp_1 = *(edi + 0x10)
        int32_t* ecx_1 = *(edi + 0xc)
        var_4_1 = edi
        
        while (eax != ebx_1)
            if (ecx_1 == ebp_1)
                if (eax != ebx_1)
                    goto label_58cf38
                
                break
            
            int32_t edx_1 = *eax
            int32_t esi_1 = *ecx_1
            
            if (esi_1 s> edx_1)
                goto label_58cf34
            
            if (esi_1 s< edx_1)
                goto label_58cf38
            
            eax += 4
            ecx_1 = &ecx_1[1]
        
        if (ecx_1 == ebp_1)
        label_58cf38:
            eax.b = 0
        else
        label_58cf34:
            eax.b = 1
        
        var_8 = eax.b
        
        if (eax.b == 0)
            edi = *(edi + 8)
        else
            edi = *edi
        
        if (*(edi + 0x21) != 0)
            break
        
        eax = var_c
    
    ebp = var_4_1
    ecx = arg1

void* esi_2 = ebp
var_c = esi_2

if (eax.b != 0)
    if (ebp == **(ecx + 4))
        void** eax_5 = arg2
        *eax_5 = *sub_58d030(ebp, ecx, &arg3, 1, arg3)
        eax_5[1].b = 1
        return eax_5
    
    sub_58d1e0(&var_c)
    esi_2 = var_c

int32_t edx_4 = arg3[4]
int32_t* ebx_2 = arg3

if (sub_58d3e0(*(esi_2 + 0xc), edx_4, ebx_2[3], *(esi_2 + 0x10), edx_4) != 0)
    void** eax_12 = arg2
    *eax_12 = *sub_58d030(ebp, arg1, &arg3, var_8, ebx_2)
    eax_12[1].b = 1
    return eax_12

int32_t eax_13 = ebx_2[3]

if (eax_13 != 0)
    int32_t var_20_3 = eax_13
    sub_6b4d5b()

int32_t* var_20_4 = ebx_2
ebx_2[3] = 0
ebx_2[4] = 0
ebx_2[5] = 0
sub_6b4d5b()
*arg2 = esi_2
arg2[1].b = 0
return arg2
