def identify_date_format(date_str):
    day, month, year = map(int, date_str.split('/'))
    if day > 12:
        return "DD/MM/YYYY"
    elif month > 12:
        return "MM/DD/YYYY"
    else:
        return "BOTH"

t = int(input())


for i in range(t):
    # input the date string
    date_str = input()
    
    # identify the date format
    date_format = identify_date_format(date_str)
    
    # print the result
    print(date_format)
