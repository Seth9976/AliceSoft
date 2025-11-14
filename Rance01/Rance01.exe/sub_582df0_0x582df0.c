// 函数: sub_582df0
// 地址: 0x582df0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i_1 = arg3
int32_t* ecx = *(arg1 + 0xc)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0xc) = 0

int32_t* eax_3 = (*(**(arg1 + 8) + 0xc))(arg2, i_1, 0x20)
*(arg1 + 0xc) = eax_3

if (eax_3 == 0)
    eax_3.b = 0
    return eax_3

char* esi = (*(*eax_3 + 8))(0, 0)
int32_t j_1 = arg2
int32_t ebx_1 = (*(**(arg1 + 0xc) + 0x1c))() - (j_1 << 2)
int32_t eax_7

if (i_1 s> 0)
    int32_t i
    
    do
        if (j_1 s> 0)
            int32_t j
            
            do
                eax_7 = sub_6b5a79()
                *esi = eax_7.b
                esi[1] = eax_7.b
                esi[2] = eax_7.b
                esi = &esi[4]
                j = j_1
                j_1 -= 1
            while (j != 1)
            j_1 = arg2
        
        esi = &esi[ebx_1]
        i = i_1
        i_1 -= 1
    while (i != 1)

eax_7.b = 1
return eax_7
