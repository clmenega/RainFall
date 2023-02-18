#include <cstdlib>
#include <string.h>

class N {
        private: 
                char str[100]; 
		int  nb;


	public:
		N(int nb) { this->nb = nb; }
		operator+(N &param) { return param.nb + this->nb; }
                operator-(N &param) { return this->nb - param.nb; }


		char* setAnnotation(char *s) {return memcpy(this + 4, s, strlen(s)); }

};

int main(int argc, char **argv)
{
	if (argc < 2)
		return (EXIT_FAILURE);

	N*	obj = new N(5);
	N*	obj2 = new N(6);
	obj->setAnnotation(argv[1]);
	**obj2(obj2, obj);
	return (EXIT_SUCCESS);
}
