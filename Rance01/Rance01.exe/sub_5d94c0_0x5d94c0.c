// 函数: sub_5d94c0
// 地址: 0x5d94c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_28
int32_t eax_1 = data_78c474 ^ &var_28
int32_t ebx
int32_t var_2c = ebx
(*(*arg1 + 0xc))()
char* eax_3 = arg2
int32_t var_c = 0xf
int32_t var_10 = 0
char var_20 = 0
char i

do
    i = *eax_3
    eax_3 = &eax_3[1]
while (i != 0)
sub_401270(&var_20, eax_3 - &eax_3[1], arg2)
bool var_25 = sub_601f00(&arg1[2], &var_20).b == 0

if (var_c u>= 0x10)
    int32_t var_3c_1 = var_20.d
    sub_6b4d5b()

HANDLE hFile

if (var_25 == 0)
    int32_t eax_6 = arg4
    arg1[6] = arg3
    arg1[8] = arg3 + 0x2c
    
    if (eax_6 == 0xffffffff)
        eax_6 = arg1[4] - arg3
    
    arg1[5] = eax_6
    hFile = arg1[2]
    
    if (hFile != 0xffffffff && arg3 + 0x14 u< arg1[4])
        SetFilePointer(hFile, arg3 + 0x14, nullptr, FILE_BEGIN)
        arg1[3] = arg3 + 0x14
        arg1[0xe] = arg1[6] + 0x14
        hFile = arg1[2]
        uint32_t numberOfBytesRead
        
        if (hFile != 0xffffffff && arg1[3] + 0x12 u<= arg1[4]
                && ReadFile(hFile, &arg1[9], 0x12, &numberOfBytesRead, nullptr) != 0
                && numberOfBytesRead == 0x12)
            arg1[3] += 0x12
            arg1[0xe] += 0x12
            hFile = arg1[2]
            int32_t lDistanceToMove = arg1[6] + 0x28
            
            if (hFile != 0xffffffff && lDistanceToMove u< arg1[4])
                SetFilePointer(hFile, lDistanceToMove, nullptr, FILE_BEGIN)
                arg1[3] = lDistanceToMove
                arg1[0xe] = arg1[6] + 0x28
                
                if (sub_6021f0(&arg1[2], 4, &arg1[7]).b != 0)
                    arg1[0xe] += 4
                    
                    if (sub_6026c0(arg1[8], &arg1[2]).b != 0)
                        arg1[0xe] = arg1[8]
                        hFile.b = 1
                        sub_6b4885(eax_1 ^ &var_28)
                        return hFile

hFile.b = 0
sub_6b4885(eax_1 ^ &var_28)
return hFile
