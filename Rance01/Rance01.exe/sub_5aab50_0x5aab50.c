// 函数: sub_5aab50
// 地址: 0x5aab50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i_8
int32_t i_5 = i_8
int32_t* ebx = arg1
int32_t i_9 = *ebx

if (ebx[2].b != 3)
    return 

void* eax
eax.b = *(ebx + 9)

if (eax.b u< 8)
    uint32_t eax_1 = zx.d(eax.b)
    
    if (eax_1 == 1)
        char* esi_9 = ((i_9 - 1) u>> 3) + arg2
        char* edi_4 = i_9 + arg2 - 1
        eax = 7 - ((i_9 - 1) & 7)
        
        if (i_9 != 0)
            i_5 = i_9
            int32_t i
            
            do
                ebx.b = *esi_9
                int32_t ecx_3
                ecx_3.b = eax.b
                ebx.b u>>= ecx_3.b
                ebx.b &= 1
                *edi_4 = ebx.b
                
                if (eax != 7)
                    eax += 1
                else
                    eax = nullptr
                    esi_9 -= 1
                
                edi_4 -= 1
                i = i_5
                i_5 -= 1
            while (i != 1)
            ebx = arg1
    else if (eax_1 == 2)
        char* esi_6 = ((i_9 - 1) u>> 2) + arg2
        char* edi_3 = i_9 + arg2 - 1
        eax = (3 - ((i_9 - 1) & 3)) * 2
        
        if (i_9 != 0)
            i_5 = i_9
            int32_t i_1
            
            do
                ebx.b = *esi_6
                int32_t ecx_1
                ecx_1.b = eax.b
                ebx.b u>>= ecx_1.b
                ebx.b &= 3
                *edi_3 = ebx.b
                
                if (eax != 6)
                    eax += 2
                else
                    eax = nullptr
                    esi_6 -= 1
                
                edi_3 -= 1
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
            ebx = arg1
    else if (eax_1 == 4)
        char* esi_3 = ((i_9 - 1) u>> 1) + arg2
        eax = (i_9 & 1) * 4
        
        if (i_9 != 0)
            i_5 = i_9
            char* edi_2 = i_9 + arg2 - 1
            int32_t i_2
            
            do
                ebx.b = *esi_3
                i_8.b = eax.b
                ebx.b u>>= i_8.b
                ebx.b &= 0xf
                *edi_2 = ebx.b
                
                if (eax != 4)
                    eax += 4
                else
                    eax = nullptr
                    esi_3 -= 1
                
                edi_2 -= 1
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
            ebx = arg1
    
    *(ebx + 9) = 8
    *(ebx + 0xb) = 8
    ebx[1] = i_9

if (*(ebx + 9) != 8)
    return 

char* ecx_4 = i_9 + arg2 - 1

if (arg5 s> 0)
    int32_t* esi_10 = i_9 << 2
    void* eax_12 = esi_10 + arg2 - 1
    
    if (i_9 != 0)
        int32_t i_6 = i_9
        int32_t i_3
        
        do
            uint32_t esi_11 = zx.d(*ecx_4)
            
            if (esi_11 s< arg5)
                int32_t edx
                edx.b = *(esi_11 + arg4)
                *eax_12 = edx.b
            else
                *eax_12 = 0xff
            
            *(eax_12 - 1) = *(zx.d(*ecx_4) * 3 + arg3 + 2)
            *(eax_12 - 2) = *(zx.d(*ecx_4) * 3 + arg3 + 1)
            *(eax_12 - 3) = *(zx.d(*ecx_4) * 3 + arg3)
            eax_12 -= 4
            ecx_4 -= 1
            i_3 = i_6
            i_6 -= 1
        while (i_3 != 1)
    
    ebx[1] = esi_10
    ebx[2] = 0x20040806
    return 

int32_t* esi_15 = i_9 * 3
eax = esi_15 + arg2 - 1

if (i_9 != 0)
    int32_t i_7 = i_9
    int32_t i_4
    
    do
        *eax = *(zx.d(*ecx_4) * 3 + arg3 + 2)
        *(eax - 1) = *(zx.d(*ecx_4) * 3 + arg3 + 1)
        *(eax - 2) = *(zx.d(*ecx_4) * 3 + arg3)
        eax -= 3
        ecx_4 -= 1
        i_4 = i_7
        i_7 -= 1
    while (i_4 != 1)

ebx[2] = 0x18030802
ebx[1] = esi_15
