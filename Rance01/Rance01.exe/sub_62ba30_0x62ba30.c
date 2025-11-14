// 函数: sub_62ba30
// 地址: 0x62ba30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = *(arg1 + 4)
int32_t* ebx = eax[1]
int32_t* var_10 = ebx
int32_t* var_4 = eax

if (*(ebx + 0x31) != 0)
    return eax

int32_t* ecx_1 = arg2
int32_t eax_1 = ecx_1[4]
int32_t edx_1 = ecx_1[5]
int32_t var_c_1 = eax_1

while (true)
    if (edx_1 u>= 0x10)
        ecx_1 = *ecx_1
    
    int32_t esi_1 = ebx[7]
    
    if (esi_1 u< eax_1)
        eax_1 = esi_1
    
    int32_t edi_1 = ebx[8]
    int32_t* edx_2
    
    if (edi_1 u< 0x10)
        edx_2 = &ebx[3]
    else
        edx_2 = ebx[3]
    
    int32_t eax_2 = sub_402320(eax_1, edx_2, ecx_1, eax_1)
    bool cond:1_1 = eax_2 s< 0
    
    if (eax_2 != 0)
        goto label_62bab3
    
    if (esi_1 u< var_c_1)
        var_10 = var_10[2]
    else
        eax_2.b = esi_1 != var_c_1
        cond:1_1 = eax_2 s< 0
    label_62bab3:
        
        if (cond:1_1)
            var_10 = var_10[2]
        else
            int32_t* ecx_2
            
            if (edi_1 u< 0x10)
                ecx_2 = &ebx[3]
            else
                ecx_2 = ebx[3]
            
            int32_t esi_2 = arg2[4]
            
            if (var_c_1 u< esi_2)
                esi_2 = var_c_1
            
            int32_t eax_3 = esi_2
            
            if (esi_2 u>= esi_1)
                eax_3 = esi_1
            
            int32_t* edx_4
            
            if (edx_1 u< 0x10)
                edx_4 = arg2
            else
                edx_4 = *arg2
            
            int32_t eax_4 = sub_402320(eax_3, edx_4, ecx_2, eax_3)
            bool cond:2_1 = eax_4 s< 0
            
            if (eax_4 != 0)
                goto label_62bafc
            
            if (esi_2 u< esi_1)
                var_4 = var_10
                var_10 = *var_10
            else
                eax_4.b = esi_2 != esi_1
                cond:2_1 = eax_4 s< 0
            label_62bafc:
                
                if (cond:2_1 || ebx[0xa] s>= arg2[7])
                    var_4 = var_10
                    var_10 = *var_10
                else
                    var_10 = var_10[2]
    
    if (*(var_10 + 0x31) != 0)
        break
    
    ebx = var_10
    ecx_1 = arg2
    eax_1 = var_c_1

return var_4
