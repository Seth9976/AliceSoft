// 函数: sub_610620
// 地址: 0x610620
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = *arg1
int32_t* edx = arg1[1]

if (ecx != edx)
    int32_t* eax_1 = edx
    
    if (edx != edx)
        do
            *ecx = *eax_1
            ecx[1] = eax_1[1]
            eax_1 = &eax_1[2]
            ecx = &ecx[2]
        while (eax_1 != edx)
    
    arg1[1] = ecx

int32_t result = *arg1

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
return result
