// 函数: sub_59db20
// 地址: 0x59db20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char var_404
int32_t eax_1 = data_78c474 ^ &var_404
void* result

if (sub_59d9c0(arg1).b == 0)
    result.b = 0
else
    char* ecx = *(arg1 + 0x10)
    result.b = *ecx
    char var_403
    
    if ((result.b u>= 0x61 && result.b u<= 0x7a) || (result.b u>= 0x41 && result.b u<= 0x5a)
            || result.b == 0x5f)
        void* i = &ecx[1]
        var_404 = result.b
        char* edx = &var_403
        *(arg1 + 0x10) = i
        
        while (i u< *(arg1 + 0x14))
            result.b = *i
            
            if ((result.b u< 0x61 || result.b u> 0x7a) && (result.b u< 0x41 || result.b u> 0x5a)
                    && (result.b u< 0x30 || result.b u> 0x39) && result.b != 0x5f)
                break
            
            i += 1
            *edx = result.b
            edx = &edx[1]
            *(arg1 + 0x10) = i
        
        char* eax_2 = &var_404
        *edx = 0
        
        do
            i.b = *eax_2
            eax_2 = &eax_2[1]
        while (i.b != 0)
        
        sub_401270(arg2, eax_2 - &var_403, &var_404)
        result.b = 1
    else if (arg3 == 0 || sx.d(result.b) - 0x2c u> 0x51)
    label_59dc01:
        
        if ((result.b u< 0x30 || result.b u> 0x39) && result.b != 0x2d)
            sub_401140(ecx.b, 0x72d903, arg2)
            *(arg1 + 0x18) = 1
            result.b = 0
        else
            var_404 = result.b
            void* i_1 = &ecx[1]
            char* edx_5 = &var_403
            *(arg1 + 0x10) = i_1
            
            while (i_1 u< *(arg1 + 0x14))
                ecx.b = *i_1
                
                if (ecx.b u< 0x30)
                    break
                
                if (ecx.b u> 0x39)
                    break
                
                i_1 += 1
                *edx_5 = ecx.b
                edx_5 = &edx_5[1]
                *(arg1 + 0x10) = i_1
            
            char* eax_4 = &var_404
            *edx_5 = 0
            
            do
                ecx.b = *eax_4
                eax_4 = &eax_4[1]
            while (ecx.b != 0)
            
            sub_401270(arg2, eax_4 - &var_403, &var_404)
            result.b = 1
    else
        switch (result.b)
            case 0x2c, 0x2d, 0x3d, 0x5b, 0x5d, 0x7b, 0x7d
                var_404 = result.b
                *(arg1 + 0x10) = &ecx[1]
                var_403 = 0
                sub_401140((&ecx[1]).b, &var_404, arg2)
                result.b = 1
            case 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 
                    0x3b, 0x3c, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 
                    0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 
                    0x56, 0x57, 0x58, 0x59, 0x5a, 0x5c, 0x5e, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 
                    0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 
                    0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7c
                goto label_59dc01

sub_6b4885(eax_1 ^ &var_404)
return result
