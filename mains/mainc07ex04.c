#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int main(void)
{
	char *nbr = "     -+--42Alk56wz";
	char *base_to =	"chipo";
	char *base_from = "0123456789";
	printf(" answer -hpi? %s ", ft_convert_base(nbr, base_from, base_to));
	printf("\n");

	char *nbr1 = "     -+--42Alk56wz";
	char *base_to1 =	"0123456789";
	char *base_from1 = "0123456789";

	printf("answer -42 ? %s ", ft_convert_base(nbr1, base_from1, base_to1));

	printf("\n");
	char *nbr2 = "     -+-hpiAlk56wz";
	char *base_to2 =	"0123456789";
	char *base_from2 = "chipo";

	printf(" answer 42 ? %s ", ft_convert_base(nbr2, base_from2, base_to2));
	printf("\n");
	char *nbr3 = "     -+-fionAlk56wz";
	char *base_to3 =	"0123456789";
	char *base_from3 = "poneyvif";

	printf(" answer 3928 ? %s ", ft_convert_base(nbr3, base_from3, base_to3));

    	char *nbr4 = "    f -+--42Alk56wz";
	char *base_to4 =	"chipo";
	char *base_from4 = "0123456789";
	printf(" answer nothing? %s ", ft_convert_base(nbr4, base_from4, base_to4));
	printf("\n");

	char *nbr5 = "     -+-2453759460-Alk56wz";
	char *base_to5 =	"0123456789";
	char *base_from5 = "0123456789";

	printf("answer 2453759460 ? %s ", ft_convert_base(nbr5, base_from5, base_to5));

	printf("\n");
	char *nbr6 = "     -+-hpiAlk56wz";
	char *base_to6 =	"0123456789";
	char *base_from6 = "chipo";

	printf(" answer 42 ? %s ", ft_convert_base(nbr6, base_from6, base_to6));
	printf("\n");
	char *nbr7 = "     -+-fionAlk56wz";
	char *base_to7 =	"poneyvif";
	char *base_from7 = "poneyvif";

	printf(" answer fion ? %s ", ft_convert_base(nbr7, base_from7, base_to7));

    	char *nbr8 = "     -+--42Alk56wz";
	char *base_to8 =	"chipo";
	char *base_from8 = "0123456789";
	printf(" answer -hpi? %s ", ft_convert_base(nbr8, base_from8, base_to8));
	printf("\n");

	char *nbr10 = "     -+--+42Alk56wz";
	char *base_to10 =	"0123456789abcdef";
	char *base_from10 = "0123456789";

	printf("answer -2a ? %s ", ft_convert_base(nbr10, base_from10, base_to10));

	printf("\n");
	char *nbr12 = "     -+-101010Alk56wz";
	char *base_to12 =	"0123456789";
	char *base_from12 = "01";

	printf(" answer 42 ? %s ", ft_convert_base(nbr12, base_from12, base_to12));
	printf("\n");
	char *nbr13 = "     -+-3978Alk56wz";
	char *base_to13 =	"pooneyvif";
	char *base_from13 = "0123456789";

	printf(" answer 3928 ? %s ", ft_convert_base(nbr13, base_from13, base_to13));

	printf("\n");
}