#!/bin/bash

# Needs libjbig85.a -> available from jbigkit

make clean && make CACHESIZE=100 && sudo cp optimized/rastertoqpdl /usr/lib/cups/filter && sudo cp optimized/pstoqpdl /usr/lib/cups/filter && sudo cp ml3310nd.ppd /usr/share/ppd
