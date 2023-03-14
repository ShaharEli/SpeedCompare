import time

import time

MAX = 100000000


def main():
    points = [j for j in range(0, MAX, MAX // 10)]
    for i in range(MAX):
        if i in points:
            print("{}%".format(points.index(i) * 10))


if __name__ == "__main__":
    print("Starting python test...")
    start_time = time.time()
    main()
    print("--- done in: {} seconds ---".format((time.time() - start_time)))
