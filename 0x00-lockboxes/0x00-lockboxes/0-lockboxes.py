#!/usr/bin/python3
"""determines if all the boxes can be opened"""


def canUnlockAll(boxes):
    """boxes is a list of lists
    A key with the same number as a box opens that box"""
    if not boxes:
        return False

    len_box = len(boxes)
    box_open = [0]
    for key in box_open:
        for box in boxes[key]:
            if box not in box_open and box < len_box:
                box_open.append(box)

    if len(box_open) == len_box:
        return True

    return False
