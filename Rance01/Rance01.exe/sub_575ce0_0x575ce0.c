// 函数: sub_575ce0
// 地址: 0x575ce0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = arg2
int32_t* ebp = arg1

if (ebp == ecx)
    return 

for (int32_t* i = &ebp[1]; i != ecx; i = &i[1])
    void* edi_1 = *i
    int32_t ebx_1 = *(*(edi_1 + 0x40) + 4)
    int32_t* i_2 = i
    int32_t* i_1
    
    if (ebx_1 s<= *(*(*ebp + 0x40) + 4))
        i_1 = &i[-1]
        
        if (ebx_1 s> *(*(i[-1] + 0x40) + 4))
            void* ecx_3 = *i_1
            
            do
                *i_2 = ecx_3
                ecx_3 = i_1[-1]
                i_2 = i_1
                i_1 -= 4
            while (*(*(edi_1 + 0x40) + 4) s> *(*(ecx_3 + 0x40) + 4))
            
            ebp = arg1
        
        ecx = arg2
        *i_2 = edi_1
    else
        i_1 = i
        
        if (ebp != i)
            do
                int32_t edx_1 = i_1[-1]
                i_1 -= 4
                i_1[1] = edx_1
            while (i_1 != ebp)
        
        *ebp = edi_1
