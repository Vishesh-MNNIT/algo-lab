   set autoscale                        # scale axes automatically
      unset log                              # remove any log-scaling
      unset label                            # remove any previous labels
      set xtic auto                          # set xtics automatically
      set ytic auto                          # set ytics automatically
	  set tics font "Helvetica,10"
      set title "Bubble"
      set xlabel "A>rray size"
      set ylabel "Time "
      #set key 0.01,100
      #set label "Yield Point" at 0.003,260
      #set arrow from 0.0028,250 to 0.003,280
      set xr [0:125000]
      set yr [0:50]
      plot  "bubblesort.txt" using 1:2 title 'bsort' with linespoints
