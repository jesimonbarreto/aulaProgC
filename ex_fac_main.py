def fat(num):
    if num == 1:
        return 1

    return num * fat(num-1)



if __name__ == "__main__":
    print(fat(5))