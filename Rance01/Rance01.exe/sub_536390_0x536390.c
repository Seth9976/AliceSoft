// 函数: sub_536390
// 地址: 0x536390
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg2[1]
int32_t ebp = *arg2
void* ecx_1 = ebx - ebp
int32_t eax
void* edx
edx:eax = muls.dp.d(0x92492493, ecx_1)
int32_t ecx_4 = ecx_1 s/ 0x38
int32_t var_4

if (ecx_4 u> arg1)
    eax = arg1 * 7
    int32_t* ecx_5 = ebp + (eax << 3)
    
    if (ecx_5 != ebx)
        int32_t var_18_1 = var_4
        int32_t* eax_3 = sub_536730(ebx, var_4, ecx_5, ebx)
        int32_t var_20 = var_4
        int32_t eax_6 = sub_536100(eax_3, arg2[1])
        arg2[1] = eax_3
        return eax_6
else if (ecx_4 u< arg1)
    sub_536470(arg1 - ecx_4, (edx + ecx_1) s>> 5, arg2)
    void* ecx_7 = arg2[1]
    int32_t var_18_2 = var_4
    int32_t eax_12 = (ecx_7 - *arg2) s/ 0x38
    int32_t edx_9 = arg1 - eax_12
    sub_536610(eax_12, edx_9, ecx_7, edx_9)
    int32_t ebx_4 = arg2[1]
    eax = (ebx_4 - *arg2) s/ 0x38
    arg2[1] = ebx_4 + (arg1 - eax) * 0x38
return eax
