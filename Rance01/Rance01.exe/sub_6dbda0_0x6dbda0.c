// 函数: sub_6dbda0
// 地址: 0x6dbda0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* j_1 = arg1
char* j

for (int32_t i = 0; i s< 0x40; i += 8)
    int32_t i_1 = i
    j = j_1
    
    do
        *(arg3 + (i_1 << 1)) = zx.w(*j) - 0x80
        *(arg4 + (i_1 << 1)) = zx.w(j[1]) - 0x80
        *(arg5 + (i_1 << 1)) = zx.w(j[2]) - 0x80
        *(arg6 + (i_1 << 1)) = zx.w(j[3]) - 0x80
        i_1 += 1
        j = &j[4]
    while (&j_1[0x20] s> j)
    
    j_1 = &j_1[arg2]

return j
