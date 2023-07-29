def main():
    c = 1
    
    for i in range(1, 6):
        for j in range(1, i + 1):
            if c % 2 == 0:
                ch = "#"
            else:
                ch = "*"
                
            print(ch, end="")
            c = c + 1
            
        print()

if __name__ == "__main__":
    main()
