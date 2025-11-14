// 函数: sub_53d900
// 地址: 0x53d900
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* ecx
char* result
ecx, result = __chkstk(0x1008)
int32_t arg_1004 = data_78c474 ^ &__return_addr
int32_t eax_1
eax_1.b = *ecx
__return_addr = nullptr
void arg_4
void* edi = &arg_4

while (eax_1.b != 0)
    if (eax_1.b u< 0x81)
        if (eax_1.b u< 0xe0)
            goto label_53d951
        
        goto label_53d93f
    
    if (eax_1.b u<= 0x9f || eax_1.b u>= 0xe0)
    label_53d93f:
        *edi = eax_1.b
        eax_1.b = ecx[1]
        *(edi + 1) = eax_1.b
        edi += 2
        ecx = &ecx[2]
    else
    label_53d951:
        
        if (eax_1.b != 0x40)
            *edi = eax_1.b
            edi += 1
            ecx = &ecx[1]
        else
            eax_1.b = ecx[1]
            *edi = 0x3a3a
            int128_t* var_14_1
            void* var_10_1
            void* ebp_2
            int128_t* edi_1
            
            if (eax_1.b == 0x30)
                ebp_2 = edi - &arg_4
                var_10_1 = ebp_2
                edi_1 = edi + 2
                var_14_1 = &arg_4
            label_53d9b0:
                sub_6c02a0(edi_1, var_14_1, var_10_1)
                edi = edi_1 + ebp_2
                break
            
            if (eax_1.b == 0x31)
                ebp_2 = edi - &arg_4
                var_10_1 = ebp_2
                *(edi + 2) = 0x7e
                var_14_1 = &arg_4
                edi_1 = edi + 3
                goto label_53d9b0
            
            if (eax_1.b == 0x32)
                ebp_2 = edi - &arg_4
                var_10_1 = ebp_2
                *(edi + 2) = 0x21
                var_14_1 = &arg_4
                edi_1 = edi + 3
                goto label_53d9b0
            
            ecx = &ecx[1]
            edi += 2
    
    eax_1.b = *ecx

void* eax_2 = &arg_4
*edi = 0
*(result + 0x14) = 0xf
*(result + 0x10) = 0
*result = 0

do
    ecx.b = *eax_2
    eax_2 += 1
while (ecx.b != 0)

void arg_5
sub_401270(result, eax_2 - &arg_5, &arg_4)
sub_6b4885(arg_1004 ^ &__return_addr)
return result
