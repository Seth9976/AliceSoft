// 函数: sub_5af1d0
// 地址: 0x5af1d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_30
int32_t eax_1 = data_78c474 ^ &var_30
uint32_t result = arg4
int32_t* var_14 = arg2

if (arg3 != 0 && arg2 != 0)
    int32_t j_4 = *((result << 2) + &data_746358)
    int32_t i = *arg2
    int32_t ebx_2 = i * j_4
    uint32_t esi_1 = zx.d(*(arg2 + 0xb))
    int32_t var_1c_1 = ebx_2
    int32_t i_4
    
    if (esi_1 == 1)
        void* edi_13 = ((ebx_2 - 1) u>> 3) + arg3
        void* var_24_3 = ((i - 1) u>> 3) + arg3
        int32_t var_28_1
        void* var_20_3
        void* edx_19
        int32_t ebp_3
        void* esi_13
        
        if ((arg5 & 0x10000) == 0)
            edx_19 = 7 - ((i - 1) & 7)
            esi_13 = 7 - ((ebx_2 - 1) & 7)
            var_20_3 = nullptr
            ebp_3 = 7
            var_28_1 = 1
        else
            edx_19 = (i - 1) & 7
            esi_13 = (ebx_2 - 1) & 7
            var_20_3 = 7
            ebp_3 = 0
            var_28_1 = 0xffffffff
        
        void* var_2c_3 = edx_19
        i_4 = 0
        
        if (i != 0)
            do
                void* eax_8
                eax_8.b = *var_24_3
                arg3.b = edx_19.b
                eax_8.b u>>= arg3.b
                eax_8.b &= 1
                
                if (j_4 s> 0)
                    int32_t j_2 = j_4
                    int32_t j
                    
                    do
                        ebx_2.b = eax_8.b
                        ebx_2.b <<= esi_13.b
                        *edi_13 = ((0x7f7f s>> (7 - esi_13.b)).b & *edi_13) | ebx_2.b
                        
                        if (esi_13 != ebp_3)
                            esi_13 += var_28_1
                        else
                            esi_13 = var_20_3
                            edi_13 -= 1
                        
                        j = j_2
                        j_2 -= 1
                    while (j != 1)
                    edx_19 = var_2c_3
                    ebx_2 = var_1c_1
                
                if (edx_19 != ebp_3)
                    edx_19 += var_28_1
                else
                    edx_19 = var_20_3
                    var_24_3 -= 1
                
                i = i_4 + 1
                var_2c_3 = edx_19
                i_4 = i
            while (i u< *var_14)
    else if (esi_1 == 2)
        void* edi_10 = ((ebx_2 - 1) u>> 2) + arg3
        void* var_2c_2 = ((i - 1) u>> 2) + arg3
        int32_t var_24_2
        int32_t var_20_2
        int32_t edx_13
        int32_t ebp_2
        int32_t esi_10
        
        if ((arg5 & 0x10000) == 0)
            edx_13 = (3 - ((i - 1) & 3)) * 2
            esi_10 = (3 - ((ebx_2 - 1) & 3)) * 2
            var_24_2 = 0
            ebp_2 = 6
            var_20_2 = 2
        else
            edx_13 = (i * 2 - 1) & 6
            esi_10 = (ebx_2 * 2 - 1) & 6
            var_24_2 = 6
            ebp_2 = 0
            var_20_2 = 0xfffffffe
        
        int32_t i_2 = 0
        
        if (i != 0)
            do
                void* eax_6
                eax_6.b = *var_2c_2
                arg3.b = edx_13.b
                eax_6.b u>>= arg3.b
                eax_6.b &= 3
                char var_2d_2 = eax_6.b
                
                if (j_4 s> 0)
                    int32_t j_6 = j_4
                    
                    while (true)
                        eax_6.b <<= esi_10.b
                        *edi_10 = ((0x3f3f s>> (6 - esi_10.b)).b & *edi_10) | eax_6.b
                        
                        if (esi_10 != ebp_2)
                            esi_10 += var_20_2
                        else
                            esi_10 = var_24_2
                            edi_10 -= 1
                        
                        int32_t j_7 = j_6
                        j_6 -= 1
                        
                        if (j_7 == 1)
                            break
                        
                        eax_6.b = var_2d_2
                    
                    ebx_2 = var_1c_1
                
                if (edx_13 != ebp_2)
                    edx_13 += var_20_2
                else
                    edx_13 = var_24_2
                    var_2c_2 -= 1
                
                i = i_2 + 1
                i_2 = i
            while (i u< *var_14)
    else
        if (esi_1 == 4)
            char* ebx_7 = ((i - 1) u>> 1) + arg3
            void* edi_7 = ((var_1c_1 - 1) u>> 1) + arg3
            char* var_20_1 = ebx_7
            void* var_2c_1
            int32_t var_24_1
            void* edx_5
            int32_t ebp_1
            void* esi_5
            
            if ((arg5 & 0x10000) == 0)
                ebp_1 = 4
                edx_5 = 4 - ((i - 1) & 1) * 4
                esi_5 = 4 - ((var_1c_1 - 1) & 1) * 4
                var_2c_1 = nullptr
                var_24_1 = 4
            else
                edx_5 = (0xffffffff - (i << 2)) & 4
                esi_5 = (0xffffffff - (var_1c_1 << 2)) & 4
                var_2c_1 = 4
                ebp_1 = 0
                var_24_1 = 0xfffffffc
            
            int32_t i_3 = 0
            
            if (i != 0)
                do
                    i.b = *ebx_7
                    int32_t* ecx_2
                    ecx_2.b = edx_5.b
                    i.b u>>= ecx_2.b
                    i.b &= 0xf
                    char var_2d_1 = i.b
                    
                    if (j_4 s> 0)
                        int32_t j_5 = j_4
                        
                        while (true)
                            i.b <<= esi_5.b
                            *edi_7 = ((0xf0f s>> (4 - esi_5.b)).b & *edi_7) | i.b
                            
                            if (esi_5 != ebp_1)
                                esi_5 += var_24_1
                            else
                                esi_5 = var_2c_1
                                edi_7 -= 1
                            
                            int32_t j_8 = j_5
                            j_5 -= 1
                            
                            if (j_8 == 1)
                                break
                            
                            i.b = var_2d_1
                        
                        ebx_7 = var_20_1
                    
                    if (edx_5 != ebp_1)
                        edx_5 += var_24_1
                    else
                        edx_5 = var_2c_1
                        ebx_7 -= 1
                        var_20_1 = ebx_7
                    
                    i = i_3 + 1
                    i_3 = i
                while (i u< *var_14)
        else
            uint32_t esi_2 = esi_1 u>> 3
            int128_t* ebx_5 = (i - 1) * esi_2 + arg3
            int128_t* edi_4 = (var_1c_1 - 1) * esi_2 + arg3
            int32_t i_1 = 0
            
            if (i != 0)
                do
                    sub_6c02a0(&i_4, ebx_5, esi_2)
                    int32_t j_3 = j_4
                    
                    if (j_3 s> 0)
                        int32_t j_1
                        
                        do
                            sub_6c02a0(edi_4, &i_4, esi_2)
                            edi_4 -= esi_2
                            j_1 = j_3
                            j_3 -= 1
                        while (j_1 != 1)
                    
                    i = i_1 + 1
                    ebx_5 -= esi_2
                    i_1 = i
                while (i u< *var_14)
        
        ebx_2 = var_1c_1
    i.b = *(var_14 + 0xb)
    *var_14 = ebx_2
    uint32_t eax_3 = zx.d(i.b)
    
    if (i.b u< 8)
        result = (eax_3 * ebx_2 + 7) u>> 3
    else
        result = (eax_3 u>> 3) * ebx_2
    
    var_14[1] = result

sub_6b4885(eax_1 ^ &var_30)
return result
