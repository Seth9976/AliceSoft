// 函数: sub_58fd40
// 地址: 0x58fd40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = *(arg1 + 0x64)
int32_t* i = *eax

if (i != eax)
    do
        (*(*i[4] + 4))()
        
        if (*(i + 0x15) == 0)
            int32_t* i_2 = i[2]
            
            if (*(i_2 + 0x15) != 0)
                int32_t* i_4 = i[1]
                
                if (*(i_4 + 0x15) == 0)
                    while (i == i_4[2])
                        i = i_4
                        i_4 = i_4[1]
                        
                        if (*(i_4 + 0x15) != 0)
                            break
                
                i = i_4
            else
                i = i_2
                int32_t* i_3 = *i
                
                while (*(i_3 + 0x15) == 0)
                    i = i_3
                    i_3 = *i
    while (i != *(arg1 + 0x64))

void** ebp = *(*(arg1 + 0x64) + 4)
void** edi = ebp

if (*(ebp + 0x15) == 0)
    do
        sub_402c20(edi[2])
        edi = *edi
        void** var_14_2 = ebp
        sub_6b4d5b()
        ebp = edi
    while (*(edi + 0x15) == 0)

void* eax_3 = *(arg1 + 0x64)
*(eax_3 + 4) = eax_3
int32_t* eax_4 = *(arg1 + 0x64)
*eax_4 = eax_4
void* eax_5 = *(arg1 + 0x64)
*(eax_5 + 8) = eax_5
*(arg1 + 0x68) = 0
int32_t* eax_6 = *(arg1 + 0x54)
int32_t* i_1 = *eax_6

if (i_1 != eax_6)
    do
        (*(*i_1[4] + 4))()
        
        if (*(i_1 + 0x15) == 0)
            int32_t* i_5 = i_1[2]
            
            if (*(i_5 + 0x15) != 0)
                int32_t* i_7 = i_1[1]
                
                if (*(i_7 + 0x15) == 0)
                    while (i_1 == i_7[2])
                        i_1 = i_7
                        i_7 = i_7[1]
                        
                        if (*(i_7 + 0x15) != 0)
                            break
                
                i_1 = i_7
            else
                i_1 = i_5
                int32_t* i_6 = *i_1
                
                while (*(i_6 + 0x15) == 0)
                    i_1 = i_6
                    i_6 = *i_1
    while (i_1 != *(arg1 + 0x54))

void** ebp_1 = *(*(arg1 + 0x54) + 4)
void** edi_2 = ebp_1

if (*(ebp_1 + 0x15) == 0)
    do
        sub_402c20(edi_2[2])
        edi_2 = *edi_2
        void** var_14_4 = ebp_1
        sub_6b4d5b()
        ebp_1 = edi_2
    while (*(edi_2 + 0x15) == 0)

void* eax_8 = *(arg1 + 0x54)
*(eax_8 + 4) = eax_8
int32_t* eax_9 = *(arg1 + 0x54)
*eax_9 = eax_9
void* eax_10 = *(arg1 + 0x54)
*(eax_10 + 8) = eax_10
*(arg1 + 0x58) = 0
int128_t* eax_11 = *(arg1 + 0x30)
int128_t* esi = *(arg1 + 0x2c)

if (esi != eax_11)
    void* edi_4 = 0
    sub_6b49d0(esi, eax_11, edi_4)
    *(arg1 + 0x30) = edi_4 + esi

bool cond:3 = *(arg1 + 0x24) u< 0x10
void* eax_12 = arg1 + 0x10
*(eax_12 + 0x10) = 0

if (not(cond:3))
    eax_12 = *eax_12

*eax_12 = 0
void** ebp_2 = *(*(arg1 + 0x40) + 4)
void** edi_6 = ebp_2

if (*(ebp_2 + 0x21) == 0)
    do
        sub_40f8f0(edi_6[2])
        edi_6 = *edi_6
        void** var_14_7 = ebp_2
        sub_6b4d5b()
        ebp_2 = edi_6
    while (*(edi_6 + 0x21) == 0)

void* eax_14 = *(arg1 + 0x40)
*(eax_14 + 4) = eax_14
int32_t* eax_15 = *(arg1 + 0x40)
*eax_15 = eax_15
void* result = *(arg1 + 0x40)
*(result + 8) = result
*(arg1 + 0x44) = 0
int32_t* ecx_9 = *(arg1 + 0x4c)

if (ecx_9 == 0)
    *(arg1 + 0xc) = 0
    *(arg1 + 4) = 0
    return result

(*(*ecx_9 + 4))()
*(arg1 + 0x4c) = 0
*(arg1 + 0xc) = 0
*(arg1 + 4) = 0
return 0
