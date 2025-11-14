// 函数: sub_6aba40
// 地址: 0x6aba40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
int32_t eax_4
int32_t edx_2
edx_2:eax_4 = sx.q((arg3 - arg2) s/ 0x28)
int32_t var_18 = arg4
void* i = arg2 + ((eax_4 - edx_2) s>> 1) * 0x28
sub_6acb40(arg2, i, arg3 - 0x28)
int32_t* i_2 = i + 0x28
int32_t* i_6 = i_2
char eax_8

for (; arg2 u< i; i -= 0x28)
    eax_8 = *(i - 8)
    
    if (eax_8 == 0 && *(i + 0x20) == 1)
        break
    
    if (*(i + 0x20) == 0 && eax_8 == 1)
        break

if (i_2 u< arg3)
    do
        eax_8 = i_2[8].b
        
        if (eax_8 == 0 && *(i + 0x20) == 1)
            break
        
        if (*(i + 0x20) == 0 && eax_8 == 1)
            break
        
        i_2 = &i_2[0xa]
    while (i_2 u< arg3)
    
    i_6 = i_2

int32_t* i_1 = i_2
void* i_4 = i

while (true)
    for (; i_1 u< arg3; i_1 = &i_1[0xa])
        eax_8 = *(i + 0x20)
        
        if (eax_8 != 0 || i_1[8].b != 1)
            if (i_1[8].b == 0 && eax_8 == 1)
                break
            
            i_6 = &i_2[0xa]
            sub_6ad4d0(i_1, i_2)
            i_2 = i_6
    
    void* edx_4 = arg2
    bool cond:0_1 = i_4 != edx_4
    
    if (i_4 u> edx_4)
        do
            eax_8 = *(i_4 - 8)
            
            if (eax_8 != 0 || *(i + 0x20) != 1)
                if (*(i + 0x20) == 0 && eax_8 == 1)
                    break
                
                i -= 0x28
                sub_6ad4d0(i_4 - 0x28, i)
                i_2 = i_6
            
            edx_4 = arg2
            i_4 -= 0x28
        while (edx_4 u< i_4)
        
        cond:0_1 = i_4 != edx_4
    
    if (cond:0_1)
        i_4 -= 0x28
        
        if (i_1 != arg3)
            sub_6ad4d0(i_4, i_1)
            i_2 = i_6
            i_1 = &i_1[0xa]
        else
            i -= 0x28
            
            if (i_4 != i)
                sub_6ad4d0(i, i_4)
                i_2 = i_6
            
            i_6 = i_2 - 0x28
            sub_6ad4d0(i_2 - 0x28, i)
            i_2 = i_6
    else
        if (i_1 == arg3)
            break
        
        if (i_2 != i_1)
            sub_6ad4d0(i_2, i)
            i_2 = i_6
        
        i_6 = &i_2[0xa]
        int32_t* i_3 = i_1
        void* i_5 = i
        i += 0x28
        i_1 = &i_1[0xa]
        sub_6ad4d0(i_3, i_5)
        i_2 = i_6

*arg1 = i
arg1[1] = i_2
return arg1
