// 函数: sub_418fd0
// 地址: 0x418fd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg1
int32_t* i_1 = *(ebp + 0x24)
void* esi = ebp + 0x24

for (int32_t* i = i_1; i != *(ebp + 0x28); i = &i[1])
    if (*i == 0)
        *i = 1
        return ((i - *esi) s>> 2) + *(ebp + 8)

int32_t eax = *(esi + 4)
int32_t ebx_2 = (*(esi + 4) - i_1) s>> 2
int32_t __saved_ecx

if (&__saved_ecx u>= eax || i_1 u> &__saved_ecx)
    int32_t ecx_7 = *(esi + 8)
    
    if (eax == ecx_7)
        int32_t edx_3 = *esi
        int32_t eax_11 = (eax - edx_3) s>> 2
        
        if (eax_11 u> 0x3ffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        int32_t ecx_9 = (ecx_7 - edx_3) s>> 2
        
        if (eax_11 + 1 u> ecx_9)
            uint32_t edx_5 = ecx_9 u>> 1
            int32_t ecx_10
            
            if (0x3fffffff - edx_5 u>= ecx_9)
                ecx_10 = ecx_9 + edx_5
            else
                ecx_10 = 0
            
            if (ecx_10 u< eax_11 + 1)
                ecx_10 = eax_11 + 1
            
            sub_6b0560(esi, ecx_10)
    
    int32_t* eax_13 = *(esi + 4)
    
    if (eax_13 != 0)
        *eax_13 = 1
else
    int32_t ecx_1 = *(esi + 8)
    
    if (eax == ecx_1)
        int32_t eax_2 = (eax - i_1) s>> 2
        
        if (eax_2 u> 0x3ffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        int32_t ecx_3 = (ecx_1 - i_1) s>> 2
        
        if (eax_2 + 1 u> ecx_3)
            uint32_t edx_1 = ecx_3 u>> 1
            int32_t ecx_4
            
            if (0x3fffffff - edx_1 u>= ecx_3)
                ecx_4 = ecx_3 + edx_1
            else
                ecx_4 = 0
            
            if (ecx_4 u< eax_2 + 1)
                ecx_4 = eax_2 + 1
            
            sub_6b0560(esi, ecx_4)
            ebp = arg1
    
    int32_t* eax_7 = *(esi + 4)
    
    if (eax_7 != 0)
        *eax_7 = *(*esi + ((&__saved_ecx - i_1) s>> 2 << 2))
        *(esi + 4) += 4
        return *(ebp + 8) + ebx_2

*(esi + 4) += 4
return *(ebp + 8) + ebx_2
