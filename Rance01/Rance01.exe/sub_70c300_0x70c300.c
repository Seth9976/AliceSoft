// 函数: sub_70c300
// 地址: 0x70c300
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = nullptr
void* edx = 0xffffffff

if (arg3 != 0xffffffff)
    while (true)
        int32_t* ebx_1 = arg5 + arg3 * 0xc
        void* esi_4 = (ebx_1[2] - arg4) & 0xfffff000
        
        if (esi_4 == edx)
            goto label_70c35a
        
        int32_t ecx_1
        
        if (eax != 0)
            ecx_1 = *(eax + 0xc)
        
        if (eax == 0 || esi_4 u< ecx_1 || esi_4 u>= *(eax + 8) + ecx_1)
            eax = sub_6c09c0(arg4, esi_4)
            
            if (eax != 0 && (*(eax + 0x24) & 0x20000000) != 0)
                goto label_70c358
        else
        label_70c358:
            edx = esi_4
        label_70c35a:
            int32_t ecx_2 = ebx_1[1]
            
            if (ecx_2 == 0)
                goto label_70c398
            
            void* ecx_4 = (ecx_2 - arg4) & 0xfffff000
            
            if (ecx_4 == edx)
                goto label_70c398
            
            int32_t ecx_5 = *(eax + 0xc)
            
            if (ecx_4 u< ecx_5 || ecx_4 u>= *(eax + 8) + ecx_5)
                eax = sub_6c09c0(arg4, ecx_4)
                
                if (eax != 0 && (*(eax + 0x24) & 0x20000000) != 0)
                    goto label_70c396
            else
            label_70c396:
                edx = ecx_4
            label_70c398:
                arg3 = *ebx_1
                
                if (arg3 == 0xffffffff)
                    break
                
                continue
        
        return 0

return 1
