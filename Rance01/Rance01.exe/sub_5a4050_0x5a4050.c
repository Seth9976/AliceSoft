// 函数: sub_5a4050
// 地址: 0x5a4050
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char var_84[0x80]
char* var_4 = data_78c474 ^ &var_84
void* esi = arg1
char* eax_1

if (arg2 == 0)
    *(esi + 0x70) |= 0x20000
else
    eax_1 = "1.5.13"
    
    do
        arg1.b = *(arg2 - "1.5.13" + eax_1)
        
        if (arg1.b != *eax_1)
            *(esi + 0x70) |= 0x20000
        
        arg1.b = *eax_1
        eax_1 = &eax_1[1]
    while (arg1.b != 0)

if ((*(esi + 0x70) & 0x20000) != 0)
    void* edx
    
    if (arg2 == 0)
    label_5a40d1:
        int32_t i = 0
        
        if ((*"Application built with libpng-")[0] != 0)
            while (i u< 0x7f)
                arg1.b = (*"Application built with libpng-")[i]
                var_84[i] = arg1.b
                i += 1
                
                if ((*"Application built with libpng-")[i] == 0)
                    break
        
        var_84[i] = 0
        
        if (i u< 0x80)
            if (arg2 != 0 && *arg2 != 0)
                void* ecx_1 = arg2 - i
                
                while (i u< 0x7f)
                    edx.b = *(ecx_1 + i)
                    var_84[i] = edx.b
                    i += 1
                    
                    if (*(ecx_1 + i) == 0)
                        break
            
            var_84[i] = 0
            
            if (i u< 0x80)
                if ((*" but running with ")[0] != 0)
                    char* ecx_2 = " but running with " - i
                    
                    while (i u< 0x7f)
                        edx.b = ecx_2[i]
                        var_84[i] = edx.b
                        i += 1
                        
                        if (ecx_2[i] == 0)
                            break
                
                var_84[i] = 0
                
                if (i u< 0x80)
                    if ((*"1.5.13")[0] != 0)
                        char* ecx_3 = "1.5.13" - i
                        
                        while (i u< 0x7f)
                            edx.b = ecx_3[i]
                            var_84[i] = edx.b
                            i += 1
                            
                            if (ecx_3[i] == 0)
                                break
                    
                    var_84[i] = 0
        
        sub_5a5de0(&var_84, esi)
        sub_6b4885(var_4 ^ &var_84)
        return 0
    
    eax_1.b = *arg2
    
    if (eax_1.b != (*"1.5.13")[0])
        goto label_5a40d1
    
    if (eax_1.b == 0x31)
        edx.b = arg2[2]
    
    if (eax_1.b == 0x31 && edx.b != (*"5.13")[0])
        goto label_5a40d1
    
    if (eax_1.b == 0x30 && arg2[2] s< 0x39)
        goto label_5a40d1

sub_6b4885(var_4 ^ &var_84)
return 1
