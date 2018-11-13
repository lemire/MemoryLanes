
load "linespointsstyle.gnuplot"


set style line 81 lt 0  # dashed
set style line 81 lt rgb "#808080"  # grey
set grid back linestyle 81
set term pngcairo fontscale 1.5
set xlabel "number of memory lanes"
set ylabel "array traversal time (s)"


set key top left


set out "mlp.png"

set xrange [1:99]
!  paste iphone_Xs_max_ios121_victor_stewart.txt skylake_nohugepage.txt > data.txt

iphonemax =  `cat iphone_Xs_max_ios121_victor_stewart.txt|head -n 1|awk '{print $2}' `
intelmax =  `cat skylake_nohugepage.txt|head -n 1|awk '{print $2}' `
intelhugemax =  `cat skylake_hugepage.txt|head -n 1|awk '{print $2}' `
ipad2017 =  `cat ipad2017.txt|head -n 1|awk '{print $2}' `
ipad2018 =  `cat ipad2018.txt|head -n 1|awk '{print $2}' `

set ylabel "array traversal time speedup (1 lane = 1)"

plot  "ipad2018.txt" u 1:(ipad2018/$2) title "Apple A12x (16 kB pages)" smooth bezier with lines   ls 7, \
   "iphone_Xs_max_ios121_victor_stewart.txt"  u 1:(iphonemax/$2) title "Apple A12 (16 kB pages)" smooth bezier with lines  ls 5,\
   "skylake_hugepage.txt"  u 1:(intelhugemax/$2) title "Intel Skylake (2MB pages)" smooth bezier with lines   ls 3, \
 "skylake_nohugepage.txt" u 1:(intelmax/$2) title "Intel Skylake (4kB pages)" smooth bezier with lines   ls 2



set ylabel "array traversal time (s)"


set out "mlp_absolute.png"

set logscale y

plot "ipad2018.txt" u 1:2 title "Apple A12x (16 kB pages)" smooth bezier with lines   ls 7, \
  "iphone_Xs_max_ios121_victor_stewart.txt"  u 1:2 title "Apple A12 (16 kB pages)" smooth bezier with lines  ls 5,\
 "skylake_hugepage.txt"  u 1:2 title "Intel Skylake (2MB pages)" smooth bezier with lines   ls 3, \
 "skylake_nohugepage.txt" u 1:2 title "Intel Skylake (4kB pages)" smooth bezier with lines   ls 2
