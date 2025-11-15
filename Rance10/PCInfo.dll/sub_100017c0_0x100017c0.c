// 函数: sub_100017c0
// 地址: 0x100017c0
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t edx = arg3
void** ebx = arg2
int32_t eax = ebx[4]

if (eax u< edx)
    sub_10001fe6("invalid string position")
    noreturn

void* ecx = arg1[4]
void* eax_1 = eax - edx
void* ebp = arg4

if (ebp u> eax_1)
    ebp = eax_1

if (not.d(ecx) u<= ebp)
    sub_10001fc6("string too long")
    noreturn

void* edi = ecx + ebp

if (ebp != 0)
    if (edi u> 0xfffffffe)
        sub_10001fc6("string too long")
        noreturn
    
    if (arg1[5] u>= edi)
        if (edi != 0)
            goto label_10001821
        
        arg1[4] = edi
        
        if (arg1[5] u< 0x10)
            *arg1 = 0
            return arg1
        
        **arg1 = 0
        return arg1
    
    sub_10001a60(arg1, edi, ecx)
    edx = arg3
    
    if (edi != 0)
    label_10001821:
        
        if (ebx[5] u>= 0x10)
            ebx = *ebx
        
        int32_t* ecx_2
        
        if (arg1[5] u< 0x10)
            ecx_2 = arg1
        else
            ecx_2 = *arg1
        
        if (ebp != 0)
            sub_1000cc10(arg1[4] + ecx_2, ebx + edx, ebp)
        
        bool cond:0_1 = arg1[5] u< 0x10
        arg1[4] = edi
        
        if (not(cond:0_1))
            *(*arg1 + edi) = 0
            return arg1
        
        *(arg1 + edi) = 0

return arg1
