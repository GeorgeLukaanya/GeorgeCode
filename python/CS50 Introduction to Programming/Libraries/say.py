#uses the cowsay package
import sys, cowsay

if len(sys.argv) == 2:
    cowsay.cow(f"hello, {sys.argv[1]}")
    cowsay.trex(f"hello, {sys.argv[1]}")
