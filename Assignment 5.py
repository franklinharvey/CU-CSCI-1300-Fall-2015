#Author: Franklin Harvey
#Checks unknown DNA sample to determine if it is from a human or mouse
#CSCI 1300
#Assignment 5
#TA: Amber

def countCodon(strings, substrings):
    x = strings.count(substrings)
    return(x)

def compareDNA(DNA1, DNA2):
    hd = 0
    ss = 0
    l = len(DNA1)
    for x in range(0,l):
        if DNA1[x] != DNA2[x]:
            hd = hd + 1
    return(float(float(l - hd) / l))


def main():
    print(compareDNA("abcabcabc", "decabeaee"))

if __name__ == "__main__":
    main()
