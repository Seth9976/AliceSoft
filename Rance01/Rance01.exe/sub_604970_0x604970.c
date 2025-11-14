// 函数: sub_604970
// 地址: 0x604970
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx
int32_t* result_1
ecx, result_1 = __chkstk(0x1008)
int32_t eax_1 = data_78c474 ^ &__return_addr
bool cond:0 = ecx[5] u< 0x10
int32_t* result = result_1
__return_addr = nullptr
void arg_4
void* eax_2 = &arg_4

if (not(cond:0))
    ecx = *ecx

result_1.b = *ecx

while (result_1.b != 0)
    if (result_1.b u< 0x81)
        if (result_1.b u< 0xe0)
            goto label_6049c8
        
        goto label_6049b5
    
    if (result_1.b u<= 0x9f || result_1.b u>= 0xe0)
    label_6049b5:
        *eax_2 = result_1.b
        result_1.b = *(ecx + 1)
        *(eax_2 + 1) = result_1.b
        eax_2 += 2
        ecx += 2
    else
    label_6049c8:
        
        if (result_1.b != 0xa)
            *eax_2 = result_1.b
            eax_2 += 1
        else
            *eax_2 = 0xd
            result_1.b = *ecx
            *(eax_2 + 1) = result_1.b
            eax_2 += 2
        
        ecx += 1
    
    result_1.b = *ecx

*eax_2 = 0
char* eax_3 = &arg_4
result[5] = 0xf
result[4] = 0
*result = 0

do
    ecx.b = *eax_3
    eax_3 = &eax_3[1]
while (ecx.b != 0)

void arg_5
sub_401270(result, eax_3 - &arg_5, &arg_4)
sub_6b4885(eax_1 ^ &__return_addr)
return result
