package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strconv"
	"strings"
)

func abs(a int) int {
	if a < 0 {
		return -a
	}
	return a
}

func main() {
	type Pos struct {
		I int
		J int
	}
	type WordDist struct {
		Distance int
		Word     string
	}

	keyboard := []string{
		"qwertyuiop",
		"asdfghjkl",
		"zxcvbnm",
	}

	var letters [26]Pos
	for i := 0; i < len(keyboard); i++ {
		for j := 0; j < len(keyboard[i]); j++ {
			letters[keyboard[i][j]-'a'] = Pos{I: i, J: j}
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
				p1 := letters[w[j]-'a']
				p2 := letters[word[j]-'a']
				dist := abs(p1.I-p2.I) + abs(p1.J-p2.J)
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
			fmt.Println(scList[j].Word + " " + strconv.Itoa(scList[j].Distance))
		}
	}
}
