package main

import "fmt"

func isSubstring(subString string, mainString string) bool{
	n:= len(mainString)
	m:= len(subString)

	for i:=0; i<n; i++{
		if mainString[i]!=subString[0] {
			continue
		}
		k:=i
		for j:=0; j<m; j++{
			if(subString[j]!=mainString[k]){
				break
			}
			k++
			if j==m-1{
				return true
			}
			if k>=n {
				return false
			}
		}
	}
	return false
}
func main(){
	mainString := "Hello World" // len -> n
	subString := "Hello World" // len -> m (m==n)

	fmt.Println(isSubstring(subString, mainString))
	
}

/*

table blog
	id - int (Primary key)
	user_id - int
	contents - string
	title - string
	org_id - int
	3rd_party_id - int

table commets
	id - int
	blog_id - int (F key)
	comment - string



*/