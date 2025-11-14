// 函数: sub_62be50
// 地址: 0x62be50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edx = arg1
int32_t* eax = *(edx + 4)
int32_t* ecx = eax[1]
int32_t* edi = eax
int32_t* ebx_1 = &arg3[3]
bool cond:0 = *(ecx + 0x31) != 0
eax.b = 1
int32_t* var_c = ecx
char var_8 = 1

if (not(cond:0))
    while (true)
        int32_t ebp_1 = ecx[7]
        int32_t* ecx_1
        
        if (ecx[8] u< 0x10)
            ecx_1 = &ecx[3]
        else
            ecx_1 = ecx[3]
        
        int32_t esi_1 = ebx_1[4]
        int32_t eax_1 = esi_1
        
        if (esi_1 u>= ebp_1)
            eax_1 = ebp_1
        
        int32_t* edx_1
        
        if (ebx_1[5] u< 0x10)
            edx_1 = ebx_1
        else
            edx_1 = *ebx_1
        
        eax = sub_402320(eax_1, edx_1, ecx_1, eax_1)
        bool cond:2_1 = eax s>= 0
        
        if (eax != 0)
            goto label_62bec9
        
        if (esi_1 u< ebp_1)
            eax.b = 1
        else
            eax.b = esi_1 != ebp_1
            cond:2_1 = eax s>= 0
        label_62bec9:
            
            if (cond:2_1)
                int32_t* ecx_2
                
                if (ebx_1[5] u< 0x10)
                    ecx_2 = ebx_1
                else
                    ecx_2 = *ebx_1
                
                int32_t ebp_2 = ebx_1[4]
                int32_t eax_2 = ebp_1
                
                if (ebp_1 u>= ebp_2)
                    eax_2 = ebp_2
                
                int32_t* edx_2
                
                if (ecx[8] u< 0x10)
                    edx_2 = &ecx[3]
                else
                    edx_2 = ecx[3]
                
                eax = sub_402320(eax_2, edx_2, ecx_2, eax_2)
                bool cond:4_1 = eax s< 0
                
                if (eax != 0)
                    goto label_62bf10
                
                if (ebp_1 u< ebp_2)
                    eax.b = 0
                else
                    eax.b = ebp_1 != ebp_2
                    cond:4_1 = eax s< 0
                label_62bf10:
                    
                    if (cond:4_1 || ebx_1[7] s>= ecx[0xa])
                        eax.b = 0
                    else
                        eax.b = 1
            else
                eax.b = 1
        
        int32_t* ecx_3 = var_c
        var_8 = eax.b
        int32_t* edx_3
        
        if (eax.b == 0)
            edx_3 = ecx_3[2]
        else
            edx_3 = *ecx_3
        
        bool cond:3_1 = *(edx_3 + 0x31) == 0
        var_c = edx_3
        
        if (not(cond:3_1))
            break
        
        ecx = var_c
    
    edi = ecx
    edx = arg1

int32_t* ebp_3 = edi
var_c = ebp_3

if (eax.b != 0)
    if (edi == **(edx + 4))
        *arg2 = *sub_62c030(edi, edx, &arg3, 1, arg3)
        arg2[1].b = 1
        return arg2
    
    sub_65a4b0(&var_c)
    ebp_3 = var_c

if (sub_405dd0(ebx_1, &ebp_3[3]) == 0
        && (sub_405dd0(&ebp_3[3], ebx_1) != 0 || ebp_3[0xa] s>= ebx_1[7]))
    if (ebx_1[5] u>= 0x10)
        int32_t var_20_5 = *ebx_1
        sub_6b4d5b()
    
    int32_t* ecx_7 = arg3
    ebx_1[5] = 0xf
    ebx_1[4] = 0
    int32_t* var_20_6 = ecx_7
    *ebx_1 = 0
    sub_6b4d5b()
    *arg2 = ebp_3
    arg2[1].b = 0
    return arg2

*arg2 = *sub_62c030(edi, arg1, &arg3, var_8, arg3)
arg2[1].b = 1
return arg2
