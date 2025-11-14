// 函数: sub_5c4290
// 地址: 0x5c4290
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg3
int32_t ebp = arg4

if (ebp s< 0)
    goto label_5c42ce

if (ebp s> 0 || ebx != 0)
    int32_t temp3_1 = ebx
    ebx += arg1[2]
    ebp = adc.d(ebp, arg1[3], temp3_1 + arg1[2] u< temp3_1)

void* eax_1

while (true)
    if (ebp s>= 0 && (ebp s> 0 || ebx != 0))
        int32_t temp8_1 = arg1[3]
        
        if (temp8_1 s> ebp)
            return 0xffffffff
        
        if (temp8_1 s>= ebp && arg1[2] u>= ebx)
            return 0xffffffff
    
label_5c42ce:
    eax_1 = sub_5b9950(&arg1[6], arg2)
    
    if (eax_1 s>= 0)
        if (eax_1 != 0)
            break
        
        if ((ebx | ebp) == 0)
            return 0xffffffff
        
        int32_t eax_4 = sub_5c41b0(arg1)
        
        if (eax_4 == 0)
            return 0xfffffffe
        
        if (eax_4 s< 0)
            return 0xffffff80
    else
        int32_t eax_2
        int32_t edx_1
        edx_1:eax_2 = sx.q(eax_1)
        int32_t temp2_1 = arg1[2]
        arg1[2] -= eax_2
        arg1[3] = sbb.d(arg1[3], edx_1, temp2_1 u< eax_2)

int32_t result = arg1[2]
int32_t eax_7
int32_t edx_7
edx_7:eax_7 = sx.q(eax_1)
arg1[3] = adc.d(edx_7, arg1[3], eax_7 + result u< eax_7)
arg1[2] = eax_7 + result
return result
