// 函数: sub_590b40
// 地址: 0x590b40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp
int32_t var_14 = ebp
int32_t edi
int32_t var_18 = edi

if ((*(*arg3 + 0x18))() != 0x20)
    int32_t eax_1
    eax_1.b = 0
    return eax_1

int32_t esi
int32_t var_1c = esi
char* esi_1 = (*(*arg3 + 8))(0, 0)
int32_t eax_5 = (*(*arg3 + 0x1c))()
int32_t* edi_3 = arg1
int32_t eax_6 = eax_5 - (arg4 << 2)
int32_t var_4

if ((*(*edi_3 + 0x4c))(edi_3, 0, &var_4, 0, 0) s< 0)
    int32_t eax_7
    eax_7.b = 0
    return eax_7

int32_t eax_8 = arg5
int32_t ebx
int32_t var_1c_1 = ebx
int32_t arg_18 = 0
ebx.b = 0xff

if (eax_8 s> 0)
    int32_t eax_25
    
    do
        void* edi_7 = var_4 * arg_18 + __return_addr
        char eax_10 = (*(*arg4 + 0x24))()
        char eax_12
        
        if (eax_10 != 0)
            eax_12 = (*(*arg4 + 0x28))()
        
        if (eax_10 == 0 || eax_12 == 0)
            char eax_15 = (*(*arg4 + 0x24))()
            char eax_17
            
            if (eax_15 != 0)
                eax_17 = (*(*arg4 + 0x28))()
            
            if (eax_15 == 0 || eax_17 != 0)
                if ((*(*arg4 + 0x24))() == 0 && (*(*arg4 + 0x28))() != 0)
                    if (arg4 s> 0)
                        int32_t* i_14 = arg4
                        int32_t* i
                        
                        do
                            *edi_7 = esi_1[3]
                            *(edi_7 + 1) = esi_1[3]
                            *(edi_7 + 2) = esi_1[3]
                            *(edi_7 + 3) = 0xff
                            edi_7 += 4
                            esi_1 = &esi_1[4]
                            i = i_14
                            i_14 -= 1
                        while (i != 1)
                    
                    if (arg4 s< arg2)
                        void* eax_23 = edi_7 + 2
                        void* i_20 = arg2 - arg4
                        void* i_1
                        
                        do
                            *(eax_23 - 2) = esi_1[0xffffffff]
                            *(eax_23 - 1) = esi_1[0xffffffff]
                            *eax_23 = esi_1[0xffffffff]
                            *(eax_23 + 1) = 0xff
                            eax_23 += 4
                            i_1 = i_20
                            i_20 -= 1
                        while (i_1 != 1)
            else
                if (arg4 s> 0)
                    int32_t* i_13 = arg4
                    int32_t* i_2
                    
                    do
                        *edi_7 = *esi_1
                        *(edi_7 + 1) = esi_1[1]
                        *(edi_7 + 2) = esi_1[2]
                        *(edi_7 + 3) = 0xff
                        edi_7 += 4
                        esi_1 = &esi_1[4]
                        i_2 = i_13
                        i_13 -= 1
                    while (i_2 != 1)
                
                if (arg4 s< arg2)
                    void* eax_18 = edi_7 + 2
                    void* i_19 = arg2 - arg4
                    void* i_3
                    
                    do
                        *(eax_18 - 2) = esi_1[0xfffffffc]
                        *(eax_18 - 1) = esi_1[0xfffffffd]
                        *eax_18 = esi_1[0xfffffffe]
                        *(eax_18 + 1) = 0xff
                        eax_18 += 4
                        i_3 = i_19
                        i_19 -= 1
                    while (i_3 != 1)
        else
            if (arg4 s> 0)
                int32_t* i_12 = arg4
                int32_t* i_4
                
                do
                    *edi_7 = *esi_1
                    *(edi_7 + 1) = esi_1[1]
                    *(edi_7 + 2) = esi_1[2]
                    *(edi_7 + 3) = esi_1[3]
                    edi_7 += 4
                    esi_1 = &esi_1[4]
                    i_4 = i_12
                    i_12 -= 1
                while (i_4 != 1)
            
            if (arg4 s< arg2)
                void* eax_13 = edi_7 + 2
                void* i_18 = arg2 - arg4
                void* i_5
                
                do
                    *(eax_13 - 2) = esi_1[0xfffffffc]
                    *(eax_13 - 1) = esi_1[0xfffffffd]
                    *eax_13 = esi_1[0xfffffffe]
                    *(eax_13 + 1) = esi_1[0xffffffff]
                    eax_13 += 4
                    i_5 = i_18
                    i_18 -= 1
                while (i_5 != 1)
        
        esi_1 = &esi_1[eax_6]
        eax_25 = arg_18 + 1
        arg_18 = eax_25
    while (eax_25 s< arg5)
    edi_3 = arg1
    eax_8 = arg5

