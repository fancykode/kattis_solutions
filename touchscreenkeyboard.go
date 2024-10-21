package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"sort"
	"strconv"
	"strings"
)

func main() {

	type WordDist struct {
		Distance int
		Word     string
	}

	keyboard := []string{
		"qwertyuiop",
		"asdfghjkl",
		"zxcvbnm",
	}

	letters := map[byte][]int{}
	for i := 0; i < len(keyboard); i++ {
		for j := 0; j < len(keyboard[i]); j++ {
			letters[keyboard[i][j]] = []int{i, j}
		}
	}

	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	scanner.Text()

	for scanner.Scan() {
		lineParts := strings.Split(scanner.Text(), " ")
		word := lineParts[0]
		l, _ := strconv.Atoi(lineParts[1])
		scList := []WordDist{}
		for i := 0; i < l; i++ {
			scanner.Scan()
			w := scanner.Text()
			sumDist := 0
			for j := 0; j < len(w); j++ {
				p1 := letters[w[j]]
				p2 := letters[word[j]]
				dist := int(math.Abs(float64((p1[0] - p2[0]))) + math.Abs(float64(p1[1]-p2[1])))
				sumDist += dist
			}
			scList = append(scList, WordDist{Distance: sumDist, Word: w})
		}
		sort.Slice(scList, func(i, j int) bool {
			if scList[i].Distance != scList[j].Distance {
				return scList[i].Distance < scList[j].Distance
			}
			return scList[i].Word < scList[j].Word
		})
		for j := 0; j < len(scList); j++ {
			fmt.Printf("%s %d\n", scList[j].Word, scList[j].Distance)
		}
	}
}
