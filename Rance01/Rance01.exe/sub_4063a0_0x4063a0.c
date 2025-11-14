// 函数: sub_4063a0
// 地址: 0x4063a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* i = arg1
bool cond:0 = i s>= 0

if (i s> 0)
    int32_t* j = *arg2
    
    do
        if (*(j + 0x71) == 0)
            arg1 = j[2]
            
            if (*(arg1 + 0x71) != 0)
                arg1 = j[1]
                
                if (*(arg1 + 0x71) == 0)
                    while (j == arg1[2])
                        *arg2 = arg1
                        j = arg1
                        arg1 = arg1[1]
                        
                        if (*(arg1 + 0x71) != 0)
                            break
            else
                int32_t* ecx_1 = *arg1
                
                while (*(ecx_1 + 0x71) == 0)
                    arg1 = ecx_1
                    ecx_1 = *arg1
            
            *arg2 = arg1
            j = arg1
        
        i -= 1
        cond:0 = i s>= 0
    while (i s> 0)

if (cond:0)
    return 

int32_t* j_1 = *arg2
int32_t i_2 = neg.d(i)
int32_t i_1

do
    if (*(j_1 + 0x71) == 0)
        int32_t* j_2 = *j_1
        
        if (*(j_2 + 0x71) != 0)
            arg1 = j_1[1]
            
            if (*(arg1 + 0x71) == 0)
                while (j_1 == *arg1)
                    *arg2 = arg1
                    j_1 = arg1
                    arg1 = arg1[1]
                    
                    if (*(arg1 + 0x71) != 0)
                        break
            
            if (*(j_1 + 0x71) == 0)
                j_1 = arg1
                *arg2 = arg1
        else
            j_1 = j_2
            arg1 = j_1[2]
            
            while (*(arg1 + 0x71) == 0)
                j_1 = arg1
                arg1 = j_1[2]
            
            *arg2 = j_1
    else
        j_1 = j_1[2]
        *arg2 = j_1
    
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
