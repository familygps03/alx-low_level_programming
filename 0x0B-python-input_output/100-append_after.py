#!/usr/bin/python3
"""Module containing the function append_after"""


def append_after(filename="", search_string="", new_string=""):
    """Inserts a line of text into a file after each line containing a specific string.

    Args:
        filename (str, optional): The name of the file. Defaults to "".
        search_string (str, optional): The string to search for. Defaults to "".
        new_string (str, optional): The string to append. Defaults to "".
    """
    with open(filename, "r") as file:
        lines = file.readlines()

    with open(filename, "w") as file_out:
        output = ""
        for line in lines:
            output += line
            if search_string in line:
                output += new_string
        file_out.write(output)
