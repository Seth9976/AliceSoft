// 函数: sub_5c4030
// 地址: 0x5c4030
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = arg1[0x10]
int32_t* ecx = *(eax + 0x68)
int32_t* eax_1 = *(*(eax + 4) + 0x1c)
sub_5b4f10(arg1)
int32_t ecx_1 = *arg2
arg1[1] = 0
arg1[2] = 0
arg1[4] = ecx_1
arg1[3] = ecx_1
arg1[5] = arg2[1]

if (sub_5b4d20(1, &arg1[1]) != 0)
    return 0xffffff79

int32_t eax_5 = sub_5b4d20(ecx[0xb], &arg1[1])

if (eax_5 != 0xffffffff)
    arg1[0xa] = eax_5
    int32_t* eax_6 = eax_1[eax_5 + 8]
    
    if (eax_6 != 0)
        int32_t eax_7 = *eax_6
        arg1[7] = eax_7
        
        if (eax_7 == 0)
            arg1[6] = 0
            arg1[8] = 0
        label_5c40f1:
            int32_t eax_11 = arg2[5]
            arg1[0xc] = arg2[4]
            int32_t edx_3 = arg2[6]
            arg1[0xd] = eax_11
            int32_t eax_12 = arg2[7]
            arg1[0xe] = edx_3
            int32_t edx_4 = arg2[3]
            arg1[0xf] = eax_12
            arg1[0xb] = edx_4
            arg1[9] = 0
            *arg1 = 0
            return 0
        
        arg1[6] = sub_5b4d20(1, &arg1[1])
        int32_t eax_9 = sub_5b4d20(1, &arg1[1])
        arg1[8] = eax_9
        
        if (eax_9 != 0xffffffff)
            goto label_5c40f1

return 0xffffff78
