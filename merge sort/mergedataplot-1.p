set autoscale                        # scale axes automatically
      unset log                              # remove any log-scaling
      unset label                            # remove any previous labels
      set xtic auto                          # set xtics automatically
      set ytic auto                          # set ytics automatically
	  set tics font "Helvetica,10"
      set title "Analysis Of Algorithms"
      set xlabel "Number of Hidden Layers"
      set ylabel "Accucarcy (%)"
      #set key 0.01,100
      #set label "Yield Point" at 0.003,260
      #set arrow from 0.0028,250 to 0.003,280
      #set xr [5:25]
      #set yr [40:100]
      plot  "mergedata.txt" using 1:2 title 'Merge Sort(Worst Case)' with linespoints, \
            "mergedata.txt" using 1:3 title 'Merge Sort(Best Case)'  with linespoints,\
            "mergedata.txt" using 1:4 title 'Merge Sort(Average Case)'  with linespoints