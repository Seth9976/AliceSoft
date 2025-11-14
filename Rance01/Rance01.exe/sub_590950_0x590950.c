// 函数: sub_590950
// 地址: 0x590950
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp
int32_t var_10 = ebp

if ((*(*arg2 + 0x18))() != 0x20)
    int32_t eax_1
    eax_1.b = 0
    return eax_1

int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
char* edi_1 = (*(*arg2 + 8))(0, 0)
int32_t* esi_1 = arg2
void* eax_6 = (*(*arg2 + 0x1c))() - (arg5 << 2)
int32_t arg_4

if ((*(*esi_1 + 0x4c))(esi_1, 0, &arg_4, 0, 0) s< 0)
    int32_t eax_8
    eax_8.b = 0
    return eax_8

int32_t i_4 = arg6
int32_t arg_1c = 0

if (i_4 s> 0)
    int32_t eax_23
    
    do
        char* esi_5 = arg_4 * arg_1c + arg1
        char eax_10 = (*(*arg2 + 0x24))()
        char eax_12
        
        if (eax_10 != 0)
            eax_12 = (*(*arg2 + 0x28))()
        
        if (eax_10 == 0 || eax_12 == 0)
            char eax_14 = (*(*arg2 + 0x24))()
            char eax_16
            
            if (eax_14 != 0)
                eax_16 = (*(*arg2 + 0x28))()
            
            if (eax_14 == 0 || eax_16 != 0)
                if ((*(*arg2 + 0x24))() == 0 && (*(*arg2 + 0x28))() != 0 && arg5 s> 0)
                    int32_t i_7 = arg5
                    int32_t i
                    
                    do
                        *esi_5 = edi_1[3]
                        esi_5[1] = edi_1[3]
                        esi_5[2] = edi_1[3]
                        esi_5[3] = 0xff
                        esi_5 = &esi_5[4]
                        edi_1 = &edi_1[4]
                        i = i_7
                        i_7 -= 1
                    while (i != 1)
            else if (arg5 s> 0)
                int32_t i_6 = arg5
                int32_t i_1
                
                do
                    *esi_5 = *edi_1
                    esi_5[1] = edi_1[1]
                    esi_5[2] = edi_1[2]
                    esi_5[3] = 0xff
                    esi_5 = &esi_5[4]
                    edi_1 = &edi_1[4]
                    i_1 = i_6
                    i_6 -= 1
                while (i_1 != 1)
        else
            int32_t i_5 = arg5
            
            if (i_5 s> 0)
                int32_t i_2
                
                do
                    *esi_5 = *edi_1
                    esi_5[1] = edi_1[1]
                    esi_5[2] = edi_1[2]
                    esi_5[3] = edi_1[3]
                    esi_5 = &esi_5[4]
                    edi_1 = &edi_1[4]
                    i_2 = i_5
                    i_5 -= 1
                while (i_2 != 1)
        
        if (arg5 s< arg3)
            void* eax_21 = &esi_5[2]
            int32_t i_8 = arg3 - arg5
            int32_t i_3
            
            do
                *(eax_21 - 2) = 0
                eax_21 += 4
                i_3 = i_8
                i_8 -= 1
            while (i_3 != 1)
        
        edi_1 += eax_6
        eax_23 = arg_1c + 1
        arg_1c = eax_23
    while (eax_23 s< arg6)
    i_4 = arg6
    esi_1 = arg2

for (; i_4 s< arg4; i_4 += 1)
    int32_t j_1 = arg3
    int32_t* eax_26 = arg_4 * i_4 + arg1
    
    if (j_1 s> 0)
        int32_t j
        
        do
            *eax_26 = 0
            eax_26 = &eax_26[1]
            j = j_1
            j_1 -= 1
        while (j != 1)

int32_t eax_28
eax_28.b = (*(*esi_1 + 0x50))(esi_1, 0) s>= 0
return eax_28
