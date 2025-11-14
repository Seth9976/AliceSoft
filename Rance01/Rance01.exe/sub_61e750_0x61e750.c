// 函数: sub_61e750
// 地址: 0x61e750
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = *(arg1 + 4)
int32_t* i = *ebx

if (i != ebx)
    while (true)
        void* edi_1
        
        if (i[8] u< 0x10)
            edi_1 = &i[3]
        else
            edi_1 = i[3]
        
        char* eax_1 = sub_401170(arg2)
        char* ecx_1 = edi_1
        int32_t eax_3
        
        while (true)
            char edx = *ecx_1
            char temp1_1 = *eax_1
            bool c_1 = edx u< temp1_1
            
            if (edx == temp1_1)
                if (edx == 0)
                    eax_3 = 0
                    break
                
                edx = ecx_1[1]
                char temp4_1 = eax_1[1]
                c_1 = edx u< temp4_1
                
                if (edx == temp4_1)
                    ecx_1 = &ecx_1[2]
                    eax_1 = &eax_1[2]
                    
                    if (edx != 0)
                        continue
                    
                    eax_3 = 0
                    break
            
            bool c_2 = unimplemented  {sbb eax, eax}
            eax_3 = sbb.d(sbb.d(eax_1, eax_1, c_1), 0xffffffff, c_2)
            break
        
        if (eax_3 == 0)
            return i[0xa]
        
        if (*(i + 0x2d) == 0)
            int32_t* i_2 = i[2]
            
            if (*(i_2 + 0x2d) != 0)
                int32_t* i_1 = i[1]
                
                if (*(i_1 + 0x2d) == 0)
                    while (i == i_1[2])
                        i = i_1
                        i_1 = i_1[1]
                        
                        if (*(i_1 + 0x2d) != 0)
                            break
                
                i = i_1
            else
                int32_t* i_3 = *i_2
                
                while (*(i_3 + 0x2d) == 0)
                    i_2 = i_3
                    i_3 = *i_2
                
                i = i_2
        
        if (i == ebx)
            break

return 0xffffffff
