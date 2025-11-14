// 函数: sub_5811d0
// 地址: 0x5811d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg3
int32_t* esi = arg4
int32_t* i = *(arg1 + 0x10)

if (ebx s>= i || esi s< 0)
    return i

if (ebx s< 0)
    ebx = 0

if (esi s>= i)
    esi = i - 1

void** edi_2 = (arg2 << 4) + *arg1
i = *edi_2
int32_t var_c

while (i != edi_2[1])
    int32_t ecx = *i
    
    if (esi s< ecx - 1)
        i = &i[2]
    else
        int32_t edx_3 = i[1] + ecx
        
        if (ebx s>= edx_3)
            int32_t eax_4 = (i - *edi_2) s>> 3
            void* var_8_2 = esi - ebx + 1
            var_c = ebx
            sub_58b650(&var_c, edi_2)
            i = edi_2[1]
            int32_t* edx_5 = *edi_2 + (eax_4 << 3)
            
            if (edx_5 != &i[-2] && &i[-2] != i)
                return sub_5813d0(edx_5, &i[-2], i)
            
            return i
        
        if (ebx s< ecx)
        label_581231:
            
            if (esi s<= edx_3 - 1)
                i[1] += ecx - ebx
                *i = ebx
                return i
            
            if (ebx s>= ecx)
                goto label_58123d
            
            if (esi s< edx_3)
                i = &i[2]
            else
                sub_5812f0(&arg4, edi_2, i)
                i = *edi_2
        else
            if (esi s<= edx_3 - 1)
                return i
            
            if (ebx s< ecx)
                goto label_581231
            
        label_58123d:
            
            if (esi s>= edx_3)
                ebx = ecx
                sub_5812f0(&arg4, edi_2, i)
                i = *edi_2
            else if (ebx s>= ecx || esi s< edx_3)
                i = &i[2]
            else
                sub_5812f0(&arg4, edi_2, i)
                i = *edi_2

var_c = ebx
void* var_8_1 = esi - ebx + 1
return sub_58b650(&var_c, edi_2)
