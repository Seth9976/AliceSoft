// 函数: sub_66ecd0
// 地址: 0x66ecd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = arg1[5]
int32_t i = 0
int32_t edi = arg1[4]
char* edx

if (esi u< 0x10)
    edx = arg1
else
    edx = *arg1

char* edx_1

if (*edx != 0x2b)
    if (esi u< 0x10)
        edx_1 = arg1
    else
        edx_1 = *arg1

if (*edx == 0x2b || *edx_1 == 0x2d)
    i = 1

for (; i s< edi; i += 1)
    char* edx_2
    
    if (esi u< 0x10)
        edx_2 = arg1
    else
        edx_2 = *arg1
    
    if (edx_2[i] s< 0x30)
        break
    
    int32_t* edx_3
    
    if (esi u< 0x10)
        edx_3 = arg1
    else
        edx_3 = *arg1
    
    if (*(edx_3 + i) s> 0x39)
        break

i.b = edi == i
return i
