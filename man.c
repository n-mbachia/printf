.TH man 3 "18 may 2022" "1.0" "_printf man page"
.SH NAME
_printf \- prints formmatted string
.SH SYNOPSIS
int printf(const char *format, ...);
.SH DESCRIPTION
_printf() is a series of functions that can be used to print a formatted string
by using a series of characters, format specificers and flags.
.SS Format of the format string
Format points to a character string that can contain zero or more regular
characters or format specificers starting with '%' character and followed
by a subsequent argument to be passed after format
.SS conversion specificers
Each '%' will be followed by a character to indicate the type of specificer
Here are all the specificers handles by this function:
c  used to specify a single character
s specifies a string of characters
d, i intergers are specified using these characters
b converts an unsigned integer to its binary equivalent
% prints a modulus
.SH SEE ALSO
printf(3), puts(3), scanf(3)
.SH BUGS
No known bugs.
.SH AUTHOR
mbachia ngethe
cantong jr
