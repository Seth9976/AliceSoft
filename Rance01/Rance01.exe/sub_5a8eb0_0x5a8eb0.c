// 函数: sub_5a8eb0
// 地址: 0x5a8eb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg3
void* i_14 = *ebp
uint32_t ebx
ebx.b = (arg2 u>> 8).b
uint32_t eax_1
eax_1.b = ebp[2].b
arg3.b = ebx.b

if (eax_1.b == 0)
    eax_1.b = *(ebp + 9)
    
    if (eax_1.b == 8)
        void* edi_1 = arg1 + i_14
        char* eax_2 = edi_1 + i_14
        
        if (arg4 s>= 0)
            if (i_14 != 0)
                void* i_9 = i_14
                void* i
                
                do
                    ebx.b = *(edi_1 - 1)
                    edi_1 -= 1
                    eax_2[0xffffffff] = ebx.b
                    eax_2 -= 2
                    i = i_9
                    i_9 -= 1
                    *eax_2 = arg2.b
                while (i != 1)
            
            *(ebp + 0xa) = 0x1002
            ebp[1] = i_14 * 2
            return eax_2
        
        if (i_14 u> 1)
            void* i_8 = i_14 - 1
            void* i_1
            
            do
                eax_2[0xffffffff] = arg2.b
                ebx.b = *(edi_1 - 1)
                edi_1 -= 1
                eax_2 -= 2
                i_1 = i_8
                i_8 -= 1
                *eax_2 = ebx.b
            while (i_1 != 1)
        
        eax_2[0xffffffff] = arg2.b
        *(ebp + 0xa) = 0x1002
        ebp[1] = i_14 * 2
        return eax_2
    
    if (eax_1.b == 0x10)
        void* edi_2 = arg1 + (i_14 << 1)
        char* eax_3 = edi_2 + (i_14 << 1)
        
        if (arg4 s< 0)
            if (i_14 u> 1)
                arg3 = i_14 - 1
                void* edi_3 = edi_2
                int32_t* i_2
                
                do
                    eax_3[0xffffffff] = ebx.b
                    eax_3[0xfffffffe] = arg2.b
                    eax_3[0xfffffffd] = *(edi_3 - 1)
                    char ecx_4 = *(edi_3 - 2)
                    edi_3 -= 2
                    eax_3 -= 4
                    i_2 = arg3
                    arg3 -= 1
                    *eax_3 = ecx_4
                while (i_2 != 1)
            
            eax_3[0xffffffff] = ebx.b
            eax_3[0xfffffffe] = arg2.b
        else if (i_14 != 0)
            arg3 = i_14
            int32_t* i_3
            
            do
                eax_3[0xffffffff] = *(edi_2 - 1)
                char ecx_6 = *(edi_2 - 2)
                edi_2 -= 2
                eax_3[0xfffffffe] = ecx_6
                eax_3[0xfffffffd] = ebx.b
                eax_3 -= 4
                i_3 = arg3
                arg3 -= 1
                *eax_3 = arg2.b
            while (i_3 != 1)
        
        *(ebp + 0xa) = 0x2002
        ebp[1] = i_14 << 2
        return eax_3
else if (eax_1.b == 2)
    eax_1.b = *(ebp + 9)
    
    if (eax_1.b == 8)
        void* edi_5 = i_14 * 3 + arg1
        void* eax_4 = edi_5 + i_14
        
        if (arg4 s>= 0)
            if (i_14 != 0)
                void* i_11 = i_14
                void* edi_6 = edi_5
                void* i_4
                
                do
                    *(eax_4 - 1) = *(edi_6 - 1)
                    *(eax_4 - 2) = *(edi_6 - 2)
                    char ebx_6 = *(edi_6 - 3)
                    edi_6 -= 3
                    *(eax_4 - 3) = ebx_6
                    eax_4 -= 4
                    i_4 = i_11
                    i_11 -= 1
                    *eax_4 = arg2.b
                while (i_4 != 1)
            
            *(ebp + 0xa) = 0x2004
            ebp[1] = i_14 << 2
            return eax_4
        
        if (i_14 u> 1)
            void* i_10 = i_14 - 1
            void* i_5
            
            do
                *(eax_4 - 1) = arg2.b
                *(eax_4 - 2) = *(edi_5 - 1)
                *(eax_4 - 3) = *(edi_5 - 2)
                char ebx_3 = *(edi_5 - 3)
                edi_5 -= 3
                eax_4 -= 4
                i_5 = i_10
                i_10 -= 1
                *eax_4 = ebx_3
            while (i_5 != 1)
        
        *(eax_4 - 1) = arg2.b
        int32_t eax_5 = i_14 << 2
        *(ebp + 0xa) = 0x2004
        ebp[1] = eax_5
        return eax_5
    
    if (eax_1.b == 0x10)
        void* ecx_8 = arg1 + i_14 * 6
        eax_1 = ecx_8 + (i_14 << 1)
        
        if (arg4 s< 0)
            if (i_14 u> 1)
                void* i_12 = i_14 - 1
                void* i_6
                
                do
                    *(eax_1 - 1) = ebx.b
                    *(eax_1 - 2) = arg2.b
                    *(eax_1 - 3) = *(ecx_8 - 1)
                    *(eax_1 - 4) = *(ecx_8 - 2)
                    *(eax_1 - 5) = *(ecx_8 - 3)
                    *(eax_1 - 6) = *(ecx_8 - 4)
                    *(eax_1 - 7) = *(ecx_8 - 5)
                    ebx = zx.d(*(ecx_8 - 6))
                    ecx_8 -= 6
                    eax_1 -= 8
                    i_6 = i_12
                    i_12 -= 1
                    *eax_1 = ebx.b
                    ebx.b = arg3.b
                while (i_6 != 1)
            
            *(eax_1 - 1) = ebx.b
            *(eax_1 - 2) = arg2.b
        else if (i_14 != 0)
            void* i_13 = i_14
            void* i_7
            
            do
                *(eax_1 - 1) = *(ecx_8 - 1)
                *(eax_1 - 2) = *(ecx_8 - 2)
                *(eax_1 - 3) = *(ecx_8 - 3)
                *(eax_1 - 4) = *(ecx_8 - 4)
                *(eax_1 - 5) = *(ecx_8 - 5)
                char ebx_17 = *(ecx_8 - 6)
                ecx_8 -= 6
                *(eax_1 - 6) = ebx_17
                *(eax_1 - 7) = arg3.b
                eax_1 -= 8
                i_7 = i_13
                i_13 -= 1
                *eax_1 = arg2.b
            while (i_7 != 1)
        
        *(ebp + 0xa) = 0x4004
        ebp[1] = i_14 << 3

return eax_1
