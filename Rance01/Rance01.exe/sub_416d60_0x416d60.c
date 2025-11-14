// 函数: sub_416d60
// 地址: 0x416d60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
int32_t eax_3
int32_t edx
edx:eax_3 = sx.q((arg3 - arg2) s>> 2)
int32_t* i = &arg2[(eax_3 - edx) s>> 1]
int32_t var_18 = arg4
sub_417000(arg2, i, arg3 - 4)
void* i_1 = &i[1]

for (; arg2 u< i; i = &i[-1])
    char eax_8
    int32_t ecx_2
    eax_8, ecx_2 = sub_416ef0(i[-1], *i)
    
    if (eax_8 != 0)
        break
    
    char eax_11
    eax_11, ecx_2 = sub_416ef0(*i, i[-1])
    
    if (eax_11 != 0)
        break

for (; i_1 u< arg3; i_1 += 4)
    if (sub_416ef0(*i_1, *i) != 0)
        break
    
    if (sub_416ef0(*i, *i_1) != 0)
        break

void* i_2 = i_1
int32_t* i_4 = i

while (true)
    for (; i_2 u< arg3; i_2 += 4)
        if (sub_416ef0(*i, *i_2) == 0)
            if (sub_416ef0(*i_2, *i) != 0)
                break
            
            int32_t ecx_6 = *i_1
            *i_1 = *i_2
            i_1 += 4
            *i_2 = ecx_6
    
    bool cond:0_1 = i_4 != arg2
    
    if (i_4 u> arg2)
        do
            if (sub_416ef0(i_4[-1], *i) == 0)
                if (sub_416ef0(*i, i_4[-1]) != 0)
                    break
                
                int32_t eax_27 = i[-1]
                i -= 4
                *i = i_4[-1]
                i_4[-1] = eax_27
            
            i_4 = &i_4[-1]
        while (arg2 u< i_4)
        
        cond:0_1 = i_4 != arg2
    
    if (cond:0_1)
        i_4 -= 4
        
        if (i_2 != arg3)
            int32_t eax_31 = *i_2
            *i_2 = *i_4
            *i_4 = eax_31
            i_2 += 4
        else
            i -= 4
            
            if (i_4 != i)
                int32_t eax_29 = *i_4
                *i_4 = *i
                *i = eax_29
            
            int32_t ecx_11 = *(i_1 - 4)
            int32_t eax_30 = *i
            i_1 -= 4
            *i = ecx_11
            *i_1 = eax_30
    else
        if (i_2 == arg3)
            break
        
        if (i_1 != i_2)
            int32_t eax_28 = *i
            *i = *i_1
            *i_1 = eax_28
        
        void* i_3 = i_2
        var_4 = *i
        *i = *i_3
        i_1 += 4
        i = &i[1]
        i_2 += 4
        *i_3 = var_4

*arg1 = i
arg1[1] = i_1
return arg1
