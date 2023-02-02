#include <cstdlib>
#include <string.h>

class N {

	public:
		N(int nb) { this->nb = nb; }
		~N(void) {}

		void setAnnotation(char *s) { memcpy(this + 4, s, strlen(s)); }

		int nb;
};

int main(int argc, char **argv)
{
	if (argc < 2)
		return (EXIT_FAILURE);

	N*	obj = new N(5);
	N*	obj2 = new N(6);
	obj->setAnnotation(argv[1]);
	**(obj2)(obj);
	return (EXIT_SUCCESS);
}
