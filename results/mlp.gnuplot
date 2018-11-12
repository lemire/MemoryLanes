
load "linespointsstyle.gnuplot"


set style line 81 lt 0  # dashed
set style line 81 lt rgb "#808080"  # grey
set grid back linestyle 81
set term pngcairo fontscale 1.5
#set term png fontscale 2
set xlabel "number of memory lanes"
set ylabel "array traversal time (s)"


set key top left


set out "mlp.png"

set xrange [1:50]
!  paste iphone_Xs_max_ios121_victor_stewart.txt skylake_nohugepage.txt > data.txt

iphonemax =  `cat iphone_Xs_max_ios121_victor_stewart.txt|head -n 1|awk '{print $2}' `
intelmax =  `cat skylake_nohugepage.txt|head -n 1|awk '{print $2}' `
ipad2017 =  `cat ipad2017.txt|head -n 1|awk '{print $2}' `

set ylabel "array traversal time speedup (1 lane = 1)"

plot "data.txt"  u 1:(iphonemax/$2) title "Apple A12" with lines  ls 5,\
 "skylake_nohugepage.txt" u 1:(intelmax/$2) title "Intel Skylake (4kB pages)" with lines   ls 2,\
 "ipad2017.txt"u 1:(intelmax/$2) title "Apple A10x" with lines   ls 3

set ylabel "array traversal time (s)"


set out "mlp_absolute.png"


plot "data.txt"  u 1:($2) title "Apple A12" with lines  ls 5,\
 "skylake_nohugepage.txt" u 1:($2) title "Intel Skylake (4kB pages)" with lines   ls 2,\
 "ipad2017.txt"u 1:($2) title "Apple A10x" with lines   ls 3