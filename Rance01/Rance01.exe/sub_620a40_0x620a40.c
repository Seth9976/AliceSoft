// 函数: sub_620a40
// 地址: 0x620a40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = (*(*(arg1 + 0xe8) + 0x10))()
int32_t result = (*(*(arg1 + 0xe8) + 0x14))()

if (eax s> 0 && result s> 0)
    sub_62b070(result, 0, 0, arg1 + 0xe8, eax, result, (*(arg1 + 0x1a4)).b, (*(arg1 + 0x1a8)).b, 
        (*(arg1 + 0x1ac)).b)
    int32_t ebp_1 = *(arg1 + 0x130)
    int32_t eax_2
    int32_t edx_5
    edx_5:eax_2 = muls.dp.d(0x66666667, *(arg1 + 0x134) - ebp_1)
    int32_t edx_6 = edx_5 s>> 4
    int32_t ecx_4 = 0
    result = (edx_6 u>> 0x1f) + edx_6
    int32_t var_20_1 = 0
    int32_t var_18_1 = 0
    
    if (result s> 0)
        int32_t var_10_1 = 0
        
        while (true)
            int32_t ebx_1 = *(arg1 + 0x120)
            int32_t i_10 = *(var_10_1 + ebp_1 + 0x20) + (*(arg1 + 0x12c) << 1)
            int32_t i_11 = *(arg1 + 0x128) - ebx_1
            int32_t i_8 = i_11
            
            if (ecx_4 == *(arg1 + 0x140))
                ebx_1 -= 1
                i_11 += 1
                i_8 = i_11
            
            char ecx_5
            char edx_8
            char ebp_2
            
            if (ecx_4 != *(arg1 + 0x144))
                ecx_5 = (*(arg1 + 0x1b0)).b
                edx_8 = (*(arg1 + 0x1b4)).b
                ebp_2 = (*(arg1 + 0x1b8)).b
            else
                ecx_5 = -1
                edx_8 = -1
                ebp_2 = -0x40
            
            sub_62b070(i_10, var_20_1, ebx_1, arg1 + 0xe8, i_10, i_11, ecx_5, edx_8, ebp_2)
            HDC hdc = *(arg1 + 0x10c)
            COLORREF color
            HGDIOBJ h
            
            if (var_18_1 != *(arg1 + 0x140))
                h = SelectObject(hdc, *(arg1 + 0x148))
                color = GetSysColor(COLOR_BTNSHADOW)
            else
                h = SelectObject(hdc, *(arg1 + 0x174))
                color = 0
            
            SetTextColor(hdc, color)
            void* eax_15 = var_10_1 + *(arg1 + 0x130)
            void* lpString = eax_15 + 4
            
            if (*(eax_15 + 0x18) u>= 0x10)
                lpString = *lpString
            
            int32_t eax_16 = *(arg1 + 0x12c)
            TextOutA(hdc, eax_16 + var_20_1, eax_16 + ebx_1, lpString, *(eax_15 + 0x14))
            SelectObject(hdc, h)
            char edx_11 = (*(arg1 + 0x1cc)).b
            char eax_19 = (*(arg1 + 0x1c8)).b
            char ecx_9 = (*(arg1 + 0x1d0)).b
            char* ebp_3 = (*(*(arg1 + 0xe8) + 8))(var_20_1, ebx_1)
            (*(*(arg1 + 0xe8) + 0x1c))()
            int32_t i_4 = i_10
            
            if (i_4 s> 0)
                int32_t i
                
                do
                    *ebp_3 = ecx_9
                    ebp_3[1] = edx_11
                    ebp_3[2] = eax_19
                    ebp_3 = &ebp_3[3]
                    i = i_4
                    i_4 -= 1
                while (i != 1)
            
            char edx_16 = (*(arg1 + 0x1d0)).b
            char eax_23 = (*(arg1 + 0x1cc)).b
            char ecx_14 = (*(arg1 + 0x1c8)).b
            void* ebp_4 = (*(*(arg1 + 0xe8) + 8))(var_20_1, ebx_1)
            int32_t i_6 = i_8
            int32_t eax_28 = (*(*(arg1 + 0xe8) + 0x1c))() - 3
            
            if (i_6 s> 0)
                int32_t i_1
                
                do
                    *ebp_4 = edx_16
                    *(ebp_4 + 1) = eax_23
                    *(ebp_4 + 2) = ecx_14
                    ebp_4 = ebp_4 + 3 + eax_28
                    i_1 = i_6
                    i_6 -= 1
                while (i_1 != 1)
                i_6 = i_8
            
            int32_t i_9
            
            if (var_18_1 == *(arg1 + 0x140))
                i_9 = i_10
            else
                char edx_23 = (*(arg1 + 0x1ac)).b
                char eax_30 = (*(arg1 + 0x1a8)).b
                char edx_24 = (*(arg1 + 0x1a4)).b
                void* ebp_6 = (*(*(arg1 + 0xe8) + 8))(var_20_1, i_6 + ebx_1 - 1)
                (*(*(arg1 + 0xe8) + 0x1c))()
                i_9 = i_10
                
                if (i_9 s> 0)
                    int32_t i_5 = i_9
                    int32_t i_2
                    
                    do
                        *ebp_6 = edx_23
                        *(ebp_6 + 1) = eax_30
                        *(ebp_6 + 2) = edx_24
                        ebp_6 += 3
                        i_2 = i_5
                        i_5 -= 1
                    while (i_2 != 1)
            
            int16_t* ebp_7 = (*(*(arg1 + 0xe8) + 8))(i_9 + var_20_1 - 1, ebx_1)
            int32_t eax_39 = (*(*(arg1 + 0xe8) + 0x1c))() - 3
            
            if (i_8 s> 0)
                int32_t i_7 = i_8
                int32_t i_3
                
                do
                    *ebp_7 = 0
                    ebp_7[1].b = 0
                    ebp_7 = ebp_7 + 3 + eax_39
                    i_3 = i_7
                    i_7 -= 1
                while (i_3 != 1)
            
            ebp_1 = *(arg1 + 0x130)
            var_10_1 += 0x28
            var_20_1 += i_10
            int32_t edx_32
            edx_32:result = muls.dp.d(0x66666667, *(arg1 + 0x134) - ebp_1)
            int32_t edx_33 = edx_32 s>> 4
            int32_t ebx_4 = var_18_1 + 1
            var_18_1 = ebx_4
            
            if (ebx_4 s>= (edx_33 u>> 0x1f) + edx_33)
                break
            
            ecx_4 = var_18_1

return result
