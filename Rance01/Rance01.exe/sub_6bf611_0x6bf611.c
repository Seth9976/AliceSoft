// 函数: sub_6bf611
// 地址: 0x6bf611
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (sub_6c1d00(__fileno(arg1)) != 0)
    int32_t eax_2
    
    if (arg1 == 0x78c210)
        eax_2 = 0
    label_6bf64b:
        data_796eb4 += 1
        
        if ((arg1[3] & 0x10c) == 0)
            int32_t edi
            int32_t var_10_1 = edi
            int32_t eax_3
            
            if (*((eax_2 << 2) + &data_797aa8) == 0)
                eax_3 = sub_6b8223(0x1000)
                *((eax_2 << 2) + &data_797aa8) = eax_3
            
            if (*((eax_2 << 2) + &data_797aa8) != 0 || eax_3 != 0)
                int32_t edi_2 = *((eax_2 << 2) + &data_797aa8)
                arg1[2] = edi_2
                *arg1 = edi_2
                arg1[6] = 0x1000
                arg1[1] = 0x1000
            else
                arg1[2] = &arg1[5]
                *arg1 = &arg1[5]
                arg1[6] = 2
                arg1[1] = 2
            
            arg1[3] |= 0x1102
            return 1
    else if (arg1 == 0x78c230)
        eax_2 = 1
        goto label_6bf64b

return 0
