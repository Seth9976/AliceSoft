// 函数: sub_68bb50
// 地址: 0x68bb50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_1 = arg2[1]
int32_t* edi = arg1

if (edi u< ecx_1)
    arg1 = *arg2
    
    if (arg1 u<= edi)
        if (ecx_1 == arg2[2])
            ecx_1 = sub_68bbc0(arg2)
        
        int32_t eax_1 = arg2[1]
        int32_t var_8 = eax_1
        int32_t* eax_2 = sub_68bd30(eax_1, (edi - arg1) s/ 0x2c * 0x2c + *arg2, ecx_1)
        arg2[1] += 0x2c
        return eax_2

if (ecx_1 == arg2[2])
    arg1 = sub_68bbc0(arg2)

int32_t* ecx_3 = arg2[1]
int32_t* var_8_1 = ecx_3
int32_t* eax_3 = sub_68bd30(arg1, edi, ecx_3)
arg2[1] += 0x2c
return eax_3