arg_18 = eax_8

if (eax_8 s< arg3)
    int32_t eax_42
    
    do
        void* esi_3 = esi_1 - eax_5
        void* edi_10 = var_4 * arg_18 + __return_addr
        char eax_27 = (*(*arg4 + 0x24))()
        char eax_29
        
        if (eax_27 != 0)
            eax_29 = (*(*arg4 + 0x28))()
        
        if (eax_27 == 0 || eax_29 == 0)
            char eax_32 = (*(*arg4 + 0x24))()
            char eax_34
            
            if (eax_32 != 0)
                eax_34 = (*(*arg4 + 0x28))()
            
            if (eax_32 == 0 || eax_34 != 0)
                if ((*(*arg4 + 0x24))() == 0 && (*(*arg4 + 0x28))() != 0)
                    if (arg4 s> 0)
                        int32_t* i_17 = arg4
                        int32_t* i_6
                        
                        do
                            *edi_10 = *(esi_3 + 3)
                            *(edi_10 + 1) = *(esi_3 + 3)
                            *(edi_10 + 2) = *(esi_3 + 3)
                            *(edi_10 + 3) = ebx.b
                            edi_10 += 4
                            esi_3 += 4
                            i_6 = i_17
                            i_17 -= 1
                        while (i_6 != 1)
                    
                    if (arg4 s< arg2)
                        void* eax_40 = edi_10 + 2
                        void* i_23 = arg2 - arg4
                        void* i_7
                        
                        do
                            *(eax_40 - 2) = *(esi_3 - 1)
                            *(eax_40 - 1) = *(esi_3 - 1)
                            *eax_40 = *(esi_3 - 1)
                            *(eax_40 + 1) = ebx.b
                            eax_40 += 4
                            i_7 = i_23
                            i_23 -= 1
                        while (i_7 != 1)
            else
                if (arg4 s> 0)
                    int32_t* i_16 = arg4
                    int32_t* i_8
                    
                    do
                        *edi_10 = *esi_3
                        *(edi_10 + 1) = *(esi_3 + 1)
                        *(edi_10 + 2) = *(esi_3 + 2)
                        *(edi_10 + 3) = ebx.b
                        edi_10 += 4
                        esi_3 += 4
                        i_8 = i_16
                        i_16 -= 1
                    while (i_8 != 1)
                
                if (arg4 s< arg2)
                    void* eax_35 = edi_10 + 2
                    void* i_22 = arg2 - arg4
                    void* i_9
                    
                    do
                        *(eax_35 - 2) = *(esi_3 - 4)
                        *(eax_35 - 1) = *(esi_3 - 3)
                        *eax_35 = *(esi_3 - 2)
                        *(eax_35 + 1) = ebx.b
                        eax_35 += 4
                        i_9 = i_22
                        i_22 -= 1
                    while (i_9 != 1)
        else
            if (arg4 s> 0)
                int32_t* i_15 = arg4
                int32_t* i_10
                
                do
                    *edi_10 = *esi_3
                    *(edi_10 + 1) = *(esi_3 + 1)
                    *(edi_10 + 2) = *(esi_3 + 2)
                    *(edi_10 + 3) = *(esi_3 + 3)
                    edi_10 += 4
                    esi_3 += 4
                    i_10 = i_15
                    i_15 -= 1
                while (i_10 != 1)
            
            if (arg4 s< arg2)
                void* eax_30 = edi_10 + 2
                void* i_21 = arg2 - arg4
                void* i_11
                
                do
                    *(eax_30 - 2) = *(esi_3 - 4)
                    *(eax_30 - 1) = *(esi_3 - 3)
                    *eax_30 = *(esi_3 - 2)
                    *(eax_30 + 1) = *(esi_3 - 1)
                    eax_30 += 4
                    i_11 = i_21
                    i_21 -= 1
                while (i_11 != 1)
        
        esi_1 = esi_3 + eax_6
        eax_42 = arg_18 + 1
        arg_18 = eax_42
    while (eax_42 s< arg3)
    edi_3 = arg1

int32_t eax_44
eax_44.b = (*(*edi_3 + 0x50))(edi_3) s>= 0
return eax_44
