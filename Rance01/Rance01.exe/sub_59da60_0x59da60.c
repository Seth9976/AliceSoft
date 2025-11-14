// 函数: sub_59da60
// 地址: 0x59da60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_404
int32_t eax_1 = data_78c474 ^ &var_404
void* edi = &var_404
char* eax_2
void* edx
eax_2, edx = sub_59d9c0(arg1)

if (eax_2.b != 0)
    eax_2 = *(arg1 + 0x10)
    
    if (*eax_2 == 0x22)
        void* eax_3 = &eax_2[1]
        *(arg1 + 0x10) = eax_3
        
        while (*eax_3 != 0x22)
            edx.b = *eax_3
            
            if (edx.b u< 0x81)
                if (edx.b u>= 0xe0)
                    goto label_59dac1
                
                *edi = edx.b
                edi += 1
            else if (edx.b u<= 0x9f || edx.b u>= 0xe0)
            label_59dac1:
                eax_3 += 1
                *edi = edx.b
                *(arg1 + 0x10) = eax_3
                edx.b = *eax_3
                *(edi + 1) = edx.b
                edi += 2
            else
                *edi = edx.b
                edi += 1
            
            eax_3 += 1
            *(arg1 + 0x10) = eax_3
        
        *(arg1 + 0x10) += 1
        char* eax_4 = &var_404
        *edi = 0
        
        do
            arg1.b = *eax_4
            eax_4 = &eax_4[1]
        while (arg1.b != 0)
        
        void var_403
        sub_401270(arg2, eax_4 - &var_403, &var_404)
        int32_t* eax_6
        eax_6.b = 1
        sub_6b4885(eax_1 ^ &var_404)
        return eax_6

eax_2.b = 0
sub_6b4885(eax_1 ^ &var_404)
return eax_2
