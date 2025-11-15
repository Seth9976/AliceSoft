// 函数: sub_10001d70
// 地址: 0x10001d70
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

char* ebp = arg2
void* ebx = 0xffffffff
void* ecx = arg1[4]

if (*(ebp + 0x10) u< 0xffffffff)
    ebx = *(ebp + 0x10)

if (not.d(ecx) u<= ebx)
    sub_10001fc6("string too long")
    noreturn

void* edi = ecx + ebx

if (ebx != 0)
    if (edi u> 0xfffffffe)
        sub_10001fc6("string too long")
        noreturn
    
    if (arg1[5] u>= edi)
        if (edi != 0)
            goto label_10001dbe
        
        arg1[4] = edi
        
        if (arg1[5] u< 0x10)
            *arg1 = 0
            return arg1
        
        **arg1 = 0
        return arg1
    
    sub_10001a60(arg1, edi, ecx)
    
    if (edi != 0)
    label_10001dbe:
        int32_t eax_2 = arg1[5]
        char* edx_1
        
        if (eax_2 u< 0x10)
            edx_1 = arg1
        else
            edx_1 = *arg1
        
        int32_t* eax_6
        
        if (eax_2 u< 0x10)
            eax_6 = arg1
        else
            eax_6 = *arg1
        
        void* ecx_2 = arg1[4]
        
        if (ecx_2 != 0)
            sub_10002cf0(eax_6 + ebx, edx_1, ecx_2)
        
        if (arg1 != ebp)
            if (*(ebp + 0x14) u>= 0x10)
                ebp = *ebp
            
            char* eax_10
            
            if (arg1[5] u< 0x10)
                eax_10 = arg1
            else
                eax_10 = *arg1
            
            if (ebx != 0)
                sub_1000cc10(eax_10, ebp, ebx)
        else
            int32_t eax_8 = arg1[5]
            int32_t* ecx_3
            
            if (eax_8 u< 0x10)
                ecx_3 = arg1
            else
                ecx_3 = *arg1
            
            int32_t* eax_9
            
            if (eax_8 u< 0x10)
                eax_9 = arg1
            else
                eax_9 = *arg1
            
            if (ebx != 0)
                sub_10002cf0(eax_9, ecx_3, ebx)
        
        bool cond:1_1 = arg1[5] u< 0x10
        arg1[4] = edi
        
        if (not(cond:1_1))
            *(*arg1 + edi) = 0
            return arg1
        
        *(arg1 + edi) = 0

return arg1
