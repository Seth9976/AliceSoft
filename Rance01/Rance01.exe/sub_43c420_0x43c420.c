// 函数: sub_43c420
// 地址: 0x43c420
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
void* esi = (*(*arg3 + 8))(arg4, arg2)
int128_t* edi = (*(*arg5 + 8))(arg6, arg7)
int32_t* eax_7 = (*(*arg3 + 0x1c))() - arg8 * 4
int32_t eax_10 = (*(*arg5 + 0x1c))() - arg8 * 4
int32_t* result = arg9

if (result s> 0)
    arg3 = result
    int32_t* i
    
    do
        void* j_5 = arg8
        void* edx_5 = nullptr
        void* j_6 = nullptr
        result = esi & 0xf
        
        if (result != 0)
            if ((result.b & 4) == 0)
                result u>>= 2
                j_5 = 4 - result
                int32_t ecx_14 = arg8 - j_5
                edx_5 = ecx_14 & 0xfffffffc
                j_6 = ecx_14 - edx_5
            
            if (j_5 s> 0)
                arg9 = nullptr
                void* j
                
                do
                    result = *edi
                    *esi = result
                    esi += 4
                    edi += 4
                    j = j_5
                    j_5 -= 1
                while (j != 1)
        else
            edx_5 = j_5 & 0xfffffffc
            j_6 = j_5 - edx_5
        
        if (edx_5 s> 0)
            int32_t j_4 = ((edx_5 - 1) u>> 2) + 1
            int32_t j_1
            
            do
                *esi = *edi
                esi += 0x10
                edi = &edi[1]
                j_1 = j_4
                j_4 -= 1
            while (j_1 != 1)
        
        if (j_6 s> 0)
            arg9 = nullptr
            void* j_3 = j_6
            void* j_2
            
            do
                *esi = *edi
                esi += 4
                edi += 4
                j_2 = j_3
                j_3 -= 1
            while (j_2 != 1)
        
        esi += eax_7
        edi += eax_10
        i = arg3
        arg3 -= 1
    while (i != 1)

return result
