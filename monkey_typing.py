import random
import time

CHARS = "abcdefjhijklmnopqrstuvwxyz"
GOAL = 'match'


def typing():
    charaters_count = len(CHARS)
    count = 0
    while True:
        count += 1
        i = 0
        word = ''

        while i < len(GOAL):
            i += 1
            charater_number = random.randint(1, charaters_count) - 1
            word += CHARS[charater_number]

        if word == GOAL:
            break

    print "GOT MATCHED! When %s words generated." % count


def timer(func):
    start_time = time.time()
    func()
    print time.time() - start_time


if __name__ == '__main__':
    timer(typing)
