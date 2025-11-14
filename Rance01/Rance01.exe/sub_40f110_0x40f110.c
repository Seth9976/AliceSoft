// 函数: sub_40f110
// 地址: 0x40f110
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = data_797d38

if (*(ebp + 0xc) == 0)
    int32_t* eax_1 = sub_597300(0x757620)
    
    if (eax_1 == 0)
        eax_1.b = 0
        return eax_1
    
    eax_1 = (**eax_1)(0x757630)
    
    if (eax_1 == 0)
        eax_1.b = 0
        return eax_1
    
    (**eax_1)(ebp + 4)
    *(ebp + 0xc) = 1

void* ebx = ebp + 0x10
int32_t var_8 = 0
int32_t esi_2 = (*(ebx + 4) - *ebx) s>> 2
void* var_c = ebx
int32_t* eax_6

if (esi_2 s> 0)
    int32_t* ebx_1 = *ebx
    int32_t eax_8
    
    do
        char* eax_3 = arg1
        void* ecx_5 = *ebx_1
        char i
        
        do
            i = *eax_3
            eax_3 = &eax_3[1]
        while (i != 0)
        void* eax_4 = eax_3 - &eax_3[1]
        void* edi_2 = *(ecx_5 + 0x14)
        void* eax_5 = edi_2
        
        if (edi_2 u>= eax_4)
            eax_5 = eax_4
        
        void* edx_3
        
        if (*(ecx_5 + 0x18) u< 0x10)
            edx_3 = ecx_5 + 4
        else
            edx_3 = *(ecx_5 + 4)
        
        if (sub_402320(eax_5, edx_3, arg1, eax_5) == 0 && edi_2 u>= eax_4)
            eax_6.b = edi_2 != eax_4
            
            if (eax_6 == 0)
                goto label_40f268
        
        eax_8 = var_8 + 1
        ebx_1 = &ebx_1[1]
        var_8 = eax_8
    while (eax_8 s< esi_2)
    ebx = var_c

int32_t* eax_9 = operator new(0x24)
void* var_8_1
void* esi_3

if (eax_9 == 0)
    var_8_1 = nullptr
    esi_3 = nullptr
else
    *eax_9 = 0
    eax_9[6] = 0xf
    eax_9[5] = 0
    esi_3 = eax_9
    eax_9[1].b = 0
    eax_9[8] = 0
    var_8_1 = esi_3

var_c = esi_3
int32_t ecx_7
eax_6, ecx_7 = sub_40fbf0(esi_3, arg1)

if (eax_6.b == 0)
    if (esi_3 != 0)
        if (*(esi_3 + 0x18) u>= 0x10)
            int32_t var_20_3 = *(esi_3 + 4)
            sub_6b4d5b()
        
        *(esi_3 + 0x18) = 0xf
        *(esi_3 + 0x14) = 0
        void* var_20_4 = esi_3
        *(esi_3 + 4) = 0
        sub_6b4d5b()
    
label_40f268:
    eax_6.b = 0
    return eax_6

int32_t* eax_11 = *(ebp + 0x28)
int32_t* i_1 = *eax_11
int32_t* esi_4 = *(esi_3 + 0x20)

if (i_1 != eax_11)
    do
        (*(*esi_4 + 8))(&i_1[3], i_1[7])
        
        if (*(i_1 + 0x21) == 0)
            int32_t* i_2 = i_1[2]
            
            if (*(i_2 + 0x21) != 0)
                int32_t* i_4 = i_1[1]
                
                if (*(i_4 + 0x21) == 0)
                    while (i_1 == i_4[2])
                        i_1 = i_4
                        i_4 = i_4[1]
                        
                        if (*(i_4 + 0x21) != 0)
                            break
                
                i_1 = i_4
            else
                i_1 = i_2
                int32_t* i_3 = *i_1
                
                while (*(i_3 + 0x21) == 0)
                    i_1 = i_3
                    i_3 = *i_1
    while (i_1 != *(ebp + 0x28))

int32_t eax_13 = *(ebx + 4)
int32_t edx_6

if (&var_c u< eax_13)
    edx_6 = *ebx

void** eax_17

if (&var_c u>= eax_13 || edx_6 u> &var_c)
    int32_t ecx_17 = *(ebx + 8)
    
    if (eax_13 == ecx_17)
        int32_t edx_10 = *ebx
        int32_t eax_19 = (eax_13 - edx_10) s>> 2
        
        if (eax_19 u> 0x3ffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        int32_t ecx_19 = (ecx_17 - edx_10) s>> 2
        
        if (eax_19 + 1 u> ecx_19)
            uint32_t edx_12 = ecx_19 u>> 1
            int32_t ecx_20
            
            if (0x3fffffff - edx_12 u>= ecx_19)
                ecx_20 = ecx_19 + edx_12
            else
                ecx_20 = 0
            
            if (ecx_20 u< eax_19 + 1)
                ecx_20 = eax_19 + 1
            
            sub_6b0560(ebx, ecx_20)
    
    eax_17 = *(ebx + 4)
    
    if (eax_17 != 0)
        *eax_17 = var_8_1
else
    int32_t ecx_12 = *(ebx + 8)
    
    if (eax_13 == ecx_12)
        int32_t eax_15 = (eax_13 - edx_6) s>> 2
        
        if (eax_15 u> 0x3ffffffe)
            sub_6b47bf("vector<T> too long")
            noreturn
        
        int32_t ecx_14 = (ecx_12 - edx_6) s>> 2
        
        if (eax_15 + 1 u> ecx_14)
            uint32_t edx_8 = ecx_14 u>> 1
            int32_t ecx_15
            
            if (0x3fffffff - edx_8 u>= ecx_14)
                ecx_15 = ecx_14 + edx_8
            else
                ecx_15 = 0
            
            if (ecx_15 u< eax_15 + 1)
                ecx_15 = eax_15 + 1
            
            sub_6b0560(ebx, ecx_15)
    
    eax_17 = *(ebx + 4)
    
    if (eax_17 != 0)
        *eax_17 = *(*ebx + ((&var_c - edx_6) s>> 2 << 2))
        *(ebx + 4) += 4
        eax_17.b = 1
        return eax_17

*(ebx + 4) += 4
eax_17.b = 1
return eax_17
