// 函数: sub_610670
// 地址: 0x610670
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edx = *arg1
int32_t* esi = arg1[1]

if (edx != esi)
    int32_t* ecx = esi
    
    if (esi != esi)
        do
            *edx = *ecx
            edx[1] = ecx[1]
            ecx = &ecx[2]
            edx = &edx[2]
        while (ecx != esi)
    
    arg1[1] = edx

int32_t ebx_3 = arg2 + arg3

while (arg2 u< ebx_3)
    void* ecx_2
    ecx_2.b = *arg2
    
    if (ecx_2.b u< 0x81)
        if (ecx_2.b u< 0xe0)
            goto label_6106d7
        
        arg2 = &arg2[2]
    else if (ecx_2.b u<= 0x9f || ecx_2.b u>= 0xe0)
        arg2 = &arg2[2]
    else
    label_6106d7:
        
        if (ecx_2.b != 0x2f || &arg2[1] u>= ebx_3)
            arg2 = &arg2[1]
        else if (arg2[1] == 0x2f)
            char* edx_1 = arg2
            arg2 = &arg2[2]
            
            if (arg2 u>= ebx_3)
                break
            
            while (true)
                ecx_2.b = *arg2
                
                if (ecx_2.b u< 0x81)
                    if (ecx_2.b u< 0xe0)
                        goto label_610708
                    
                    arg2 = &arg2[2]
                else if (ecx_2.b u<= 0x9f || ecx_2.b u>= 0xe0)
                    arg2 = &arg2[2]
                else
                label_610708:
                    
                    if (ecx_2.b == 0)
                        char* var_10 = edx_1
                        void* var_c_1 = &arg2[1]
                        sub_6107b0(&var_10, arg1)
                        arg2 = &arg2[1]
                        break
                    
                    arg2 = &arg2[1]
                
                if (arg2 u>= ebx_3)
                    arg2.b = 1
                    return arg2
        else if (&arg2[1] u>= ebx_3 || arg2[1] != 0x2a)
            arg2 = &arg2[1]
        else
            char* esi_2 = arg2
            arg2 = &arg2[2]
            
            if (arg2 u>= ebx_3)
                break
            
            void* edx_2 = &arg2[1]
            
            while (true)
                ecx_2.b = *arg2
                
                if (ecx_2.b u< 0x81)
                    if (ecx_2.b u< 0xe0)
                        goto label_61076c
                    
                    arg2 = &arg2[2]
                    edx_2 += 2
                else if (ecx_2.b u<= 0x9f || ecx_2.b u>= 0xe0)
                    arg2 = &arg2[2]
                    edx_2 += 2
                else
                label_61076c:
                    
                    if (ecx_2.b == 0x2a && edx_2 u< ebx_3 && *edx_2 == 0x2f)
                        break
                    
                    arg2 = &arg2[1]
                    edx_2 += 1
                
                if (arg2 u>= ebx_3)
                    arg2.b = 1
                    return arg2
            
            char* var_8 = esi_2
            void* var_4_1 = &arg2[2]
            sub_6107b0(&var_8, arg1)
            arg2 = &arg2[2]

arg2.b = 1
return arg2
