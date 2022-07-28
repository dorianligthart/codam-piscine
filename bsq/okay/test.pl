#!/usr/bin/perl
use warnings;
use strict;

die "program x y density" unless (scalar(@ARGV) == 3);
my ($x, $y, $density) = @ARGV;
print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) 
{
	for (my $j = 0; $j < $x; $j++) {
		if (int(rand($y) * 2) < $density) 
		{
			print "o";
		}
		else 
		{
			print ".";
		}
	}
print "\n";
}

# • Definition of a valid map :
# 	◦ All lines must have the same length. (int x)
# 	◦ There’s at least one line of at least one box. (int y)
# 	◦ At each end of line, there’s a line break. 
# 	◦ The characters on the map can only be those introduced in the first line.
# 	◦ The map is invalid if a character is missing from the first line, or if two characters (of empty, full and obstacle) are identical.
# 	◦ The characters can be any printable character, even numbers.
# 	◦ In case of an invalid map, your program should display map error on the error
# 	  output followed by a line break. Your program will then move on to the next map.




o..o...ooo......o.....o..o.
......o.....o............o.
.o.....o.....o.o..........o
o...o....oo.........oo....o
...ooo..o.....o..oo.....o..
o.o...o.......oXXXXo......o
....oo...oo....XXXX....o...
o............ooXXXX.....o..
...............XXXX........