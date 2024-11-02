package main

import "fmt"

func main() {
	var quadkey string
	fmt.Scanf("%s", &quadkey)
	x, y := 0, 0
	for i := 0; i < len(quadkey); i++ {
		x += x
		y += y
		if quadkey[i] == '1' {
			x++
		} else if quadkey[i] == '2' {
			y++
		} else if quadkey[i] == '3' {
			x++
			y++
		}
	}
	fmt.Printf("%d %d %d\n", len(quadkey), x, y)
}
