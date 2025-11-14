// 函数: sub_52da20
// 地址: 0x52da20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_4
int32_t edx_3
edx_3:eax_4 = sx.q((arg3 - arg2) s/ 0x38)
int32_t* ebx = &arg2[((eax_4 - edx_3) s>> 1) * 0xe]
sub_52e080(arg3 - 0x38, arg4, arg2, ebx, arg4)
int32_t edi_1 = data_797de8
int32_t* ebp = &ebx[0xe]
uint32_t esi_1 = data_797dec
int32_t* var_1c = ebp
int32_t ecx_5

if (arg2 u< ebx)
    do
        int32_t eax_9
        uint32_t edx_5
        eax_9, edx_5 = __allmul(ebx[0xc], ebx[0xd], 0x3e8, 0)
        uint32_t eax_10
        int32_t edx_6
        eax_10, edx_6 = __alldiv(eax_9, edx_5, edi_1, esi_1)
        int32_t eax_12
        uint32_t edx_8
        eax_12, edx_8 = __allmul(ebx[-2], ebx[-1], 0x3e8, 0)
        uint32_t eax_13
        int32_t edx_9
        eax_13, ecx_5, edx_9 = __alldiv(eax_12, edx_8, edi_1, esi_1)
        
        if (edx_9 s> edx_6)
            break
        
        if (edx_9 s>= edx_6 && eax_13 u> eax_10)
            break
        
        if (edx_6 s> edx_9)
            break
        
        if (edx_6 s>= edx_9 && eax_10 u> eax_13)
            break
        
        ebx -= 0x38
    while (arg2 u< ebx)
    
    ebp = var_1c

if (ebp u< arg3)
    int32_t eax_14
    uint32_t edx_11
    eax_14, edx_11 = __allmul(ebx[0xc], ebx[0xd], 0x3e8, 0)
    uint32_t eax_15
    int32_t edx_12
    eax_15, edx_12 = __alldiv(eax_14, edx_11, edi_1, esi_1)
    
    do
        int32_t eax_17
        uint32_t edx_13
        eax_17, edx_13 = __allmul(ebp[0xc], ebp[0xd], 0x3e8, 0)
        uint32_t eax_18
        int32_t edx_14
        eax_18, ecx_5, edx_14 = __alldiv(eax_17, edx_13, edi_1, esi_1)
        
        if (edx_14 s> edx_12)
            break
        
        if (edx_14 s>= edx_12 && eax_18 u> eax_15)
            break
        
        if (edx_12 s> edx_14)
            break
        
        if (edx_12 s>= edx_14 && eax_15 u> eax_18)
            break
        
        ebp = &ebp[0xe]
    while (ebp u< arg3)
    
    var_1c = ebp

int32_t* eax_19 = ebx
int32_t* var_18_3 = eax_19

while (true)
    if (ebp u< arg3)
        do
            int32_t eax_21
            uint32_t edx_16
            eax_21, edx_16 = __allmul(ebp[0xc], ebp[0xd], 0x3e8, 0)
            uint32_t eax_22
            int32_t edx_17
            eax_22, edx_17 = __alldiv(eax_21, edx_16, edi_1, esi_1)
            int32_t eax_23
            uint32_t edx_19
            eax_23, edx_19 = __allmul(ebx[0xc], ebx[0xd], 0x3e8, 0)
            uint32_t eax_24
            int32_t edx_20
            eax_24, edx_20 = __alldiv(eax_23, edx_19, edi_1, esi_1)
            
            if (edx_20 s<= edx_17 && (edx_20 s< edx_17 || eax_24 u<= eax_22))
                if (edx_17 s> edx_20)
                    break
                
                if (edx_17 s>= edx_20 && eax_22 u> eax_24)
                    break
                
                int32_t* esi_2 = var_1c
                var_1c = &var_1c[0xe]
                sub_52e760(esi_2, ebp)
                esi_1 = data_797dec
                edi_1 = data_797de8
            
            ebp = &ebp[0xe]
        while (ebp u< arg3)
        
        eax_19 = var_18_3
    
    bool cond:3_1 = eax_19 != arg2
    
    if (eax_19 u> arg2)
        while (true)
            int32_t eax_27
            uint32_t edx_22
            eax_27, edx_22 = __allmul(eax_19[-2], eax_19[-1], 0x3e8, 0)
            uint32_t eax_28
            int32_t edx_23
            eax_28, edx_23 = __alldiv(eax_27, edx_22, edi_1, esi_1)
            int32_t eax_30
            uint32_t edx_24
            eax_30, edx_24 = __allmul(ebx[0xc], ebx[0xd], 0x3e8, 0)
            uint32_t eax_31
            int32_t edx_25
            eax_31, edx_25 = __alldiv(eax_30, edx_24, edi_1, esi_1)
            
            if (edx_23 s<= edx_25 && (edx_23 s< edx_25 || eax_28 u<= eax_31))
                if (edx_25 s> edx_23)
                    break
                
                if (edx_25 s>= edx_23 && eax_31 u> eax_28)
                    break
                
                ebx -= 0x38
                sub_52e760(ebx, &var_18_3[-0xe])
                esi_1 = data_797dec
                edi_1 = data_797de8
            
            void* eax_33 = var_18_3 - 0x38
            var_18_3 = eax_33
            
            if (arg2 u>= eax_33)
                break
            
            eax_19 = var_18_3
        
        eax_19 = var_18_3
        cond:3_1 = eax_19 != arg2
    
    if (cond:3_1)
        var_18_3 = eax_19 - 0x38
        
        if (ebp != arg3)
            sub_52e760(ebp, eax_19 - 0x38)
            esi_1 = data_797dec
            edi_1 = data_797de8
            eax_19 = var_18_3
            ebp = &ebp[0xe]
        else
            ebx -= 0x38
            
            if (eax_19 - 0x38 != ebx)
                sub_52e760(eax_19 - 0x38, ebx)
            
            void* edi_9 = var_1c - 0x38
            var_1c = edi_9
            sub_52e760(ebx, edi_9)
            esi_1 = data_797dec
            edi_1 = data_797de8
            eax_19 = var_18_3
    else
        if (ebp == arg3)
            break
        
        if (var_1c != ebp)
            sub_52e760(ebx, var_1c)
        
        var_1c = &var_1c[0xe]
        int32_t* edi_6 = ebp
        int32_t* esi_5 = ebx
        ebx = &ebx[0xe]
        ebp = &ebp[0xe]
        sub_52e760(esi_5, edi_6)
        esi_1 = data_797dec
        edi_1 = data_797de8
        eax_19 = var_18_3

*arg1 = ebx
arg1[1] = var_1c
return arg1
