// 函数: sub_4fd4d0
// 地址: 0x4fd4d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** ebx = arg1
void** eax = ebx[1]
void** edi = eax[1]
void** ebp = eax
eax.b = 1
char var_14 = 1

if (*(edi + 0x29) == 0)
    void** edx_1 = arg3
    int32_t eax_1 = edx_1[4]
    int32_t ecx_1 = edx_1[5]
    int32_t ebp_1 = eax_1
    int32_t var_10_1 = ebp_1
    void** var_4_1
    
    while (true)
        int32_t ebx_1 = edi[7]
        int32_t* eax_2 = &edi[3]
        var_4_1 = edi
        
        if (edi[8] u>= 0x10)
            eax_2 = *eax_2
        
        int32_t esi_1 = eax_1
        
        if (ebp_1 u< esi_1)
            esi_1 = ebp_1
        
        int32_t ebp_2 = esi_1
        
        if (esi_1 u>= ebx_1)
            ebp_2 = ebx_1
        
        if (ecx_1 u>= 0x10)
            edx_1 = *edx_1
        
        eax = sub_402320(eax_2, edx_1, eax_2, ebp_2)
        bool cond:2_1 = eax s< 0
        
        if (eax == 0)
            if (esi_1 u>= ebx_1)
                eax.b = esi_1 != ebx_1
            else
                eax = 0xffffffff
            
            cond:2_1 = eax s< 0
        
        eax.b = cond:2_1
        var_14 = eax.b
        
        if (eax.b == 0)
            edi = edi[2]
        else
            edi = *edi
        
        if (*(edi + 0x29) != 0)
            break
        
        edx_1 = arg3
        ebp_1 = var_10_1
    
    ebx = arg1
    ebp = var_4_1

void** esi_2 = ebp
arg1 = esi_2

if (eax.b == 0)
    goto label_4fd5d9

char var_2c
int32_t* var_28_3

if (ebp != *ebx[1])
    sub_4fdca0(&arg1)
    esi_2 = arg1
label_4fd5d9:
    int32_t* edi_2 = arg3
    
    if (sub_405dd0(edi_2, &esi_2[3]) == 0)
        *arg2 = esi_2
        arg2[1].b = 0
        return arg2
    
    int32_t* var_28_4 = edi_2
    var_28_3 = sub_5cdcd0(ebx)
    var_2c = var_14
else
    void** var_28_2 = arg3
    var_28_3 = sub_5cdcd0(ebx)
    var_2c = 1

sub_4fda40(ebp, ebx, &arg3, var_2c, var_28_3)
*arg2 = arg3
arg2[1].b = 1
return arg2
